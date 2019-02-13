
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ptp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ptp_oper {

Ptp::Ptp()
    :
    nodes(std::make_shared<Ptp::Nodes>())
    , summary(std::make_shared<Ptp::Summary>())
    , interface_configuration_errors(std::make_shared<Ptp::InterfaceConfigurationErrors>())
    , interface_foreign_masters(std::make_shared<Ptp::InterfaceForeignMasters>())
    , interface_interops(std::make_shared<Ptp::InterfaceInterops>())
    , local_clock(std::make_shared<Ptp::LocalClock>())
    , interface_packet_counters(std::make_shared<Ptp::InterfacePacketCounters>())
    , advertised_clock(std::make_shared<Ptp::AdvertisedClock>())
    , interfaces(std::make_shared<Ptp::Interfaces>())
    , dataset(std::make_shared<Ptp::Dataset>())
    , global_configuration_error(std::make_shared<Ptp::GlobalConfigurationError>())
    , grandmaster(std::make_shared<Ptp::Grandmaster>())
    , interface_unicast_peers(std::make_shared<Ptp::InterfaceUnicastPeers>())
    , utc_offset_info(std::make_shared<Ptp::UtcOffsetInfo>())
    , platform(std::make_shared<Ptp::Platform>())
{
    nodes->parent = this;
    summary->parent = this;
    interface_configuration_errors->parent = this;
    interface_foreign_masters->parent = this;
    interface_interops->parent = this;
    local_clock->parent = this;
    interface_packet_counters->parent = this;
    advertised_clock->parent = this;
    interfaces->parent = this;
    dataset->parent = this;
    global_configuration_error->parent = this;
    grandmaster->parent = this;
    interface_unicast_peers->parent = this;
    utc_offset_info->parent = this;
    platform->parent = this;

    yang_name = "ptp"; yang_parent_name = "Cisco-IOS-XR-ptp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ptp::~Ptp()
{
}

bool Ptp::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (interface_configuration_errors !=  nullptr && interface_configuration_errors->has_data())
	|| (interface_foreign_masters !=  nullptr && interface_foreign_masters->has_data())
	|| (interface_interops !=  nullptr && interface_interops->has_data())
	|| (local_clock !=  nullptr && local_clock->has_data())
	|| (interface_packet_counters !=  nullptr && interface_packet_counters->has_data())
	|| (advertised_clock !=  nullptr && advertised_clock->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (dataset !=  nullptr && dataset->has_data())
	|| (global_configuration_error !=  nullptr && global_configuration_error->has_data())
	|| (grandmaster !=  nullptr && grandmaster->has_data())
	|| (interface_unicast_peers !=  nullptr && interface_unicast_peers->has_data())
	|| (utc_offset_info !=  nullptr && utc_offset_info->has_data())
	|| (platform !=  nullptr && platform->has_data());
}

bool Ptp::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (interface_configuration_errors !=  nullptr && interface_configuration_errors->has_operation())
	|| (interface_foreign_masters !=  nullptr && interface_foreign_masters->has_operation())
	|| (interface_interops !=  nullptr && interface_interops->has_operation())
	|| (local_clock !=  nullptr && local_clock->has_operation())
	|| (interface_packet_counters !=  nullptr && interface_packet_counters->has_operation())
	|| (advertised_clock !=  nullptr && advertised_clock->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (dataset !=  nullptr && dataset->has_operation())
	|| (global_configuration_error !=  nullptr && global_configuration_error->has_operation())
	|| (grandmaster !=  nullptr && grandmaster->has_operation())
	|| (interface_unicast_peers !=  nullptr && interface_unicast_peers->has_operation())
	|| (utc_offset_info !=  nullptr && utc_offset_info->has_operation())
	|| (platform !=  nullptr && platform->has_operation());
}

std::string Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ptp::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ptp::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interface-configuration-errors")
    {
        if(interface_configuration_errors == nullptr)
        {
            interface_configuration_errors = std::make_shared<Ptp::InterfaceConfigurationErrors>();
        }
        return interface_configuration_errors;
    }

    if(child_yang_name == "interface-foreign-masters")
    {
        if(interface_foreign_masters == nullptr)
        {
            interface_foreign_masters = std::make_shared<Ptp::InterfaceForeignMasters>();
        }
        return interface_foreign_masters;
    }

    if(child_yang_name == "interface-interops")
    {
        if(interface_interops == nullptr)
        {
            interface_interops = std::make_shared<Ptp::InterfaceInterops>();
        }
        return interface_interops;
    }

    if(child_yang_name == "local-clock")
    {
        if(local_clock == nullptr)
        {
            local_clock = std::make_shared<Ptp::LocalClock>();
        }
        return local_clock;
    }

    if(child_yang_name == "interface-packet-counters")
    {
        if(interface_packet_counters == nullptr)
        {
            interface_packet_counters = std::make_shared<Ptp::InterfacePacketCounters>();
        }
        return interface_packet_counters;
    }

    if(child_yang_name == "advertised-clock")
    {
        if(advertised_clock == nullptr)
        {
            advertised_clock = std::make_shared<Ptp::AdvertisedClock>();
        }
        return advertised_clock;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ptp::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "dataset")
    {
        if(dataset == nullptr)
        {
            dataset = std::make_shared<Ptp::Dataset>();
        }
        return dataset;
    }

    if(child_yang_name == "global-configuration-error")
    {
        if(global_configuration_error == nullptr)
        {
            global_configuration_error = std::make_shared<Ptp::GlobalConfigurationError>();
        }
        return global_configuration_error;
    }

    if(child_yang_name == "grandmaster")
    {
        if(grandmaster == nullptr)
        {
            grandmaster = std::make_shared<Ptp::Grandmaster>();
        }
        return grandmaster;
    }

    if(child_yang_name == "interface-unicast-peers")
    {
        if(interface_unicast_peers == nullptr)
        {
            interface_unicast_peers = std::make_shared<Ptp::InterfaceUnicastPeers>();
        }
        return interface_unicast_peers;
    }

    if(child_yang_name == "utc-offset-info")
    {
        if(utc_offset_info == nullptr)
        {
            utc_offset_info = std::make_shared<Ptp::UtcOffsetInfo>();
        }
        return utc_offset_info;
    }

    if(child_yang_name == "Cisco-IOS-XR-ptp-pd-oper:platform")
    {
        if(platform == nullptr)
        {
            platform = std::make_shared<Ptp::Platform>();
        }
        return platform;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(interface_configuration_errors != nullptr)
    {
        _children["interface-configuration-errors"] = interface_configuration_errors;
    }

    if(interface_foreign_masters != nullptr)
    {
        _children["interface-foreign-masters"] = interface_foreign_masters;
    }

    if(interface_interops != nullptr)
    {
        _children["interface-interops"] = interface_interops;
    }

    if(local_clock != nullptr)
    {
        _children["local-clock"] = local_clock;
    }

    if(interface_packet_counters != nullptr)
    {
        _children["interface-packet-counters"] = interface_packet_counters;
    }

    if(advertised_clock != nullptr)
    {
        _children["advertised-clock"] = advertised_clock;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(dataset != nullptr)
    {
        _children["dataset"] = dataset;
    }

    if(global_configuration_error != nullptr)
    {
        _children["global-configuration-error"] = global_configuration_error;
    }

    if(grandmaster != nullptr)
    {
        _children["grandmaster"] = grandmaster;
    }

    if(interface_unicast_peers != nullptr)
    {
        _children["interface-unicast-peers"] = interface_unicast_peers;
    }

    if(utc_offset_info != nullptr)
    {
        _children["utc-offset-info"] = utc_offset_info;
    }

    if(platform != nullptr)
    {
        _children["Cisco-IOS-XR-ptp-pd-oper:platform"] = platform;
    }

    return _children;
}

void Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ptp::clone_ptr() const
{
    return std::make_shared<Ptp>();
}

std::string Ptp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ptp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ptp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ptp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "summary" || name == "interface-configuration-errors" || name == "interface-foreign-masters" || name == "interface-interops" || name == "local-clock" || name == "interface-packet-counters" || name == "advertised-clock" || name == "interfaces" || name == "dataset" || name == "global-configuration-error" || name == "grandmaster" || name == "interface-unicast-peers" || name == "utc-offset-info" || name == "platform")
        return true;
    return false;
}

Ptp::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Nodes::~Nodes()
{
}

bool Ptp::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ptp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    node_interface_foreign_masters(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters>())
    , summary(std::make_shared<Ptp::Nodes::Node::Summary>())
    , node_interfaces(std::make_shared<Ptp::Nodes::Node::NodeInterfaces>())
    , node_interface_unicast_peers(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers>())
    , packet_counters(std::make_shared<Ptp::Nodes::Node::PacketCounters>())
{
    node_interface_foreign_masters->parent = this;
    summary->parent = this;
    node_interfaces->parent = this;
    node_interface_unicast_peers->parent = this;
    packet_counters->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Nodes::Node::~Node()
{
}

bool Ptp::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (node_interface_foreign_masters !=  nullptr && node_interface_foreign_masters->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (node_interfaces !=  nullptr && node_interfaces->has_data())
	|| (node_interface_unicast_peers !=  nullptr && node_interface_unicast_peers->has_data())
	|| (packet_counters !=  nullptr && packet_counters->has_data());
}

bool Ptp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (node_interface_foreign_masters !=  nullptr && node_interface_foreign_masters->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (node_interfaces !=  nullptr && node_interfaces->has_operation())
	|| (node_interface_unicast_peers !=  nullptr && node_interface_unicast_peers->has_operation())
	|| (packet_counters !=  nullptr && packet_counters->has_operation());
}

std::string Ptp::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-foreign-masters")
    {
        if(node_interface_foreign_masters == nullptr)
        {
            node_interface_foreign_masters = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters>();
        }
        return node_interface_foreign_masters;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ptp::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "node-interfaces")
    {
        if(node_interfaces == nullptr)
        {
            node_interfaces = std::make_shared<Ptp::Nodes::Node::NodeInterfaces>();
        }
        return node_interfaces;
    }

    if(child_yang_name == "node-interface-unicast-peers")
    {
        if(node_interface_unicast_peers == nullptr)
        {
            node_interface_unicast_peers = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers>();
        }
        return node_interface_unicast_peers;
    }

    if(child_yang_name == "packet-counters")
    {
        if(packet_counters == nullptr)
        {
            packet_counters = std::make_shared<Ptp::Nodes::Node::PacketCounters>();
        }
        return packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_interface_foreign_masters != nullptr)
    {
        _children["node-interface-foreign-masters"] = node_interface_foreign_masters;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(node_interfaces != nullptr)
    {
        _children["node-interfaces"] = node_interfaces;
    }

    if(node_interface_unicast_peers != nullptr)
    {
        _children["node-interface-unicast-peers"] = node_interface_unicast_peers;
    }

    if(packet_counters != nullptr)
    {
        _children["packet-counters"] = packet_counters;
    }

    return _children;
}

void Ptp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface-foreign-masters" || name == "summary" || name == "node-interfaces" || name == "node-interface-unicast-peers" || name == "packet-counters" || name == "node-name")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMasters()
    :
    node_interface_foreign_master(this, {"interface_name"})
{

    yang_name = "node-interface-foreign-masters"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::~NodeInterfaceForeignMasters()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_interface_foreign_master.len(); index++)
    {
        if(node_interface_foreign_master[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::has_operation() const
{
    for (std::size_t index=0; index<node_interface_foreign_master.len(); index++)
    {
        if(node_interface_foreign_master[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-foreign-masters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-foreign-master")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster>();
        ent_->parent = this;
        node_interface_foreign_master.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_interface_foreign_master.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface-foreign-master")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::NodeInterfaceForeignMaster()
    :
    interface_name{YType::str, "interface-name"},
    port_number{YType::uint16, "port-number"}
        ,
    foreign_clock(this, {})
{

    yang_name = "node-interface-foreign-master"; yang_parent_name = "node-interface-foreign-masters"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::~NodeInterfaceForeignMaster()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<foreign_clock.len(); index++)
    {
        if(foreign_clock[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::has_operation() const
{
    for (std::size_t index=0; index<foreign_clock.len(); index++)
    {
        if(foreign_clock[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-foreign-master";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-clock")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock>();
        ent_->parent = this;
        foreign_clock.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : foreign_clock.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-clock" || name == "interface-name" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock()
    :
    is_qualified{YType::boolean, "is-qualified"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    communication_model{YType::enumeration, "communication-model"},
    is_known{YType::boolean, "is-known"},
    time_known_for{YType::uint32, "time-known-for"},
    foreign_domain{YType::uint8, "foreign-domain"},
    configured_priority{YType::uint8, "configured-priority"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    delay_asymmetry{YType::int32, "delay-asymmetry"},
    ptsf_loss_announce{YType::boolean, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::boolean, "ptsf-loss-sync"}
        ,
    foreign_clock(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_>())
    , address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address>())
    , announce_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant>())
    , sync_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant>())
    , delay_response_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant>())
{
    foreign_clock->parent = this;
    address->parent = this;
    announce_grant->parent = this;
    sync_grant->parent = this;
    delay_response_grant->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "node-interface-foreign-master"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::~ForeignClock()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::has_data() const
{
    if (is_presence_container) return true;
    return is_qualified.is_set
	|| is_grandmaster.is_set
	|| communication_model.is_set
	|| is_known.is_set
	|| time_known_for.is_set
	|| foreign_domain.is_set
	|| configured_priority.is_set
	|| configured_clock_class.is_set
	|| delay_asymmetry.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| (foreign_clock !=  nullptr && foreign_clock->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_qualified.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(is_known.yfilter)
	|| ydk::is_set(time_known_for.yfilter)
	|| ydk::is_set(foreign_domain.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(delay_asymmetry.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| (foreign_clock !=  nullptr && foreign_clock->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_qualified.is_set || is_set(is_qualified.yfilter)) leaf_name_data.push_back(is_qualified.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (is_known.is_set || is_set(is_known.yfilter)) leaf_name_data.push_back(is_known.get_name_leafdata());
    if (time_known_for.is_set || is_set(time_known_for.yfilter)) leaf_name_data.push_back(time_known_for.get_name_leafdata());
    if (foreign_domain.is_set || is_set(foreign_domain.yfilter)) leaf_name_data.push_back(foreign_domain.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (delay_asymmetry.is_set || is_set(delay_asymmetry.yfilter)) leaf_name_data.push_back(delay_asymmetry.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-clock")
    {
        if(foreign_clock == nullptr)
        {
            foreign_clock = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_>();
        }
        return foreign_clock;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant>();
        }
        return sync_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(foreign_clock != nullptr)
    {
        _children["foreign-clock"] = foreign_clock;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        _children["announce-grant"] = announce_grant;
    }

    if(sync_grant != nullptr)
    {
        _children["sync-grant"] = sync_grant;
    }

    if(delay_response_grant != nullptr)
    {
        _children["delay-response-grant"] = delay_response_grant;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-qualified")
    {
        is_qualified = value;
        is_qualified.value_namespace = name_space;
        is_qualified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-known")
    {
        is_known = value;
        is_known.value_namespace = name_space;
        is_known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-known-for")
    {
        time_known_for = value;
        time_known_for.value_namespace = name_space;
        time_known_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain = value;
        foreign_domain.value_namespace = name_space;
        foreign_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry = value;
        delay_asymmetry.value_namespace = name_space;
        delay_asymmetry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-qualified")
    {
        is_qualified.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "is-known")
    {
        is_known.yfilter = yfilter;
    }
    if(value_path == "time-known-for")
    {
        time_known_for.yfilter = yfilter;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-clock" || name == "address" || name == "announce-grant" || name == "sync-grant" || name == "delay-response-grant" || name == "is-qualified" || name == "is-grandmaster" || name == "communication-model" || name == "is-known" || name == "time-known-for" || name == "foreign-domain" || name == "configured-priority" || name == "configured-clock-class" || name == "delay-asymmetry" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::ForeignClock_()
    :
    clock_id{YType::uint64, "clock-id"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    class_{YType::uint8, "class"},
    accuracy{YType::uint8, "accuracy"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"}
        ,
    utc_offset(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>())
    , receiver(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>())
    , sender(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>())
{
    utc_offset->parent = this;
    receiver->parent = this;
    sender->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::~ForeignClock_()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| class_.is_set
	|| accuracy.is_set
	|| offset_log_variance.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| frequency_traceable.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| (utc_offset !=  nullptr && utc_offset->has_data())
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| (utc_offset !=  nullptr && utc_offset->has_operation())
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>();
        }
        return utc_offset;
    }

    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>();
        }
        return sender;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utc_offset != nullptr)
    {
        _children["utc-offset"] = utc_offset;
    }

    if(receiver != nullptr)
    {
        _children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        _children["sender"] = sender;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utc-offset" || name == "receiver" || name == "sender" || name == "clock-id" || name == "priority1" || name == "priority2" || name == "class" || name == "accuracy" || name == "offset-log-variance" || name == "steps-removed" || name == "time-source" || name == "frequency-traceable" || name == "time-traceable" || name == "timescale" || name == "leap-seconds" || name == "local" || name == "configured-clock-class" || name == "configured-priority")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::~UtcOffset()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_data() const
{
    if (is_presence_container) return true;
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::~Receiver()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::~Sender()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::~Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::AnnounceGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "announce-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::SyncGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "sync-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::~SyncGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::DelayResponseGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::Nodes::Node::Summary::Summary()
    :
    port_state_init_count{YType::uint32, "port-state-init-count"},
    port_state_listening_count{YType::uint32, "port-state-listening-count"},
    port_state_passive_count{YType::uint32, "port-state-passive-count"},
    port_state_pre_master_count{YType::uint32, "port-state-pre-master-count"},
    port_state_master_count{YType::uint32, "port-state-master-count"},
    port_state_slave_count{YType::uint32, "port-state-slave-count"},
    port_state_uncalibrated_count{YType::uint32, "port-state-uncalibrated-count"},
    port_state_faulty_count{YType::uint32, "port-state-faulty-count"},
    total_interfaces{YType::uint32, "total-interfaces"},
    total_interfaces_valid_port_num{YType::uint32, "total-interfaces-valid-port-num"}
{

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::Summary::~Summary()
{
}

bool Ptp::Nodes::Node::Summary::has_data() const
{
    if (is_presence_container) return true;
    return port_state_init_count.is_set
	|| port_state_listening_count.is_set
	|| port_state_passive_count.is_set
	|| port_state_pre_master_count.is_set
	|| port_state_master_count.is_set
	|| port_state_slave_count.is_set
	|| port_state_uncalibrated_count.is_set
	|| port_state_faulty_count.is_set
	|| total_interfaces.is_set
	|| total_interfaces_valid_port_num.is_set;
}

bool Ptp::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state_init_count.yfilter)
	|| ydk::is_set(port_state_listening_count.yfilter)
	|| ydk::is_set(port_state_passive_count.yfilter)
	|| ydk::is_set(port_state_pre_master_count.yfilter)
	|| ydk::is_set(port_state_master_count.yfilter)
	|| ydk::is_set(port_state_slave_count.yfilter)
	|| ydk::is_set(port_state_uncalibrated_count.yfilter)
	|| ydk::is_set(port_state_faulty_count.yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(total_interfaces_valid_port_num.yfilter);
}

std::string Ptp::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state_init_count.is_set || is_set(port_state_init_count.yfilter)) leaf_name_data.push_back(port_state_init_count.get_name_leafdata());
    if (port_state_listening_count.is_set || is_set(port_state_listening_count.yfilter)) leaf_name_data.push_back(port_state_listening_count.get_name_leafdata());
    if (port_state_passive_count.is_set || is_set(port_state_passive_count.yfilter)) leaf_name_data.push_back(port_state_passive_count.get_name_leafdata());
    if (port_state_pre_master_count.is_set || is_set(port_state_pre_master_count.yfilter)) leaf_name_data.push_back(port_state_pre_master_count.get_name_leafdata());
    if (port_state_master_count.is_set || is_set(port_state_master_count.yfilter)) leaf_name_data.push_back(port_state_master_count.get_name_leafdata());
    if (port_state_slave_count.is_set || is_set(port_state_slave_count.yfilter)) leaf_name_data.push_back(port_state_slave_count.get_name_leafdata());
    if (port_state_uncalibrated_count.is_set || is_set(port_state_uncalibrated_count.yfilter)) leaf_name_data.push_back(port_state_uncalibrated_count.get_name_leafdata());
    if (port_state_faulty_count.is_set || is_set(port_state_faulty_count.yfilter)) leaf_name_data.push_back(port_state_faulty_count.get_name_leafdata());
    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (total_interfaces_valid_port_num.is_set || is_set(total_interfaces_valid_port_num.yfilter)) leaf_name_data.push_back(total_interfaces_valid_port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state-init-count")
    {
        port_state_init_count = value;
        port_state_init_count.value_namespace = name_space;
        port_state_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-listening-count")
    {
        port_state_listening_count = value;
        port_state_listening_count.value_namespace = name_space;
        port_state_listening_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-passive-count")
    {
        port_state_passive_count = value;
        port_state_passive_count.value_namespace = name_space;
        port_state_passive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-pre-master-count")
    {
        port_state_pre_master_count = value;
        port_state_pre_master_count.value_namespace = name_space;
        port_state_pre_master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-master-count")
    {
        port_state_master_count = value;
        port_state_master_count.value_namespace = name_space;
        port_state_master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-slave-count")
    {
        port_state_slave_count = value;
        port_state_slave_count.value_namespace = name_space;
        port_state_slave_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-uncalibrated-count")
    {
        port_state_uncalibrated_count = value;
        port_state_uncalibrated_count.value_namespace = name_space;
        port_state_uncalibrated_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-faulty-count")
    {
        port_state_faulty_count = value;
        port_state_faulty_count.value_namespace = name_space;
        port_state_faulty_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces-valid-port-num")
    {
        total_interfaces_valid_port_num = value;
        total_interfaces_valid_port_num.value_namespace = name_space;
        total_interfaces_valid_port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state-init-count")
    {
        port_state_init_count.yfilter = yfilter;
    }
    if(value_path == "port-state-listening-count")
    {
        port_state_listening_count.yfilter = yfilter;
    }
    if(value_path == "port-state-passive-count")
    {
        port_state_passive_count.yfilter = yfilter;
    }
    if(value_path == "port-state-pre-master-count")
    {
        port_state_pre_master_count.yfilter = yfilter;
    }
    if(value_path == "port-state-master-count")
    {
        port_state_master_count.yfilter = yfilter;
    }
    if(value_path == "port-state-slave-count")
    {
        port_state_slave_count.yfilter = yfilter;
    }
    if(value_path == "port-state-uncalibrated-count")
    {
        port_state_uncalibrated_count.yfilter = yfilter;
    }
    if(value_path == "port-state-faulty-count")
    {
        port_state_faulty_count.yfilter = yfilter;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "total-interfaces-valid-port-num")
    {
        total_interfaces_valid_port_num.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state-init-count" || name == "port-state-listening-count" || name == "port-state-passive-count" || name == "port-state-pre-master-count" || name == "port-state-master-count" || name == "port-state-slave-count" || name == "port-state-uncalibrated-count" || name == "port-state-faulty-count" || name == "total-interfaces" || name == "total-interfaces-valid-port-num")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterfaces()
    :
    node_interface(this, {"interface_name"})
{

    yang_name = "node-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::~NodeInterfaces()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_interface.len(); index++)
    {
        if(node_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<node_interface.len(); index++)
    {
        if(node_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface>();
        ent_->parent = this;
        node_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::NodeInterface()
    :
    interface_name{YType::str, "interface-name"},
    port_state{YType::enumeration, "port-state"},
    port_number{YType::uint16, "port-number"},
    line_state{YType::enumeration, "line-state"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv4_address{YType::str, "ipv4-address"},
    two_step{YType::boolean, "two-step"},
    communication_model{YType::enumeration, "communication-model"},
    log_sync_interval{YType::int32, "log-sync-interval"},
    log_announce_interval{YType::int32, "log-announce-interval"},
    announce_timeout{YType::uint32, "announce-timeout"},
    log_min_delay_request_interval{YType::int32, "log-min-delay-request-interval"},
    configured_port_state{YType::enumeration, "configured-port-state"},
    supports_unicast{YType::boolean, "supports-unicast"},
    supports_master{YType::boolean, "supports-master"},
    supports_one_step{YType::boolean, "supports-one-step"},
    supports_two_step{YType::boolean, "supports-two-step"},
    supports_ethernet{YType::boolean, "supports-ethernet"},
    supports_multicast{YType::boolean, "supports-multicast"},
    supports_ipv4{YType::boolean, "supports-ipv4"},
    supports_ipv6{YType::boolean, "supports-ipv6"},
    supports_slave{YType::boolean, "supports-slave"},
    supports_source_ip{YType::boolean, "supports-source-ip"},
    max_sync_rate{YType::uint8, "max-sync-rate"},
    event_cos{YType::uint32, "event-cos"},
    general_cos{YType::uint32, "general-cos"},
    event_dscp{YType::uint32, "event-dscp"},
    general_dscp{YType::uint32, "general-dscp"},
    unicast_peers{YType::uint32, "unicast-peers"},
    local_priority{YType::uint8, "local-priority"},
    signal_fail{YType::boolean, "signal-fail"},
    profile_interop{YType::boolean, "profile-interop"},
    interop_domain{YType::uint8, "interop-domain"},
    interop_profile{YType::enumeration, "interop-profile"}
        ,
    ipv6_address_array(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray>())
    , ipv4_address_array(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray>())
    , mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress>())
    , ingress_conversion(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion>())
    , egress_conversion(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion>())
    , master_table(this, {})
{
    ipv6_address_array->parent = this;
    ipv4_address_array->parent = this;
    mac_address->parent = this;
    ingress_conversion->parent = this;
    egress_conversion->parent = this;

    yang_name = "node-interface"; yang_parent_name = "node-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::~NodeInterface()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<master_table.len(); index++)
    {
        if(master_table[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| port_state.is_set
	|| port_number.is_set
	|| line_state.is_set
	|| encapsulation.is_set
	|| ipv6_address.is_set
	|| ipv4_address.is_set
	|| two_step.is_set
	|| communication_model.is_set
	|| log_sync_interval.is_set
	|| log_announce_interval.is_set
	|| announce_timeout.is_set
	|| log_min_delay_request_interval.is_set
	|| configured_port_state.is_set
	|| supports_unicast.is_set
	|| supports_master.is_set
	|| supports_one_step.is_set
	|| supports_two_step.is_set
	|| supports_ethernet.is_set
	|| supports_multicast.is_set
	|| supports_ipv4.is_set
	|| supports_ipv6.is_set
	|| supports_slave.is_set
	|| supports_source_ip.is_set
	|| max_sync_rate.is_set
	|| event_cos.is_set
	|| general_cos.is_set
	|| event_dscp.is_set
	|| general_dscp.is_set
	|| unicast_peers.is_set
	|| local_priority.is_set
	|| signal_fail.is_set
	|| profile_interop.is_set
	|| interop_domain.is_set
	|| interop_profile.is_set
	|| (ipv6_address_array !=  nullptr && ipv6_address_array->has_data())
	|| (ipv4_address_array !=  nullptr && ipv4_address_array->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_data())
	|| (egress_conversion !=  nullptr && egress_conversion->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::has_operation() const
{
    for (std::size_t index=0; index<master_table.len(); index++)
    {
        if(master_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_step.yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(log_sync_interval.yfilter)
	|| ydk::is_set(log_announce_interval.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(log_min_delay_request_interval.yfilter)
	|| ydk::is_set(configured_port_state.yfilter)
	|| ydk::is_set(supports_unicast.yfilter)
	|| ydk::is_set(supports_master.yfilter)
	|| ydk::is_set(supports_one_step.yfilter)
	|| ydk::is_set(supports_two_step.yfilter)
	|| ydk::is_set(supports_ethernet.yfilter)
	|| ydk::is_set(supports_multicast.yfilter)
	|| ydk::is_set(supports_ipv4.yfilter)
	|| ydk::is_set(supports_ipv6.yfilter)
	|| ydk::is_set(supports_slave.yfilter)
	|| ydk::is_set(supports_source_ip.yfilter)
	|| ydk::is_set(max_sync_rate.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(unicast_peers.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(signal_fail.yfilter)
	|| ydk::is_set(profile_interop.yfilter)
	|| ydk::is_set(interop_domain.yfilter)
	|| ydk::is_set(interop_profile.yfilter)
	|| (ipv6_address_array !=  nullptr && ipv6_address_array->has_operation())
	|| (ipv4_address_array !=  nullptr && ipv4_address_array->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_operation())
	|| (egress_conversion !=  nullptr && egress_conversion->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_step.is_set || is_set(two_step.yfilter)) leaf_name_data.push_back(two_step.get_name_leafdata());
    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (log_sync_interval.is_set || is_set(log_sync_interval.yfilter)) leaf_name_data.push_back(log_sync_interval.get_name_leafdata());
    if (log_announce_interval.is_set || is_set(log_announce_interval.yfilter)) leaf_name_data.push_back(log_announce_interval.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (log_min_delay_request_interval.is_set || is_set(log_min_delay_request_interval.yfilter)) leaf_name_data.push_back(log_min_delay_request_interval.get_name_leafdata());
    if (configured_port_state.is_set || is_set(configured_port_state.yfilter)) leaf_name_data.push_back(configured_port_state.get_name_leafdata());
    if (supports_unicast.is_set || is_set(supports_unicast.yfilter)) leaf_name_data.push_back(supports_unicast.get_name_leafdata());
    if (supports_master.is_set || is_set(supports_master.yfilter)) leaf_name_data.push_back(supports_master.get_name_leafdata());
    if (supports_one_step.is_set || is_set(supports_one_step.yfilter)) leaf_name_data.push_back(supports_one_step.get_name_leafdata());
    if (supports_two_step.is_set || is_set(supports_two_step.yfilter)) leaf_name_data.push_back(supports_two_step.get_name_leafdata());
    if (supports_ethernet.is_set || is_set(supports_ethernet.yfilter)) leaf_name_data.push_back(supports_ethernet.get_name_leafdata());
    if (supports_multicast.is_set || is_set(supports_multicast.yfilter)) leaf_name_data.push_back(supports_multicast.get_name_leafdata());
    if (supports_ipv4.is_set || is_set(supports_ipv4.yfilter)) leaf_name_data.push_back(supports_ipv4.get_name_leafdata());
    if (supports_ipv6.is_set || is_set(supports_ipv6.yfilter)) leaf_name_data.push_back(supports_ipv6.get_name_leafdata());
    if (supports_slave.is_set || is_set(supports_slave.yfilter)) leaf_name_data.push_back(supports_slave.get_name_leafdata());
    if (supports_source_ip.is_set || is_set(supports_source_ip.yfilter)) leaf_name_data.push_back(supports_source_ip.get_name_leafdata());
    if (max_sync_rate.is_set || is_set(max_sync_rate.yfilter)) leaf_name_data.push_back(max_sync_rate.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (unicast_peers.is_set || is_set(unicast_peers.yfilter)) leaf_name_data.push_back(unicast_peers.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());
    if (profile_interop.is_set || is_set(profile_interop.yfilter)) leaf_name_data.push_back(profile_interop.get_name_leafdata());
    if (interop_domain.is_set || is_set(interop_domain.yfilter)) leaf_name_data.push_back(interop_domain.get_name_leafdata());
    if (interop_profile.is_set || is_set(interop_profile.yfilter)) leaf_name_data.push_back(interop_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address-array")
    {
        if(ipv6_address_array == nullptr)
        {
            ipv6_address_array = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray>();
        }
        return ipv6_address_array;
    }

    if(child_yang_name == "ipv4-address-array")
    {
        if(ipv4_address_array == nullptr)
        {
            ipv4_address_array = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray>();
        }
        return ipv4_address_array;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ingress-conversion")
    {
        if(ingress_conversion == nullptr)
        {
            ingress_conversion = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion>();
        }
        return ingress_conversion;
    }

    if(child_yang_name == "egress-conversion")
    {
        if(egress_conversion == nullptr)
        {
            egress_conversion = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion>();
        }
        return egress_conversion;
    }

    if(child_yang_name == "master-table")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable>();
        ent_->parent = this;
        master_table.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_address_array != nullptr)
    {
        _children["ipv6-address-array"] = ipv6_address_array;
    }

    if(ipv4_address_array != nullptr)
    {
        _children["ipv4-address-array"] = ipv4_address_array;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ingress_conversion != nullptr)
    {
        _children["ingress-conversion"] = ingress_conversion;
    }

    if(egress_conversion != nullptr)
    {
        _children["egress-conversion"] = egress_conversion;
    }

    count_ = 0;
    for (auto ent_ : master_table.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-step")
    {
        two_step = value;
        two_step.value_namespace = name_space;
        two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval = value;
        log_sync_interval.value_namespace = name_space;
        log_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval = value;
        log_announce_interval.value_namespace = name_space;
        log_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval = value;
        log_min_delay_request_interval.value_namespace = name_space;
        log_min_delay_request_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state = value;
        configured_port_state.value_namespace = name_space;
        configured_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-unicast")
    {
        supports_unicast = value;
        supports_unicast.value_namespace = name_space;
        supports_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-master")
    {
        supports_master = value;
        supports_master.value_namespace = name_space;
        supports_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step = value;
        supports_one_step.value_namespace = name_space;
        supports_one_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step = value;
        supports_two_step.value_namespace = name_space;
        supports_two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet = value;
        supports_ethernet.value_namespace = name_space;
        supports_ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast = value;
        supports_multicast.value_namespace = name_space;
        supports_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ipv4")
    {
        supports_ipv4 = value;
        supports_ipv4.value_namespace = name_space;
        supports_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6 = value;
        supports_ipv6.value_namespace = name_space;
        supports_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-slave")
    {
        supports_slave = value;
        supports_slave.value_namespace = name_space;
        supports_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip = value;
        supports_source_ip.value_namespace = name_space;
        supports_source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate = value;
        max_sync_rate.value_namespace = name_space;
        max_sync_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers = value;
        unicast_peers.value_namespace = name_space;
        unicast_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-interop")
    {
        profile_interop = value;
        profile_interop.value_namespace = name_space;
        profile_interop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop-domain")
    {
        interop_domain = value;
        interop_domain.value_namespace = name_space;
        interop_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop-profile")
    {
        interop_profile = value;
        interop_profile.value_namespace = name_space;
        interop_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-step")
    {
        two_step.yfilter = yfilter;
    }
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval.yfilter = yfilter;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval.yfilter = yfilter;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state.yfilter = yfilter;
    }
    if(value_path == "supports-unicast")
    {
        supports_unicast.yfilter = yfilter;
    }
    if(value_path == "supports-master")
    {
        supports_master.yfilter = yfilter;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step.yfilter = yfilter;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step.yfilter = yfilter;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet.yfilter = yfilter;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast.yfilter = yfilter;
    }
    if(value_path == "supports-ipv4")
    {
        supports_ipv4.yfilter = yfilter;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6.yfilter = yfilter;
    }
    if(value_path == "supports-slave")
    {
        supports_slave.yfilter = yfilter;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip.yfilter = yfilter;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
    if(value_path == "profile-interop")
    {
        profile_interop.yfilter = yfilter;
    }
    if(value_path == "interop-domain")
    {
        interop_domain.yfilter = yfilter;
    }
    if(value_path == "interop-profile")
    {
        interop_profile.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address-array" || name == "ipv4-address-array" || name == "mac-address" || name == "ingress-conversion" || name == "egress-conversion" || name == "master-table" || name == "interface-name" || name == "port-state" || name == "port-number" || name == "line-state" || name == "encapsulation" || name == "ipv6-address" || name == "ipv4-address" || name == "two-step" || name == "communication-model" || name == "log-sync-interval" || name == "log-announce-interval" || name == "announce-timeout" || name == "log-min-delay-request-interval" || name == "configured-port-state" || name == "supports-unicast" || name == "supports-master" || name == "supports-one-step" || name == "supports-two-step" || name == "supports-ethernet" || name == "supports-multicast" || name == "supports-ipv4" || name == "supports-ipv6" || name == "supports-slave" || name == "supports-source-ip" || name == "max-sync-rate" || name == "event-cos" || name == "general-cos" || name == "event-dscp" || name == "general-dscp" || name == "unicast-peers" || name == "local-priority" || name == "signal-fail" || name == "profile-interop" || name == "interop-domain" || name == "interop-profile")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::Ipv6AddressArray()
    :
    addr{YType::str, "addr"}
{

    yang_name = "ipv6-address-array"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::~Ipv6AddressArray()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::has_operation() const
{
    for (auto const & leaf : addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto addr_name_datas = addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), addr_name_datas.begin(), addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr.append(value);
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv6AddressArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::Ipv4AddressArray()
    :
    addr{YType::str, "addr"}
{

    yang_name = "ipv4-address-array"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::~Ipv4AddressArray()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::has_operation() const
{
    for (auto const & leaf : addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto addr_name_datas = addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), addr_name_datas.begin(), addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr.append(value);
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::Ipv4AddressArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::IngressConversion()
    :
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    accuracy{YType::uint8, "accuracy"},
    class_default{YType::uint8, "class-default"},
    offset_log_variance{YType::uint16, "offset-log-variance"}
        ,
    class_mapping(this, {})
{

    yang_name = "ingress-conversion"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::~IngressConversion()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_data())
            return true;
    }
    return priority1.is_set
	|| priority2.is_set
	|| accuracy.is_set
	|| class_default.is_set
	|| offset_log_variance.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::has_operation() const
{
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_default.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_default.is_set || is_set(class_default.yfilter)) leaf_name_data.push_back(class_default.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-mapping")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping>();
        ent_->parent = this;
        class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-default")
    {
        class_default = value;
        class_default.value_namespace = name_space;
        class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class-default")
    {
        class_default.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-mapping" || name == "priority1" || name == "priority2" || name == "accuracy" || name == "class-default" || name == "offset-log-variance")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::ClassMapping()
    :
    from_clock_class{YType::uint8, "from-clock-class"},
    to_clock_class{YType::uint8, "to-clock-class"}
{

    yang_name = "class-mapping"; yang_parent_name = "ingress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::~ClassMapping()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return from_clock_class.is_set
	|| to_clock_class.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_clock_class.yfilter)
	|| ydk::is_set(to_clock_class.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-mapping";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_clock_class.is_set || is_set(from_clock_class.yfilter)) leaf_name_data.push_back(from_clock_class.get_name_leafdata());
    if (to_clock_class.is_set || is_set(to_clock_class.yfilter)) leaf_name_data.push_back(to_clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class = value;
        from_clock_class.value_namespace = name_space;
        from_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class = value;
        to_clock_class.value_namespace = name_space;
        to_clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class.yfilter = yfilter;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::IngressConversion::ClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-clock-class" || name == "to-clock-class")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::EgressConversion()
    :
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    accuracy{YType::uint8, "accuracy"},
    class_default{YType::uint8, "class-default"},
    offset_log_variance{YType::uint16, "offset-log-variance"}
        ,
    class_mapping(this, {})
{

    yang_name = "egress-conversion"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::~EgressConversion()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_data())
            return true;
    }
    return priority1.is_set
	|| priority2.is_set
	|| accuracy.is_set
	|| class_default.is_set
	|| offset_log_variance.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::has_operation() const
{
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_default.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_default.is_set || is_set(class_default.yfilter)) leaf_name_data.push_back(class_default.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-mapping")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping>();
        ent_->parent = this;
        class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-default")
    {
        class_default = value;
        class_default.value_namespace = name_space;
        class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class-default")
    {
        class_default.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-mapping" || name == "priority1" || name == "priority2" || name == "accuracy" || name == "class-default" || name == "offset-log-variance")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::ClassMapping()
    :
    from_clock_class{YType::uint8, "from-clock-class"},
    to_clock_class{YType::uint8, "to-clock-class"}
{

    yang_name = "class-mapping"; yang_parent_name = "egress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::~ClassMapping()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return from_clock_class.is_set
	|| to_clock_class.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_clock_class.yfilter)
	|| ydk::is_set(to_clock_class.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-mapping";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_clock_class.is_set || is_set(from_clock_class.yfilter)) leaf_name_data.push_back(from_clock_class.get_name_leafdata());
    if (to_clock_class.is_set || is_set(to_clock_class.yfilter)) leaf_name_data.push_back(to_clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class = value;
        from_clock_class.value_namespace = name_space;
        from_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class = value;
        to_clock_class.value_namespace = name_space;
        to_clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class.yfilter = yfilter;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::EgressConversion::ClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-clock-class" || name == "to-clock-class")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::MasterTable()
    :
    communication_model{YType::enumeration, "communication-model"},
    priority{YType::uint8, "priority"},
    known{YType::boolean, "known"},
    qualified{YType::boolean, "qualified"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    ptsf_loss_announce{YType::uint8, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::uint8, "ptsf-loss-sync"},
    is_nonnegotiated{YType::boolean, "is-nonnegotiated"}
        ,
    address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address>())
{
    address->parent = this;

    yang_name = "master-table"; yang_parent_name = "node-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::~MasterTable()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::has_data() const
{
    if (is_presence_container) return true;
    return communication_model.is_set
	|| priority.is_set
	|| known.is_set
	|| qualified.is_set
	|| is_grandmaster.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| is_nonnegotiated.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(known.yfilter)
	|| ydk::is_set(qualified.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| ydk::is_set(is_nonnegotiated.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-table";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (known.is_set || is_set(known.yfilter)) leaf_name_data.push_back(known.get_name_leafdata());
    if (qualified.is_set || is_set(qualified.yfilter)) leaf_name_data.push_back(qualified.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());
    if (is_nonnegotiated.is_set || is_set(is_nonnegotiated.yfilter)) leaf_name_data.push_back(is_nonnegotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known")
    {
        known = value;
        known.value_namespace = name_space;
        known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qualified")
    {
        qualified = value;
        qualified.value_namespace = name_space;
        qualified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated = value;
        is_nonnegotiated.value_namespace = name_space;
        is_nonnegotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "known")
    {
        known.yfilter = yfilter;
    }
    if(value_path == "qualified")
    {
        qualified.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "communication-model" || name == "priority" || name == "known" || name == "qualified" || name == "is-grandmaster" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync" || name == "is-nonnegotiated")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "master-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::~Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeers()
    :
    node_interface_unicast_peer(this, {"interface_name"})
{

    yang_name = "node-interface-unicast-peers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::~NodeInterfaceUnicastPeers()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_interface_unicast_peer.len(); index++)
    {
        if(node_interface_unicast_peer[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::has_operation() const
{
    for (std::size_t index=0; index<node_interface_unicast_peer.len(); index++)
    {
        if(node_interface_unicast_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-unicast-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-unicast-peer")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer>();
        ent_->parent = this;
        node_interface_unicast_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_interface_unicast_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-interface-unicast-peer")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::NodeInterfaceUnicastPeer()
    :
    interface_name{YType::str, "interface-name"},
    name{YType::str, "name"},
    port_number{YType::uint16, "port-number"}
        ,
    peers(this, {})
{

    yang_name = "node-interface-unicast-peer"; yang_parent_name = "node-interface-unicast-peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::~NodeInterfaceUnicastPeer()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peers.len(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| name.is_set
	|| port_number.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::has_operation() const
{
    for (std::size_t index=0; index<peers.len(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-unicast-peer";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        auto ent_ = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers>();
        ent_->parent = this;
        peers.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "interface-name" || name == "name" || name == "port-number")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Peers()
    :
    address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address>())
    , announce_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant>())
    , sync_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant>())
    , delay_response_grant(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant>())
{
    address->parent = this;
    announce_grant->parent = this;
    sync_grant->parent = this;
    delay_response_grant->parent = this;

    yang_name = "peers"; yang_parent_name = "node-interface-unicast-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::~Peers()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant>();
        }
        return sync_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        _children["announce-grant"] = announce_grant;
    }

    if(sync_grant != nullptr)
    {
        _children["sync-grant"] = sync_grant;
    }

    if(delay_response_grant != nullptr)
    {
        _children["delay-response-grant"] = delay_response_grant;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "announce-grant" || name == "sync-grant" || name == "delay-response-grant")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::~Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::AnnounceGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "announce-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::SyncGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "sync-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::~SyncGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::DelayResponseGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::Nodes::Node::PacketCounters::PacketCounters()
    :
    counters(std::make_shared<Ptp::Nodes::Node::PacketCounters::Counters>())
    , drop_reasons(std::make_shared<Ptp::Nodes::Node::PacketCounters::DropReasons>())
{
    counters->parent = this;
    drop_reasons->parent = this;

    yang_name = "packet-counters"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::PacketCounters::~PacketCounters()
{
}

bool Ptp::Nodes::Node::PacketCounters::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data())
	|| (drop_reasons !=  nullptr && drop_reasons->has_data());
}

bool Ptp::Nodes::Node::PacketCounters::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (drop_reasons !=  nullptr && drop_reasons->has_operation());
}

std::string Ptp::Nodes::Node::PacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::PacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::PacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Ptp::Nodes::Node::PacketCounters::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "drop-reasons")
    {
        if(drop_reasons == nullptr)
        {
            drop_reasons = std::make_shared<Ptp::Nodes::Node::PacketCounters::DropReasons>();
        }
        return drop_reasons;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::PacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(drop_reasons != nullptr)
    {
        _children["drop-reasons"] = drop_reasons;
    }

    return _children;
}

void Ptp::Nodes::Node::PacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Nodes::Node::PacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Nodes::Node::PacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "drop-reasons")
        return true;
    return false;
}

Ptp::Nodes::Node::PacketCounters::Counters::Counters()
    :
    announce_sent{YType::uint32, "announce-sent"},
    announce_received{YType::uint32, "announce-received"},
    announce_dropped{YType::uint32, "announce-dropped"},
    sync_sent{YType::uint32, "sync-sent"},
    sync_received{YType::uint32, "sync-received"},
    sync_dropped{YType::uint32, "sync-dropped"},
    follow_up_sent{YType::uint32, "follow-up-sent"},
    follow_up_received{YType::uint32, "follow-up-received"},
    follow_up_dropped{YType::uint32, "follow-up-dropped"},
    delay_request_sent{YType::uint32, "delay-request-sent"},
    delay_request_received{YType::uint32, "delay-request-received"},
    delay_request_dropped{YType::uint32, "delay-request-dropped"},
    delay_response_sent{YType::uint32, "delay-response-sent"},
    delay_response_received{YType::uint32, "delay-response-received"},
    delay_response_dropped{YType::uint32, "delay-response-dropped"},
    peer_delay_request_sent{YType::uint32, "peer-delay-request-sent"},
    peer_delay_request_received{YType::uint32, "peer-delay-request-received"},
    peer_delay_request_dropped{YType::uint32, "peer-delay-request-dropped"},
    peer_delay_response_sent{YType::uint32, "peer-delay-response-sent"},
    peer_delay_response_received{YType::uint32, "peer-delay-response-received"},
    peer_delay_response_dropped{YType::uint32, "peer-delay-response-dropped"},
    peer_delay_response_follow_up_sent{YType::uint32, "peer-delay-response-follow-up-sent"},
    peer_delay_response_follow_up_received{YType::uint32, "peer-delay-response-follow-up-received"},
    peer_delay_response_follow_up_dropped{YType::uint32, "peer-delay-response-follow-up-dropped"},
    signaling_sent{YType::uint32, "signaling-sent"},
    signaling_received{YType::uint32, "signaling-received"},
    signaling_dropped{YType::uint32, "signaling-dropped"},
    management_sent{YType::uint32, "management-sent"},
    management_received{YType::uint32, "management-received"},
    management_dropped{YType::uint32, "management-dropped"},
    other_packets_sent{YType::uint32, "other-packets-sent"},
    other_packets_received{YType::uint32, "other-packets-received"},
    other_packets_dropped{YType::uint32, "other-packets-dropped"},
    total_packets_sent{YType::uint32, "total-packets-sent"},
    total_packets_received{YType::uint32, "total-packets-received"},
    total_packets_dropped{YType::uint32, "total-packets-dropped"}
{

    yang_name = "counters"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::PacketCounters::Counters::~Counters()
{
}

bool Ptp::Nodes::Node::PacketCounters::Counters::has_data() const
{
    if (is_presence_container) return true;
    return announce_sent.is_set
	|| announce_received.is_set
	|| announce_dropped.is_set
	|| sync_sent.is_set
	|| sync_received.is_set
	|| sync_dropped.is_set
	|| follow_up_sent.is_set
	|| follow_up_received.is_set
	|| follow_up_dropped.is_set
	|| delay_request_sent.is_set
	|| delay_request_received.is_set
	|| delay_request_dropped.is_set
	|| delay_response_sent.is_set
	|| delay_response_received.is_set
	|| delay_response_dropped.is_set
	|| peer_delay_request_sent.is_set
	|| peer_delay_request_received.is_set
	|| peer_delay_request_dropped.is_set
	|| peer_delay_response_sent.is_set
	|| peer_delay_response_received.is_set
	|| peer_delay_response_dropped.is_set
	|| peer_delay_response_follow_up_sent.is_set
	|| peer_delay_response_follow_up_received.is_set
	|| peer_delay_response_follow_up_dropped.is_set
	|| signaling_sent.is_set
	|| signaling_received.is_set
	|| signaling_dropped.is_set
	|| management_sent.is_set
	|| management_received.is_set
	|| management_dropped.is_set
	|| other_packets_sent.is_set
	|| other_packets_received.is_set
	|| other_packets_dropped.is_set
	|| total_packets_sent.is_set
	|| total_packets_received.is_set
	|| total_packets_dropped.is_set;
}

bool Ptp::Nodes::Node::PacketCounters::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_sent.yfilter)
	|| ydk::is_set(announce_received.yfilter)
	|| ydk::is_set(announce_dropped.yfilter)
	|| ydk::is_set(sync_sent.yfilter)
	|| ydk::is_set(sync_received.yfilter)
	|| ydk::is_set(sync_dropped.yfilter)
	|| ydk::is_set(follow_up_sent.yfilter)
	|| ydk::is_set(follow_up_received.yfilter)
	|| ydk::is_set(follow_up_dropped.yfilter)
	|| ydk::is_set(delay_request_sent.yfilter)
	|| ydk::is_set(delay_request_received.yfilter)
	|| ydk::is_set(delay_request_dropped.yfilter)
	|| ydk::is_set(delay_response_sent.yfilter)
	|| ydk::is_set(delay_response_received.yfilter)
	|| ydk::is_set(delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_request_sent.yfilter)
	|| ydk::is_set(peer_delay_request_received.yfilter)
	|| ydk::is_set(peer_delay_request_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_sent.yfilter)
	|| ydk::is_set(peer_delay_response_received.yfilter)
	|| ydk::is_set(peer_delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_sent.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_received.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_dropped.yfilter)
	|| ydk::is_set(signaling_sent.yfilter)
	|| ydk::is_set(signaling_received.yfilter)
	|| ydk::is_set(signaling_dropped.yfilter)
	|| ydk::is_set(management_sent.yfilter)
	|| ydk::is_set(management_received.yfilter)
	|| ydk::is_set(management_dropped.yfilter)
	|| ydk::is_set(other_packets_sent.yfilter)
	|| ydk::is_set(other_packets_received.yfilter)
	|| ydk::is_set(other_packets_dropped.yfilter)
	|| ydk::is_set(total_packets_sent.yfilter)
	|| ydk::is_set(total_packets_received.yfilter)
	|| ydk::is_set(total_packets_dropped.yfilter);
}

std::string Ptp::Nodes::Node::PacketCounters::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::PacketCounters::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_sent.is_set || is_set(announce_sent.yfilter)) leaf_name_data.push_back(announce_sent.get_name_leafdata());
    if (announce_received.is_set || is_set(announce_received.yfilter)) leaf_name_data.push_back(announce_received.get_name_leafdata());
    if (announce_dropped.is_set || is_set(announce_dropped.yfilter)) leaf_name_data.push_back(announce_dropped.get_name_leafdata());
    if (sync_sent.is_set || is_set(sync_sent.yfilter)) leaf_name_data.push_back(sync_sent.get_name_leafdata());
    if (sync_received.is_set || is_set(sync_received.yfilter)) leaf_name_data.push_back(sync_received.get_name_leafdata());
    if (sync_dropped.is_set || is_set(sync_dropped.yfilter)) leaf_name_data.push_back(sync_dropped.get_name_leafdata());
    if (follow_up_sent.is_set || is_set(follow_up_sent.yfilter)) leaf_name_data.push_back(follow_up_sent.get_name_leafdata());
    if (follow_up_received.is_set || is_set(follow_up_received.yfilter)) leaf_name_data.push_back(follow_up_received.get_name_leafdata());
    if (follow_up_dropped.is_set || is_set(follow_up_dropped.yfilter)) leaf_name_data.push_back(follow_up_dropped.get_name_leafdata());
    if (delay_request_sent.is_set || is_set(delay_request_sent.yfilter)) leaf_name_data.push_back(delay_request_sent.get_name_leafdata());
    if (delay_request_received.is_set || is_set(delay_request_received.yfilter)) leaf_name_data.push_back(delay_request_received.get_name_leafdata());
    if (delay_request_dropped.is_set || is_set(delay_request_dropped.yfilter)) leaf_name_data.push_back(delay_request_dropped.get_name_leafdata());
    if (delay_response_sent.is_set || is_set(delay_response_sent.yfilter)) leaf_name_data.push_back(delay_response_sent.get_name_leafdata());
    if (delay_response_received.is_set || is_set(delay_response_received.yfilter)) leaf_name_data.push_back(delay_response_received.get_name_leafdata());
    if (delay_response_dropped.is_set || is_set(delay_response_dropped.yfilter)) leaf_name_data.push_back(delay_response_dropped.get_name_leafdata());
    if (peer_delay_request_sent.is_set || is_set(peer_delay_request_sent.yfilter)) leaf_name_data.push_back(peer_delay_request_sent.get_name_leafdata());
    if (peer_delay_request_received.is_set || is_set(peer_delay_request_received.yfilter)) leaf_name_data.push_back(peer_delay_request_received.get_name_leafdata());
    if (peer_delay_request_dropped.is_set || is_set(peer_delay_request_dropped.yfilter)) leaf_name_data.push_back(peer_delay_request_dropped.get_name_leafdata());
    if (peer_delay_response_sent.is_set || is_set(peer_delay_response_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_sent.get_name_leafdata());
    if (peer_delay_response_received.is_set || is_set(peer_delay_response_received.yfilter)) leaf_name_data.push_back(peer_delay_response_received.get_name_leafdata());
    if (peer_delay_response_dropped.is_set || is_set(peer_delay_response_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_sent.is_set || is_set(peer_delay_response_follow_up_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_sent.get_name_leafdata());
    if (peer_delay_response_follow_up_received.is_set || is_set(peer_delay_response_follow_up_received.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_received.get_name_leafdata());
    if (peer_delay_response_follow_up_dropped.is_set || is_set(peer_delay_response_follow_up_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_dropped.get_name_leafdata());
    if (signaling_sent.is_set || is_set(signaling_sent.yfilter)) leaf_name_data.push_back(signaling_sent.get_name_leafdata());
    if (signaling_received.is_set || is_set(signaling_received.yfilter)) leaf_name_data.push_back(signaling_received.get_name_leafdata());
    if (signaling_dropped.is_set || is_set(signaling_dropped.yfilter)) leaf_name_data.push_back(signaling_dropped.get_name_leafdata());
    if (management_sent.is_set || is_set(management_sent.yfilter)) leaf_name_data.push_back(management_sent.get_name_leafdata());
    if (management_received.is_set || is_set(management_received.yfilter)) leaf_name_data.push_back(management_received.get_name_leafdata());
    if (management_dropped.is_set || is_set(management_dropped.yfilter)) leaf_name_data.push_back(management_dropped.get_name_leafdata());
    if (other_packets_sent.is_set || is_set(other_packets_sent.yfilter)) leaf_name_data.push_back(other_packets_sent.get_name_leafdata());
    if (other_packets_received.is_set || is_set(other_packets_received.yfilter)) leaf_name_data.push_back(other_packets_received.get_name_leafdata());
    if (other_packets_dropped.is_set || is_set(other_packets_dropped.yfilter)) leaf_name_data.push_back(other_packets_dropped.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.yfilter)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.yfilter)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_packets_dropped.is_set || is_set(total_packets_dropped.yfilter)) leaf_name_data.push_back(total_packets_dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::PacketCounters::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::PacketCounters::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::PacketCounters::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-sent")
    {
        announce_sent = value;
        announce_sent.value_namespace = name_space;
        announce_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-received")
    {
        announce_received = value;
        announce_received.value_namespace = name_space;
        announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-dropped")
    {
        announce_dropped = value;
        announce_dropped.value_namespace = name_space;
        announce_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-sent")
    {
        sync_sent = value;
        sync_sent.value_namespace = name_space;
        sync_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-received")
    {
        sync_received = value;
        sync_received.value_namespace = name_space;
        sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped = value;
        sync_dropped.value_namespace = name_space;
        sync_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent = value;
        follow_up_sent.value_namespace = name_space;
        follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received = value;
        follow_up_received.value_namespace = name_space;
        follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped = value;
        follow_up_dropped.value_namespace = name_space;
        follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent = value;
        delay_request_sent.value_namespace = name_space;
        delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received = value;
        delay_request_received.value_namespace = name_space;
        delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped = value;
        delay_request_dropped.value_namespace = name_space;
        delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent = value;
        delay_response_sent.value_namespace = name_space;
        delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received = value;
        delay_response_received.value_namespace = name_space;
        delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped = value;
        delay_response_dropped.value_namespace = name_space;
        delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent = value;
        peer_delay_request_sent.value_namespace = name_space;
        peer_delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received = value;
        peer_delay_request_received.value_namespace = name_space;
        peer_delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped = value;
        peer_delay_request_dropped.value_namespace = name_space;
        peer_delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent = value;
        peer_delay_response_sent.value_namespace = name_space;
        peer_delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received = value;
        peer_delay_response_received.value_namespace = name_space;
        peer_delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped = value;
        peer_delay_response_dropped.value_namespace = name_space;
        peer_delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent = value;
        peer_delay_response_follow_up_sent.value_namespace = name_space;
        peer_delay_response_follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received = value;
        peer_delay_response_follow_up_received.value_namespace = name_space;
        peer_delay_response_follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped = value;
        peer_delay_response_follow_up_dropped.value_namespace = name_space;
        peer_delay_response_follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent = value;
        signaling_sent.value_namespace = name_space;
        signaling_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-received")
    {
        signaling_received = value;
        signaling_received.value_namespace = name_space;
        signaling_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped = value;
        signaling_dropped.value_namespace = name_space;
        signaling_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-sent")
    {
        management_sent = value;
        management_sent.value_namespace = name_space;
        management_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-received")
    {
        management_received = value;
        management_received.value_namespace = name_space;
        management_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-dropped")
    {
        management_dropped = value;
        management_dropped.value_namespace = name_space;
        management_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent = value;
        other_packets_sent.value_namespace = name_space;
        other_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received = value;
        other_packets_received.value_namespace = name_space;
        other_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped = value;
        other_packets_dropped.value_namespace = name_space;
        other_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
        total_packets_sent.value_namespace = name_space;
        total_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
        total_packets_received.value_namespace = name_space;
        total_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped = value;
        total_packets_dropped.value_namespace = name_space;
        total_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::PacketCounters::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-sent")
    {
        announce_sent.yfilter = yfilter;
    }
    if(value_path == "announce-received")
    {
        announce_received.yfilter = yfilter;
    }
    if(value_path == "announce-dropped")
    {
        announce_dropped.yfilter = yfilter;
    }
    if(value_path == "sync-sent")
    {
        sync_sent.yfilter = yfilter;
    }
    if(value_path == "sync-received")
    {
        sync_received.yfilter = yfilter;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped.yfilter = yfilter;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received.yfilter = yfilter;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received.yfilter = yfilter;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received.yfilter = yfilter;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent.yfilter = yfilter;
    }
    if(value_path == "signaling-received")
    {
        signaling_received.yfilter = yfilter;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped.yfilter = yfilter;
    }
    if(value_path == "management-sent")
    {
        management_sent.yfilter = yfilter;
    }
    if(value_path == "management-received")
    {
        management_received.yfilter = yfilter;
    }
    if(value_path == "management-dropped")
    {
        management_dropped.yfilter = yfilter;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent.yfilter = yfilter;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received.yfilter = yfilter;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent.yfilter = yfilter;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::PacketCounters::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-sent" || name == "announce-received" || name == "announce-dropped" || name == "sync-sent" || name == "sync-received" || name == "sync-dropped" || name == "follow-up-sent" || name == "follow-up-received" || name == "follow-up-dropped" || name == "delay-request-sent" || name == "delay-request-received" || name == "delay-request-dropped" || name == "delay-response-sent" || name == "delay-response-received" || name == "delay-response-dropped" || name == "peer-delay-request-sent" || name == "peer-delay-request-received" || name == "peer-delay-request-dropped" || name == "peer-delay-response-sent" || name == "peer-delay-response-received" || name == "peer-delay-response-dropped" || name == "peer-delay-response-follow-up-sent" || name == "peer-delay-response-follow-up-received" || name == "peer-delay-response-follow-up-dropped" || name == "signaling-sent" || name == "signaling-received" || name == "signaling-dropped" || name == "management-sent" || name == "management-received" || name == "management-dropped" || name == "other-packets-sent" || name == "other-packets-received" || name == "other-packets-dropped" || name == "total-packets-sent" || name == "total-packets-received" || name == "total-packets-dropped")
        return true;
    return false;
}

Ptp::Nodes::Node::PacketCounters::DropReasons::DropReasons()
    :
    not_ready{YType::uint32, "not-ready"},
    wrong_domain{YType::uint32, "wrong-domain"},
    too_short{YType::uint32, "too-short"},
    looped_same_port{YType::uint32, "looped-same-port"},
    looped_higher_port{YType::uint32, "looped-higher-port"},
    looped_lower_port{YType::uint32, "looped-lower-port"},
    no_timestamp{YType::uint32, "no-timestamp"},
    zero_timestamp{YType::uint32, "zero-timestamp"},
    invalid_tl_vs{YType::uint32, "invalid-tl-vs"},
    not_for_us{YType::uint32, "not-for-us"},
    not_listening{YType::uint32, "not-listening"},
    wrong_master{YType::uint32, "wrong-master"},
    unknown_master{YType::uint32, "unknown-master"},
    not_master{YType::uint32, "not-master"},
    not_slave{YType::uint32, "not-slave"},
    not_granted{YType::uint32, "not-granted"},
    too_slow{YType::uint32, "too-slow"},
    invalid_packet{YType::uint32, "invalid-packet"},
    wrong_sequence_id{YType::uint32, "wrong-sequence-id"},
    no_offload_session{YType::uint32, "no-offload-session"},
    not_supported{YType::uint32, "not-supported"},
    min_clock_class{YType::uint32, "min-clock-class"},
    g8265_1_incompatible{YType::uint32, "g8265-1-incompatible"},
    g8275_1_incompatible{YType::uint32, "g8275-1-incompatible"},
    g8275_2_incompatible{YType::uint32, "g8275-2-incompatible"},
    incorrect_address{YType::uint32, "incorrect-address"}
{

    yang_name = "drop-reasons"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Nodes::Node::PacketCounters::DropReasons::~DropReasons()
{
}

bool Ptp::Nodes::Node::PacketCounters::DropReasons::has_data() const
{
    if (is_presence_container) return true;
    return not_ready.is_set
	|| wrong_domain.is_set
	|| too_short.is_set
	|| looped_same_port.is_set
	|| looped_higher_port.is_set
	|| looped_lower_port.is_set
	|| no_timestamp.is_set
	|| zero_timestamp.is_set
	|| invalid_tl_vs.is_set
	|| not_for_us.is_set
	|| not_listening.is_set
	|| wrong_master.is_set
	|| unknown_master.is_set
	|| not_master.is_set
	|| not_slave.is_set
	|| not_granted.is_set
	|| too_slow.is_set
	|| invalid_packet.is_set
	|| wrong_sequence_id.is_set
	|| no_offload_session.is_set
	|| not_supported.is_set
	|| min_clock_class.is_set
	|| g8265_1_incompatible.is_set
	|| g8275_1_incompatible.is_set
	|| g8275_2_incompatible.is_set
	|| incorrect_address.is_set;
}

bool Ptp::Nodes::Node::PacketCounters::DropReasons::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(not_ready.yfilter)
	|| ydk::is_set(wrong_domain.yfilter)
	|| ydk::is_set(too_short.yfilter)
	|| ydk::is_set(looped_same_port.yfilter)
	|| ydk::is_set(looped_higher_port.yfilter)
	|| ydk::is_set(looped_lower_port.yfilter)
	|| ydk::is_set(no_timestamp.yfilter)
	|| ydk::is_set(zero_timestamp.yfilter)
	|| ydk::is_set(invalid_tl_vs.yfilter)
	|| ydk::is_set(not_for_us.yfilter)
	|| ydk::is_set(not_listening.yfilter)
	|| ydk::is_set(wrong_master.yfilter)
	|| ydk::is_set(unknown_master.yfilter)
	|| ydk::is_set(not_master.yfilter)
	|| ydk::is_set(not_slave.yfilter)
	|| ydk::is_set(not_granted.yfilter)
	|| ydk::is_set(too_slow.yfilter)
	|| ydk::is_set(invalid_packet.yfilter)
	|| ydk::is_set(wrong_sequence_id.yfilter)
	|| ydk::is_set(no_offload_session.yfilter)
	|| ydk::is_set(not_supported.yfilter)
	|| ydk::is_set(min_clock_class.yfilter)
	|| ydk::is_set(g8265_1_incompatible.yfilter)
	|| ydk::is_set(g8275_1_incompatible.yfilter)
	|| ydk::is_set(g8275_2_incompatible.yfilter)
	|| ydk::is_set(incorrect_address.yfilter);
}

std::string Ptp::Nodes::Node::PacketCounters::DropReasons::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-reasons";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Nodes::Node::PacketCounters::DropReasons::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (not_ready.is_set || is_set(not_ready.yfilter)) leaf_name_data.push_back(not_ready.get_name_leafdata());
    if (wrong_domain.is_set || is_set(wrong_domain.yfilter)) leaf_name_data.push_back(wrong_domain.get_name_leafdata());
    if (too_short.is_set || is_set(too_short.yfilter)) leaf_name_data.push_back(too_short.get_name_leafdata());
    if (looped_same_port.is_set || is_set(looped_same_port.yfilter)) leaf_name_data.push_back(looped_same_port.get_name_leafdata());
    if (looped_higher_port.is_set || is_set(looped_higher_port.yfilter)) leaf_name_data.push_back(looped_higher_port.get_name_leafdata());
    if (looped_lower_port.is_set || is_set(looped_lower_port.yfilter)) leaf_name_data.push_back(looped_lower_port.get_name_leafdata());
    if (no_timestamp.is_set || is_set(no_timestamp.yfilter)) leaf_name_data.push_back(no_timestamp.get_name_leafdata());
    if (zero_timestamp.is_set || is_set(zero_timestamp.yfilter)) leaf_name_data.push_back(zero_timestamp.get_name_leafdata());
    if (invalid_tl_vs.is_set || is_set(invalid_tl_vs.yfilter)) leaf_name_data.push_back(invalid_tl_vs.get_name_leafdata());
    if (not_for_us.is_set || is_set(not_for_us.yfilter)) leaf_name_data.push_back(not_for_us.get_name_leafdata());
    if (not_listening.is_set || is_set(not_listening.yfilter)) leaf_name_data.push_back(not_listening.get_name_leafdata());
    if (wrong_master.is_set || is_set(wrong_master.yfilter)) leaf_name_data.push_back(wrong_master.get_name_leafdata());
    if (unknown_master.is_set || is_set(unknown_master.yfilter)) leaf_name_data.push_back(unknown_master.get_name_leafdata());
    if (not_master.is_set || is_set(not_master.yfilter)) leaf_name_data.push_back(not_master.get_name_leafdata());
    if (not_slave.is_set || is_set(not_slave.yfilter)) leaf_name_data.push_back(not_slave.get_name_leafdata());
    if (not_granted.is_set || is_set(not_granted.yfilter)) leaf_name_data.push_back(not_granted.get_name_leafdata());
    if (too_slow.is_set || is_set(too_slow.yfilter)) leaf_name_data.push_back(too_slow.get_name_leafdata());
    if (invalid_packet.is_set || is_set(invalid_packet.yfilter)) leaf_name_data.push_back(invalid_packet.get_name_leafdata());
    if (wrong_sequence_id.is_set || is_set(wrong_sequence_id.yfilter)) leaf_name_data.push_back(wrong_sequence_id.get_name_leafdata());
    if (no_offload_session.is_set || is_set(no_offload_session.yfilter)) leaf_name_data.push_back(no_offload_session.get_name_leafdata());
    if (not_supported.is_set || is_set(not_supported.yfilter)) leaf_name_data.push_back(not_supported.get_name_leafdata());
    if (min_clock_class.is_set || is_set(min_clock_class.yfilter)) leaf_name_data.push_back(min_clock_class.get_name_leafdata());
    if (g8265_1_incompatible.is_set || is_set(g8265_1_incompatible.yfilter)) leaf_name_data.push_back(g8265_1_incompatible.get_name_leafdata());
    if (g8275_1_incompatible.is_set || is_set(g8275_1_incompatible.yfilter)) leaf_name_data.push_back(g8275_1_incompatible.get_name_leafdata());
    if (g8275_2_incompatible.is_set || is_set(g8275_2_incompatible.yfilter)) leaf_name_data.push_back(g8275_2_incompatible.get_name_leafdata());
    if (incorrect_address.is_set || is_set(incorrect_address.yfilter)) leaf_name_data.push_back(incorrect_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Nodes::Node::PacketCounters::DropReasons::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Nodes::Node::PacketCounters::DropReasons::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Nodes::Node::PacketCounters::DropReasons::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "not-ready")
    {
        not_ready = value;
        not_ready.value_namespace = name_space;
        not_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrong-domain")
    {
        wrong_domain = value;
        wrong_domain.value_namespace = name_space;
        wrong_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-short")
    {
        too_short = value;
        too_short.value_namespace = name_space;
        too_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped-same-port")
    {
        looped_same_port = value;
        looped_same_port.value_namespace = name_space;
        looped_same_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped-higher-port")
    {
        looped_higher_port = value;
        looped_higher_port.value_namespace = name_space;
        looped_higher_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped-lower-port")
    {
        looped_lower_port = value;
        looped_lower_port.value_namespace = name_space;
        looped_lower_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-timestamp")
    {
        no_timestamp = value;
        no_timestamp.value_namespace = name_space;
        no_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-timestamp")
    {
        zero_timestamp = value;
        zero_timestamp.value_namespace = name_space;
        zero_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-tl-vs")
    {
        invalid_tl_vs = value;
        invalid_tl_vs.value_namespace = name_space;
        invalid_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-for-us")
    {
        not_for_us = value;
        not_for_us.value_namespace = name_space;
        not_for_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-listening")
    {
        not_listening = value;
        not_listening.value_namespace = name_space;
        not_listening.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrong-master")
    {
        wrong_master = value;
        wrong_master.value_namespace = name_space;
        wrong_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-master")
    {
        unknown_master = value;
        unknown_master.value_namespace = name_space;
        unknown_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-master")
    {
        not_master = value;
        not_master.value_namespace = name_space;
        not_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-slave")
    {
        not_slave = value;
        not_slave.value_namespace = name_space;
        not_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-granted")
    {
        not_granted = value;
        not_granted.value_namespace = name_space;
        not_granted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-slow")
    {
        too_slow = value;
        too_slow.value_namespace = name_space;
        too_slow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packet")
    {
        invalid_packet = value;
        invalid_packet.value_namespace = name_space;
        invalid_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrong-sequence-id")
    {
        wrong_sequence_id = value;
        wrong_sequence_id.value_namespace = name_space;
        wrong_sequence_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-offload-session")
    {
        no_offload_session = value;
        no_offload_session.value_namespace = name_space;
        no_offload_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported")
    {
        not_supported = value;
        not_supported.value_namespace = name_space;
        not_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class = value;
        min_clock_class.value_namespace = name_space;
        min_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g8265-1-incompatible")
    {
        g8265_1_incompatible = value;
        g8265_1_incompatible.value_namespace = name_space;
        g8265_1_incompatible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g8275-1-incompatible")
    {
        g8275_1_incompatible = value;
        g8275_1_incompatible.value_namespace = name_space;
        g8275_1_incompatible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g8275-2-incompatible")
    {
        g8275_2_incompatible = value;
        g8275_2_incompatible.value_namespace = name_space;
        g8275_2_incompatible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incorrect-address")
    {
        incorrect_address = value;
        incorrect_address.value_namespace = name_space;
        incorrect_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Nodes::Node::PacketCounters::DropReasons::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "not-ready")
    {
        not_ready.yfilter = yfilter;
    }
    if(value_path == "wrong-domain")
    {
        wrong_domain.yfilter = yfilter;
    }
    if(value_path == "too-short")
    {
        too_short.yfilter = yfilter;
    }
    if(value_path == "looped-same-port")
    {
        looped_same_port.yfilter = yfilter;
    }
    if(value_path == "looped-higher-port")
    {
        looped_higher_port.yfilter = yfilter;
    }
    if(value_path == "looped-lower-port")
    {
        looped_lower_port.yfilter = yfilter;
    }
    if(value_path == "no-timestamp")
    {
        no_timestamp.yfilter = yfilter;
    }
    if(value_path == "zero-timestamp")
    {
        zero_timestamp.yfilter = yfilter;
    }
    if(value_path == "invalid-tl-vs")
    {
        invalid_tl_vs.yfilter = yfilter;
    }
    if(value_path == "not-for-us")
    {
        not_for_us.yfilter = yfilter;
    }
    if(value_path == "not-listening")
    {
        not_listening.yfilter = yfilter;
    }
    if(value_path == "wrong-master")
    {
        wrong_master.yfilter = yfilter;
    }
    if(value_path == "unknown-master")
    {
        unknown_master.yfilter = yfilter;
    }
    if(value_path == "not-master")
    {
        not_master.yfilter = yfilter;
    }
    if(value_path == "not-slave")
    {
        not_slave.yfilter = yfilter;
    }
    if(value_path == "not-granted")
    {
        not_granted.yfilter = yfilter;
    }
    if(value_path == "too-slow")
    {
        too_slow.yfilter = yfilter;
    }
    if(value_path == "invalid-packet")
    {
        invalid_packet.yfilter = yfilter;
    }
    if(value_path == "wrong-sequence-id")
    {
        wrong_sequence_id.yfilter = yfilter;
    }
    if(value_path == "no-offload-session")
    {
        no_offload_session.yfilter = yfilter;
    }
    if(value_path == "not-supported")
    {
        not_supported.yfilter = yfilter;
    }
    if(value_path == "min-clock-class")
    {
        min_clock_class.yfilter = yfilter;
    }
    if(value_path == "g8265-1-incompatible")
    {
        g8265_1_incompatible.yfilter = yfilter;
    }
    if(value_path == "g8275-1-incompatible")
    {
        g8275_1_incompatible.yfilter = yfilter;
    }
    if(value_path == "g8275-2-incompatible")
    {
        g8275_2_incompatible.yfilter = yfilter;
    }
    if(value_path == "incorrect-address")
    {
        incorrect_address.yfilter = yfilter;
    }
}

bool Ptp::Nodes::Node::PacketCounters::DropReasons::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "not-ready" || name == "wrong-domain" || name == "too-short" || name == "looped-same-port" || name == "looped-higher-port" || name == "looped-lower-port" || name == "no-timestamp" || name == "zero-timestamp" || name == "invalid-tl-vs" || name == "not-for-us" || name == "not-listening" || name == "wrong-master" || name == "unknown-master" || name == "not-master" || name == "not-slave" || name == "not-granted" || name == "too-slow" || name == "invalid-packet" || name == "wrong-sequence-id" || name == "no-offload-session" || name == "not-supported" || name == "min-clock-class" || name == "g8265-1-incompatible" || name == "g8275-1-incompatible" || name == "g8275-2-incompatible" || name == "incorrect-address")
        return true;
    return false;
}

Ptp::Summary::Summary()
    :
    port_state_init_count{YType::uint32, "port-state-init-count"},
    port_state_listening_count{YType::uint32, "port-state-listening-count"},
    port_state_passive_count{YType::uint32, "port-state-passive-count"},
    port_state_pre_master_count{YType::uint32, "port-state-pre-master-count"},
    port_state_master_count{YType::uint32, "port-state-master-count"},
    port_state_slave_count{YType::uint32, "port-state-slave-count"},
    port_state_uncalibrated_count{YType::uint32, "port-state-uncalibrated-count"},
    port_state_faulty_count{YType::uint32, "port-state-faulty-count"},
    total_interfaces{YType::uint32, "total-interfaces"},
    total_interfaces_valid_port_num{YType::uint32, "total-interfaces-valid-port-num"}
{

    yang_name = "summary"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Summary::~Summary()
{
}

bool Ptp::Summary::has_data() const
{
    if (is_presence_container) return true;
    return port_state_init_count.is_set
	|| port_state_listening_count.is_set
	|| port_state_passive_count.is_set
	|| port_state_pre_master_count.is_set
	|| port_state_master_count.is_set
	|| port_state_slave_count.is_set
	|| port_state_uncalibrated_count.is_set
	|| port_state_faulty_count.is_set
	|| total_interfaces.is_set
	|| total_interfaces_valid_port_num.is_set;
}

bool Ptp::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state_init_count.yfilter)
	|| ydk::is_set(port_state_listening_count.yfilter)
	|| ydk::is_set(port_state_passive_count.yfilter)
	|| ydk::is_set(port_state_pre_master_count.yfilter)
	|| ydk::is_set(port_state_master_count.yfilter)
	|| ydk::is_set(port_state_slave_count.yfilter)
	|| ydk::is_set(port_state_uncalibrated_count.yfilter)
	|| ydk::is_set(port_state_faulty_count.yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(total_interfaces_valid_port_num.yfilter);
}

std::string Ptp::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state_init_count.is_set || is_set(port_state_init_count.yfilter)) leaf_name_data.push_back(port_state_init_count.get_name_leafdata());
    if (port_state_listening_count.is_set || is_set(port_state_listening_count.yfilter)) leaf_name_data.push_back(port_state_listening_count.get_name_leafdata());
    if (port_state_passive_count.is_set || is_set(port_state_passive_count.yfilter)) leaf_name_data.push_back(port_state_passive_count.get_name_leafdata());
    if (port_state_pre_master_count.is_set || is_set(port_state_pre_master_count.yfilter)) leaf_name_data.push_back(port_state_pre_master_count.get_name_leafdata());
    if (port_state_master_count.is_set || is_set(port_state_master_count.yfilter)) leaf_name_data.push_back(port_state_master_count.get_name_leafdata());
    if (port_state_slave_count.is_set || is_set(port_state_slave_count.yfilter)) leaf_name_data.push_back(port_state_slave_count.get_name_leafdata());
    if (port_state_uncalibrated_count.is_set || is_set(port_state_uncalibrated_count.yfilter)) leaf_name_data.push_back(port_state_uncalibrated_count.get_name_leafdata());
    if (port_state_faulty_count.is_set || is_set(port_state_faulty_count.yfilter)) leaf_name_data.push_back(port_state_faulty_count.get_name_leafdata());
    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (total_interfaces_valid_port_num.is_set || is_set(total_interfaces_valid_port_num.yfilter)) leaf_name_data.push_back(total_interfaces_valid_port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state-init-count")
    {
        port_state_init_count = value;
        port_state_init_count.value_namespace = name_space;
        port_state_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-listening-count")
    {
        port_state_listening_count = value;
        port_state_listening_count.value_namespace = name_space;
        port_state_listening_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-passive-count")
    {
        port_state_passive_count = value;
        port_state_passive_count.value_namespace = name_space;
        port_state_passive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-pre-master-count")
    {
        port_state_pre_master_count = value;
        port_state_pre_master_count.value_namespace = name_space;
        port_state_pre_master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-master-count")
    {
        port_state_master_count = value;
        port_state_master_count.value_namespace = name_space;
        port_state_master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-slave-count")
    {
        port_state_slave_count = value;
        port_state_slave_count.value_namespace = name_space;
        port_state_slave_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-uncalibrated-count")
    {
        port_state_uncalibrated_count = value;
        port_state_uncalibrated_count.value_namespace = name_space;
        port_state_uncalibrated_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state-faulty-count")
    {
        port_state_faulty_count = value;
        port_state_faulty_count.value_namespace = name_space;
        port_state_faulty_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces-valid-port-num")
    {
        total_interfaces_valid_port_num = value;
        total_interfaces_valid_port_num.value_namespace = name_space;
        total_interfaces_valid_port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state-init-count")
    {
        port_state_init_count.yfilter = yfilter;
    }
    if(value_path == "port-state-listening-count")
    {
        port_state_listening_count.yfilter = yfilter;
    }
    if(value_path == "port-state-passive-count")
    {
        port_state_passive_count.yfilter = yfilter;
    }
    if(value_path == "port-state-pre-master-count")
    {
        port_state_pre_master_count.yfilter = yfilter;
    }
    if(value_path == "port-state-master-count")
    {
        port_state_master_count.yfilter = yfilter;
    }
    if(value_path == "port-state-slave-count")
    {
        port_state_slave_count.yfilter = yfilter;
    }
    if(value_path == "port-state-uncalibrated-count")
    {
        port_state_uncalibrated_count.yfilter = yfilter;
    }
    if(value_path == "port-state-faulty-count")
    {
        port_state_faulty_count.yfilter = yfilter;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "total-interfaces-valid-port-num")
    {
        total_interfaces_valid_port_num.yfilter = yfilter;
    }
}

bool Ptp::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state-init-count" || name == "port-state-listening-count" || name == "port-state-passive-count" || name == "port-state-pre-master-count" || name == "port-state-master-count" || name == "port-state-slave-count" || name == "port-state-uncalibrated-count" || name == "port-state-faulty-count" || name == "total-interfaces" || name == "total-interfaces-valid-port-num")
        return true;
    return false;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationErrors()
    :
    interface_configuration_error(this, {"interface_name"})
{

    yang_name = "interface-configuration-errors"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceConfigurationErrors::~InterfaceConfigurationErrors()
{
}

bool Ptp::InterfaceConfigurationErrors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_configuration_error.len(); index++)
    {
        if(interface_configuration_error[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfaceConfigurationErrors::has_operation() const
{
    for (std::size_t index=0; index<interface_configuration_error.len(); index++)
    {
        if(interface_configuration_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfaceConfigurationErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-configuration-error")
    {
        auto ent_ = std::make_shared<Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError>();
        ent_->parent = this;
        interface_configuration_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_configuration_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfaceConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-configuration-error")
        return true;
    return false;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::InterfaceConfigurationError()
    :
    interface_name{YType::str, "interface-name"},
    configuration_profile_name{YType::str, "configuration-profile-name"},
    clock_profile{YType::enumeration, "clock-profile"},
    telecom_clock_type{YType::enumeration, "telecom-clock-type"},
    restrict_port_state{YType::enumeration, "restrict-port-state"},
    interop_profile{YType::enumeration, "interop-profile"}
        ,
    configuration_errors(std::make_shared<Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors>())
{
    configuration_errors->parent = this;

    yang_name = "interface-configuration-error"; yang_parent_name = "interface-configuration-errors"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::~InterfaceConfigurationError()
{
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| configuration_profile_name.is_set
	|| clock_profile.is_set
	|| telecom_clock_type.is_set
	|| restrict_port_state.is_set
	|| interop_profile.is_set
	|| (configuration_errors !=  nullptr && configuration_errors->has_data());
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(configuration_profile_name.yfilter)
	|| ydk::is_set(clock_profile.yfilter)
	|| ydk::is_set(telecom_clock_type.yfilter)
	|| ydk::is_set(restrict_port_state.yfilter)
	|| ydk::is_set(interop_profile.yfilter)
	|| (configuration_errors !=  nullptr && configuration_errors->has_operation());
}

std::string Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-configuration-errors/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configuration-error";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_profile_name.is_set || is_set(configuration_profile_name.yfilter)) leaf_name_data.push_back(configuration_profile_name.get_name_leafdata());
    if (clock_profile.is_set || is_set(clock_profile.yfilter)) leaf_name_data.push_back(clock_profile.get_name_leafdata());
    if (telecom_clock_type.is_set || is_set(telecom_clock_type.yfilter)) leaf_name_data.push_back(telecom_clock_type.get_name_leafdata());
    if (restrict_port_state.is_set || is_set(restrict_port_state.yfilter)) leaf_name_data.push_back(restrict_port_state.get_name_leafdata());
    if (interop_profile.is_set || is_set(interop_profile.yfilter)) leaf_name_data.push_back(interop_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-errors")
    {
        if(configuration_errors == nullptr)
        {
            configuration_errors = std::make_shared<Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors>();
        }
        return configuration_errors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(configuration_errors != nullptr)
    {
        _children["configuration-errors"] = configuration_errors;
    }

    return _children;
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-profile-name")
    {
        configuration_profile_name = value;
        configuration_profile_name.value_namespace = name_space;
        configuration_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-profile")
    {
        clock_profile = value;
        clock_profile.value_namespace = name_space;
        clock_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type = value;
        telecom_clock_type.value_namespace = name_space;
        telecom_clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restrict-port-state")
    {
        restrict_port_state = value;
        restrict_port_state.value_namespace = name_space;
        restrict_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop-profile")
    {
        interop_profile = value;
        interop_profile.value_namespace = name_space;
        interop_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "configuration-profile-name")
    {
        configuration_profile_name.yfilter = yfilter;
    }
    if(value_path == "clock-profile")
    {
        clock_profile.yfilter = yfilter;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type.yfilter = yfilter;
    }
    if(value_path == "restrict-port-state")
    {
        restrict_port_state.yfilter = yfilter;
    }
    if(value_path == "interop-profile")
    {
        interop_profile.yfilter = yfilter;
    }
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-errors" || name == "interface-name" || name == "configuration-profile-name" || name == "clock-profile" || name == "telecom-clock-type" || name == "restrict-port-state" || name == "interop-profile")
        return true;
    return false;
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::ConfigurationErrors()
    :
    global_ptp{YType::boolean, "global-ptp"},
    ethernet_transport{YType::boolean, "ethernet-transport"},
    one_step{YType::boolean, "one-step"},
    slave{YType::boolean, "slave"},
    ipv6{YType::boolean, "ipv6"},
    multicast{YType::boolean, "multicast"},
    profile_not_global{YType::boolean, "profile-not-global"},
    local_priority{YType::boolean, "local-priority"},
    profile_ethernet{YType::boolean, "profile-ethernet"},
    profile_ipv4{YType::boolean, "profile-ipv4"},
    profile_ipv6{YType::boolean, "profile-ipv6"},
    profile_unicast{YType::boolean, "profile-unicast"},
    profile_multicast{YType::boolean, "profile-multicast"},
    profile_mixed{YType::boolean, "profile-mixed"},
    profile_master_unicast{YType::boolean, "profile-master-unicast"},
    profile_master_multicast{YType::boolean, "profile-master-multicast"},
    profile_master_mixed{YType::boolean, "profile-master-mixed"},
    target_address_ipv4{YType::boolean, "target-address-ipv4"},
    target_address_ipv6{YType::boolean, "target-address-ipv6"},
    ipv4ttl{YType::boolean, "ipv4ttl"},
    ipv6_hop_limit{YType::boolean, "ipv6-hop-limit"},
    profile_port_state{YType::boolean, "profile-port-state"},
    profile_announce_interval{YType::boolean, "profile-announce-interval"},
    profile_sync_interval{YType::boolean, "profile-sync-interval"},
    profile_delay_req_interval{YType::boolean, "profile-delay-req-interval"},
    profile_sync_timeout{YType::boolean, "profile-sync-timeout"},
    profile_delay_resp_timeout{YType::boolean, "profile-delay-resp-timeout"},
    invalid_grant_reduction{YType::boolean, "invalid-grant-reduction"},
    invalid_interop_domain{YType::boolean, "invalid-interop-domain"},
    invalid_interop_ingress_clock_class_default{YType::boolean, "invalid-interop-ingress-clock-class-default"},
    invalid_interop_ingress_priority1{YType::boolean, "invalid-interop-ingress-priority1"},
    invalid_interop_ingress_clock_accuracy{YType::boolean, "invalid-interop-ingress-clock-accuracy"},
    invalid_interop_ingress_oslv{YType::boolean, "invalid-interop-ingress-oslv"},
    invalid_interop_egress_clock_class_default{YType::boolean, "invalid-interop-egress-clock-class-default"},
    invalid_interop_egress_priority1{YType::boolean, "invalid-interop-egress-priority1"},
    invalid_interop_egress_priority2{YType::boolean, "invalid-interop-egress-priority2"},
    invalid_interop_egress_clock_accuracy{YType::boolean, "invalid-interop-egress-clock-accuracy"},
    invalid_interop_egress_oslv{YType::boolean, "invalid-interop-egress-oslv"},
    invalid_master_config{YType::boolean, "invalid-master-config"},
    invalid_slave_config{YType::boolean, "invalid-slave-config"},
    invalid_interop_ingress_clock_class_map_from_val{YType::uint8, "invalid-interop-ingress-clock-class-map-from-val"},
    invalid_interop_ingress_clock_class_map_to_val{YType::uint8, "invalid-interop-ingress-clock-class-map-to-val"},
    invalid_interop_egress_clock_class_map_from_val{YType::uint8, "invalid-interop-egress-clock-class-map-from-val"},
    invalid_interop_egress_clock_class_map_to_val{YType::uint8, "invalid-interop-egress-clock-class-map-to-val"}
{

    yang_name = "configuration-errors"; yang_parent_name = "interface-configuration-error"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::~ConfigurationErrors()
{
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : invalid_interop_ingress_clock_class_map_from_val.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : invalid_interop_ingress_clock_class_map_to_val.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : invalid_interop_egress_clock_class_map_from_val.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : invalid_interop_egress_clock_class_map_to_val.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return global_ptp.is_set
	|| ethernet_transport.is_set
	|| one_step.is_set
	|| slave.is_set
	|| ipv6.is_set
	|| multicast.is_set
	|| profile_not_global.is_set
	|| local_priority.is_set
	|| profile_ethernet.is_set
	|| profile_ipv4.is_set
	|| profile_ipv6.is_set
	|| profile_unicast.is_set
	|| profile_multicast.is_set
	|| profile_mixed.is_set
	|| profile_master_unicast.is_set
	|| profile_master_multicast.is_set
	|| profile_master_mixed.is_set
	|| target_address_ipv4.is_set
	|| target_address_ipv6.is_set
	|| ipv4ttl.is_set
	|| ipv6_hop_limit.is_set
	|| profile_port_state.is_set
	|| profile_announce_interval.is_set
	|| profile_sync_interval.is_set
	|| profile_delay_req_interval.is_set
	|| profile_sync_timeout.is_set
	|| profile_delay_resp_timeout.is_set
	|| invalid_grant_reduction.is_set
	|| invalid_interop_domain.is_set
	|| invalid_interop_ingress_clock_class_default.is_set
	|| invalid_interop_ingress_priority1.is_set
	|| invalid_interop_ingress_clock_accuracy.is_set
	|| invalid_interop_ingress_oslv.is_set
	|| invalid_interop_egress_clock_class_default.is_set
	|| invalid_interop_egress_priority1.is_set
	|| invalid_interop_egress_priority2.is_set
	|| invalid_interop_egress_clock_accuracy.is_set
	|| invalid_interop_egress_oslv.is_set
	|| invalid_master_config.is_set
	|| invalid_slave_config.is_set;
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::has_operation() const
{
    for (auto const & leaf : invalid_interop_ingress_clock_class_map_from_val.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : invalid_interop_ingress_clock_class_map_to_val.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : invalid_interop_egress_clock_class_map_from_val.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : invalid_interop_egress_clock_class_map_to_val.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(global_ptp.yfilter)
	|| ydk::is_set(ethernet_transport.yfilter)
	|| ydk::is_set(one_step.yfilter)
	|| ydk::is_set(slave.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(profile_not_global.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(profile_ethernet.yfilter)
	|| ydk::is_set(profile_ipv4.yfilter)
	|| ydk::is_set(profile_ipv6.yfilter)
	|| ydk::is_set(profile_unicast.yfilter)
	|| ydk::is_set(profile_multicast.yfilter)
	|| ydk::is_set(profile_mixed.yfilter)
	|| ydk::is_set(profile_master_unicast.yfilter)
	|| ydk::is_set(profile_master_multicast.yfilter)
	|| ydk::is_set(profile_master_mixed.yfilter)
	|| ydk::is_set(target_address_ipv4.yfilter)
	|| ydk::is_set(target_address_ipv6.yfilter)
	|| ydk::is_set(ipv4ttl.yfilter)
	|| ydk::is_set(ipv6_hop_limit.yfilter)
	|| ydk::is_set(profile_port_state.yfilter)
	|| ydk::is_set(profile_announce_interval.yfilter)
	|| ydk::is_set(profile_sync_interval.yfilter)
	|| ydk::is_set(profile_delay_req_interval.yfilter)
	|| ydk::is_set(profile_sync_timeout.yfilter)
	|| ydk::is_set(profile_delay_resp_timeout.yfilter)
	|| ydk::is_set(invalid_grant_reduction.yfilter)
	|| ydk::is_set(invalid_interop_domain.yfilter)
	|| ydk::is_set(invalid_interop_ingress_clock_class_default.yfilter)
	|| ydk::is_set(invalid_interop_ingress_priority1.yfilter)
	|| ydk::is_set(invalid_interop_ingress_clock_accuracy.yfilter)
	|| ydk::is_set(invalid_interop_ingress_oslv.yfilter)
	|| ydk::is_set(invalid_interop_egress_clock_class_default.yfilter)
	|| ydk::is_set(invalid_interop_egress_priority1.yfilter)
	|| ydk::is_set(invalid_interop_egress_priority2.yfilter)
	|| ydk::is_set(invalid_interop_egress_clock_accuracy.yfilter)
	|| ydk::is_set(invalid_interop_egress_oslv.yfilter)
	|| ydk::is_set(invalid_master_config.yfilter)
	|| ydk::is_set(invalid_slave_config.yfilter)
	|| ydk::is_set(invalid_interop_ingress_clock_class_map_from_val.yfilter)
	|| ydk::is_set(invalid_interop_ingress_clock_class_map_to_val.yfilter)
	|| ydk::is_set(invalid_interop_egress_clock_class_map_from_val.yfilter)
	|| ydk::is_set(invalid_interop_egress_clock_class_map_to_val.yfilter);
}

std::string Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_ptp.is_set || is_set(global_ptp.yfilter)) leaf_name_data.push_back(global_ptp.get_name_leafdata());
    if (ethernet_transport.is_set || is_set(ethernet_transport.yfilter)) leaf_name_data.push_back(ethernet_transport.get_name_leafdata());
    if (one_step.is_set || is_set(one_step.yfilter)) leaf_name_data.push_back(one_step.get_name_leafdata());
    if (slave.is_set || is_set(slave.yfilter)) leaf_name_data.push_back(slave.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (profile_not_global.is_set || is_set(profile_not_global.yfilter)) leaf_name_data.push_back(profile_not_global.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (profile_ethernet.is_set || is_set(profile_ethernet.yfilter)) leaf_name_data.push_back(profile_ethernet.get_name_leafdata());
    if (profile_ipv4.is_set || is_set(profile_ipv4.yfilter)) leaf_name_data.push_back(profile_ipv4.get_name_leafdata());
    if (profile_ipv6.is_set || is_set(profile_ipv6.yfilter)) leaf_name_data.push_back(profile_ipv6.get_name_leafdata());
    if (profile_unicast.is_set || is_set(profile_unicast.yfilter)) leaf_name_data.push_back(profile_unicast.get_name_leafdata());
    if (profile_multicast.is_set || is_set(profile_multicast.yfilter)) leaf_name_data.push_back(profile_multicast.get_name_leafdata());
    if (profile_mixed.is_set || is_set(profile_mixed.yfilter)) leaf_name_data.push_back(profile_mixed.get_name_leafdata());
    if (profile_master_unicast.is_set || is_set(profile_master_unicast.yfilter)) leaf_name_data.push_back(profile_master_unicast.get_name_leafdata());
    if (profile_master_multicast.is_set || is_set(profile_master_multicast.yfilter)) leaf_name_data.push_back(profile_master_multicast.get_name_leafdata());
    if (profile_master_mixed.is_set || is_set(profile_master_mixed.yfilter)) leaf_name_data.push_back(profile_master_mixed.get_name_leafdata());
    if (target_address_ipv4.is_set || is_set(target_address_ipv4.yfilter)) leaf_name_data.push_back(target_address_ipv4.get_name_leafdata());
    if (target_address_ipv6.is_set || is_set(target_address_ipv6.yfilter)) leaf_name_data.push_back(target_address_ipv6.get_name_leafdata());
    if (ipv4ttl.is_set || is_set(ipv4ttl.yfilter)) leaf_name_data.push_back(ipv4ttl.get_name_leafdata());
    if (ipv6_hop_limit.is_set || is_set(ipv6_hop_limit.yfilter)) leaf_name_data.push_back(ipv6_hop_limit.get_name_leafdata());
    if (profile_port_state.is_set || is_set(profile_port_state.yfilter)) leaf_name_data.push_back(profile_port_state.get_name_leafdata());
    if (profile_announce_interval.is_set || is_set(profile_announce_interval.yfilter)) leaf_name_data.push_back(profile_announce_interval.get_name_leafdata());
    if (profile_sync_interval.is_set || is_set(profile_sync_interval.yfilter)) leaf_name_data.push_back(profile_sync_interval.get_name_leafdata());
    if (profile_delay_req_interval.is_set || is_set(profile_delay_req_interval.yfilter)) leaf_name_data.push_back(profile_delay_req_interval.get_name_leafdata());
    if (profile_sync_timeout.is_set || is_set(profile_sync_timeout.yfilter)) leaf_name_data.push_back(profile_sync_timeout.get_name_leafdata());
    if (profile_delay_resp_timeout.is_set || is_set(profile_delay_resp_timeout.yfilter)) leaf_name_data.push_back(profile_delay_resp_timeout.get_name_leafdata());
    if (invalid_grant_reduction.is_set || is_set(invalid_grant_reduction.yfilter)) leaf_name_data.push_back(invalid_grant_reduction.get_name_leafdata());
    if (invalid_interop_domain.is_set || is_set(invalid_interop_domain.yfilter)) leaf_name_data.push_back(invalid_interop_domain.get_name_leafdata());
    if (invalid_interop_ingress_clock_class_default.is_set || is_set(invalid_interop_ingress_clock_class_default.yfilter)) leaf_name_data.push_back(invalid_interop_ingress_clock_class_default.get_name_leafdata());
    if (invalid_interop_ingress_priority1.is_set || is_set(invalid_interop_ingress_priority1.yfilter)) leaf_name_data.push_back(invalid_interop_ingress_priority1.get_name_leafdata());
    if (invalid_interop_ingress_clock_accuracy.is_set || is_set(invalid_interop_ingress_clock_accuracy.yfilter)) leaf_name_data.push_back(invalid_interop_ingress_clock_accuracy.get_name_leafdata());
    if (invalid_interop_ingress_oslv.is_set || is_set(invalid_interop_ingress_oslv.yfilter)) leaf_name_data.push_back(invalid_interop_ingress_oslv.get_name_leafdata());
    if (invalid_interop_egress_clock_class_default.is_set || is_set(invalid_interop_egress_clock_class_default.yfilter)) leaf_name_data.push_back(invalid_interop_egress_clock_class_default.get_name_leafdata());
    if (invalid_interop_egress_priority1.is_set || is_set(invalid_interop_egress_priority1.yfilter)) leaf_name_data.push_back(invalid_interop_egress_priority1.get_name_leafdata());
    if (invalid_interop_egress_priority2.is_set || is_set(invalid_interop_egress_priority2.yfilter)) leaf_name_data.push_back(invalid_interop_egress_priority2.get_name_leafdata());
    if (invalid_interop_egress_clock_accuracy.is_set || is_set(invalid_interop_egress_clock_accuracy.yfilter)) leaf_name_data.push_back(invalid_interop_egress_clock_accuracy.get_name_leafdata());
    if (invalid_interop_egress_oslv.is_set || is_set(invalid_interop_egress_oslv.yfilter)) leaf_name_data.push_back(invalid_interop_egress_oslv.get_name_leafdata());
    if (invalid_master_config.is_set || is_set(invalid_master_config.yfilter)) leaf_name_data.push_back(invalid_master_config.get_name_leafdata());
    if (invalid_slave_config.is_set || is_set(invalid_slave_config.yfilter)) leaf_name_data.push_back(invalid_slave_config.get_name_leafdata());

    auto invalid_interop_ingress_clock_class_map_from_val_name_datas = invalid_interop_ingress_clock_class_map_from_val.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), invalid_interop_ingress_clock_class_map_from_val_name_datas.begin(), invalid_interop_ingress_clock_class_map_from_val_name_datas.end());
    auto invalid_interop_ingress_clock_class_map_to_val_name_datas = invalid_interop_ingress_clock_class_map_to_val.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), invalid_interop_ingress_clock_class_map_to_val_name_datas.begin(), invalid_interop_ingress_clock_class_map_to_val_name_datas.end());
    auto invalid_interop_egress_clock_class_map_from_val_name_datas = invalid_interop_egress_clock_class_map_from_val.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), invalid_interop_egress_clock_class_map_from_val_name_datas.begin(), invalid_interop_egress_clock_class_map_from_val_name_datas.end());
    auto invalid_interop_egress_clock_class_map_to_val_name_datas = invalid_interop_egress_clock_class_map_to_val.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), invalid_interop_egress_clock_class_map_to_val_name_datas.begin(), invalid_interop_egress_clock_class_map_to_val_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-ptp")
    {
        global_ptp = value;
        global_ptp.value_namespace = name_space;
        global_ptp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-transport")
    {
        ethernet_transport = value;
        ethernet_transport.value_namespace = name_space;
        ethernet_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-step")
    {
        one_step = value;
        one_step.value_namespace = name_space;
        one_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave")
    {
        slave = value;
        slave.value_namespace = name_space;
        slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-not-global")
    {
        profile_not_global = value;
        profile_not_global.value_namespace = name_space;
        profile_not_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-ethernet")
    {
        profile_ethernet = value;
        profile_ethernet.value_namespace = name_space;
        profile_ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-ipv4")
    {
        profile_ipv4 = value;
        profile_ipv4.value_namespace = name_space;
        profile_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-ipv6")
    {
        profile_ipv6 = value;
        profile_ipv6.value_namespace = name_space;
        profile_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-unicast")
    {
        profile_unicast = value;
        profile_unicast.value_namespace = name_space;
        profile_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-multicast")
    {
        profile_multicast = value;
        profile_multicast.value_namespace = name_space;
        profile_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-mixed")
    {
        profile_mixed = value;
        profile_mixed.value_namespace = name_space;
        profile_mixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-master-unicast")
    {
        profile_master_unicast = value;
        profile_master_unicast.value_namespace = name_space;
        profile_master_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-master-multicast")
    {
        profile_master_multicast = value;
        profile_master_multicast.value_namespace = name_space;
        profile_master_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-master-mixed")
    {
        profile_master_mixed = value;
        profile_master_mixed.value_namespace = name_space;
        profile_master_mixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-ipv4")
    {
        target_address_ipv4 = value;
        target_address_ipv4.value_namespace = name_space;
        target_address_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-ipv6")
    {
        target_address_ipv6 = value;
        target_address_ipv6.value_namespace = name_space;
        target_address_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4ttl")
    {
        ipv4ttl = value;
        ipv4ttl.value_namespace = name_space;
        ipv4ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit = value;
        ipv6_hop_limit.value_namespace = name_space;
        ipv6_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-port-state")
    {
        profile_port_state = value;
        profile_port_state.value_namespace = name_space;
        profile_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-announce-interval")
    {
        profile_announce_interval = value;
        profile_announce_interval.value_namespace = name_space;
        profile_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-sync-interval")
    {
        profile_sync_interval = value;
        profile_sync_interval.value_namespace = name_space;
        profile_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-delay-req-interval")
    {
        profile_delay_req_interval = value;
        profile_delay_req_interval.value_namespace = name_space;
        profile_delay_req_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-sync-timeout")
    {
        profile_sync_timeout = value;
        profile_sync_timeout.value_namespace = name_space;
        profile_sync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-delay-resp-timeout")
    {
        profile_delay_resp_timeout = value;
        profile_delay_resp_timeout.value_namespace = name_space;
        profile_delay_resp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-grant-reduction")
    {
        invalid_grant_reduction = value;
        invalid_grant_reduction.value_namespace = name_space;
        invalid_grant_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-domain")
    {
        invalid_interop_domain = value;
        invalid_interop_domain.value_namespace = name_space;
        invalid_interop_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-ingress-clock-class-default")
    {
        invalid_interop_ingress_clock_class_default = value;
        invalid_interop_ingress_clock_class_default.value_namespace = name_space;
        invalid_interop_ingress_clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-ingress-priority1")
    {
        invalid_interop_ingress_priority1 = value;
        invalid_interop_ingress_priority1.value_namespace = name_space;
        invalid_interop_ingress_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-ingress-clock-accuracy")
    {
        invalid_interop_ingress_clock_accuracy = value;
        invalid_interop_ingress_clock_accuracy.value_namespace = name_space;
        invalid_interop_ingress_clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-ingress-oslv")
    {
        invalid_interop_ingress_oslv = value;
        invalid_interop_ingress_oslv.value_namespace = name_space;
        invalid_interop_ingress_oslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-egress-clock-class-default")
    {
        invalid_interop_egress_clock_class_default = value;
        invalid_interop_egress_clock_class_default.value_namespace = name_space;
        invalid_interop_egress_clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-egress-priority1")
    {
        invalid_interop_egress_priority1 = value;
        invalid_interop_egress_priority1.value_namespace = name_space;
        invalid_interop_egress_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-egress-priority2")
    {
        invalid_interop_egress_priority2 = value;
        invalid_interop_egress_priority2.value_namespace = name_space;
        invalid_interop_egress_priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-egress-clock-accuracy")
    {
        invalid_interop_egress_clock_accuracy = value;
        invalid_interop_egress_clock_accuracy.value_namespace = name_space;
        invalid_interop_egress_clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-egress-oslv")
    {
        invalid_interop_egress_oslv = value;
        invalid_interop_egress_oslv.value_namespace = name_space;
        invalid_interop_egress_oslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-master-config")
    {
        invalid_master_config = value;
        invalid_master_config.value_namespace = name_space;
        invalid_master_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-slave-config")
    {
        invalid_slave_config = value;
        invalid_slave_config.value_namespace = name_space;
        invalid_slave_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-interop-ingress-clock-class-map-from-val")
    {
        invalid_interop_ingress_clock_class_map_from_val.append(value);
    }
    if(value_path == "invalid-interop-ingress-clock-class-map-to-val")
    {
        invalid_interop_ingress_clock_class_map_to_val.append(value);
    }
    if(value_path == "invalid-interop-egress-clock-class-map-from-val")
    {
        invalid_interop_egress_clock_class_map_from_val.append(value);
    }
    if(value_path == "invalid-interop-egress-clock-class-map-to-val")
    {
        invalid_interop_egress_clock_class_map_to_val.append(value);
    }
}

void Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-ptp")
    {
        global_ptp.yfilter = yfilter;
    }
    if(value_path == "ethernet-transport")
    {
        ethernet_transport.yfilter = yfilter;
    }
    if(value_path == "one-step")
    {
        one_step.yfilter = yfilter;
    }
    if(value_path == "slave")
    {
        slave.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "profile-not-global")
    {
        profile_not_global.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "profile-ethernet")
    {
        profile_ethernet.yfilter = yfilter;
    }
    if(value_path == "profile-ipv4")
    {
        profile_ipv4.yfilter = yfilter;
    }
    if(value_path == "profile-ipv6")
    {
        profile_ipv6.yfilter = yfilter;
    }
    if(value_path == "profile-unicast")
    {
        profile_unicast.yfilter = yfilter;
    }
    if(value_path == "profile-multicast")
    {
        profile_multicast.yfilter = yfilter;
    }
    if(value_path == "profile-mixed")
    {
        profile_mixed.yfilter = yfilter;
    }
    if(value_path == "profile-master-unicast")
    {
        profile_master_unicast.yfilter = yfilter;
    }
    if(value_path == "profile-master-multicast")
    {
        profile_master_multicast.yfilter = yfilter;
    }
    if(value_path == "profile-master-mixed")
    {
        profile_master_mixed.yfilter = yfilter;
    }
    if(value_path == "target-address-ipv4")
    {
        target_address_ipv4.yfilter = yfilter;
    }
    if(value_path == "target-address-ipv6")
    {
        target_address_ipv6.yfilter = yfilter;
    }
    if(value_path == "ipv4ttl")
    {
        ipv4ttl.yfilter = yfilter;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit.yfilter = yfilter;
    }
    if(value_path == "profile-port-state")
    {
        profile_port_state.yfilter = yfilter;
    }
    if(value_path == "profile-announce-interval")
    {
        profile_announce_interval.yfilter = yfilter;
    }
    if(value_path == "profile-sync-interval")
    {
        profile_sync_interval.yfilter = yfilter;
    }
    if(value_path == "profile-delay-req-interval")
    {
        profile_delay_req_interval.yfilter = yfilter;
    }
    if(value_path == "profile-sync-timeout")
    {
        profile_sync_timeout.yfilter = yfilter;
    }
    if(value_path == "profile-delay-resp-timeout")
    {
        profile_delay_resp_timeout.yfilter = yfilter;
    }
    if(value_path == "invalid-grant-reduction")
    {
        invalid_grant_reduction.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-domain")
    {
        invalid_interop_domain.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-ingress-clock-class-default")
    {
        invalid_interop_ingress_clock_class_default.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-ingress-priority1")
    {
        invalid_interop_ingress_priority1.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-ingress-clock-accuracy")
    {
        invalid_interop_ingress_clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-ingress-oslv")
    {
        invalid_interop_ingress_oslv.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-egress-clock-class-default")
    {
        invalid_interop_egress_clock_class_default.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-egress-priority1")
    {
        invalid_interop_egress_priority1.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-egress-priority2")
    {
        invalid_interop_egress_priority2.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-egress-clock-accuracy")
    {
        invalid_interop_egress_clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-egress-oslv")
    {
        invalid_interop_egress_oslv.yfilter = yfilter;
    }
    if(value_path == "invalid-master-config")
    {
        invalid_master_config.yfilter = yfilter;
    }
    if(value_path == "invalid-slave-config")
    {
        invalid_slave_config.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-ingress-clock-class-map-from-val")
    {
        invalid_interop_ingress_clock_class_map_from_val.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-ingress-clock-class-map-to-val")
    {
        invalid_interop_ingress_clock_class_map_to_val.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-egress-clock-class-map-from-val")
    {
        invalid_interop_egress_clock_class_map_from_val.yfilter = yfilter;
    }
    if(value_path == "invalid-interop-egress-clock-class-map-to-val")
    {
        invalid_interop_egress_clock_class_map_to_val.yfilter = yfilter;
    }
}

bool Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ptp" || name == "ethernet-transport" || name == "one-step" || name == "slave" || name == "ipv6" || name == "multicast" || name == "profile-not-global" || name == "local-priority" || name == "profile-ethernet" || name == "profile-ipv4" || name == "profile-ipv6" || name == "profile-unicast" || name == "profile-multicast" || name == "profile-mixed" || name == "profile-master-unicast" || name == "profile-master-multicast" || name == "profile-master-mixed" || name == "target-address-ipv4" || name == "target-address-ipv6" || name == "ipv4ttl" || name == "ipv6-hop-limit" || name == "profile-port-state" || name == "profile-announce-interval" || name == "profile-sync-interval" || name == "profile-delay-req-interval" || name == "profile-sync-timeout" || name == "profile-delay-resp-timeout" || name == "invalid-grant-reduction" || name == "invalid-interop-domain" || name == "invalid-interop-ingress-clock-class-default" || name == "invalid-interop-ingress-priority1" || name == "invalid-interop-ingress-clock-accuracy" || name == "invalid-interop-ingress-oslv" || name == "invalid-interop-egress-clock-class-default" || name == "invalid-interop-egress-priority1" || name == "invalid-interop-egress-priority2" || name == "invalid-interop-egress-clock-accuracy" || name == "invalid-interop-egress-oslv" || name == "invalid-master-config" || name == "invalid-slave-config" || name == "invalid-interop-ingress-clock-class-map-from-val" || name == "invalid-interop-ingress-clock-class-map-to-val" || name == "invalid-interop-egress-clock-class-map-from-val" || name == "invalid-interop-egress-clock-class-map-to-val")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMasters()
    :
    interface_foreign_master(this, {"interface_name"})
{

    yang_name = "interface-foreign-masters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceForeignMasters::~InterfaceForeignMasters()
{
}

bool Ptp::InterfaceForeignMasters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_foreign_master.len(); index++)
    {
        if(interface_foreign_master[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfaceForeignMasters::has_operation() const
{
    for (std::size_t index=0; index<interface_foreign_master.len(); index++)
    {
        if(interface_foreign_master[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfaceForeignMasters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceForeignMasters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-foreign-masters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-foreign-master")
    {
        auto ent_ = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster>();
        ent_->parent = this;
        interface_foreign_master.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_foreign_master.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfaceForeignMasters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceForeignMasters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceForeignMasters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-foreign-master")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::InterfaceForeignMaster()
    :
    interface_name{YType::str, "interface-name"},
    port_number{YType::uint16, "port-number"}
        ,
    foreign_clock(this, {})
{

    yang_name = "interface-foreign-master"; yang_parent_name = "interface-foreign-masters"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::~InterfaceForeignMaster()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<foreign_clock.len(); index++)
    {
        if(foreign_clock[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::has_operation() const
{
    for (std::size_t index=0; index<foreign_clock.len(); index++)
    {
        if(foreign_clock[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-foreign-masters/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-foreign-master";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-clock")
    {
        auto ent_ = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock>();
        ent_->parent = this;
        foreign_clock.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : foreign_clock.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-clock" || name == "interface-name" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock()
    :
    is_qualified{YType::boolean, "is-qualified"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    communication_model{YType::enumeration, "communication-model"},
    is_known{YType::boolean, "is-known"},
    time_known_for{YType::uint32, "time-known-for"},
    foreign_domain{YType::uint8, "foreign-domain"},
    configured_priority{YType::uint8, "configured-priority"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    delay_asymmetry{YType::int32, "delay-asymmetry"},
    ptsf_loss_announce{YType::boolean, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::boolean, "ptsf-loss-sync"}
        ,
    foreign_clock(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_>())
    , address(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address>())
    , announce_grant(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant>())
    , sync_grant(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant>())
    , delay_response_grant(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant>())
{
    foreign_clock->parent = this;
    address->parent = this;
    announce_grant->parent = this;
    sync_grant->parent = this;
    delay_response_grant->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "interface-foreign-master"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::~ForeignClock()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::has_data() const
{
    if (is_presence_container) return true;
    return is_qualified.is_set
	|| is_grandmaster.is_set
	|| communication_model.is_set
	|| is_known.is_set
	|| time_known_for.is_set
	|| foreign_domain.is_set
	|| configured_priority.is_set
	|| configured_clock_class.is_set
	|| delay_asymmetry.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| (foreign_clock !=  nullptr && foreign_clock->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data());
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_qualified.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(is_known.yfilter)
	|| ydk::is_set(time_known_for.yfilter)
	|| ydk::is_set(foreign_domain.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(delay_asymmetry.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| (foreign_clock !=  nullptr && foreign_clock->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation());
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_qualified.is_set || is_set(is_qualified.yfilter)) leaf_name_data.push_back(is_qualified.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (is_known.is_set || is_set(is_known.yfilter)) leaf_name_data.push_back(is_known.get_name_leafdata());
    if (time_known_for.is_set || is_set(time_known_for.yfilter)) leaf_name_data.push_back(time_known_for.get_name_leafdata());
    if (foreign_domain.is_set || is_set(foreign_domain.yfilter)) leaf_name_data.push_back(foreign_domain.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (delay_asymmetry.is_set || is_set(delay_asymmetry.yfilter)) leaf_name_data.push_back(delay_asymmetry.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-clock")
    {
        if(foreign_clock == nullptr)
        {
            foreign_clock = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_>();
        }
        return foreign_clock;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant>();
        }
        return sync_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(foreign_clock != nullptr)
    {
        _children["foreign-clock"] = foreign_clock;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        _children["announce-grant"] = announce_grant;
    }

    if(sync_grant != nullptr)
    {
        _children["sync-grant"] = sync_grant;
    }

    if(delay_response_grant != nullptr)
    {
        _children["delay-response-grant"] = delay_response_grant;
    }

    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-qualified")
    {
        is_qualified = value;
        is_qualified.value_namespace = name_space;
        is_qualified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-known")
    {
        is_known = value;
        is_known.value_namespace = name_space;
        is_known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-known-for")
    {
        time_known_for = value;
        time_known_for.value_namespace = name_space;
        time_known_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain = value;
        foreign_domain.value_namespace = name_space;
        foreign_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry = value;
        delay_asymmetry.value_namespace = name_space;
        delay_asymmetry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-qualified")
    {
        is_qualified.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "is-known")
    {
        is_known.yfilter = yfilter;
    }
    if(value_path == "time-known-for")
    {
        time_known_for.yfilter = yfilter;
    }
    if(value_path == "foreign-domain")
    {
        foreign_domain.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "delay-asymmetry")
    {
        delay_asymmetry.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-clock" || name == "address" || name == "announce-grant" || name == "sync-grant" || name == "delay-response-grant" || name == "is-qualified" || name == "is-grandmaster" || name == "communication-model" || name == "is-known" || name == "time-known-for" || name == "foreign-domain" || name == "configured-priority" || name == "configured-clock-class" || name == "delay-asymmetry" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::ForeignClock_()
    :
    clock_id{YType::uint64, "clock-id"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    class_{YType::uint8, "class"},
    accuracy{YType::uint8, "accuracy"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"}
        ,
    utc_offset(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>())
    , receiver(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>())
    , sender(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>())
{
    utc_offset->parent = this;
    receiver->parent = this;
    sender->parent = this;

    yang_name = "foreign-clock"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::~ForeignClock_()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| class_.is_set
	|| accuracy.is_set
	|| offset_log_variance.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| frequency_traceable.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| (utc_offset !=  nullptr && utc_offset->has_data())
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data());
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| (utc_offset !=  nullptr && utc_offset->has_operation())
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation());
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset>();
        }
        return utc_offset;
    }

    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender>();
        }
        return sender;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utc_offset != nullptr)
    {
        _children["utc-offset"] = utc_offset;
    }

    if(receiver != nullptr)
    {
        _children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        _children["sender"] = sender;
    }

    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utc-offset" || name == "receiver" || name == "sender" || name == "clock-id" || name == "priority1" || name == "priority2" || name == "class" || name == "accuracy" || name == "offset-log-variance" || name == "steps-removed" || name == "time-source" || name == "frequency-traceable" || name == "time-traceable" || name == "timescale" || name == "leap-seconds" || name == "local" || name == "configured-clock-class" || name == "configured-priority")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::~UtcOffset()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_data() const
{
    if (is_presence_container) return true;
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::~Receiver()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::~Sender()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::~Address()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::~MacAddress()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::AnnounceGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "announce-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::SyncGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "sync-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::~SyncGrant()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::DelayResponseGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "foreign-clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterops()
    :
    interface_interop(this, {"interface_name"})
{

    yang_name = "interface-interops"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceInterops::~InterfaceInterops()
{
}

bool Ptp::InterfaceInterops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_interop.len(); index++)
    {
        if(interface_interop[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfaceInterops::has_operation() const
{
    for (std::size_t index=0; index<interface_interop.len(); index++)
    {
        if(interface_interop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfaceInterops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceInterops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-interops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-interop")
    {
        auto ent_ = std::make_shared<Ptp::InterfaceInterops::InterfaceInterop>();
        ent_->parent = this;
        interface_interop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_interop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfaceInterops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceInterops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceInterops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-interop")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterop::InterfaceInterop()
    :
    interface_name{YType::str, "interface-name"},
    local_domain{YType::uint8, "local-domain"},
    interop_domain{YType::uint8, "interop-domain"},
    local_profile{YType::enumeration, "local-profile"},
    interop_profile{YType::enumeration, "interop-profile"}
        ,
    egress_interop(std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::EgressInterop>())
    , ingress_interop(this, {})
{
    egress_interop->parent = this;

    yang_name = "interface-interop"; yang_parent_name = "interface-interops"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceInterops::InterfaceInterop::~InterfaceInterop()
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ingress_interop.len(); index++)
    {
        if(ingress_interop[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| local_domain.is_set
	|| interop_domain.is_set
	|| local_profile.is_set
	|| interop_profile.is_set
	|| (egress_interop !=  nullptr && egress_interop->has_data());
}

bool Ptp::InterfaceInterops::InterfaceInterop::has_operation() const
{
    for (std::size_t index=0; index<ingress_interop.len(); index++)
    {
        if(ingress_interop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_domain.yfilter)
	|| ydk::is_set(interop_domain.yfilter)
	|| ydk::is_set(local_profile.yfilter)
	|| ydk::is_set(interop_profile.yfilter)
	|| (egress_interop !=  nullptr && egress_interop->has_operation());
}

std::string Ptp::InterfaceInterops::InterfaceInterop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-interops/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceInterops::InterfaceInterop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-interop";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::InterfaceInterop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_domain.is_set || is_set(local_domain.yfilter)) leaf_name_data.push_back(local_domain.get_name_leafdata());
    if (interop_domain.is_set || is_set(interop_domain.yfilter)) leaf_name_data.push_back(interop_domain.get_name_leafdata());
    if (local_profile.is_set || is_set(local_profile.yfilter)) leaf_name_data.push_back(local_profile.get_name_leafdata());
    if (interop_profile.is_set || is_set(interop_profile.yfilter)) leaf_name_data.push_back(interop_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::InterfaceInterop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-interop")
    {
        if(egress_interop == nullptr)
        {
            egress_interop = std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::EgressInterop>();
        }
        return egress_interop;
    }

    if(child_yang_name == "ingress-interop")
    {
        auto ent_ = std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop>();
        ent_->parent = this;
        ingress_interop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::InterfaceInterop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(egress_interop != nullptr)
    {
        _children["egress-interop"] = egress_interop;
    }

    count_ = 0;
    for (auto ent_ : ingress_interop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfaceInterops::InterfaceInterop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-domain")
    {
        local_domain = value;
        local_domain.value_namespace = name_space;
        local_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop-domain")
    {
        interop_domain = value;
        interop_domain.value_namespace = name_space;
        interop_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-profile")
    {
        local_profile = value;
        local_profile.value_namespace = name_space;
        local_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop-profile")
    {
        interop_profile = value;
        interop_profile.value_namespace = name_space;
        interop_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceInterops::InterfaceInterop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-domain")
    {
        local_domain.yfilter = yfilter;
    }
    if(value_path == "interop-domain")
    {
        interop_domain.yfilter = yfilter;
    }
    if(value_path == "local-profile")
    {
        local_profile.yfilter = yfilter;
    }
    if(value_path == "interop-profile")
    {
        interop_profile.yfilter = yfilter;
    }
}

bool Ptp::InterfaceInterops::InterfaceInterop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-interop" || name == "ingress-interop" || name == "interface-name" || name == "local-domain" || name == "interop-domain" || name == "local-profile" || name == "interop-profile")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::EgressInterop()
    :
    from_priority1{YType::uint8, "from-priority1"},
    to_priority1{YType::uint8, "to-priority1"},
    from_priority2{YType::uint8, "from-priority2"},
    to_priority2{YType::uint8, "to-priority2"},
    from_accuracy{YType::uint8, "from-accuracy"},
    to_accuracy{YType::uint8, "to-accuracy"},
    from_clock_class{YType::uint8, "from-clock-class"},
    to_clock_class{YType::uint8, "to-clock-class"},
    from_offset_log_variance{YType::uint16, "from-offset-log-variance"},
    to_offset_log_variance{YType::uint16, "to-offset-log-variance"}
{

    yang_name = "egress-interop"; yang_parent_name = "interface-interop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::~EgressInterop()
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::has_data() const
{
    if (is_presence_container) return true;
    return from_priority1.is_set
	|| to_priority1.is_set
	|| from_priority2.is_set
	|| to_priority2.is_set
	|| from_accuracy.is_set
	|| to_accuracy.is_set
	|| from_clock_class.is_set
	|| to_clock_class.is_set
	|| from_offset_log_variance.is_set
	|| to_offset_log_variance.is_set;
}

bool Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_priority1.yfilter)
	|| ydk::is_set(to_priority1.yfilter)
	|| ydk::is_set(from_priority2.yfilter)
	|| ydk::is_set(to_priority2.yfilter)
	|| ydk::is_set(from_accuracy.yfilter)
	|| ydk::is_set(to_accuracy.yfilter)
	|| ydk::is_set(from_clock_class.yfilter)
	|| ydk::is_set(to_clock_class.yfilter)
	|| ydk::is_set(from_offset_log_variance.yfilter)
	|| ydk::is_set(to_offset_log_variance.yfilter);
}

std::string Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-interop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_priority1.is_set || is_set(from_priority1.yfilter)) leaf_name_data.push_back(from_priority1.get_name_leafdata());
    if (to_priority1.is_set || is_set(to_priority1.yfilter)) leaf_name_data.push_back(to_priority1.get_name_leafdata());
    if (from_priority2.is_set || is_set(from_priority2.yfilter)) leaf_name_data.push_back(from_priority2.get_name_leafdata());
    if (to_priority2.is_set || is_set(to_priority2.yfilter)) leaf_name_data.push_back(to_priority2.get_name_leafdata());
    if (from_accuracy.is_set || is_set(from_accuracy.yfilter)) leaf_name_data.push_back(from_accuracy.get_name_leafdata());
    if (to_accuracy.is_set || is_set(to_accuracy.yfilter)) leaf_name_data.push_back(to_accuracy.get_name_leafdata());
    if (from_clock_class.is_set || is_set(from_clock_class.yfilter)) leaf_name_data.push_back(from_clock_class.get_name_leafdata());
    if (to_clock_class.is_set || is_set(to_clock_class.yfilter)) leaf_name_data.push_back(to_clock_class.get_name_leafdata());
    if (from_offset_log_variance.is_set || is_set(from_offset_log_variance.yfilter)) leaf_name_data.push_back(from_offset_log_variance.get_name_leafdata());
    if (to_offset_log_variance.is_set || is_set(to_offset_log_variance.yfilter)) leaf_name_data.push_back(to_offset_log_variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-priority1")
    {
        from_priority1 = value;
        from_priority1.value_namespace = name_space;
        from_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-priority1")
    {
        to_priority1 = value;
        to_priority1.value_namespace = name_space;
        to_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-priority2")
    {
        from_priority2 = value;
        from_priority2.value_namespace = name_space;
        from_priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-priority2")
    {
        to_priority2 = value;
        to_priority2.value_namespace = name_space;
        to_priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-accuracy")
    {
        from_accuracy = value;
        from_accuracy.value_namespace = name_space;
        from_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-accuracy")
    {
        to_accuracy = value;
        to_accuracy.value_namespace = name_space;
        to_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-clock-class")
    {
        from_clock_class = value;
        from_clock_class.value_namespace = name_space;
        from_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class = value;
        to_clock_class.value_namespace = name_space;
        to_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-offset-log-variance")
    {
        from_offset_log_variance = value;
        from_offset_log_variance.value_namespace = name_space;
        from_offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-offset-log-variance")
    {
        to_offset_log_variance = value;
        to_offset_log_variance.value_namespace = name_space;
        to_offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-priority1")
    {
        from_priority1.yfilter = yfilter;
    }
    if(value_path == "to-priority1")
    {
        to_priority1.yfilter = yfilter;
    }
    if(value_path == "from-priority2")
    {
        from_priority2.yfilter = yfilter;
    }
    if(value_path == "to-priority2")
    {
        to_priority2.yfilter = yfilter;
    }
    if(value_path == "from-accuracy")
    {
        from_accuracy.yfilter = yfilter;
    }
    if(value_path == "to-accuracy")
    {
        to_accuracy.yfilter = yfilter;
    }
    if(value_path == "from-clock-class")
    {
        from_clock_class.yfilter = yfilter;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class.yfilter = yfilter;
    }
    if(value_path == "from-offset-log-variance")
    {
        from_offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "to-offset-log-variance")
    {
        to_offset_log_variance.yfilter = yfilter;
    }
}

bool Ptp::InterfaceInterops::InterfaceInterop::EgressInterop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-priority1" || name == "to-priority1" || name == "from-priority2" || name == "to-priority2" || name == "from-accuracy" || name == "to-accuracy" || name == "from-clock-class" || name == "to-clock-class" || name == "from-offset-log-variance" || name == "to-offset-log-variance")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::IngressInterop()
    :
    address(std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address>())
    , interop(std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop>())
{
    address->parent = this;
    interop->parent = this;

    yang_name = "ingress-interop"; yang_parent_name = "interface-interop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::~IngressInterop()
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (interop !=  nullptr && interop->has_data());
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (interop !=  nullptr && interop->has_operation());
}

std::string Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-interop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address>();
        }
        return address;
    }

    if(child_yang_name == "interop")
    {
        if(interop == nullptr)
        {
            interop = std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop>();
        }
        return interop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(interop != nullptr)
    {
        _children["interop"] = interop;
    }

    return _children;
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interop")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "ingress-interop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::~Address()
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::~MacAddress()
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::Interop()
    :
    from_priority1{YType::uint8, "from-priority1"},
    to_priority1{YType::uint8, "to-priority1"},
    from_priority2{YType::uint8, "from-priority2"},
    to_priority2{YType::uint8, "to-priority2"},
    from_accuracy{YType::uint8, "from-accuracy"},
    to_accuracy{YType::uint8, "to-accuracy"},
    from_clock_class{YType::uint8, "from-clock-class"},
    to_clock_class{YType::uint8, "to-clock-class"},
    from_offset_log_variance{YType::uint16, "from-offset-log-variance"},
    to_offset_log_variance{YType::uint16, "to-offset-log-variance"}
{

    yang_name = "interop"; yang_parent_name = "ingress-interop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::~Interop()
{
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::has_data() const
{
    if (is_presence_container) return true;
    return from_priority1.is_set
	|| to_priority1.is_set
	|| from_priority2.is_set
	|| to_priority2.is_set
	|| from_accuracy.is_set
	|| to_accuracy.is_set
	|| from_clock_class.is_set
	|| to_clock_class.is_set
	|| from_offset_log_variance.is_set
	|| to_offset_log_variance.is_set;
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_priority1.yfilter)
	|| ydk::is_set(to_priority1.yfilter)
	|| ydk::is_set(from_priority2.yfilter)
	|| ydk::is_set(to_priority2.yfilter)
	|| ydk::is_set(from_accuracy.yfilter)
	|| ydk::is_set(to_accuracy.yfilter)
	|| ydk::is_set(from_clock_class.yfilter)
	|| ydk::is_set(to_clock_class.yfilter)
	|| ydk::is_set(from_offset_log_variance.yfilter)
	|| ydk::is_set(to_offset_log_variance.yfilter);
}

std::string Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_priority1.is_set || is_set(from_priority1.yfilter)) leaf_name_data.push_back(from_priority1.get_name_leafdata());
    if (to_priority1.is_set || is_set(to_priority1.yfilter)) leaf_name_data.push_back(to_priority1.get_name_leafdata());
    if (from_priority2.is_set || is_set(from_priority2.yfilter)) leaf_name_data.push_back(from_priority2.get_name_leafdata());
    if (to_priority2.is_set || is_set(to_priority2.yfilter)) leaf_name_data.push_back(to_priority2.get_name_leafdata());
    if (from_accuracy.is_set || is_set(from_accuracy.yfilter)) leaf_name_data.push_back(from_accuracy.get_name_leafdata());
    if (to_accuracy.is_set || is_set(to_accuracy.yfilter)) leaf_name_data.push_back(to_accuracy.get_name_leafdata());
    if (from_clock_class.is_set || is_set(from_clock_class.yfilter)) leaf_name_data.push_back(from_clock_class.get_name_leafdata());
    if (to_clock_class.is_set || is_set(to_clock_class.yfilter)) leaf_name_data.push_back(to_clock_class.get_name_leafdata());
    if (from_offset_log_variance.is_set || is_set(from_offset_log_variance.yfilter)) leaf_name_data.push_back(from_offset_log_variance.get_name_leafdata());
    if (to_offset_log_variance.is_set || is_set(to_offset_log_variance.yfilter)) leaf_name_data.push_back(to_offset_log_variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-priority1")
    {
        from_priority1 = value;
        from_priority1.value_namespace = name_space;
        from_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-priority1")
    {
        to_priority1 = value;
        to_priority1.value_namespace = name_space;
        to_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-priority2")
    {
        from_priority2 = value;
        from_priority2.value_namespace = name_space;
        from_priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-priority2")
    {
        to_priority2 = value;
        to_priority2.value_namespace = name_space;
        to_priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-accuracy")
    {
        from_accuracy = value;
        from_accuracy.value_namespace = name_space;
        from_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-accuracy")
    {
        to_accuracy = value;
        to_accuracy.value_namespace = name_space;
        to_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-clock-class")
    {
        from_clock_class = value;
        from_clock_class.value_namespace = name_space;
        from_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class = value;
        to_clock_class.value_namespace = name_space;
        to_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-offset-log-variance")
    {
        from_offset_log_variance = value;
        from_offset_log_variance.value_namespace = name_space;
        from_offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-offset-log-variance")
    {
        to_offset_log_variance = value;
        to_offset_log_variance.value_namespace = name_space;
        to_offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-priority1")
    {
        from_priority1.yfilter = yfilter;
    }
    if(value_path == "to-priority1")
    {
        to_priority1.yfilter = yfilter;
    }
    if(value_path == "from-priority2")
    {
        from_priority2.yfilter = yfilter;
    }
    if(value_path == "to-priority2")
    {
        to_priority2.yfilter = yfilter;
    }
    if(value_path == "from-accuracy")
    {
        from_accuracy.yfilter = yfilter;
    }
    if(value_path == "to-accuracy")
    {
        to_accuracy.yfilter = yfilter;
    }
    if(value_path == "from-clock-class")
    {
        from_clock_class.yfilter = yfilter;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class.yfilter = yfilter;
    }
    if(value_path == "from-offset-log-variance")
    {
        from_offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "to-offset-log-variance")
    {
        to_offset_log_variance.yfilter = yfilter;
    }
}

bool Ptp::InterfaceInterops::InterfaceInterop::IngressInterop::Interop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-priority1" || name == "to-priority1" || name == "from-priority2" || name == "to-priority2" || name == "from-accuracy" || name == "to-accuracy" || name == "from-clock-class" || name == "to-clock-class" || name == "from-offset-log-variance" || name == "to-offset-log-variance")
        return true;
    return false;
}

Ptp::LocalClock::LocalClock()
    :
    domain{YType::uint8, "domain"},
    holdover{YType::boolean, "holdover"},
    holdover_clock_class{YType::uint8, "holdover-clock-class"}
        ,
    clock_properties(std::make_shared<Ptp::LocalClock::ClockProperties>())
    , virtual_port(std::make_shared<Ptp::LocalClock::VirtualPort>())
{
    clock_properties->parent = this;
    virtual_port->parent = this;

    yang_name = "local-clock"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::LocalClock::~LocalClock()
{
}

bool Ptp::LocalClock::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| holdover.is_set
	|| holdover_clock_class.is_set
	|| (clock_properties !=  nullptr && clock_properties->has_data())
	|| (virtual_port !=  nullptr && virtual_port->has_data());
}

bool Ptp::LocalClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(holdover.yfilter)
	|| ydk::is_set(holdover_clock_class.yfilter)
	|| (clock_properties !=  nullptr && clock_properties->has_operation())
	|| (virtual_port !=  nullptr && virtual_port->has_operation());
}

std::string Ptp::LocalClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (holdover.is_set || is_set(holdover.yfilter)) leaf_name_data.push_back(holdover.get_name_leafdata());
    if (holdover_clock_class.is_set || is_set(holdover_clock_class.yfilter)) leaf_name_data.push_back(holdover_clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::LocalClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-properties")
    {
        if(clock_properties == nullptr)
        {
            clock_properties = std::make_shared<Ptp::LocalClock::ClockProperties>();
        }
        return clock_properties;
    }

    if(child_yang_name == "virtual-port")
    {
        if(virtual_port == nullptr)
        {
            virtual_port = std::make_shared<Ptp::LocalClock::VirtualPort>();
        }
        return virtual_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::LocalClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_properties != nullptr)
    {
        _children["clock-properties"] = clock_properties;
    }

    if(virtual_port != nullptr)
    {
        _children["virtual-port"] = virtual_port;
    }

    return _children;
}

void Ptp::LocalClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdover")
    {
        holdover = value;
        holdover.value_namespace = name_space;
        holdover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdover-clock-class")
    {
        holdover_clock_class = value;
        holdover_clock_class.value_namespace = name_space;
        holdover_clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "holdover")
    {
        holdover.yfilter = yfilter;
    }
    if(value_path == "holdover-clock-class")
    {
        holdover_clock_class.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-properties" || name == "virtual-port" || name == "domain" || name == "holdover" || name == "holdover-clock-class")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::ClockProperties()
    :
    clock_id{YType::uint64, "clock-id"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    class_{YType::uint8, "class"},
    accuracy{YType::uint8, "accuracy"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"}
        ,
    utc_offset(std::make_shared<Ptp::LocalClock::ClockProperties::UtcOffset>())
    , receiver(std::make_shared<Ptp::LocalClock::ClockProperties::Receiver>())
    , sender(std::make_shared<Ptp::LocalClock::ClockProperties::Sender>())
{
    utc_offset->parent = this;
    receiver->parent = this;
    sender->parent = this;

    yang_name = "clock-properties"; yang_parent_name = "local-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::LocalClock::ClockProperties::~ClockProperties()
{
}

bool Ptp::LocalClock::ClockProperties::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| class_.is_set
	|| accuracy.is_set
	|| offset_log_variance.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| frequency_traceable.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| (utc_offset !=  nullptr && utc_offset->has_data())
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data());
}

bool Ptp::LocalClock::ClockProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| (utc_offset !=  nullptr && utc_offset->has_operation())
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation());
}

std::string Ptp::LocalClock::ClockProperties::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::LocalClock::ClockProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::LocalClock::ClockProperties::UtcOffset>();
        }
        return utc_offset;
    }

    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::LocalClock::ClockProperties::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::LocalClock::ClockProperties::Sender>();
        }
        return sender;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::LocalClock::ClockProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utc_offset != nullptr)
    {
        _children["utc-offset"] = utc_offset;
    }

    if(receiver != nullptr)
    {
        _children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        _children["sender"] = sender;
    }

    return _children;
}

void Ptp::LocalClock::ClockProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utc-offset" || name == "receiver" || name == "sender" || name == "clock-id" || name == "priority1" || name == "priority2" || name == "class" || name == "accuracy" || name == "offset-log-variance" || name == "steps-removed" || name == "time-source" || name == "frequency-traceable" || name == "time-traceable" || name == "timescale" || name == "leap-seconds" || name == "local" || name == "configured-clock-class" || name == "configured-priority")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::LocalClock::ClockProperties::UtcOffset::~UtcOffset()
{
}

bool Ptp::LocalClock::ClockProperties::UtcOffset::has_data() const
{
    if (is_presence_container) return true;
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::LocalClock::ClockProperties::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::LocalClock::ClockProperties::UtcOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::LocalClock::ClockProperties::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::LocalClock::ClockProperties::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::LocalClock::ClockProperties::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::LocalClock::ClockProperties::Receiver::~Receiver()
{
}

bool Ptp::LocalClock::ClockProperties::Receiver::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::LocalClock::ClockProperties::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::LocalClock::ClockProperties::Receiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::LocalClock::ClockProperties::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::LocalClock::ClockProperties::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::LocalClock::ClockProperties::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::LocalClock::ClockProperties::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::LocalClock::ClockProperties::Sender::~Sender()
{
}

bool Ptp::LocalClock::ClockProperties::Sender::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::LocalClock::ClockProperties::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::LocalClock::ClockProperties::Sender::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::ClockProperties::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::ClockProperties::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::LocalClock::ClockProperties::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::LocalClock::ClockProperties::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::LocalClock::ClockProperties::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::ClockProperties::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::ClockProperties::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::LocalClock::VirtualPort::VirtualPort()
    :
    configured{YType::boolean, "configured"},
    connected{YType::boolean, "connected"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    class_{YType::uint8, "class"},
    accuracy{YType::uint8, "accuracy"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    local_priority{YType::uint8, "local-priority"}
{

    yang_name = "virtual-port"; yang_parent_name = "local-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::LocalClock::VirtualPort::~VirtualPort()
{
}

bool Ptp::LocalClock::VirtualPort::has_data() const
{
    if (is_presence_container) return true;
    return configured.is_set
	|| connected.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| class_.is_set
	|| accuracy.is_set
	|| offset_log_variance.is_set
	|| local_priority.is_set;
}

bool Ptp::LocalClock::VirtualPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(local_priority.yfilter);
}

std::string Ptp::LocalClock::VirtualPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/local-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::LocalClock::VirtualPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::LocalClock::VirtualPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::LocalClock::VirtualPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::LocalClock::VirtualPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::LocalClock::VirtualPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::LocalClock::VirtualPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
}

bool Ptp::LocalClock::VirtualPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured" || name == "connected" || name == "priority1" || name == "priority2" || name == "class" || name == "accuracy" || name == "offset-log-variance" || name == "local-priority")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounters()
    :
    interface_packet_counter(this, {"interface_name"})
{

    yang_name = "interface-packet-counters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfacePacketCounters::~InterfacePacketCounters()
{
}

bool Ptp::InterfacePacketCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_packet_counter.len(); index++)
    {
        if(interface_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfacePacketCounters::has_operation() const
{
    for (std::size_t index=0; index<interface_packet_counter.len(); index++)
    {
        if(interface_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfacePacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfacePacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-packet-counter")
    {
        auto ent_ = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter>();
        ent_->parent = this;
        interface_packet_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_packet_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfacePacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfacePacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfacePacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-packet-counter")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::InterfacePacketCounter()
    :
    interface_name{YType::str, "interface-name"}
        ,
    counters(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters>())
    , peer_counter(this, {})
{
    counters->parent = this;

    yang_name = "interface-packet-counter"; yang_parent_name = "interface-packet-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::~InterfacePacketCounter()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_counter.len(); index++)
    {
        if(peer_counter[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::has_operation() const
{
    for (std::size_t index=0; index<peer_counter.len(); index++)
    {
        if(peer_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-packet-counter";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "peer-counter")
    {
        auto ent_ = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter>();
        ent_->parent = this;
        peer_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    count_ = 0;
    for (auto ent_ : peer_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "peer-counter" || name == "interface-name")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::Counters()
    :
    announce_sent{YType::uint32, "announce-sent"},
    announce_received{YType::uint32, "announce-received"},
    announce_dropped{YType::uint32, "announce-dropped"},
    sync_sent{YType::uint32, "sync-sent"},
    sync_received{YType::uint32, "sync-received"},
    sync_dropped{YType::uint32, "sync-dropped"},
    follow_up_sent{YType::uint32, "follow-up-sent"},
    follow_up_received{YType::uint32, "follow-up-received"},
    follow_up_dropped{YType::uint32, "follow-up-dropped"},
    delay_request_sent{YType::uint32, "delay-request-sent"},
    delay_request_received{YType::uint32, "delay-request-received"},
    delay_request_dropped{YType::uint32, "delay-request-dropped"},
    delay_response_sent{YType::uint32, "delay-response-sent"},
    delay_response_received{YType::uint32, "delay-response-received"},
    delay_response_dropped{YType::uint32, "delay-response-dropped"},
    peer_delay_request_sent{YType::uint32, "peer-delay-request-sent"},
    peer_delay_request_received{YType::uint32, "peer-delay-request-received"},
    peer_delay_request_dropped{YType::uint32, "peer-delay-request-dropped"},
    peer_delay_response_sent{YType::uint32, "peer-delay-response-sent"},
    peer_delay_response_received{YType::uint32, "peer-delay-response-received"},
    peer_delay_response_dropped{YType::uint32, "peer-delay-response-dropped"},
    peer_delay_response_follow_up_sent{YType::uint32, "peer-delay-response-follow-up-sent"},
    peer_delay_response_follow_up_received{YType::uint32, "peer-delay-response-follow-up-received"},
    peer_delay_response_follow_up_dropped{YType::uint32, "peer-delay-response-follow-up-dropped"},
    signaling_sent{YType::uint32, "signaling-sent"},
    signaling_received{YType::uint32, "signaling-received"},
    signaling_dropped{YType::uint32, "signaling-dropped"},
    management_sent{YType::uint32, "management-sent"},
    management_received{YType::uint32, "management-received"},
    management_dropped{YType::uint32, "management-dropped"},
    other_packets_sent{YType::uint32, "other-packets-sent"},
    other_packets_received{YType::uint32, "other-packets-received"},
    other_packets_dropped{YType::uint32, "other-packets-dropped"},
    total_packets_sent{YType::uint32, "total-packets-sent"},
    total_packets_received{YType::uint32, "total-packets-received"},
    total_packets_dropped{YType::uint32, "total-packets-dropped"}
{

    yang_name = "counters"; yang_parent_name = "interface-packet-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::~Counters()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::has_data() const
{
    if (is_presence_container) return true;
    return announce_sent.is_set
	|| announce_received.is_set
	|| announce_dropped.is_set
	|| sync_sent.is_set
	|| sync_received.is_set
	|| sync_dropped.is_set
	|| follow_up_sent.is_set
	|| follow_up_received.is_set
	|| follow_up_dropped.is_set
	|| delay_request_sent.is_set
	|| delay_request_received.is_set
	|| delay_request_dropped.is_set
	|| delay_response_sent.is_set
	|| delay_response_received.is_set
	|| delay_response_dropped.is_set
	|| peer_delay_request_sent.is_set
	|| peer_delay_request_received.is_set
	|| peer_delay_request_dropped.is_set
	|| peer_delay_response_sent.is_set
	|| peer_delay_response_received.is_set
	|| peer_delay_response_dropped.is_set
	|| peer_delay_response_follow_up_sent.is_set
	|| peer_delay_response_follow_up_received.is_set
	|| peer_delay_response_follow_up_dropped.is_set
	|| signaling_sent.is_set
	|| signaling_received.is_set
	|| signaling_dropped.is_set
	|| management_sent.is_set
	|| management_received.is_set
	|| management_dropped.is_set
	|| other_packets_sent.is_set
	|| other_packets_received.is_set
	|| other_packets_dropped.is_set
	|| total_packets_sent.is_set
	|| total_packets_received.is_set
	|| total_packets_dropped.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_sent.yfilter)
	|| ydk::is_set(announce_received.yfilter)
	|| ydk::is_set(announce_dropped.yfilter)
	|| ydk::is_set(sync_sent.yfilter)
	|| ydk::is_set(sync_received.yfilter)
	|| ydk::is_set(sync_dropped.yfilter)
	|| ydk::is_set(follow_up_sent.yfilter)
	|| ydk::is_set(follow_up_received.yfilter)
	|| ydk::is_set(follow_up_dropped.yfilter)
	|| ydk::is_set(delay_request_sent.yfilter)
	|| ydk::is_set(delay_request_received.yfilter)
	|| ydk::is_set(delay_request_dropped.yfilter)
	|| ydk::is_set(delay_response_sent.yfilter)
	|| ydk::is_set(delay_response_received.yfilter)
	|| ydk::is_set(delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_request_sent.yfilter)
	|| ydk::is_set(peer_delay_request_received.yfilter)
	|| ydk::is_set(peer_delay_request_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_sent.yfilter)
	|| ydk::is_set(peer_delay_response_received.yfilter)
	|| ydk::is_set(peer_delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_sent.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_received.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_dropped.yfilter)
	|| ydk::is_set(signaling_sent.yfilter)
	|| ydk::is_set(signaling_received.yfilter)
	|| ydk::is_set(signaling_dropped.yfilter)
	|| ydk::is_set(management_sent.yfilter)
	|| ydk::is_set(management_received.yfilter)
	|| ydk::is_set(management_dropped.yfilter)
	|| ydk::is_set(other_packets_sent.yfilter)
	|| ydk::is_set(other_packets_received.yfilter)
	|| ydk::is_set(other_packets_dropped.yfilter)
	|| ydk::is_set(total_packets_sent.yfilter)
	|| ydk::is_set(total_packets_received.yfilter)
	|| ydk::is_set(total_packets_dropped.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_sent.is_set || is_set(announce_sent.yfilter)) leaf_name_data.push_back(announce_sent.get_name_leafdata());
    if (announce_received.is_set || is_set(announce_received.yfilter)) leaf_name_data.push_back(announce_received.get_name_leafdata());
    if (announce_dropped.is_set || is_set(announce_dropped.yfilter)) leaf_name_data.push_back(announce_dropped.get_name_leafdata());
    if (sync_sent.is_set || is_set(sync_sent.yfilter)) leaf_name_data.push_back(sync_sent.get_name_leafdata());
    if (sync_received.is_set || is_set(sync_received.yfilter)) leaf_name_data.push_back(sync_received.get_name_leafdata());
    if (sync_dropped.is_set || is_set(sync_dropped.yfilter)) leaf_name_data.push_back(sync_dropped.get_name_leafdata());
    if (follow_up_sent.is_set || is_set(follow_up_sent.yfilter)) leaf_name_data.push_back(follow_up_sent.get_name_leafdata());
    if (follow_up_received.is_set || is_set(follow_up_received.yfilter)) leaf_name_data.push_back(follow_up_received.get_name_leafdata());
    if (follow_up_dropped.is_set || is_set(follow_up_dropped.yfilter)) leaf_name_data.push_back(follow_up_dropped.get_name_leafdata());
    if (delay_request_sent.is_set || is_set(delay_request_sent.yfilter)) leaf_name_data.push_back(delay_request_sent.get_name_leafdata());
    if (delay_request_received.is_set || is_set(delay_request_received.yfilter)) leaf_name_data.push_back(delay_request_received.get_name_leafdata());
    if (delay_request_dropped.is_set || is_set(delay_request_dropped.yfilter)) leaf_name_data.push_back(delay_request_dropped.get_name_leafdata());
    if (delay_response_sent.is_set || is_set(delay_response_sent.yfilter)) leaf_name_data.push_back(delay_response_sent.get_name_leafdata());
    if (delay_response_received.is_set || is_set(delay_response_received.yfilter)) leaf_name_data.push_back(delay_response_received.get_name_leafdata());
    if (delay_response_dropped.is_set || is_set(delay_response_dropped.yfilter)) leaf_name_data.push_back(delay_response_dropped.get_name_leafdata());
    if (peer_delay_request_sent.is_set || is_set(peer_delay_request_sent.yfilter)) leaf_name_data.push_back(peer_delay_request_sent.get_name_leafdata());
    if (peer_delay_request_received.is_set || is_set(peer_delay_request_received.yfilter)) leaf_name_data.push_back(peer_delay_request_received.get_name_leafdata());
    if (peer_delay_request_dropped.is_set || is_set(peer_delay_request_dropped.yfilter)) leaf_name_data.push_back(peer_delay_request_dropped.get_name_leafdata());
    if (peer_delay_response_sent.is_set || is_set(peer_delay_response_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_sent.get_name_leafdata());
    if (peer_delay_response_received.is_set || is_set(peer_delay_response_received.yfilter)) leaf_name_data.push_back(peer_delay_response_received.get_name_leafdata());
    if (peer_delay_response_dropped.is_set || is_set(peer_delay_response_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_sent.is_set || is_set(peer_delay_response_follow_up_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_sent.get_name_leafdata());
    if (peer_delay_response_follow_up_received.is_set || is_set(peer_delay_response_follow_up_received.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_received.get_name_leafdata());
    if (peer_delay_response_follow_up_dropped.is_set || is_set(peer_delay_response_follow_up_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_dropped.get_name_leafdata());
    if (signaling_sent.is_set || is_set(signaling_sent.yfilter)) leaf_name_data.push_back(signaling_sent.get_name_leafdata());
    if (signaling_received.is_set || is_set(signaling_received.yfilter)) leaf_name_data.push_back(signaling_received.get_name_leafdata());
    if (signaling_dropped.is_set || is_set(signaling_dropped.yfilter)) leaf_name_data.push_back(signaling_dropped.get_name_leafdata());
    if (management_sent.is_set || is_set(management_sent.yfilter)) leaf_name_data.push_back(management_sent.get_name_leafdata());
    if (management_received.is_set || is_set(management_received.yfilter)) leaf_name_data.push_back(management_received.get_name_leafdata());
    if (management_dropped.is_set || is_set(management_dropped.yfilter)) leaf_name_data.push_back(management_dropped.get_name_leafdata());
    if (other_packets_sent.is_set || is_set(other_packets_sent.yfilter)) leaf_name_data.push_back(other_packets_sent.get_name_leafdata());
    if (other_packets_received.is_set || is_set(other_packets_received.yfilter)) leaf_name_data.push_back(other_packets_received.get_name_leafdata());
    if (other_packets_dropped.is_set || is_set(other_packets_dropped.yfilter)) leaf_name_data.push_back(other_packets_dropped.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.yfilter)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.yfilter)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_packets_dropped.is_set || is_set(total_packets_dropped.yfilter)) leaf_name_data.push_back(total_packets_dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-sent")
    {
        announce_sent = value;
        announce_sent.value_namespace = name_space;
        announce_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-received")
    {
        announce_received = value;
        announce_received.value_namespace = name_space;
        announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-dropped")
    {
        announce_dropped = value;
        announce_dropped.value_namespace = name_space;
        announce_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-sent")
    {
        sync_sent = value;
        sync_sent.value_namespace = name_space;
        sync_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-received")
    {
        sync_received = value;
        sync_received.value_namespace = name_space;
        sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped = value;
        sync_dropped.value_namespace = name_space;
        sync_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent = value;
        follow_up_sent.value_namespace = name_space;
        follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received = value;
        follow_up_received.value_namespace = name_space;
        follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped = value;
        follow_up_dropped.value_namespace = name_space;
        follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent = value;
        delay_request_sent.value_namespace = name_space;
        delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received = value;
        delay_request_received.value_namespace = name_space;
        delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped = value;
        delay_request_dropped.value_namespace = name_space;
        delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent = value;
        delay_response_sent.value_namespace = name_space;
        delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received = value;
        delay_response_received.value_namespace = name_space;
        delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped = value;
        delay_response_dropped.value_namespace = name_space;
        delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent = value;
        peer_delay_request_sent.value_namespace = name_space;
        peer_delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received = value;
        peer_delay_request_received.value_namespace = name_space;
        peer_delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped = value;
        peer_delay_request_dropped.value_namespace = name_space;
        peer_delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent = value;
        peer_delay_response_sent.value_namespace = name_space;
        peer_delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received = value;
        peer_delay_response_received.value_namespace = name_space;
        peer_delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped = value;
        peer_delay_response_dropped.value_namespace = name_space;
        peer_delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent = value;
        peer_delay_response_follow_up_sent.value_namespace = name_space;
        peer_delay_response_follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received = value;
        peer_delay_response_follow_up_received.value_namespace = name_space;
        peer_delay_response_follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped = value;
        peer_delay_response_follow_up_dropped.value_namespace = name_space;
        peer_delay_response_follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent = value;
        signaling_sent.value_namespace = name_space;
        signaling_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-received")
    {
        signaling_received = value;
        signaling_received.value_namespace = name_space;
        signaling_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped = value;
        signaling_dropped.value_namespace = name_space;
        signaling_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-sent")
    {
        management_sent = value;
        management_sent.value_namespace = name_space;
        management_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-received")
    {
        management_received = value;
        management_received.value_namespace = name_space;
        management_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-dropped")
    {
        management_dropped = value;
        management_dropped.value_namespace = name_space;
        management_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent = value;
        other_packets_sent.value_namespace = name_space;
        other_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received = value;
        other_packets_received.value_namespace = name_space;
        other_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped = value;
        other_packets_dropped.value_namespace = name_space;
        other_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
        total_packets_sent.value_namespace = name_space;
        total_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
        total_packets_received.value_namespace = name_space;
        total_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped = value;
        total_packets_dropped.value_namespace = name_space;
        total_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-sent")
    {
        announce_sent.yfilter = yfilter;
    }
    if(value_path == "announce-received")
    {
        announce_received.yfilter = yfilter;
    }
    if(value_path == "announce-dropped")
    {
        announce_dropped.yfilter = yfilter;
    }
    if(value_path == "sync-sent")
    {
        sync_sent.yfilter = yfilter;
    }
    if(value_path == "sync-received")
    {
        sync_received.yfilter = yfilter;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped.yfilter = yfilter;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received.yfilter = yfilter;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received.yfilter = yfilter;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received.yfilter = yfilter;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent.yfilter = yfilter;
    }
    if(value_path == "signaling-received")
    {
        signaling_received.yfilter = yfilter;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped.yfilter = yfilter;
    }
    if(value_path == "management-sent")
    {
        management_sent.yfilter = yfilter;
    }
    if(value_path == "management-received")
    {
        management_received.yfilter = yfilter;
    }
    if(value_path == "management-dropped")
    {
        management_dropped.yfilter = yfilter;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent.yfilter = yfilter;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received.yfilter = yfilter;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent.yfilter = yfilter;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-sent" || name == "announce-received" || name == "announce-dropped" || name == "sync-sent" || name == "sync-received" || name == "sync-dropped" || name == "follow-up-sent" || name == "follow-up-received" || name == "follow-up-dropped" || name == "delay-request-sent" || name == "delay-request-received" || name == "delay-request-dropped" || name == "delay-response-sent" || name == "delay-response-received" || name == "delay-response-dropped" || name == "peer-delay-request-sent" || name == "peer-delay-request-received" || name == "peer-delay-request-dropped" || name == "peer-delay-response-sent" || name == "peer-delay-response-received" || name == "peer-delay-response-dropped" || name == "peer-delay-response-follow-up-sent" || name == "peer-delay-response-follow-up-received" || name == "peer-delay-response-follow-up-dropped" || name == "signaling-sent" || name == "signaling-received" || name == "signaling-dropped" || name == "management-sent" || name == "management-received" || name == "management-dropped" || name == "other-packets-sent" || name == "other-packets-received" || name == "other-packets-dropped" || name == "total-packets-sent" || name == "total-packets-received" || name == "total-packets-dropped")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::PeerCounter()
    :
    address(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address>())
    , counters(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters>())
{
    address->parent = this;
    counters->parent = this;

    yang_name = "peer-counter"; yang_parent_name = "interface-packet-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::~PeerCounter()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (counters !=  nullptr && counters->has_data());
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address>();
        }
        return address;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "counters")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "peer-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::~Address()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::~MacAddress()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::Counters()
    :
    announce_sent{YType::uint32, "announce-sent"},
    announce_received{YType::uint32, "announce-received"},
    announce_dropped{YType::uint32, "announce-dropped"},
    sync_sent{YType::uint32, "sync-sent"},
    sync_received{YType::uint32, "sync-received"},
    sync_dropped{YType::uint32, "sync-dropped"},
    follow_up_sent{YType::uint32, "follow-up-sent"},
    follow_up_received{YType::uint32, "follow-up-received"},
    follow_up_dropped{YType::uint32, "follow-up-dropped"},
    delay_request_sent{YType::uint32, "delay-request-sent"},
    delay_request_received{YType::uint32, "delay-request-received"},
    delay_request_dropped{YType::uint32, "delay-request-dropped"},
    delay_response_sent{YType::uint32, "delay-response-sent"},
    delay_response_received{YType::uint32, "delay-response-received"},
    delay_response_dropped{YType::uint32, "delay-response-dropped"},
    peer_delay_request_sent{YType::uint32, "peer-delay-request-sent"},
    peer_delay_request_received{YType::uint32, "peer-delay-request-received"},
    peer_delay_request_dropped{YType::uint32, "peer-delay-request-dropped"},
    peer_delay_response_sent{YType::uint32, "peer-delay-response-sent"},
    peer_delay_response_received{YType::uint32, "peer-delay-response-received"},
    peer_delay_response_dropped{YType::uint32, "peer-delay-response-dropped"},
    peer_delay_response_follow_up_sent{YType::uint32, "peer-delay-response-follow-up-sent"},
    peer_delay_response_follow_up_received{YType::uint32, "peer-delay-response-follow-up-received"},
    peer_delay_response_follow_up_dropped{YType::uint32, "peer-delay-response-follow-up-dropped"},
    signaling_sent{YType::uint32, "signaling-sent"},
    signaling_received{YType::uint32, "signaling-received"},
    signaling_dropped{YType::uint32, "signaling-dropped"},
    management_sent{YType::uint32, "management-sent"},
    management_received{YType::uint32, "management-received"},
    management_dropped{YType::uint32, "management-dropped"},
    other_packets_sent{YType::uint32, "other-packets-sent"},
    other_packets_received{YType::uint32, "other-packets-received"},
    other_packets_dropped{YType::uint32, "other-packets-dropped"},
    total_packets_sent{YType::uint32, "total-packets-sent"},
    total_packets_received{YType::uint32, "total-packets-received"},
    total_packets_dropped{YType::uint32, "total-packets-dropped"}
{

    yang_name = "counters"; yang_parent_name = "peer-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::~Counters()
{
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::has_data() const
{
    if (is_presence_container) return true;
    return announce_sent.is_set
	|| announce_received.is_set
	|| announce_dropped.is_set
	|| sync_sent.is_set
	|| sync_received.is_set
	|| sync_dropped.is_set
	|| follow_up_sent.is_set
	|| follow_up_received.is_set
	|| follow_up_dropped.is_set
	|| delay_request_sent.is_set
	|| delay_request_received.is_set
	|| delay_request_dropped.is_set
	|| delay_response_sent.is_set
	|| delay_response_received.is_set
	|| delay_response_dropped.is_set
	|| peer_delay_request_sent.is_set
	|| peer_delay_request_received.is_set
	|| peer_delay_request_dropped.is_set
	|| peer_delay_response_sent.is_set
	|| peer_delay_response_received.is_set
	|| peer_delay_response_dropped.is_set
	|| peer_delay_response_follow_up_sent.is_set
	|| peer_delay_response_follow_up_received.is_set
	|| peer_delay_response_follow_up_dropped.is_set
	|| signaling_sent.is_set
	|| signaling_received.is_set
	|| signaling_dropped.is_set
	|| management_sent.is_set
	|| management_received.is_set
	|| management_dropped.is_set
	|| other_packets_sent.is_set
	|| other_packets_received.is_set
	|| other_packets_dropped.is_set
	|| total_packets_sent.is_set
	|| total_packets_received.is_set
	|| total_packets_dropped.is_set;
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_sent.yfilter)
	|| ydk::is_set(announce_received.yfilter)
	|| ydk::is_set(announce_dropped.yfilter)
	|| ydk::is_set(sync_sent.yfilter)
	|| ydk::is_set(sync_received.yfilter)
	|| ydk::is_set(sync_dropped.yfilter)
	|| ydk::is_set(follow_up_sent.yfilter)
	|| ydk::is_set(follow_up_received.yfilter)
	|| ydk::is_set(follow_up_dropped.yfilter)
	|| ydk::is_set(delay_request_sent.yfilter)
	|| ydk::is_set(delay_request_received.yfilter)
	|| ydk::is_set(delay_request_dropped.yfilter)
	|| ydk::is_set(delay_response_sent.yfilter)
	|| ydk::is_set(delay_response_received.yfilter)
	|| ydk::is_set(delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_request_sent.yfilter)
	|| ydk::is_set(peer_delay_request_received.yfilter)
	|| ydk::is_set(peer_delay_request_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_sent.yfilter)
	|| ydk::is_set(peer_delay_response_received.yfilter)
	|| ydk::is_set(peer_delay_response_dropped.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_sent.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_received.yfilter)
	|| ydk::is_set(peer_delay_response_follow_up_dropped.yfilter)
	|| ydk::is_set(signaling_sent.yfilter)
	|| ydk::is_set(signaling_received.yfilter)
	|| ydk::is_set(signaling_dropped.yfilter)
	|| ydk::is_set(management_sent.yfilter)
	|| ydk::is_set(management_received.yfilter)
	|| ydk::is_set(management_dropped.yfilter)
	|| ydk::is_set(other_packets_sent.yfilter)
	|| ydk::is_set(other_packets_received.yfilter)
	|| ydk::is_set(other_packets_dropped.yfilter)
	|| ydk::is_set(total_packets_sent.yfilter)
	|| ydk::is_set(total_packets_received.yfilter)
	|| ydk::is_set(total_packets_dropped.yfilter);
}

std::string Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_sent.is_set || is_set(announce_sent.yfilter)) leaf_name_data.push_back(announce_sent.get_name_leafdata());
    if (announce_received.is_set || is_set(announce_received.yfilter)) leaf_name_data.push_back(announce_received.get_name_leafdata());
    if (announce_dropped.is_set || is_set(announce_dropped.yfilter)) leaf_name_data.push_back(announce_dropped.get_name_leafdata());
    if (sync_sent.is_set || is_set(sync_sent.yfilter)) leaf_name_data.push_back(sync_sent.get_name_leafdata());
    if (sync_received.is_set || is_set(sync_received.yfilter)) leaf_name_data.push_back(sync_received.get_name_leafdata());
    if (sync_dropped.is_set || is_set(sync_dropped.yfilter)) leaf_name_data.push_back(sync_dropped.get_name_leafdata());
    if (follow_up_sent.is_set || is_set(follow_up_sent.yfilter)) leaf_name_data.push_back(follow_up_sent.get_name_leafdata());
    if (follow_up_received.is_set || is_set(follow_up_received.yfilter)) leaf_name_data.push_back(follow_up_received.get_name_leafdata());
    if (follow_up_dropped.is_set || is_set(follow_up_dropped.yfilter)) leaf_name_data.push_back(follow_up_dropped.get_name_leafdata());
    if (delay_request_sent.is_set || is_set(delay_request_sent.yfilter)) leaf_name_data.push_back(delay_request_sent.get_name_leafdata());
    if (delay_request_received.is_set || is_set(delay_request_received.yfilter)) leaf_name_data.push_back(delay_request_received.get_name_leafdata());
    if (delay_request_dropped.is_set || is_set(delay_request_dropped.yfilter)) leaf_name_data.push_back(delay_request_dropped.get_name_leafdata());
    if (delay_response_sent.is_set || is_set(delay_response_sent.yfilter)) leaf_name_data.push_back(delay_response_sent.get_name_leafdata());
    if (delay_response_received.is_set || is_set(delay_response_received.yfilter)) leaf_name_data.push_back(delay_response_received.get_name_leafdata());
    if (delay_response_dropped.is_set || is_set(delay_response_dropped.yfilter)) leaf_name_data.push_back(delay_response_dropped.get_name_leafdata());
    if (peer_delay_request_sent.is_set || is_set(peer_delay_request_sent.yfilter)) leaf_name_data.push_back(peer_delay_request_sent.get_name_leafdata());
    if (peer_delay_request_received.is_set || is_set(peer_delay_request_received.yfilter)) leaf_name_data.push_back(peer_delay_request_received.get_name_leafdata());
    if (peer_delay_request_dropped.is_set || is_set(peer_delay_request_dropped.yfilter)) leaf_name_data.push_back(peer_delay_request_dropped.get_name_leafdata());
    if (peer_delay_response_sent.is_set || is_set(peer_delay_response_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_sent.get_name_leafdata());
    if (peer_delay_response_received.is_set || is_set(peer_delay_response_received.yfilter)) leaf_name_data.push_back(peer_delay_response_received.get_name_leafdata());
    if (peer_delay_response_dropped.is_set || is_set(peer_delay_response_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_dropped.get_name_leafdata());
    if (peer_delay_response_follow_up_sent.is_set || is_set(peer_delay_response_follow_up_sent.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_sent.get_name_leafdata());
    if (peer_delay_response_follow_up_received.is_set || is_set(peer_delay_response_follow_up_received.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_received.get_name_leafdata());
    if (peer_delay_response_follow_up_dropped.is_set || is_set(peer_delay_response_follow_up_dropped.yfilter)) leaf_name_data.push_back(peer_delay_response_follow_up_dropped.get_name_leafdata());
    if (signaling_sent.is_set || is_set(signaling_sent.yfilter)) leaf_name_data.push_back(signaling_sent.get_name_leafdata());
    if (signaling_received.is_set || is_set(signaling_received.yfilter)) leaf_name_data.push_back(signaling_received.get_name_leafdata());
    if (signaling_dropped.is_set || is_set(signaling_dropped.yfilter)) leaf_name_data.push_back(signaling_dropped.get_name_leafdata());
    if (management_sent.is_set || is_set(management_sent.yfilter)) leaf_name_data.push_back(management_sent.get_name_leafdata());
    if (management_received.is_set || is_set(management_received.yfilter)) leaf_name_data.push_back(management_received.get_name_leafdata());
    if (management_dropped.is_set || is_set(management_dropped.yfilter)) leaf_name_data.push_back(management_dropped.get_name_leafdata());
    if (other_packets_sent.is_set || is_set(other_packets_sent.yfilter)) leaf_name_data.push_back(other_packets_sent.get_name_leafdata());
    if (other_packets_received.is_set || is_set(other_packets_received.yfilter)) leaf_name_data.push_back(other_packets_received.get_name_leafdata());
    if (other_packets_dropped.is_set || is_set(other_packets_dropped.yfilter)) leaf_name_data.push_back(other_packets_dropped.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.yfilter)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.yfilter)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_packets_dropped.is_set || is_set(total_packets_dropped.yfilter)) leaf_name_data.push_back(total_packets_dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-sent")
    {
        announce_sent = value;
        announce_sent.value_namespace = name_space;
        announce_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-received")
    {
        announce_received = value;
        announce_received.value_namespace = name_space;
        announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-dropped")
    {
        announce_dropped = value;
        announce_dropped.value_namespace = name_space;
        announce_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-sent")
    {
        sync_sent = value;
        sync_sent.value_namespace = name_space;
        sync_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-received")
    {
        sync_received = value;
        sync_received.value_namespace = name_space;
        sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped = value;
        sync_dropped.value_namespace = name_space;
        sync_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent = value;
        follow_up_sent.value_namespace = name_space;
        follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received = value;
        follow_up_received.value_namespace = name_space;
        follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped = value;
        follow_up_dropped.value_namespace = name_space;
        follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent = value;
        delay_request_sent.value_namespace = name_space;
        delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received = value;
        delay_request_received.value_namespace = name_space;
        delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped = value;
        delay_request_dropped.value_namespace = name_space;
        delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent = value;
        delay_response_sent.value_namespace = name_space;
        delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received = value;
        delay_response_received.value_namespace = name_space;
        delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped = value;
        delay_response_dropped.value_namespace = name_space;
        delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent = value;
        peer_delay_request_sent.value_namespace = name_space;
        peer_delay_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received = value;
        peer_delay_request_received.value_namespace = name_space;
        peer_delay_request_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped = value;
        peer_delay_request_dropped.value_namespace = name_space;
        peer_delay_request_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent = value;
        peer_delay_response_sent.value_namespace = name_space;
        peer_delay_response_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received = value;
        peer_delay_response_received.value_namespace = name_space;
        peer_delay_response_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped = value;
        peer_delay_response_dropped.value_namespace = name_space;
        peer_delay_response_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent = value;
        peer_delay_response_follow_up_sent.value_namespace = name_space;
        peer_delay_response_follow_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received = value;
        peer_delay_response_follow_up_received.value_namespace = name_space;
        peer_delay_response_follow_up_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped = value;
        peer_delay_response_follow_up_dropped.value_namespace = name_space;
        peer_delay_response_follow_up_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent = value;
        signaling_sent.value_namespace = name_space;
        signaling_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-received")
    {
        signaling_received = value;
        signaling_received.value_namespace = name_space;
        signaling_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped = value;
        signaling_dropped.value_namespace = name_space;
        signaling_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-sent")
    {
        management_sent = value;
        management_sent.value_namespace = name_space;
        management_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-received")
    {
        management_received = value;
        management_received.value_namespace = name_space;
        management_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-dropped")
    {
        management_dropped = value;
        management_dropped.value_namespace = name_space;
        management_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent = value;
        other_packets_sent.value_namespace = name_space;
        other_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received = value;
        other_packets_received.value_namespace = name_space;
        other_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped = value;
        other_packets_dropped.value_namespace = name_space;
        other_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
        total_packets_sent.value_namespace = name_space;
        total_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
        total_packets_received.value_namespace = name_space;
        total_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped = value;
        total_packets_dropped.value_namespace = name_space;
        total_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-sent")
    {
        announce_sent.yfilter = yfilter;
    }
    if(value_path == "announce-received")
    {
        announce_received.yfilter = yfilter;
    }
    if(value_path == "announce-dropped")
    {
        announce_dropped.yfilter = yfilter;
    }
    if(value_path == "sync-sent")
    {
        sync_sent.yfilter = yfilter;
    }
    if(value_path == "sync-received")
    {
        sync_received.yfilter = yfilter;
    }
    if(value_path == "sync-dropped")
    {
        sync_dropped.yfilter = yfilter;
    }
    if(value_path == "follow-up-sent")
    {
        follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "follow-up-received")
    {
        follow_up_received.yfilter = yfilter;
    }
    if(value_path == "follow-up-dropped")
    {
        follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-request-sent")
    {
        delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "delay-request-received")
    {
        delay_request_received.yfilter = yfilter;
    }
    if(value_path == "delay-request-dropped")
    {
        delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "delay-response-sent")
    {
        delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "delay-response-received")
    {
        delay_response_received.yfilter = yfilter;
    }
    if(value_path == "delay-response-dropped")
    {
        delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-sent")
    {
        peer_delay_request_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-received")
    {
        peer_delay_request_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-request-dropped")
    {
        peer_delay_request_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-sent")
    {
        peer_delay_response_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-received")
    {
        peer_delay_response_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-dropped")
    {
        peer_delay_response_dropped.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-sent")
    {
        peer_delay_response_follow_up_sent.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-received")
    {
        peer_delay_response_follow_up_received.yfilter = yfilter;
    }
    if(value_path == "peer-delay-response-follow-up-dropped")
    {
        peer_delay_response_follow_up_dropped.yfilter = yfilter;
    }
    if(value_path == "signaling-sent")
    {
        signaling_sent.yfilter = yfilter;
    }
    if(value_path == "signaling-received")
    {
        signaling_received.yfilter = yfilter;
    }
    if(value_path == "signaling-dropped")
    {
        signaling_dropped.yfilter = yfilter;
    }
    if(value_path == "management-sent")
    {
        management_sent.yfilter = yfilter;
    }
    if(value_path == "management-received")
    {
        management_received.yfilter = yfilter;
    }
    if(value_path == "management-dropped")
    {
        management_dropped.yfilter = yfilter;
    }
    if(value_path == "other-packets-sent")
    {
        other_packets_sent.yfilter = yfilter;
    }
    if(value_path == "other-packets-received")
    {
        other_packets_received.yfilter = yfilter;
    }
    if(value_path == "other-packets-dropped")
    {
        other_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent.yfilter = yfilter;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-packets-dropped")
    {
        total_packets_dropped.yfilter = yfilter;
    }
}

bool Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-sent" || name == "announce-received" || name == "announce-dropped" || name == "sync-sent" || name == "sync-received" || name == "sync-dropped" || name == "follow-up-sent" || name == "follow-up-received" || name == "follow-up-dropped" || name == "delay-request-sent" || name == "delay-request-received" || name == "delay-request-dropped" || name == "delay-response-sent" || name == "delay-response-received" || name == "delay-response-dropped" || name == "peer-delay-request-sent" || name == "peer-delay-request-received" || name == "peer-delay-request-dropped" || name == "peer-delay-response-sent" || name == "peer-delay-response-received" || name == "peer-delay-response-dropped" || name == "peer-delay-response-follow-up-sent" || name == "peer-delay-response-follow-up-received" || name == "peer-delay-response-follow-up-dropped" || name == "signaling-sent" || name == "signaling-received" || name == "signaling-dropped" || name == "management-sent" || name == "management-received" || name == "management-dropped" || name == "other-packets-sent" || name == "other-packets-received" || name == "other-packets-dropped" || name == "total-packets-sent" || name == "total-packets-received" || name == "total-packets-dropped")
        return true;
    return false;
}

Ptp::AdvertisedClock::AdvertisedClock()
    :
    domain{YType::uint8, "domain"},
    time_source_configured{YType::boolean, "time-source-configured"},
    received_time_source{YType::enumeration, "received-time-source"},
    timescale_configured{YType::boolean, "timescale-configured"},
    received_timescale{YType::enumeration, "received-timescale"}
        ,
    clock_properties(std::make_shared<Ptp::AdvertisedClock::ClockProperties>())
{
    clock_properties->parent = this;

    yang_name = "advertised-clock"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::AdvertisedClock::~AdvertisedClock()
{
}

bool Ptp::AdvertisedClock::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| time_source_configured.is_set
	|| received_time_source.is_set
	|| timescale_configured.is_set
	|| received_timescale.is_set
	|| (clock_properties !=  nullptr && clock_properties->has_data());
}

bool Ptp::AdvertisedClock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(time_source_configured.yfilter)
	|| ydk::is_set(received_time_source.yfilter)
	|| ydk::is_set(timescale_configured.yfilter)
	|| ydk::is_set(received_timescale.yfilter)
	|| (clock_properties !=  nullptr && clock_properties->has_operation());
}

std::string Ptp::AdvertisedClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (time_source_configured.is_set || is_set(time_source_configured.yfilter)) leaf_name_data.push_back(time_source_configured.get_name_leafdata());
    if (received_time_source.is_set || is_set(received_time_source.yfilter)) leaf_name_data.push_back(received_time_source.get_name_leafdata());
    if (timescale_configured.is_set || is_set(timescale_configured.yfilter)) leaf_name_data.push_back(timescale_configured.get_name_leafdata());
    if (received_timescale.is_set || is_set(received_timescale.yfilter)) leaf_name_data.push_back(received_timescale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::AdvertisedClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-properties")
    {
        if(clock_properties == nullptr)
        {
            clock_properties = std::make_shared<Ptp::AdvertisedClock::ClockProperties>();
        }
        return clock_properties;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::AdvertisedClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_properties != nullptr)
    {
        _children["clock-properties"] = clock_properties;
    }

    return _children;
}

void Ptp::AdvertisedClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source-configured")
    {
        time_source_configured = value;
        time_source_configured.value_namespace = name_space;
        time_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-time-source")
    {
        received_time_source = value;
        received_time_source.value_namespace = name_space;
        received_time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale-configured")
    {
        timescale_configured = value;
        timescale_configured.value_namespace = name_space;
        timescale_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-timescale")
    {
        received_timescale = value;
        received_timescale.value_namespace = name_space;
        received_timescale.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "time-source-configured")
    {
        time_source_configured.yfilter = yfilter;
    }
    if(value_path == "received-time-source")
    {
        received_time_source.yfilter = yfilter;
    }
    if(value_path == "timescale-configured")
    {
        timescale_configured.yfilter = yfilter;
    }
    if(value_path == "received-timescale")
    {
        received_timescale.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-properties" || name == "domain" || name == "time-source-configured" || name == "received-time-source" || name == "timescale-configured" || name == "received-timescale")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::ClockProperties()
    :
    clock_id{YType::uint64, "clock-id"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    class_{YType::uint8, "class"},
    accuracy{YType::uint8, "accuracy"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"}
        ,
    utc_offset(std::make_shared<Ptp::AdvertisedClock::ClockProperties::UtcOffset>())
    , receiver(std::make_shared<Ptp::AdvertisedClock::ClockProperties::Receiver>())
    , sender(std::make_shared<Ptp::AdvertisedClock::ClockProperties::Sender>())
{
    utc_offset->parent = this;
    receiver->parent = this;
    sender->parent = this;

    yang_name = "clock-properties"; yang_parent_name = "advertised-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::AdvertisedClock::ClockProperties::~ClockProperties()
{
}

bool Ptp::AdvertisedClock::ClockProperties::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| class_.is_set
	|| accuracy.is_set
	|| offset_log_variance.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| frequency_traceable.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| (utc_offset !=  nullptr && utc_offset->has_data())
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data());
}

bool Ptp::AdvertisedClock::ClockProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| (utc_offset !=  nullptr && utc_offset->has_operation())
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation());
}

std::string Ptp::AdvertisedClock::ClockProperties::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::AdvertisedClock::ClockProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::AdvertisedClock::ClockProperties::UtcOffset>();
        }
        return utc_offset;
    }

    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::AdvertisedClock::ClockProperties::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::AdvertisedClock::ClockProperties::Sender>();
        }
        return sender;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::AdvertisedClock::ClockProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utc_offset != nullptr)
    {
        _children["utc-offset"] = utc_offset;
    }

    if(receiver != nullptr)
    {
        _children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        _children["sender"] = sender;
    }

    return _children;
}

void Ptp::AdvertisedClock::ClockProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utc-offset" || name == "receiver" || name == "sender" || name == "clock-id" || name == "priority1" || name == "priority2" || name == "class" || name == "accuracy" || name == "offset-log-variance" || name == "steps-removed" || name == "time-source" || name == "frequency-traceable" || name == "time-traceable" || name == "timescale" || name == "leap-seconds" || name == "local" || name == "configured-clock-class" || name == "configured-priority")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::AdvertisedClock::ClockProperties::UtcOffset::~UtcOffset()
{
}

bool Ptp::AdvertisedClock::ClockProperties::UtcOffset::has_data() const
{
    if (is_presence_container) return true;
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::AdvertisedClock::ClockProperties::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::AdvertisedClock::ClockProperties::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::AdvertisedClock::ClockProperties::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::AdvertisedClock::ClockProperties::Receiver::~Receiver()
{
}

bool Ptp::AdvertisedClock::ClockProperties::Receiver::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::AdvertisedClock::ClockProperties::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::AdvertisedClock::ClockProperties::Receiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::AdvertisedClock::ClockProperties::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::AdvertisedClock::ClockProperties::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::AdvertisedClock::ClockProperties::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::AdvertisedClock::ClockProperties::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::AdvertisedClock::ClockProperties::Sender::~Sender()
{
}

bool Ptp::AdvertisedClock::ClockProperties::Sender::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::AdvertisedClock::ClockProperties::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::AdvertisedClock::ClockProperties::Sender::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/advertised-clock/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::AdvertisedClock::ClockProperties::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::AdvertisedClock::ClockProperties::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::AdvertisedClock::ClockProperties::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::AdvertisedClock::ClockProperties::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::AdvertisedClock::ClockProperties::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::AdvertisedClock::ClockProperties::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::AdvertisedClock::ClockProperties::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Interfaces::~Interfaces()
{
}

bool Ptp::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Ptp::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ptp::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    port_state{YType::enumeration, "port-state"},
    port_number{YType::uint16, "port-number"},
    line_state{YType::enumeration, "line-state"},
    encapsulation{YType::enumeration, "encapsulation"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv4_address{YType::str, "ipv4-address"},
    two_step{YType::boolean, "two-step"},
    communication_model{YType::enumeration, "communication-model"},
    log_sync_interval{YType::int32, "log-sync-interval"},
    log_announce_interval{YType::int32, "log-announce-interval"},
    announce_timeout{YType::uint32, "announce-timeout"},
    log_min_delay_request_interval{YType::int32, "log-min-delay-request-interval"},
    configured_port_state{YType::enumeration, "configured-port-state"},
    supports_unicast{YType::boolean, "supports-unicast"},
    supports_master{YType::boolean, "supports-master"},
    supports_one_step{YType::boolean, "supports-one-step"},
    supports_two_step{YType::boolean, "supports-two-step"},
    supports_ethernet{YType::boolean, "supports-ethernet"},
    supports_multicast{YType::boolean, "supports-multicast"},
    supports_ipv4{YType::boolean, "supports-ipv4"},
    supports_ipv6{YType::boolean, "supports-ipv6"},
    supports_slave{YType::boolean, "supports-slave"},
    supports_source_ip{YType::boolean, "supports-source-ip"},
    max_sync_rate{YType::uint8, "max-sync-rate"},
    event_cos{YType::uint32, "event-cos"},
    general_cos{YType::uint32, "general-cos"},
    event_dscp{YType::uint32, "event-dscp"},
    general_dscp{YType::uint32, "general-dscp"},
    unicast_peers{YType::uint32, "unicast-peers"},
    local_priority{YType::uint8, "local-priority"},
    signal_fail{YType::boolean, "signal-fail"},
    profile_interop{YType::boolean, "profile-interop"},
    interop_domain{YType::uint8, "interop-domain"},
    interop_profile{YType::enumeration, "interop-profile"}
        ,
    ipv6_address_array(std::make_shared<Ptp::Interfaces::Interface::Ipv6AddressArray>())
    , ipv4_address_array(std::make_shared<Ptp::Interfaces::Interface::Ipv4AddressArray>())
    , mac_address(std::make_shared<Ptp::Interfaces::Interface::MacAddress>())
    , ingress_conversion(std::make_shared<Ptp::Interfaces::Interface::IngressConversion>())
    , egress_conversion(std::make_shared<Ptp::Interfaces::Interface::EgressConversion>())
    , master_table(this, {})
{
    ipv6_address_array->parent = this;
    ipv4_address_array->parent = this;
    mac_address->parent = this;
    ingress_conversion->parent = this;
    egress_conversion->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Interfaces::Interface::~Interface()
{
}

bool Ptp::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<master_table.len(); index++)
    {
        if(master_table[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| port_state.is_set
	|| port_number.is_set
	|| line_state.is_set
	|| encapsulation.is_set
	|| ipv6_address.is_set
	|| ipv4_address.is_set
	|| two_step.is_set
	|| communication_model.is_set
	|| log_sync_interval.is_set
	|| log_announce_interval.is_set
	|| announce_timeout.is_set
	|| log_min_delay_request_interval.is_set
	|| configured_port_state.is_set
	|| supports_unicast.is_set
	|| supports_master.is_set
	|| supports_one_step.is_set
	|| supports_two_step.is_set
	|| supports_ethernet.is_set
	|| supports_multicast.is_set
	|| supports_ipv4.is_set
	|| supports_ipv6.is_set
	|| supports_slave.is_set
	|| supports_source_ip.is_set
	|| max_sync_rate.is_set
	|| event_cos.is_set
	|| general_cos.is_set
	|| event_dscp.is_set
	|| general_dscp.is_set
	|| unicast_peers.is_set
	|| local_priority.is_set
	|| signal_fail.is_set
	|| profile_interop.is_set
	|| interop_domain.is_set
	|| interop_profile.is_set
	|| (ipv6_address_array !=  nullptr && ipv6_address_array->has_data())
	|| (ipv4_address_array !=  nullptr && ipv4_address_array->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_data())
	|| (egress_conversion !=  nullptr && egress_conversion->has_data());
}

bool Ptp::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<master_table.len(); index++)
    {
        if(master_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_step.yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(log_sync_interval.yfilter)
	|| ydk::is_set(log_announce_interval.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(log_min_delay_request_interval.yfilter)
	|| ydk::is_set(configured_port_state.yfilter)
	|| ydk::is_set(supports_unicast.yfilter)
	|| ydk::is_set(supports_master.yfilter)
	|| ydk::is_set(supports_one_step.yfilter)
	|| ydk::is_set(supports_two_step.yfilter)
	|| ydk::is_set(supports_ethernet.yfilter)
	|| ydk::is_set(supports_multicast.yfilter)
	|| ydk::is_set(supports_ipv4.yfilter)
	|| ydk::is_set(supports_ipv6.yfilter)
	|| ydk::is_set(supports_slave.yfilter)
	|| ydk::is_set(supports_source_ip.yfilter)
	|| ydk::is_set(max_sync_rate.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(unicast_peers.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(signal_fail.yfilter)
	|| ydk::is_set(profile_interop.yfilter)
	|| ydk::is_set(interop_domain.yfilter)
	|| ydk::is_set(interop_profile.yfilter)
	|| (ipv6_address_array !=  nullptr && ipv6_address_array->has_operation())
	|| (ipv4_address_array !=  nullptr && ipv4_address_array->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_operation())
	|| (egress_conversion !=  nullptr && egress_conversion->has_operation());
}

std::string Ptp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_step.is_set || is_set(two_step.yfilter)) leaf_name_data.push_back(two_step.get_name_leafdata());
    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (log_sync_interval.is_set || is_set(log_sync_interval.yfilter)) leaf_name_data.push_back(log_sync_interval.get_name_leafdata());
    if (log_announce_interval.is_set || is_set(log_announce_interval.yfilter)) leaf_name_data.push_back(log_announce_interval.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (log_min_delay_request_interval.is_set || is_set(log_min_delay_request_interval.yfilter)) leaf_name_data.push_back(log_min_delay_request_interval.get_name_leafdata());
    if (configured_port_state.is_set || is_set(configured_port_state.yfilter)) leaf_name_data.push_back(configured_port_state.get_name_leafdata());
    if (supports_unicast.is_set || is_set(supports_unicast.yfilter)) leaf_name_data.push_back(supports_unicast.get_name_leafdata());
    if (supports_master.is_set || is_set(supports_master.yfilter)) leaf_name_data.push_back(supports_master.get_name_leafdata());
    if (supports_one_step.is_set || is_set(supports_one_step.yfilter)) leaf_name_data.push_back(supports_one_step.get_name_leafdata());
    if (supports_two_step.is_set || is_set(supports_two_step.yfilter)) leaf_name_data.push_back(supports_two_step.get_name_leafdata());
    if (supports_ethernet.is_set || is_set(supports_ethernet.yfilter)) leaf_name_data.push_back(supports_ethernet.get_name_leafdata());
    if (supports_multicast.is_set || is_set(supports_multicast.yfilter)) leaf_name_data.push_back(supports_multicast.get_name_leafdata());
    if (supports_ipv4.is_set || is_set(supports_ipv4.yfilter)) leaf_name_data.push_back(supports_ipv4.get_name_leafdata());
    if (supports_ipv6.is_set || is_set(supports_ipv6.yfilter)) leaf_name_data.push_back(supports_ipv6.get_name_leafdata());
    if (supports_slave.is_set || is_set(supports_slave.yfilter)) leaf_name_data.push_back(supports_slave.get_name_leafdata());
    if (supports_source_ip.is_set || is_set(supports_source_ip.yfilter)) leaf_name_data.push_back(supports_source_ip.get_name_leafdata());
    if (max_sync_rate.is_set || is_set(max_sync_rate.yfilter)) leaf_name_data.push_back(max_sync_rate.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (unicast_peers.is_set || is_set(unicast_peers.yfilter)) leaf_name_data.push_back(unicast_peers.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());
    if (profile_interop.is_set || is_set(profile_interop.yfilter)) leaf_name_data.push_back(profile_interop.get_name_leafdata());
    if (interop_domain.is_set || is_set(interop_domain.yfilter)) leaf_name_data.push_back(interop_domain.get_name_leafdata());
    if (interop_profile.is_set || is_set(interop_profile.yfilter)) leaf_name_data.push_back(interop_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-address-array")
    {
        if(ipv6_address_array == nullptr)
        {
            ipv6_address_array = std::make_shared<Ptp::Interfaces::Interface::Ipv6AddressArray>();
        }
        return ipv6_address_array;
    }

    if(child_yang_name == "ipv4-address-array")
    {
        if(ipv4_address_array == nullptr)
        {
            ipv4_address_array = std::make_shared<Ptp::Interfaces::Interface::Ipv4AddressArray>();
        }
        return ipv4_address_array;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Interfaces::Interface::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ingress-conversion")
    {
        if(ingress_conversion == nullptr)
        {
            ingress_conversion = std::make_shared<Ptp::Interfaces::Interface::IngressConversion>();
        }
        return ingress_conversion;
    }

    if(child_yang_name == "egress-conversion")
    {
        if(egress_conversion == nullptr)
        {
            egress_conversion = std::make_shared<Ptp::Interfaces::Interface::EgressConversion>();
        }
        return egress_conversion;
    }

    if(child_yang_name == "master-table")
    {
        auto ent_ = std::make_shared<Ptp::Interfaces::Interface::MasterTable>();
        ent_->parent = this;
        master_table.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_address_array != nullptr)
    {
        _children["ipv6-address-array"] = ipv6_address_array;
    }

    if(ipv4_address_array != nullptr)
    {
        _children["ipv4-address-array"] = ipv4_address_array;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ingress_conversion != nullptr)
    {
        _children["ingress-conversion"] = ingress_conversion;
    }

    if(egress_conversion != nullptr)
    {
        _children["egress-conversion"] = egress_conversion;
    }

    count_ = 0;
    for (auto ent_ : master_table.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-step")
    {
        two_step = value;
        two_step.value_namespace = name_space;
        two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval = value;
        log_sync_interval.value_namespace = name_space;
        log_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval = value;
        log_announce_interval.value_namespace = name_space;
        log_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval = value;
        log_min_delay_request_interval.value_namespace = name_space;
        log_min_delay_request_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state = value;
        configured_port_state.value_namespace = name_space;
        configured_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-unicast")
    {
        supports_unicast = value;
        supports_unicast.value_namespace = name_space;
        supports_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-master")
    {
        supports_master = value;
        supports_master.value_namespace = name_space;
        supports_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step = value;
        supports_one_step.value_namespace = name_space;
        supports_one_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step = value;
        supports_two_step.value_namespace = name_space;
        supports_two_step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet = value;
        supports_ethernet.value_namespace = name_space;
        supports_ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast = value;
        supports_multicast.value_namespace = name_space;
        supports_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ipv4")
    {
        supports_ipv4 = value;
        supports_ipv4.value_namespace = name_space;
        supports_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6 = value;
        supports_ipv6.value_namespace = name_space;
        supports_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-slave")
    {
        supports_slave = value;
        supports_slave.value_namespace = name_space;
        supports_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip = value;
        supports_source_ip.value_namespace = name_space;
        supports_source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate = value;
        max_sync_rate.value_namespace = name_space;
        max_sync_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers = value;
        unicast_peers.value_namespace = name_space;
        unicast_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-interop")
    {
        profile_interop = value;
        profile_interop.value_namespace = name_space;
        profile_interop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop-domain")
    {
        interop_domain = value;
        interop_domain.value_namespace = name_space;
        interop_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop-profile")
    {
        interop_profile = value;
        interop_profile.value_namespace = name_space;
        interop_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-step")
    {
        two_step.yfilter = yfilter;
    }
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval.yfilter = yfilter;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "log-min-delay-request-interval")
    {
        log_min_delay_request_interval.yfilter = yfilter;
    }
    if(value_path == "configured-port-state")
    {
        configured_port_state.yfilter = yfilter;
    }
    if(value_path == "supports-unicast")
    {
        supports_unicast.yfilter = yfilter;
    }
    if(value_path == "supports-master")
    {
        supports_master.yfilter = yfilter;
    }
    if(value_path == "supports-one-step")
    {
        supports_one_step.yfilter = yfilter;
    }
    if(value_path == "supports-two-step")
    {
        supports_two_step.yfilter = yfilter;
    }
    if(value_path == "supports-ethernet")
    {
        supports_ethernet.yfilter = yfilter;
    }
    if(value_path == "supports-multicast")
    {
        supports_multicast.yfilter = yfilter;
    }
    if(value_path == "supports-ipv4")
    {
        supports_ipv4.yfilter = yfilter;
    }
    if(value_path == "supports-ipv6")
    {
        supports_ipv6.yfilter = yfilter;
    }
    if(value_path == "supports-slave")
    {
        supports_slave.yfilter = yfilter;
    }
    if(value_path == "supports-source-ip")
    {
        supports_source_ip.yfilter = yfilter;
    }
    if(value_path == "max-sync-rate")
    {
        max_sync_rate.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "unicast-peers")
    {
        unicast_peers.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
    if(value_path == "profile-interop")
    {
        profile_interop.yfilter = yfilter;
    }
    if(value_path == "interop-domain")
    {
        interop_domain.yfilter = yfilter;
    }
    if(value_path == "interop-profile")
    {
        interop_profile.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address-array" || name == "ipv4-address-array" || name == "mac-address" || name == "ingress-conversion" || name == "egress-conversion" || name == "master-table" || name == "interface-name" || name == "port-state" || name == "port-number" || name == "line-state" || name == "encapsulation" || name == "ipv6-address" || name == "ipv4-address" || name == "two-step" || name == "communication-model" || name == "log-sync-interval" || name == "log-announce-interval" || name == "announce-timeout" || name == "log-min-delay-request-interval" || name == "configured-port-state" || name == "supports-unicast" || name == "supports-master" || name == "supports-one-step" || name == "supports-two-step" || name == "supports-ethernet" || name == "supports-multicast" || name == "supports-ipv4" || name == "supports-ipv6" || name == "supports-slave" || name == "supports-source-ip" || name == "max-sync-rate" || name == "event-cos" || name == "general-cos" || name == "event-dscp" || name == "general-dscp" || name == "unicast-peers" || name == "local-priority" || name == "signal-fail" || name == "profile-interop" || name == "interop-domain" || name == "interop-profile")
        return true;
    return false;
}

Ptp::Interfaces::Interface::Ipv6AddressArray::Ipv6AddressArray()
    :
    addr{YType::str, "addr"}
{

    yang_name = "ipv6-address-array"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::Ipv6AddressArray::~Ipv6AddressArray()
{
}

bool Ptp::Interfaces::Interface::Ipv6AddressArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ptp::Interfaces::Interface::Ipv6AddressArray::has_operation() const
{
    for (auto const & leaf : addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Ptp::Interfaces::Interface::Ipv6AddressArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::Ipv6AddressArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto addr_name_datas = addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), addr_name_datas.begin(), addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::Ipv6AddressArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::Ipv6AddressArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Interfaces::Interface::Ipv6AddressArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr.append(value);
    }
}

void Ptp::Interfaces::Interface::Ipv6AddressArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::Ipv6AddressArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

Ptp::Interfaces::Interface::Ipv4AddressArray::Ipv4AddressArray()
    :
    addr{YType::str, "addr"}
{

    yang_name = "ipv4-address-array"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::Ipv4AddressArray::~Ipv4AddressArray()
{
}

bool Ptp::Interfaces::Interface::Ipv4AddressArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ptp::Interfaces::Interface::Ipv4AddressArray::has_operation() const
{
    for (auto const & leaf : addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Ptp::Interfaces::Interface::Ipv4AddressArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::Ipv4AddressArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto addr_name_datas = addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), addr_name_datas.begin(), addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::Ipv4AddressArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::Ipv4AddressArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Interfaces::Interface::Ipv4AddressArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr.append(value);
    }
}

void Ptp::Interfaces::Interface::Ipv4AddressArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::Ipv4AddressArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::MacAddress::~MacAddress()
{
}

bool Ptp::Interfaces::Interface::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::Interfaces::Interface::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Interfaces::Interface::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Interfaces::Interface::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Interfaces::Interface::IngressConversion::IngressConversion()
    :
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    accuracy{YType::uint8, "accuracy"},
    class_default{YType::uint8, "class-default"},
    offset_log_variance{YType::uint16, "offset-log-variance"}
        ,
    class_mapping(this, {})
{

    yang_name = "ingress-conversion"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::IngressConversion::~IngressConversion()
{
}

bool Ptp::Interfaces::Interface::IngressConversion::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_data())
            return true;
    }
    return priority1.is_set
	|| priority2.is_set
	|| accuracy.is_set
	|| class_default.is_set
	|| offset_log_variance.is_set;
}

bool Ptp::Interfaces::Interface::IngressConversion::has_operation() const
{
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_default.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter);
}

std::string Ptp::Interfaces::Interface::IngressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::IngressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_default.is_set || is_set(class_default.yfilter)) leaf_name_data.push_back(class_default.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::IngressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-mapping")
    {
        auto ent_ = std::make_shared<Ptp::Interfaces::Interface::IngressConversion::ClassMapping>();
        ent_->parent = this;
        class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::IngressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Interfaces::Interface::IngressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-default")
    {
        class_default = value;
        class_default.value_namespace = name_space;
        class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::IngressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class-default")
    {
        class_default.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::IngressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-mapping" || name == "priority1" || name == "priority2" || name == "accuracy" || name == "class-default" || name == "offset-log-variance")
        return true;
    return false;
}

Ptp::Interfaces::Interface::IngressConversion::ClassMapping::ClassMapping()
    :
    from_clock_class{YType::uint8, "from-clock-class"},
    to_clock_class{YType::uint8, "to-clock-class"}
{

    yang_name = "class-mapping"; yang_parent_name = "ingress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::IngressConversion::ClassMapping::~ClassMapping()
{
}

bool Ptp::Interfaces::Interface::IngressConversion::ClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return from_clock_class.is_set
	|| to_clock_class.is_set;
}

bool Ptp::Interfaces::Interface::IngressConversion::ClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_clock_class.yfilter)
	|| ydk::is_set(to_clock_class.yfilter);
}

std::string Ptp::Interfaces::Interface::IngressConversion::ClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-mapping";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::IngressConversion::ClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_clock_class.is_set || is_set(from_clock_class.yfilter)) leaf_name_data.push_back(from_clock_class.get_name_leafdata());
    if (to_clock_class.is_set || is_set(to_clock_class.yfilter)) leaf_name_data.push_back(to_clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::IngressConversion::ClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::IngressConversion::ClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Interfaces::Interface::IngressConversion::ClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class = value;
        from_clock_class.value_namespace = name_space;
        from_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class = value;
        to_clock_class.value_namespace = name_space;
        to_clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::IngressConversion::ClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class.yfilter = yfilter;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::IngressConversion::ClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-clock-class" || name == "to-clock-class")
        return true;
    return false;
}

Ptp::Interfaces::Interface::EgressConversion::EgressConversion()
    :
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    accuracy{YType::uint8, "accuracy"},
    class_default{YType::uint8, "class-default"},
    offset_log_variance{YType::uint16, "offset-log-variance"}
        ,
    class_mapping(this, {})
{

    yang_name = "egress-conversion"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::EgressConversion::~EgressConversion()
{
}

bool Ptp::Interfaces::Interface::EgressConversion::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_data())
            return true;
    }
    return priority1.is_set
	|| priority2.is_set
	|| accuracy.is_set
	|| class_default.is_set
	|| offset_log_variance.is_set;
}

bool Ptp::Interfaces::Interface::EgressConversion::has_operation() const
{
    for (std::size_t index=0; index<class_mapping.len(); index++)
    {
        if(class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(class_default.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter);
}

std::string Ptp::Interfaces::Interface::EgressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::EgressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (class_default.is_set || is_set(class_default.yfilter)) leaf_name_data.push_back(class_default.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::EgressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-mapping")
    {
        auto ent_ = std::make_shared<Ptp::Interfaces::Interface::EgressConversion::ClassMapping>();
        ent_->parent = this;
        class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::EgressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Interfaces::Interface::EgressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-default")
    {
        class_default = value;
        class_default.value_namespace = name_space;
        class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::EgressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "class-default")
    {
        class_default.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::EgressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-mapping" || name == "priority1" || name == "priority2" || name == "accuracy" || name == "class-default" || name == "offset-log-variance")
        return true;
    return false;
}

Ptp::Interfaces::Interface::EgressConversion::ClassMapping::ClassMapping()
    :
    from_clock_class{YType::uint8, "from-clock-class"},
    to_clock_class{YType::uint8, "to-clock-class"}
{

    yang_name = "class-mapping"; yang_parent_name = "egress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::EgressConversion::ClassMapping::~ClassMapping()
{
}

bool Ptp::Interfaces::Interface::EgressConversion::ClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return from_clock_class.is_set
	|| to_clock_class.is_set;
}

bool Ptp::Interfaces::Interface::EgressConversion::ClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_clock_class.yfilter)
	|| ydk::is_set(to_clock_class.yfilter);
}

std::string Ptp::Interfaces::Interface::EgressConversion::ClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-mapping";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::EgressConversion::ClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_clock_class.is_set || is_set(from_clock_class.yfilter)) leaf_name_data.push_back(from_clock_class.get_name_leafdata());
    if (to_clock_class.is_set || is_set(to_clock_class.yfilter)) leaf_name_data.push_back(to_clock_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::EgressConversion::ClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::EgressConversion::ClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Interfaces::Interface::EgressConversion::ClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class = value;
        from_clock_class.value_namespace = name_space;
        from_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class = value;
        to_clock_class.value_namespace = name_space;
        to_clock_class.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::EgressConversion::ClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-clock-class")
    {
        from_clock_class.yfilter = yfilter;
    }
    if(value_path == "to-clock-class")
    {
        to_clock_class.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::EgressConversion::ClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-clock-class" || name == "to-clock-class")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::MasterTable()
    :
    communication_model{YType::enumeration, "communication-model"},
    priority{YType::uint8, "priority"},
    known{YType::boolean, "known"},
    qualified{YType::boolean, "qualified"},
    is_grandmaster{YType::boolean, "is-grandmaster"},
    ptsf_loss_announce{YType::uint8, "ptsf-loss-announce"},
    ptsf_loss_sync{YType::uint8, "ptsf-loss-sync"},
    is_nonnegotiated{YType::boolean, "is-nonnegotiated"}
        ,
    address(std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address>())
{
    address->parent = this;

    yang_name = "master-table"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::MasterTable::~MasterTable()
{
}

bool Ptp::Interfaces::Interface::MasterTable::has_data() const
{
    if (is_presence_container) return true;
    return communication_model.is_set
	|| priority.is_set
	|| known.is_set
	|| qualified.is_set
	|| is_grandmaster.is_set
	|| ptsf_loss_announce.is_set
	|| ptsf_loss_sync.is_set
	|| is_nonnegotiated.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ptp::Interfaces::Interface::MasterTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(communication_model.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(known.yfilter)
	|| ydk::is_set(qualified.yfilter)
	|| ydk::is_set(is_grandmaster.yfilter)
	|| ydk::is_set(ptsf_loss_announce.yfilter)
	|| ydk::is_set(ptsf_loss_sync.yfilter)
	|| ydk::is_set(is_nonnegotiated.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ptp::Interfaces::Interface::MasterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-table";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (communication_model.is_set || is_set(communication_model.yfilter)) leaf_name_data.push_back(communication_model.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (known.is_set || is_set(known.yfilter)) leaf_name_data.push_back(known.get_name_leafdata());
    if (qualified.is_set || is_set(qualified.yfilter)) leaf_name_data.push_back(qualified.get_name_leafdata());
    if (is_grandmaster.is_set || is_set(is_grandmaster.yfilter)) leaf_name_data.push_back(is_grandmaster.get_name_leafdata());
    if (ptsf_loss_announce.is_set || is_set(ptsf_loss_announce.yfilter)) leaf_name_data.push_back(ptsf_loss_announce.get_name_leafdata());
    if (ptsf_loss_sync.is_set || is_set(ptsf_loss_sync.yfilter)) leaf_name_data.push_back(ptsf_loss_sync.get_name_leafdata());
    if (is_nonnegotiated.is_set || is_set(is_nonnegotiated.yfilter)) leaf_name_data.push_back(is_nonnegotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::MasterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::MasterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Ptp::Interfaces::Interface::MasterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "communication-model")
    {
        communication_model = value;
        communication_model.value_namespace = name_space;
        communication_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known")
    {
        known = value;
        known.value_namespace = name_space;
        known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qualified")
    {
        qualified = value;
        qualified.value_namespace = name_space;
        qualified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster = value;
        is_grandmaster.value_namespace = name_space;
        is_grandmaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce = value;
        ptsf_loss_announce.value_namespace = name_space;
        ptsf_loss_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync = value;
        ptsf_loss_sync.value_namespace = name_space;
        ptsf_loss_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated = value;
        is_nonnegotiated.value_namespace = name_space;
        is_nonnegotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "communication-model")
    {
        communication_model.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "known")
    {
        known.yfilter = yfilter;
    }
    if(value_path == "qualified")
    {
        qualified.yfilter = yfilter;
    }
    if(value_path == "is-grandmaster")
    {
        is_grandmaster.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-announce")
    {
        ptsf_loss_announce.yfilter = yfilter;
    }
    if(value_path == "ptsf-loss-sync")
    {
        ptsf_loss_sync.yfilter = yfilter;
    }
    if(value_path == "is-nonnegotiated")
    {
        is_nonnegotiated.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "communication-model" || name == "priority" || name == "known" || name == "qualified" || name == "is-grandmaster" || name == "ptsf-loss-announce" || name == "ptsf-loss-sync" || name == "is-nonnegotiated")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "master-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::MasterTable::Address::~Address()
{
}

bool Ptp::Interfaces::Interface::MasterTable::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::Interfaces::Interface::MasterTable::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::Interfaces::Interface::MasterTable::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::MasterTable::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::MasterTable::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::Interfaces::Interface::MasterTable::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::Dataset::Dataset()
    :
    default_ds(std::make_shared<Ptp::Dataset::DefaultDs>())
    , current_ds(std::make_shared<Ptp::Dataset::CurrentDs>())
    , parent_ds(std::make_shared<Ptp::Dataset::ParentDs>())
    , port_dses(std::make_shared<Ptp::Dataset::PortDses>())
    , time_properties_ds(std::make_shared<Ptp::Dataset::TimePropertiesDs>())
{
    default_ds->parent = this;
    current_ds->parent = this;
    parent_ds->parent = this;
    port_dses->parent = this;
    time_properties_ds->parent = this;

    yang_name = "dataset"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Dataset::~Dataset()
{
}

bool Ptp::Dataset::has_data() const
{
    if (is_presence_container) return true;
    return (default_ds !=  nullptr && default_ds->has_data())
	|| (current_ds !=  nullptr && current_ds->has_data())
	|| (parent_ds !=  nullptr && parent_ds->has_data())
	|| (port_dses !=  nullptr && port_dses->has_data())
	|| (time_properties_ds !=  nullptr && time_properties_ds->has_data());
}

bool Ptp::Dataset::has_operation() const
{
    return is_set(yfilter)
	|| (default_ds !=  nullptr && default_ds->has_operation())
	|| (current_ds !=  nullptr && current_ds->has_operation())
	|| (parent_ds !=  nullptr && parent_ds->has_operation())
	|| (port_dses !=  nullptr && port_dses->has_operation())
	|| (time_properties_ds !=  nullptr && time_properties_ds->has_operation());
}

std::string Ptp::Dataset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dataset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Dataset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-ds")
    {
        if(default_ds == nullptr)
        {
            default_ds = std::make_shared<Ptp::Dataset::DefaultDs>();
        }
        return default_ds;
    }

    if(child_yang_name == "current-ds")
    {
        if(current_ds == nullptr)
        {
            current_ds = std::make_shared<Ptp::Dataset::CurrentDs>();
        }
        return current_ds;
    }

    if(child_yang_name == "parent-ds")
    {
        if(parent_ds == nullptr)
        {
            parent_ds = std::make_shared<Ptp::Dataset::ParentDs>();
        }
        return parent_ds;
    }

    if(child_yang_name == "port-dses")
    {
        if(port_dses == nullptr)
        {
            port_dses = std::make_shared<Ptp::Dataset::PortDses>();
        }
        return port_dses;
    }

    if(child_yang_name == "time-properties-ds")
    {
        if(time_properties_ds == nullptr)
        {
            time_properties_ds = std::make_shared<Ptp::Dataset::TimePropertiesDs>();
        }
        return time_properties_ds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Dataset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ds != nullptr)
    {
        _children["default-ds"] = default_ds;
    }

    if(current_ds != nullptr)
    {
        _children["current-ds"] = current_ds;
    }

    if(parent_ds != nullptr)
    {
        _children["parent-ds"] = parent_ds;
    }

    if(port_dses != nullptr)
    {
        _children["port-dses"] = port_dses;
    }

    if(time_properties_ds != nullptr)
    {
        _children["time-properties-ds"] = time_properties_ds;
    }

    return _children;
}

void Ptp::Dataset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Dataset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Dataset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-ds" || name == "current-ds" || name == "parent-ds" || name == "port-dses" || name == "time-properties-ds")
        return true;
    return false;
}

Ptp::Dataset::DefaultDs::DefaultDs()
    :
    two_step_flag{YType::boolean, "two-step-flag"},
    clock_id{YType::uint64, "clock-id"},
    number_ports{YType::uint32, "number-ports"},
    clock_class{YType::uint8, "clock-class"},
    clock_accuracy{YType::uint8, "clock-accuracy"},
    oslv{YType::uint16, "oslv"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    domain_number{YType::uint8, "domain-number"},
    slave_only{YType::boolean, "slave-only"},
    local_priority{YType::uint32, "local-priority"},
    signal_fail{YType::boolean, "signal-fail"}
{

    yang_name = "default-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Dataset::DefaultDs::~DefaultDs()
{
}

bool Ptp::Dataset::DefaultDs::has_data() const
{
    if (is_presence_container) return true;
    return two_step_flag.is_set
	|| clock_id.is_set
	|| number_ports.is_set
	|| clock_class.is_set
	|| clock_accuracy.is_set
	|| oslv.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| domain_number.is_set
	|| slave_only.is_set
	|| local_priority.is_set
	|| signal_fail.is_set;
}

bool Ptp::Dataset::DefaultDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_step_flag.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(number_ports.yfilter)
	|| ydk::is_set(clock_class.yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(oslv.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(domain_number.yfilter)
	|| ydk::is_set(slave_only.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(signal_fail.yfilter);
}

std::string Ptp::Dataset::DefaultDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::DefaultDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::DefaultDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_step_flag.is_set || is_set(two_step_flag.yfilter)) leaf_name_data.push_back(two_step_flag.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (number_ports.is_set || is_set(number_ports.yfilter)) leaf_name_data.push_back(number_ports.get_name_leafdata());
    if (clock_class.is_set || is_set(clock_class.yfilter)) leaf_name_data.push_back(clock_class.get_name_leafdata());
    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (oslv.is_set || is_set(oslv.yfilter)) leaf_name_data.push_back(oslv.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (domain_number.is_set || is_set(domain_number.yfilter)) leaf_name_data.push_back(domain_number.get_name_leafdata());
    if (slave_only.is_set || is_set(slave_only.yfilter)) leaf_name_data.push_back(slave_only.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Dataset::DefaultDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Dataset::DefaultDs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Dataset::DefaultDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-step-flag")
    {
        two_step_flag = value;
        two_step_flag.value_namespace = name_space;
        two_step_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ports")
    {
        number_ports = value;
        number_ports.value_namespace = name_space;
        number_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class")
    {
        clock_class = value;
        clock_class.value_namespace = name_space;
        clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oslv")
    {
        oslv = value;
        oslv.value_namespace = name_space;
        oslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-number")
    {
        domain_number = value;
        domain_number.value_namespace = name_space;
        domain_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-only")
    {
        slave_only = value;
        slave_only.value_namespace = name_space;
        slave_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::DefaultDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-step-flag")
    {
        two_step_flag.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "number-ports")
    {
        number_ports.yfilter = yfilter;
    }
    if(value_path == "clock-class")
    {
        clock_class.yfilter = yfilter;
    }
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "oslv")
    {
        oslv.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "domain-number")
    {
        domain_number.yfilter = yfilter;
    }
    if(value_path == "slave-only")
    {
        slave_only.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
}

bool Ptp::Dataset::DefaultDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-step-flag" || name == "clock-id" || name == "number-ports" || name == "clock-class" || name == "clock-accuracy" || name == "oslv" || name == "priority1" || name == "priority2" || name == "domain-number" || name == "slave-only" || name == "local-priority" || name == "signal-fail")
        return true;
    return false;
}

Ptp::Dataset::CurrentDs::CurrentDs()
    :
    steps_removed{YType::uint16, "steps-removed"},
    offset_from_master{YType::int64, "offset-from-master"},
    mean_path_delay{YType::int64, "mean-path-delay"}
{

    yang_name = "current-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Dataset::CurrentDs::~CurrentDs()
{
}

bool Ptp::Dataset::CurrentDs::has_data() const
{
    if (is_presence_container) return true;
    return steps_removed.is_set
	|| offset_from_master.is_set
	|| mean_path_delay.is_set;
}

bool Ptp::Dataset::CurrentDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(offset_from_master.yfilter)
	|| ydk::is_set(mean_path_delay.yfilter);
}

std::string Ptp::Dataset::CurrentDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::CurrentDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::CurrentDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (offset_from_master.is_set || is_set(offset_from_master.yfilter)) leaf_name_data.push_back(offset_from_master.get_name_leafdata());
    if (mean_path_delay.is_set || is_set(mean_path_delay.yfilter)) leaf_name_data.push_back(mean_path_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Dataset::CurrentDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Dataset::CurrentDs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Dataset::CurrentDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master = value;
        offset_from_master.value_namespace = name_space;
        offset_from_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay = value;
        mean_path_delay.value_namespace = name_space;
        mean_path_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::CurrentDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master.yfilter = yfilter;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay.yfilter = yfilter;
    }
}

bool Ptp::Dataset::CurrentDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "steps-removed" || name == "offset-from-master" || name == "mean-path-delay")
        return true;
    return false;
}

Ptp::Dataset::ParentDs::ParentDs()
    :
    parent_clock_id{YType::uint64, "parent-clock-id"},
    parent_port_number{YType::uint16, "parent-port-number"},
    parent_stats{YType::boolean, "parent-stats"},
    observed_parent_oslv{YType::uint16, "observed-parent-oslv"},
    observed_parent_clock_phase_change_rate{YType::uint32, "observed-parent-clock-phase-change-rate"},
    gm_clock_id{YType::uint64, "gm-clock-id"},
    gm_clock_class{YType::uint8, "gm-clock-class"},
    gm_clock_accuracy{YType::uint8, "gm-clock-accuracy"},
    gmoslv{YType::uint16, "gmoslv"},
    gm_priority1{YType::uint8, "gm-priority1"},
    gm_priority2{YType::uint8, "gm-priority2"}
{

    yang_name = "parent-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Dataset::ParentDs::~ParentDs()
{
}

bool Ptp::Dataset::ParentDs::has_data() const
{
    if (is_presence_container) return true;
    return parent_clock_id.is_set
	|| parent_port_number.is_set
	|| parent_stats.is_set
	|| observed_parent_oslv.is_set
	|| observed_parent_clock_phase_change_rate.is_set
	|| gm_clock_id.is_set
	|| gm_clock_class.is_set
	|| gm_clock_accuracy.is_set
	|| gmoslv.is_set
	|| gm_priority1.is_set
	|| gm_priority2.is_set;
}

bool Ptp::Dataset::ParentDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_clock_id.yfilter)
	|| ydk::is_set(parent_port_number.yfilter)
	|| ydk::is_set(parent_stats.yfilter)
	|| ydk::is_set(observed_parent_oslv.yfilter)
	|| ydk::is_set(observed_parent_clock_phase_change_rate.yfilter)
	|| ydk::is_set(gm_clock_id.yfilter)
	|| ydk::is_set(gm_clock_class.yfilter)
	|| ydk::is_set(gm_clock_accuracy.yfilter)
	|| ydk::is_set(gmoslv.yfilter)
	|| ydk::is_set(gm_priority1.yfilter)
	|| ydk::is_set(gm_priority2.yfilter);
}

std::string Ptp::Dataset::ParentDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::ParentDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::ParentDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_clock_id.is_set || is_set(parent_clock_id.yfilter)) leaf_name_data.push_back(parent_clock_id.get_name_leafdata());
    if (parent_port_number.is_set || is_set(parent_port_number.yfilter)) leaf_name_data.push_back(parent_port_number.get_name_leafdata());
    if (parent_stats.is_set || is_set(parent_stats.yfilter)) leaf_name_data.push_back(parent_stats.get_name_leafdata());
    if (observed_parent_oslv.is_set || is_set(observed_parent_oslv.yfilter)) leaf_name_data.push_back(observed_parent_oslv.get_name_leafdata());
    if (observed_parent_clock_phase_change_rate.is_set || is_set(observed_parent_clock_phase_change_rate.yfilter)) leaf_name_data.push_back(observed_parent_clock_phase_change_rate.get_name_leafdata());
    if (gm_clock_id.is_set || is_set(gm_clock_id.yfilter)) leaf_name_data.push_back(gm_clock_id.get_name_leafdata());
    if (gm_clock_class.is_set || is_set(gm_clock_class.yfilter)) leaf_name_data.push_back(gm_clock_class.get_name_leafdata());
    if (gm_clock_accuracy.is_set || is_set(gm_clock_accuracy.yfilter)) leaf_name_data.push_back(gm_clock_accuracy.get_name_leafdata());
    if (gmoslv.is_set || is_set(gmoslv.yfilter)) leaf_name_data.push_back(gmoslv.get_name_leafdata());
    if (gm_priority1.is_set || is_set(gm_priority1.yfilter)) leaf_name_data.push_back(gm_priority1.get_name_leafdata());
    if (gm_priority2.is_set || is_set(gm_priority2.yfilter)) leaf_name_data.push_back(gm_priority2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Dataset::ParentDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Dataset::ParentDs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Dataset::ParentDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-clock-id")
    {
        parent_clock_id = value;
        parent_clock_id.value_namespace = name_space;
        parent_clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-port-number")
    {
        parent_port_number = value;
        parent_port_number.value_namespace = name_space;
        parent_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-stats")
    {
        parent_stats = value;
        parent_stats.value_namespace = name_space;
        parent_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observed-parent-oslv")
    {
        observed_parent_oslv = value;
        observed_parent_oslv.value_namespace = name_space;
        observed_parent_oslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observed-parent-clock-phase-change-rate")
    {
        observed_parent_clock_phase_change_rate = value;
        observed_parent_clock_phase_change_rate.value_namespace = name_space;
        observed_parent_clock_phase_change_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-clock-id")
    {
        gm_clock_id = value;
        gm_clock_id.value_namespace = name_space;
        gm_clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-clock-class")
    {
        gm_clock_class = value;
        gm_clock_class.value_namespace = name_space;
        gm_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-clock-accuracy")
    {
        gm_clock_accuracy = value;
        gm_clock_accuracy.value_namespace = name_space;
        gm_clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmoslv")
    {
        gmoslv = value;
        gmoslv.value_namespace = name_space;
        gmoslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-priority1")
    {
        gm_priority1 = value;
        gm_priority1.value_namespace = name_space;
        gm_priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gm-priority2")
    {
        gm_priority2 = value;
        gm_priority2.value_namespace = name_space;
        gm_priority2.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::ParentDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-clock-id")
    {
        parent_clock_id.yfilter = yfilter;
    }
    if(value_path == "parent-port-number")
    {
        parent_port_number.yfilter = yfilter;
    }
    if(value_path == "parent-stats")
    {
        parent_stats.yfilter = yfilter;
    }
    if(value_path == "observed-parent-oslv")
    {
        observed_parent_oslv.yfilter = yfilter;
    }
    if(value_path == "observed-parent-clock-phase-change-rate")
    {
        observed_parent_clock_phase_change_rate.yfilter = yfilter;
    }
    if(value_path == "gm-clock-id")
    {
        gm_clock_id.yfilter = yfilter;
    }
    if(value_path == "gm-clock-class")
    {
        gm_clock_class.yfilter = yfilter;
    }
    if(value_path == "gm-clock-accuracy")
    {
        gm_clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "gmoslv")
    {
        gmoslv.yfilter = yfilter;
    }
    if(value_path == "gm-priority1")
    {
        gm_priority1.yfilter = yfilter;
    }
    if(value_path == "gm-priority2")
    {
        gm_priority2.yfilter = yfilter;
    }
}

bool Ptp::Dataset::ParentDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-clock-id" || name == "parent-port-number" || name == "parent-stats" || name == "observed-parent-oslv" || name == "observed-parent-clock-phase-change-rate" || name == "gm-clock-id" || name == "gm-clock-class" || name == "gm-clock-accuracy" || name == "gmoslv" || name == "gm-priority1" || name == "gm-priority2")
        return true;
    return false;
}

Ptp::Dataset::PortDses::PortDses()
    :
    port_ds(this, {"interface_name"})
{

    yang_name = "port-dses"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Dataset::PortDses::~PortDses()
{
}

bool Ptp::Dataset::PortDses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_ds.len(); index++)
    {
        if(port_ds[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::Dataset::PortDses::has_operation() const
{
    for (std::size_t index=0; index<port_ds.len(); index++)
    {
        if(port_ds[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::Dataset::PortDses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::PortDses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-dses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::PortDses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Dataset::PortDses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-ds")
    {
        auto ent_ = std::make_shared<Ptp::Dataset::PortDses::PortDs>();
        ent_->parent = this;
        port_ds.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Dataset::PortDses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_ds.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::Dataset::PortDses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Dataset::PortDses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Dataset::PortDses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-ds")
        return true;
    return false;
}

Ptp::Dataset::PortDses::PortDs::PortDs()
    :
    interface_name{YType::str, "interface-name"},
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"},
    port_state{YType::enumeration, "port-state"},
    log_min_delay_req_interval{YType::int16, "log-min-delay-req-interval"},
    peer_mean_path_delay{YType::int64, "peer-mean-path-delay"},
    log_announce_interval{YType::int16, "log-announce-interval"},
    annoucne_receipt_timeout{YType::uint32, "annoucne-receipt-timeout"},
    log_sync_interval{YType::int16, "log-sync-interval"},
    delay_mechanism{YType::enumeration, "delay-mechanism"},
    log_min_p_delay_req_interval{YType::int16, "log-min-p-delay-req-interval"},
    version_number{YType::uint8, "version-number"},
    local_priority{YType::uint32, "local-priority"},
    master_only{YType::boolean, "master-only"},
    signal_fail{YType::boolean, "signal-fail"}
{

    yang_name = "port-ds"; yang_parent_name = "port-dses"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Dataset::PortDses::PortDs::~PortDs()
{
}

bool Ptp::Dataset::PortDses::PortDs::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| clock_id.is_set
	|| port_number.is_set
	|| port_state.is_set
	|| log_min_delay_req_interval.is_set
	|| peer_mean_path_delay.is_set
	|| log_announce_interval.is_set
	|| annoucne_receipt_timeout.is_set
	|| log_sync_interval.is_set
	|| delay_mechanism.is_set
	|| log_min_p_delay_req_interval.is_set
	|| version_number.is_set
	|| local_priority.is_set
	|| master_only.is_set
	|| signal_fail.is_set;
}

bool Ptp::Dataset::PortDses::PortDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(log_min_delay_req_interval.yfilter)
	|| ydk::is_set(peer_mean_path_delay.yfilter)
	|| ydk::is_set(log_announce_interval.yfilter)
	|| ydk::is_set(annoucne_receipt_timeout.yfilter)
	|| ydk::is_set(log_sync_interval.yfilter)
	|| ydk::is_set(delay_mechanism.yfilter)
	|| ydk::is_set(log_min_p_delay_req_interval.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(master_only.yfilter)
	|| ydk::is_set(signal_fail.yfilter);
}

std::string Ptp::Dataset::PortDses::PortDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/port-dses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::PortDses::PortDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-ds";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::PortDses::PortDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (log_min_delay_req_interval.is_set || is_set(log_min_delay_req_interval.yfilter)) leaf_name_data.push_back(log_min_delay_req_interval.get_name_leafdata());
    if (peer_mean_path_delay.is_set || is_set(peer_mean_path_delay.yfilter)) leaf_name_data.push_back(peer_mean_path_delay.get_name_leafdata());
    if (log_announce_interval.is_set || is_set(log_announce_interval.yfilter)) leaf_name_data.push_back(log_announce_interval.get_name_leafdata());
    if (annoucne_receipt_timeout.is_set || is_set(annoucne_receipt_timeout.yfilter)) leaf_name_data.push_back(annoucne_receipt_timeout.get_name_leafdata());
    if (log_sync_interval.is_set || is_set(log_sync_interval.yfilter)) leaf_name_data.push_back(log_sync_interval.get_name_leafdata());
    if (delay_mechanism.is_set || is_set(delay_mechanism.yfilter)) leaf_name_data.push_back(delay_mechanism.get_name_leafdata());
    if (log_min_p_delay_req_interval.is_set || is_set(log_min_p_delay_req_interval.yfilter)) leaf_name_data.push_back(log_min_p_delay_req_interval.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (master_only.is_set || is_set(master_only.yfilter)) leaf_name_data.push_back(master_only.get_name_leafdata());
    if (signal_fail.is_set || is_set(signal_fail.yfilter)) leaf_name_data.push_back(signal_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Dataset::PortDses::PortDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Dataset::PortDses::PortDs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Dataset::PortDses::PortDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-delay-req-interval")
    {
        log_min_delay_req_interval = value;
        log_min_delay_req_interval.value_namespace = name_space;
        log_min_delay_req_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mean-path-delay")
    {
        peer_mean_path_delay = value;
        peer_mean_path_delay.value_namespace = name_space;
        peer_mean_path_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval = value;
        log_announce_interval.value_namespace = name_space;
        log_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "annoucne-receipt-timeout")
    {
        annoucne_receipt_timeout = value;
        annoucne_receipt_timeout.value_namespace = name_space;
        annoucne_receipt_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval = value;
        log_sync_interval.value_namespace = name_space;
        log_sync_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-mechanism")
    {
        delay_mechanism = value;
        delay_mechanism.value_namespace = name_space;
        delay_mechanism.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-min-p-delay-req-interval")
    {
        log_min_p_delay_req_interval = value;
        log_min_p_delay_req_interval.value_namespace = name_space;
        log_min_p_delay_req_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-only")
    {
        master_only = value;
        master_only.value_namespace = name_space;
        master_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail")
    {
        signal_fail = value;
        signal_fail.value_namespace = name_space;
        signal_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::PortDses::PortDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "log-min-delay-req-interval")
    {
        log_min_delay_req_interval.yfilter = yfilter;
    }
    if(value_path == "peer-mean-path-delay")
    {
        peer_mean_path_delay.yfilter = yfilter;
    }
    if(value_path == "log-announce-interval")
    {
        log_announce_interval.yfilter = yfilter;
    }
    if(value_path == "annoucne-receipt-timeout")
    {
        annoucne_receipt_timeout.yfilter = yfilter;
    }
    if(value_path == "log-sync-interval")
    {
        log_sync_interval.yfilter = yfilter;
    }
    if(value_path == "delay-mechanism")
    {
        delay_mechanism.yfilter = yfilter;
    }
    if(value_path == "log-min-p-delay-req-interval")
    {
        log_min_p_delay_req_interval.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "master-only")
    {
        master_only.yfilter = yfilter;
    }
    if(value_path == "signal-fail")
    {
        signal_fail.yfilter = yfilter;
    }
}

bool Ptp::Dataset::PortDses::PortDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "clock-id" || name == "port-number" || name == "port-state" || name == "log-min-delay-req-interval" || name == "peer-mean-path-delay" || name == "log-announce-interval" || name == "annoucne-receipt-timeout" || name == "log-sync-interval" || name == "delay-mechanism" || name == "log-min-p-delay-req-interval" || name == "version-number" || name == "local-priority" || name == "master-only" || name == "signal-fail")
        return true;
    return false;
}

Ptp::Dataset::TimePropertiesDs::TimePropertiesDs()
    :
    current_utc_offset{YType::int16, "current-utc-offset"},
    current_utc_offset_valid{YType::boolean, "current-utc-offset-valid"},
    leap59{YType::boolean, "leap59"},
    leap61{YType::boolean, "leap61"},
    time_traceable{YType::boolean, "time-traceable"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    ptp_timescale{YType::boolean, "ptp-timescale"},
    time_source{YType::enumeration, "time-source"}
{

    yang_name = "time-properties-ds"; yang_parent_name = "dataset"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Dataset::TimePropertiesDs::~TimePropertiesDs()
{
}

bool Ptp::Dataset::TimePropertiesDs::has_data() const
{
    if (is_presence_container) return true;
    return current_utc_offset.is_set
	|| current_utc_offset_valid.is_set
	|| leap59.is_set
	|| leap61.is_set
	|| time_traceable.is_set
	|| frequency_traceable.is_set
	|| ptp_timescale.is_set
	|| time_source.is_set;
}

bool Ptp::Dataset::TimePropertiesDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_utc_offset.yfilter)
	|| ydk::is_set(current_utc_offset_valid.yfilter)
	|| ydk::is_set(leap59.yfilter)
	|| ydk::is_set(leap61.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(ptp_timescale.yfilter)
	|| ydk::is_set(time_source.yfilter);
}

std::string Ptp::Dataset::TimePropertiesDs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/dataset/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Dataset::TimePropertiesDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-properties-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Dataset::TimePropertiesDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_utc_offset.is_set || is_set(current_utc_offset.yfilter)) leaf_name_data.push_back(current_utc_offset.get_name_leafdata());
    if (current_utc_offset_valid.is_set || is_set(current_utc_offset_valid.yfilter)) leaf_name_data.push_back(current_utc_offset_valid.get_name_leafdata());
    if (leap59.is_set || is_set(leap59.yfilter)) leaf_name_data.push_back(leap59.get_name_leafdata());
    if (leap61.is_set || is_set(leap61.yfilter)) leaf_name_data.push_back(leap61.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (ptp_timescale.is_set || is_set(ptp_timescale.yfilter)) leaf_name_data.push_back(ptp_timescale.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Dataset::TimePropertiesDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Dataset::TimePropertiesDs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Dataset::TimePropertiesDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-utc-offset")
    {
        current_utc_offset = value;
        current_utc_offset.value_namespace = name_space;
        current_utc_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-utc-offset-valid")
    {
        current_utc_offset_valid = value;
        current_utc_offset_valid.value_namespace = name_space;
        current_utc_offset_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap59")
    {
        leap59 = value;
        leap59.value_namespace = name_space;
        leap59.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap61")
    {
        leap61 = value;
        leap61.value_namespace = name_space;
        leap61.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-timescale")
    {
        ptp_timescale = value;
        ptp_timescale.value_namespace = name_space;
        ptp_timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Dataset::TimePropertiesDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-utc-offset")
    {
        current_utc_offset.yfilter = yfilter;
    }
    if(value_path == "current-utc-offset-valid")
    {
        current_utc_offset_valid.yfilter = yfilter;
    }
    if(value_path == "leap59")
    {
        leap59.yfilter = yfilter;
    }
    if(value_path == "leap61")
    {
        leap61.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "ptp-timescale")
    {
        ptp_timescale.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
}

bool Ptp::Dataset::TimePropertiesDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-utc-offset" || name == "current-utc-offset-valid" || name == "leap59" || name == "leap61" || name == "time-traceable" || name == "frequency-traceable" || name == "ptp-timescale" || name == "time-source")
        return true;
    return false;
}

Ptp::GlobalConfigurationError::GlobalConfigurationError()
    :
    clock_profile{YType::enumeration, "clock-profile"},
    clock_profile_set{YType::boolean, "clock-profile-set"},
    telecom_clock_type{YType::enumeration, "telecom-clock-type"},
    domain_number{YType::uint8, "domain-number"},
    priority2{YType::uint8, "priority2"},
    virtual_port_priority2{YType::uint8, "virtual-port-priority2"},
    virtual_port_clock_class{YType::uint8, "virtual-port-clock-class"},
    virtual_port_clock_accuracy{YType::uint8, "virtual-port-clock-accuracy"},
    virtual_port_oslv{YType::uint16, "virtual-port-oslv"}
        ,
    configuration_errors(std::make_shared<Ptp::GlobalConfigurationError::ConfigurationErrors>())
{
    configuration_errors->parent = this;

    yang_name = "global-configuration-error"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::GlobalConfigurationError::~GlobalConfigurationError()
{
}

bool Ptp::GlobalConfigurationError::has_data() const
{
    if (is_presence_container) return true;
    return clock_profile.is_set
	|| clock_profile_set.is_set
	|| telecom_clock_type.is_set
	|| domain_number.is_set
	|| priority2.is_set
	|| virtual_port_priority2.is_set
	|| virtual_port_clock_class.is_set
	|| virtual_port_clock_accuracy.is_set
	|| virtual_port_oslv.is_set
	|| (configuration_errors !=  nullptr && configuration_errors->has_data());
}

bool Ptp::GlobalConfigurationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_profile.yfilter)
	|| ydk::is_set(clock_profile_set.yfilter)
	|| ydk::is_set(telecom_clock_type.yfilter)
	|| ydk::is_set(domain_number.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(virtual_port_priority2.yfilter)
	|| ydk::is_set(virtual_port_clock_class.yfilter)
	|| ydk::is_set(virtual_port_clock_accuracy.yfilter)
	|| ydk::is_set(virtual_port_oslv.yfilter)
	|| (configuration_errors !=  nullptr && configuration_errors->has_operation());
}

std::string Ptp::GlobalConfigurationError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::GlobalConfigurationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-configuration-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::GlobalConfigurationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_profile.is_set || is_set(clock_profile.yfilter)) leaf_name_data.push_back(clock_profile.get_name_leafdata());
    if (clock_profile_set.is_set || is_set(clock_profile_set.yfilter)) leaf_name_data.push_back(clock_profile_set.get_name_leafdata());
    if (telecom_clock_type.is_set || is_set(telecom_clock_type.yfilter)) leaf_name_data.push_back(telecom_clock_type.get_name_leafdata());
    if (domain_number.is_set || is_set(domain_number.yfilter)) leaf_name_data.push_back(domain_number.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (virtual_port_priority2.is_set || is_set(virtual_port_priority2.yfilter)) leaf_name_data.push_back(virtual_port_priority2.get_name_leafdata());
    if (virtual_port_clock_class.is_set || is_set(virtual_port_clock_class.yfilter)) leaf_name_data.push_back(virtual_port_clock_class.get_name_leafdata());
    if (virtual_port_clock_accuracy.is_set || is_set(virtual_port_clock_accuracy.yfilter)) leaf_name_data.push_back(virtual_port_clock_accuracy.get_name_leafdata());
    if (virtual_port_oslv.is_set || is_set(virtual_port_oslv.yfilter)) leaf_name_data.push_back(virtual_port_oslv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::GlobalConfigurationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-errors")
    {
        if(configuration_errors == nullptr)
        {
            configuration_errors = std::make_shared<Ptp::GlobalConfigurationError::ConfigurationErrors>();
        }
        return configuration_errors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::GlobalConfigurationError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(configuration_errors != nullptr)
    {
        _children["configuration-errors"] = configuration_errors;
    }

    return _children;
}

void Ptp::GlobalConfigurationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-profile")
    {
        clock_profile = value;
        clock_profile.value_namespace = name_space;
        clock_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-profile-set")
    {
        clock_profile_set = value;
        clock_profile_set.value_namespace = name_space;
        clock_profile_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type = value;
        telecom_clock_type.value_namespace = name_space;
        telecom_clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-number")
    {
        domain_number = value;
        domain_number.value_namespace = name_space;
        domain_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-priority2")
    {
        virtual_port_priority2 = value;
        virtual_port_priority2.value_namespace = name_space;
        virtual_port_priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-clock-class")
    {
        virtual_port_clock_class = value;
        virtual_port_clock_class.value_namespace = name_space;
        virtual_port_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-clock-accuracy")
    {
        virtual_port_clock_accuracy = value;
        virtual_port_clock_accuracy.value_namespace = name_space;
        virtual_port_clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-oslv")
    {
        virtual_port_oslv = value;
        virtual_port_oslv.value_namespace = name_space;
        virtual_port_oslv.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::GlobalConfigurationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-profile")
    {
        clock_profile.yfilter = yfilter;
    }
    if(value_path == "clock-profile-set")
    {
        clock_profile_set.yfilter = yfilter;
    }
    if(value_path == "telecom-clock-type")
    {
        telecom_clock_type.yfilter = yfilter;
    }
    if(value_path == "domain-number")
    {
        domain_number.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "virtual-port-priority2")
    {
        virtual_port_priority2.yfilter = yfilter;
    }
    if(value_path == "virtual-port-clock-class")
    {
        virtual_port_clock_class.yfilter = yfilter;
    }
    if(value_path == "virtual-port-clock-accuracy")
    {
        virtual_port_clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "virtual-port-oslv")
    {
        virtual_port_oslv.yfilter = yfilter;
    }
}

bool Ptp::GlobalConfigurationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-errors" || name == "clock-profile" || name == "clock-profile-set" || name == "telecom-clock-type" || name == "domain-number" || name == "priority2" || name == "virtual-port-priority2" || name == "virtual-port-clock-class" || name == "virtual-port-clock-accuracy" || name == "virtual-port-oslv")
        return true;
    return false;
}

Ptp::GlobalConfigurationError::ConfigurationErrors::ConfigurationErrors()
    :
    domain{YType::boolean, "domain"},
    profile_priority1_config{YType::boolean, "profile-priority1-config"},
    profile_priority2_value{YType::boolean, "profile-priority2-value"},
    utc_offset_change{YType::boolean, "utc-offset-change"},
    physical_layer_frequency{YType::boolean, "physical-layer-frequency"},
    profile_virtual_port{YType::boolean, "profile-virtual-port"},
    virtual_port_priority1_config{YType::boolean, "virtual-port-priority1-config"},
    virtual_port_priority2_value{YType::boolean, "virtual-port-priority2-value"},
    virtual_port_profile_clock_class{YType::boolean, "virtual-port-profile-clock-class"},
    virtual_port_clock_accuracy{YType::boolean, "virtual-port-clock-accuracy"},
    virtual_port_oslv{YType::boolean, "virtual-port-oslv"},
    virtual_port_local_priority{YType::boolean, "virtual-port-local-priority"}
{

    yang_name = "configuration-errors"; yang_parent_name = "global-configuration-error"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::GlobalConfigurationError::ConfigurationErrors::~ConfigurationErrors()
{
}

bool Ptp::GlobalConfigurationError::ConfigurationErrors::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| profile_priority1_config.is_set
	|| profile_priority2_value.is_set
	|| utc_offset_change.is_set
	|| physical_layer_frequency.is_set
	|| profile_virtual_port.is_set
	|| virtual_port_priority1_config.is_set
	|| virtual_port_priority2_value.is_set
	|| virtual_port_profile_clock_class.is_set
	|| virtual_port_clock_accuracy.is_set
	|| virtual_port_oslv.is_set
	|| virtual_port_local_priority.is_set;
}

bool Ptp::GlobalConfigurationError::ConfigurationErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(profile_priority1_config.yfilter)
	|| ydk::is_set(profile_priority2_value.yfilter)
	|| ydk::is_set(utc_offset_change.yfilter)
	|| ydk::is_set(physical_layer_frequency.yfilter)
	|| ydk::is_set(profile_virtual_port.yfilter)
	|| ydk::is_set(virtual_port_priority1_config.yfilter)
	|| ydk::is_set(virtual_port_priority2_value.yfilter)
	|| ydk::is_set(virtual_port_profile_clock_class.yfilter)
	|| ydk::is_set(virtual_port_clock_accuracy.yfilter)
	|| ydk::is_set(virtual_port_oslv.yfilter)
	|| ydk::is_set(virtual_port_local_priority.yfilter);
}

std::string Ptp::GlobalConfigurationError::ConfigurationErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/global-configuration-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::GlobalConfigurationError::ConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::GlobalConfigurationError::ConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (profile_priority1_config.is_set || is_set(profile_priority1_config.yfilter)) leaf_name_data.push_back(profile_priority1_config.get_name_leafdata());
    if (profile_priority2_value.is_set || is_set(profile_priority2_value.yfilter)) leaf_name_data.push_back(profile_priority2_value.get_name_leafdata());
    if (utc_offset_change.is_set || is_set(utc_offset_change.yfilter)) leaf_name_data.push_back(utc_offset_change.get_name_leafdata());
    if (physical_layer_frequency.is_set || is_set(physical_layer_frequency.yfilter)) leaf_name_data.push_back(physical_layer_frequency.get_name_leafdata());
    if (profile_virtual_port.is_set || is_set(profile_virtual_port.yfilter)) leaf_name_data.push_back(profile_virtual_port.get_name_leafdata());
    if (virtual_port_priority1_config.is_set || is_set(virtual_port_priority1_config.yfilter)) leaf_name_data.push_back(virtual_port_priority1_config.get_name_leafdata());
    if (virtual_port_priority2_value.is_set || is_set(virtual_port_priority2_value.yfilter)) leaf_name_data.push_back(virtual_port_priority2_value.get_name_leafdata());
    if (virtual_port_profile_clock_class.is_set || is_set(virtual_port_profile_clock_class.yfilter)) leaf_name_data.push_back(virtual_port_profile_clock_class.get_name_leafdata());
    if (virtual_port_clock_accuracy.is_set || is_set(virtual_port_clock_accuracy.yfilter)) leaf_name_data.push_back(virtual_port_clock_accuracy.get_name_leafdata());
    if (virtual_port_oslv.is_set || is_set(virtual_port_oslv.yfilter)) leaf_name_data.push_back(virtual_port_oslv.get_name_leafdata());
    if (virtual_port_local_priority.is_set || is_set(virtual_port_local_priority.yfilter)) leaf_name_data.push_back(virtual_port_local_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::GlobalConfigurationError::ConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::GlobalConfigurationError::ConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::GlobalConfigurationError::ConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-priority1-config")
    {
        profile_priority1_config = value;
        profile_priority1_config.value_namespace = name_space;
        profile_priority1_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-priority2-value")
    {
        profile_priority2_value = value;
        profile_priority2_value.value_namespace = name_space;
        profile_priority2_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc-offset-change")
    {
        utc_offset_change = value;
        utc_offset_change.value_namespace = name_space;
        utc_offset_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-frequency")
    {
        physical_layer_frequency = value;
        physical_layer_frequency.value_namespace = name_space;
        physical_layer_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-virtual-port")
    {
        profile_virtual_port = value;
        profile_virtual_port.value_namespace = name_space;
        profile_virtual_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-priority1-config")
    {
        virtual_port_priority1_config = value;
        virtual_port_priority1_config.value_namespace = name_space;
        virtual_port_priority1_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-priority2-value")
    {
        virtual_port_priority2_value = value;
        virtual_port_priority2_value.value_namespace = name_space;
        virtual_port_priority2_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-profile-clock-class")
    {
        virtual_port_profile_clock_class = value;
        virtual_port_profile_clock_class.value_namespace = name_space;
        virtual_port_profile_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-clock-accuracy")
    {
        virtual_port_clock_accuracy = value;
        virtual_port_clock_accuracy.value_namespace = name_space;
        virtual_port_clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-oslv")
    {
        virtual_port_oslv = value;
        virtual_port_oslv.value_namespace = name_space;
        virtual_port_oslv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-local-priority")
    {
        virtual_port_local_priority = value;
        virtual_port_local_priority.value_namespace = name_space;
        virtual_port_local_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::GlobalConfigurationError::ConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "profile-priority1-config")
    {
        profile_priority1_config.yfilter = yfilter;
    }
    if(value_path == "profile-priority2-value")
    {
        profile_priority2_value.yfilter = yfilter;
    }
    if(value_path == "utc-offset-change")
    {
        utc_offset_change.yfilter = yfilter;
    }
    if(value_path == "physical-layer-frequency")
    {
        physical_layer_frequency.yfilter = yfilter;
    }
    if(value_path == "profile-virtual-port")
    {
        profile_virtual_port.yfilter = yfilter;
    }
    if(value_path == "virtual-port-priority1-config")
    {
        virtual_port_priority1_config.yfilter = yfilter;
    }
    if(value_path == "virtual-port-priority2-value")
    {
        virtual_port_priority2_value.yfilter = yfilter;
    }
    if(value_path == "virtual-port-profile-clock-class")
    {
        virtual_port_profile_clock_class.yfilter = yfilter;
    }
    if(value_path == "virtual-port-clock-accuracy")
    {
        virtual_port_clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "virtual-port-oslv")
    {
        virtual_port_oslv.yfilter = yfilter;
    }
    if(value_path == "virtual-port-local-priority")
    {
        virtual_port_local_priority.yfilter = yfilter;
    }
}

bool Ptp::GlobalConfigurationError::ConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "profile-priority1-config" || name == "profile-priority2-value" || name == "utc-offset-change" || name == "physical-layer-frequency" || name == "profile-virtual-port" || name == "virtual-port-priority1-config" || name == "virtual-port-priority2-value" || name == "virtual-port-profile-clock-class" || name == "virtual-port-clock-accuracy" || name == "virtual-port-oslv" || name == "virtual-port-local-priority")
        return true;
    return false;
}

Ptp::Grandmaster::Grandmaster()
    :
    used_for_time{YType::boolean, "used-for-time"},
    used_for_frequency{YType::boolean, "used-for-frequency"},
    known_for_time{YType::uint32, "known-for-time"},
    domain{YType::uint8, "domain"}
        ,
    clock_properties(std::make_shared<Ptp::Grandmaster::ClockProperties>())
    , address(std::make_shared<Ptp::Grandmaster::Address>())
{
    clock_properties->parent = this;
    address->parent = this;

    yang_name = "grandmaster"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::~Grandmaster()
{
}

bool Ptp::Grandmaster::has_data() const
{
    if (is_presence_container) return true;
    return used_for_time.is_set
	|| used_for_frequency.is_set
	|| known_for_time.is_set
	|| domain.is_set
	|| (clock_properties !=  nullptr && clock_properties->has_data())
	|| (address !=  nullptr && address->has_data());
}

bool Ptp::Grandmaster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(used_for_time.yfilter)
	|| ydk::is_set(used_for_frequency.yfilter)
	|| ydk::is_set(known_for_time.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (clock_properties !=  nullptr && clock_properties->has_operation())
	|| (address !=  nullptr && address->has_operation());
}

std::string Ptp::Grandmaster::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grandmaster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (used_for_time.is_set || is_set(used_for_time.yfilter)) leaf_name_data.push_back(used_for_time.get_name_leafdata());
    if (used_for_frequency.is_set || is_set(used_for_frequency.yfilter)) leaf_name_data.push_back(used_for_frequency.get_name_leafdata());
    if (known_for_time.is_set || is_set(known_for_time.yfilter)) leaf_name_data.push_back(known_for_time.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-properties")
    {
        if(clock_properties == nullptr)
        {
            clock_properties = std::make_shared<Ptp::Grandmaster::ClockProperties>();
        }
        return clock_properties;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::Grandmaster::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_properties != nullptr)
    {
        _children["clock-properties"] = clock_properties;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Ptp::Grandmaster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "used-for-time")
    {
        used_for_time = value;
        used_for_time.value_namespace = name_space;
        used_for_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-for-frequency")
    {
        used_for_frequency = value;
        used_for_frequency.value_namespace = name_space;
        used_for_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known-for-time")
    {
        known_for_time = value;
        known_for_time.value_namespace = name_space;
        known_for_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "used-for-time")
    {
        used_for_time.yfilter = yfilter;
    }
    if(value_path == "used-for-frequency")
    {
        used_for_frequency.yfilter = yfilter;
    }
    if(value_path == "known-for-time")
    {
        known_for_time.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-properties" || name == "address" || name == "used-for-time" || name == "used-for-frequency" || name == "known-for-time" || name == "domain")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::ClockProperties()
    :
    clock_id{YType::uint64, "clock-id"},
    priority1{YType::uint8, "priority1"},
    priority2{YType::uint8, "priority2"},
    class_{YType::uint8, "class"},
    accuracy{YType::uint8, "accuracy"},
    offset_log_variance{YType::uint16, "offset-log-variance"},
    steps_removed{YType::uint16, "steps-removed"},
    time_source{YType::enumeration, "time-source"},
    frequency_traceable{YType::boolean, "frequency-traceable"},
    time_traceable{YType::boolean, "time-traceable"},
    timescale{YType::enumeration, "timescale"},
    leap_seconds{YType::enumeration, "leap-seconds"},
    local{YType::boolean, "local"},
    configured_clock_class{YType::uint8, "configured-clock-class"},
    configured_priority{YType::uint8, "configured-priority"}
        ,
    utc_offset(std::make_shared<Ptp::Grandmaster::ClockProperties::UtcOffset>())
    , receiver(std::make_shared<Ptp::Grandmaster::ClockProperties::Receiver>())
    , sender(std::make_shared<Ptp::Grandmaster::ClockProperties::Sender>())
{
    utc_offset->parent = this;
    receiver->parent = this;
    sender->parent = this;

    yang_name = "clock-properties"; yang_parent_name = "grandmaster"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::ClockProperties::~ClockProperties()
{
}

bool Ptp::Grandmaster::ClockProperties::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| class_.is_set
	|| accuracy.is_set
	|| offset_log_variance.is_set
	|| steps_removed.is_set
	|| time_source.is_set
	|| frequency_traceable.is_set
	|| time_traceable.is_set
	|| timescale.is_set
	|| leap_seconds.is_set
	|| local.is_set
	|| configured_clock_class.is_set
	|| configured_priority.is_set
	|| (utc_offset !=  nullptr && utc_offset->has_data())
	|| (receiver !=  nullptr && receiver->has_data())
	|| (sender !=  nullptr && sender->has_data());
}

bool Ptp::Grandmaster::ClockProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(offset_log_variance.yfilter)
	|| ydk::is_set(steps_removed.yfilter)
	|| ydk::is_set(time_source.yfilter)
	|| ydk::is_set(frequency_traceable.yfilter)
	|| ydk::is_set(time_traceable.yfilter)
	|| ydk::is_set(timescale.yfilter)
	|| ydk::is_set(leap_seconds.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(configured_clock_class.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| (utc_offset !=  nullptr && utc_offset->has_operation())
	|| (receiver !=  nullptr && receiver->has_operation())
	|| (sender !=  nullptr && sender->has_operation());
}

std::string Ptp::Grandmaster::ClockProperties::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (offset_log_variance.is_set || is_set(offset_log_variance.yfilter)) leaf_name_data.push_back(offset_log_variance.get_name_leafdata());
    if (steps_removed.is_set || is_set(steps_removed.yfilter)) leaf_name_data.push_back(steps_removed.get_name_leafdata());
    if (time_source.is_set || is_set(time_source.yfilter)) leaf_name_data.push_back(time_source.get_name_leafdata());
    if (frequency_traceable.is_set || is_set(frequency_traceable.yfilter)) leaf_name_data.push_back(frequency_traceable.get_name_leafdata());
    if (time_traceable.is_set || is_set(time_traceable.yfilter)) leaf_name_data.push_back(time_traceable.get_name_leafdata());
    if (timescale.is_set || is_set(timescale.yfilter)) leaf_name_data.push_back(timescale.get_name_leafdata());
    if (leap_seconds.is_set || is_set(leap_seconds.yfilter)) leaf_name_data.push_back(leap_seconds.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (configured_clock_class.is_set || is_set(configured_clock_class.yfilter)) leaf_name_data.push_back(configured_clock_class.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::ClockProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utc-offset")
    {
        if(utc_offset == nullptr)
        {
            utc_offset = std::make_shared<Ptp::Grandmaster::ClockProperties::UtcOffset>();
        }
        return utc_offset;
    }

    if(child_yang_name == "receiver")
    {
        if(receiver == nullptr)
        {
            receiver = std::make_shared<Ptp::Grandmaster::ClockProperties::Receiver>();
        }
        return receiver;
    }

    if(child_yang_name == "sender")
    {
        if(sender == nullptr)
        {
            sender = std::make_shared<Ptp::Grandmaster::ClockProperties::Sender>();
        }
        return sender;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::ClockProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utc_offset != nullptr)
    {
        _children["utc-offset"] = utc_offset;
    }

    if(receiver != nullptr)
    {
        _children["receiver"] = receiver;
    }

    if(sender != nullptr)
    {
        _children["sender"] = sender;
    }

    return _children;
}

void Ptp::Grandmaster::ClockProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance = value;
        offset_log_variance.value_namespace = name_space;
        offset_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "steps-removed")
    {
        steps_removed = value;
        steps_removed.value_namespace = name_space;
        steps_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-source")
    {
        time_source = value;
        time_source.value_namespace = name_space;
        time_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable = value;
        frequency_traceable.value_namespace = name_space;
        frequency_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-traceable")
    {
        time_traceable = value;
        time_traceable.value_namespace = name_space;
        time_traceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timescale")
    {
        timescale = value;
        timescale.value_namespace = name_space;
        timescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds = value;
        leap_seconds.value_namespace = name_space;
        leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class = value;
        configured_clock_class.value_namespace = name_space;
        configured_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "offset-log-variance")
    {
        offset_log_variance.yfilter = yfilter;
    }
    if(value_path == "steps-removed")
    {
        steps_removed.yfilter = yfilter;
    }
    if(value_path == "time-source")
    {
        time_source.yfilter = yfilter;
    }
    if(value_path == "frequency-traceable")
    {
        frequency_traceable.yfilter = yfilter;
    }
    if(value_path == "time-traceable")
    {
        time_traceable.yfilter = yfilter;
    }
    if(value_path == "timescale")
    {
        timescale.yfilter = yfilter;
    }
    if(value_path == "leap-seconds")
    {
        leap_seconds.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "configured-clock-class")
    {
        configured_clock_class.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utc-offset" || name == "receiver" || name == "sender" || name == "clock-id" || name == "priority1" || name == "priority2" || name == "class" || name == "accuracy" || name == "offset-log-variance" || name == "steps-removed" || name == "time-source" || name == "frequency-traceable" || name == "time-traceable" || name == "timescale" || name == "leap-seconds" || name == "local" || name == "configured-clock-class" || name == "configured-priority")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::UtcOffset::UtcOffset()
    :
    current_offset{YType::int16, "current-offset"},
    offset_valid{YType::boolean, "offset-valid"}
{

    yang_name = "utc-offset"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::ClockProperties::UtcOffset::~UtcOffset()
{
}

bool Ptp::Grandmaster::ClockProperties::UtcOffset::has_data() const
{
    if (is_presence_container) return true;
    return current_offset.is_set
	|| offset_valid.is_set;
}

bool Ptp::Grandmaster::ClockProperties::UtcOffset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_offset.yfilter)
	|| ydk::is_set(offset_valid.yfilter);
}

std::string Ptp::Grandmaster::ClockProperties::UtcOffset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::UtcOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::UtcOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_offset.is_set || is_set(current_offset.yfilter)) leaf_name_data.push_back(current_offset.get_name_leafdata());
    if (offset_valid.is_set || is_set(offset_valid.yfilter)) leaf_name_data.push_back(offset_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::ClockProperties::UtcOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::ClockProperties::UtcOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Grandmaster::ClockProperties::UtcOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-offset")
    {
        current_offset = value;
        current_offset.value_namespace = name_space;
        current_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-valid")
    {
        offset_valid = value;
        offset_valid.value_namespace = name_space;
        offset_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::UtcOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-offset")
    {
        current_offset.yfilter = yfilter;
    }
    if(value_path == "offset-valid")
    {
        offset_valid.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::UtcOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset" || name == "offset-valid")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::Receiver::Receiver()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "receiver"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::ClockProperties::Receiver::~Receiver()
{
}

bool Ptp::Grandmaster::ClockProperties::Receiver::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Grandmaster::ClockProperties::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Grandmaster::ClockProperties::Receiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::ClockProperties::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::ClockProperties::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Grandmaster::ClockProperties::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Grandmaster::ClockProperties::Sender::Sender()
    :
    clock_id{YType::uint64, "clock-id"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "sender"; yang_parent_name = "clock-properties"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::ClockProperties::Sender::~Sender()
{
}

bool Ptp::Grandmaster::ClockProperties::Sender::has_data() const
{
    if (is_presence_container) return true;
    return clock_id.is_set
	|| port_number.is_set;
}

bool Ptp::Grandmaster::ClockProperties::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_id.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::Grandmaster::ClockProperties::Sender::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/clock-properties/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::ClockProperties::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::ClockProperties::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_id.is_set || is_set(clock_id.yfilter)) leaf_name_data.push_back(clock_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::ClockProperties::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::ClockProperties::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Grandmaster::ClockProperties::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-id")
    {
        clock_id = value;
        clock_id.value_namespace = name_space;
        clock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::ClockProperties::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-id")
    {
        clock_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::ClockProperties::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "port-number")
        return true;
    return false;
}

Ptp::Grandmaster::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::Grandmaster::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::Grandmaster::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "grandmaster"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::Address::~Address()
{
}

bool Ptp::Grandmaster::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::Grandmaster::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::Grandmaster::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::Grandmaster::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::Grandmaster::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::Grandmaster::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::Grandmaster::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::Address::MacAddress::~MacAddress()
{
}

bool Ptp::Grandmaster::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::Grandmaster::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::Grandmaster::Address::MacAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Grandmaster::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::Grandmaster::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Grandmaster::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::Grandmaster::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::Grandmaster::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::Grandmaster::Address::Ipv6Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/grandmaster/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Grandmaster::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Grandmaster::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Grandmaster::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Grandmaster::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Grandmaster::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Grandmaster::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::Grandmaster::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeers()
    :
    interface_unicast_peer(this, {"interface_name"})
{

    yang_name = "interface-unicast-peers"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceUnicastPeers::~InterfaceUnicastPeers()
{
}

bool Ptp::InterfaceUnicastPeers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_unicast_peer.len(); index++)
    {
        if(interface_unicast_peer[index]->has_data())
            return true;
    }
    return false;
}

bool Ptp::InterfaceUnicastPeers::has_operation() const
{
    for (std::size_t index=0; index<interface_unicast_peer.len(); index++)
    {
        if(interface_unicast_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ptp::InterfaceUnicastPeers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceUnicastPeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-unicast-peer")
    {
        auto ent_ = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer>();
        ent_->parent = this;
        interface_unicast_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_unicast_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfaceUnicastPeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceUnicastPeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceUnicastPeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-unicast-peer")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::InterfaceUnicastPeer()
    :
    interface_name{YType::str, "interface-name"},
    name{YType::str, "name"},
    port_number{YType::uint16, "port-number"}
        ,
    peers(this, {})
{

    yang_name = "interface-unicast-peer"; yang_parent_name = "interface-unicast-peers"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::~InterfaceUnicastPeer()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peers.len(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| name.is_set
	|| port_number.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::has_operation() const
{
    for (std::size_t index=0; index<peers.len(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/interface-unicast-peers/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-peer";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        auto ent_ = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers>();
        ent_->parent = this;
        peers.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "interface-name" || name == "name" || name == "port-number")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Peers()
    :
    address(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address>())
    , announce_grant(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant>())
    , sync_grant(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant>())
    , delay_response_grant(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant>())
{
    address->parent = this;
    announce_grant->parent = this;
    sync_grant->parent = this;
    delay_response_grant->parent = this;

    yang_name = "peers"; yang_parent_name = "interface-unicast-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::~Peers()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (announce_grant !=  nullptr && announce_grant->has_data())
	|| (sync_grant !=  nullptr && sync_grant->has_data())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_data());
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (announce_grant !=  nullptr && announce_grant->has_operation())
	|| (sync_grant !=  nullptr && sync_grant->has_operation())
	|| (delay_response_grant !=  nullptr && delay_response_grant->has_operation());
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address>();
        }
        return address;
    }

    if(child_yang_name == "announce-grant")
    {
        if(announce_grant == nullptr)
        {
            announce_grant = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant>();
        }
        return announce_grant;
    }

    if(child_yang_name == "sync-grant")
    {
        if(sync_grant == nullptr)
        {
            sync_grant = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant>();
        }
        return sync_grant;
    }

    if(child_yang_name == "delay-response-grant")
    {
        if(delay_response_grant == nullptr)
        {
            delay_response_grant = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant>();
        }
        return delay_response_grant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(announce_grant != nullptr)
    {
        _children["announce-grant"] = announce_grant;
    }

    if(sync_grant != nullptr)
    {
        _children["sync-grant"] = sync_grant;
    }

    if(delay_response_grant != nullptr)
    {
        _children["delay-response-grant"] = delay_response_grant;
    }

    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "announce-grant" || name == "sync-grant" || name == "delay-response-grant")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Address()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    address_unknown{YType::boolean, "address-unknown"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    mac_address(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress>())
    , ipv6_address(std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address>())
{
    mac_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "address"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::~Address()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| address_unknown.is_set
	|| ipv4_address.is_set
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(address_unknown.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (address_unknown.is_set || is_set(address_unknown.yfilter)) leaf_name_data.push_back(address_unknown.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(ipv6_address != nullptr)
    {
        _children["ipv6-address"] = ipv6_address;
    }

    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unknown")
    {
        address_unknown = value;
        address_unknown.value_namespace = name_space;
        address_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "address-unknown")
    {
        address_unknown.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "ipv6-address" || name == "encapsulation" || name == "address-unknown" || name == "ipv4-address")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::MacAddress()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "mac-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::~MacAddress()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::Ipv6Address()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::~Ipv6Address()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::AnnounceGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "announce-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::~AnnounceGrant()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::SyncGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "sync-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::~SyncGrant()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::DelayResponseGrant()
    :
    log_grant_interval{YType::int8, "log-grant-interval"},
    grant_duration{YType::uint32, "grant-duration"}
{

    yang_name = "delay-response-grant"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::~DelayResponseGrant()
{
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::has_data() const
{
    if (is_presence_container) return true;
    return log_grant_interval.is_set
	|| grant_duration.is_set;
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_grant_interval.yfilter)
	|| ydk::is_set(grant_duration.yfilter);
}

std::string Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-response-grant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_grant_interval.is_set || is_set(log_grant_interval.yfilter)) leaf_name_data.push_back(log_grant_interval.get_name_leafdata());
    if (grant_duration.is_set || is_set(grant_duration.yfilter)) leaf_name_data.push_back(grant_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval = value;
        log_grant_interval.value_namespace = name_space;
        log_grant_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant-duration")
    {
        grant_duration = value;
        grant_duration.value_namespace = name_space;
        grant_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-grant-interval")
    {
        log_grant_interval.yfilter = yfilter;
    }
    if(value_path == "grant-duration")
    {
        grant_duration.yfilter = yfilter;
    }
}

bool Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-grant-interval" || name == "grant-duration")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::UtcOffsetInfo()
    :
    source_type{YType::uint8, "source-type"},
    source_file{YType::str, "source-file"},
    source_expiry_date{YType::uint32, "source-expiry-date"},
    polling_frequency{YType::uint32, "polling-frequency"}
        ,
    current_offset_info(std::make_shared<Ptp::UtcOffsetInfo::CurrentOffsetInfo>())
    , current_gm_offset_info(std::make_shared<Ptp::UtcOffsetInfo::CurrentGmOffsetInfo>())
    , configured_offset_info(std::make_shared<Ptp::UtcOffsetInfo::ConfiguredOffsetInfo>())
    , previous_gm_offset_info(std::make_shared<Ptp::UtcOffsetInfo::PreviousGmOffsetInfo>())
    , hardware_offset_info(std::make_shared<Ptp::UtcOffsetInfo::HardwareOffsetInfo>())
    , gm_leap_second(std::make_shared<Ptp::UtcOffsetInfo::GmLeapSecond>())
    , configured_leap_second(this, {})
{
    current_offset_info->parent = this;
    current_gm_offset_info->parent = this;
    configured_offset_info->parent = this;
    previous_gm_offset_info->parent = this;
    hardware_offset_info->parent = this;
    gm_leap_second->parent = this;

    yang_name = "utc-offset-info"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::~UtcOffsetInfo()
{
}

bool Ptp::UtcOffsetInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configured_leap_second.len(); index++)
    {
        if(configured_leap_second[index]->has_data())
            return true;
    }
    return source_type.is_set
	|| source_file.is_set
	|| source_expiry_date.is_set
	|| polling_frequency.is_set
	|| (current_offset_info !=  nullptr && current_offset_info->has_data())
	|| (current_gm_offset_info !=  nullptr && current_gm_offset_info->has_data())
	|| (configured_offset_info !=  nullptr && configured_offset_info->has_data())
	|| (previous_gm_offset_info !=  nullptr && previous_gm_offset_info->has_data())
	|| (hardware_offset_info !=  nullptr && hardware_offset_info->has_data())
	|| (gm_leap_second !=  nullptr && gm_leap_second->has_data());
}

bool Ptp::UtcOffsetInfo::has_operation() const
{
    for (std::size_t index=0; index<configured_leap_second.len(); index++)
    {
        if(configured_leap_second[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(source_file.yfilter)
	|| ydk::is_set(source_expiry_date.yfilter)
	|| ydk::is_set(polling_frequency.yfilter)
	|| (current_offset_info !=  nullptr && current_offset_info->has_operation())
	|| (current_gm_offset_info !=  nullptr && current_gm_offset_info->has_operation())
	|| (configured_offset_info !=  nullptr && configured_offset_info->has_operation())
	|| (previous_gm_offset_info !=  nullptr && previous_gm_offset_info->has_operation())
	|| (hardware_offset_info !=  nullptr && hardware_offset_info->has_operation())
	|| (gm_leap_second !=  nullptr && gm_leap_second->has_operation());
}

std::string Ptp::UtcOffsetInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utc-offset-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (source_file.is_set || is_set(source_file.yfilter)) leaf_name_data.push_back(source_file.get_name_leafdata());
    if (source_expiry_date.is_set || is_set(source_expiry_date.yfilter)) leaf_name_data.push_back(source_expiry_date.get_name_leafdata());
    if (polling_frequency.is_set || is_set(polling_frequency.yfilter)) leaf_name_data.push_back(polling_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-offset-info")
    {
        if(current_offset_info == nullptr)
        {
            current_offset_info = std::make_shared<Ptp::UtcOffsetInfo::CurrentOffsetInfo>();
        }
        return current_offset_info;
    }

    if(child_yang_name == "current-gm-offset-info")
    {
        if(current_gm_offset_info == nullptr)
        {
            current_gm_offset_info = std::make_shared<Ptp::UtcOffsetInfo::CurrentGmOffsetInfo>();
        }
        return current_gm_offset_info;
    }

    if(child_yang_name == "configured-offset-info")
    {
        if(configured_offset_info == nullptr)
        {
            configured_offset_info = std::make_shared<Ptp::UtcOffsetInfo::ConfiguredOffsetInfo>();
        }
        return configured_offset_info;
    }

    if(child_yang_name == "previous-gm-offset-info")
    {
        if(previous_gm_offset_info == nullptr)
        {
            previous_gm_offset_info = std::make_shared<Ptp::UtcOffsetInfo::PreviousGmOffsetInfo>();
        }
        return previous_gm_offset_info;
    }

    if(child_yang_name == "hardware-offset-info")
    {
        if(hardware_offset_info == nullptr)
        {
            hardware_offset_info = std::make_shared<Ptp::UtcOffsetInfo::HardwareOffsetInfo>();
        }
        return hardware_offset_info;
    }

    if(child_yang_name == "gm-leap-second")
    {
        if(gm_leap_second == nullptr)
        {
            gm_leap_second = std::make_shared<Ptp::UtcOffsetInfo::GmLeapSecond>();
        }
        return gm_leap_second;
    }

    if(child_yang_name == "configured-leap-second")
    {
        auto ent_ = std::make_shared<Ptp::UtcOffsetInfo::ConfiguredLeapSecond>();
        ent_->parent = this;
        configured_leap_second.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_offset_info != nullptr)
    {
        _children["current-offset-info"] = current_offset_info;
    }

    if(current_gm_offset_info != nullptr)
    {
        _children["current-gm-offset-info"] = current_gm_offset_info;
    }

    if(configured_offset_info != nullptr)
    {
        _children["configured-offset-info"] = configured_offset_info;
    }

    if(previous_gm_offset_info != nullptr)
    {
        _children["previous-gm-offset-info"] = previous_gm_offset_info;
    }

    if(hardware_offset_info != nullptr)
    {
        _children["hardware-offset-info"] = hardware_offset_info;
    }

    if(gm_leap_second != nullptr)
    {
        _children["gm-leap-second"] = gm_leap_second;
    }

    count_ = 0;
    for (auto ent_ : configured_leap_second.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ptp::UtcOffsetInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-file")
    {
        source_file = value;
        source_file.value_namespace = name_space;
        source_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-expiry-date")
    {
        source_expiry_date = value;
        source_expiry_date.value_namespace = name_space;
        source_expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polling-frequency")
    {
        polling_frequency = value;
        polling_frequency.value_namespace = name_space;
        polling_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "source-file")
    {
        source_file.yfilter = yfilter;
    }
    if(value_path == "source-expiry-date")
    {
        source_expiry_date.yfilter = yfilter;
    }
    if(value_path == "polling-frequency")
    {
        polling_frequency.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-offset-info" || name == "current-gm-offset-info" || name == "configured-offset-info" || name == "previous-gm-offset-info" || name == "hardware-offset-info" || name == "gm-leap-second" || name == "configured-leap-second" || name == "source-type" || name == "source-file" || name == "source-expiry-date" || name == "polling-frequency")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::CurrentOffsetInfo::CurrentOffsetInfo()
    :
    offset{YType::int16, "offset"},
    valid{YType::boolean, "valid"},
    flag{YType::uint8, "flag"}
{

    yang_name = "current-offset-info"; yang_parent_name = "utc-offset-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::CurrentOffsetInfo::~CurrentOffsetInfo()
{
}

bool Ptp::UtcOffsetInfo::CurrentOffsetInfo::has_data() const
{
    if (is_presence_container) return true;
    return offset.is_set
	|| valid.is_set
	|| flag.is_set;
}

bool Ptp::UtcOffsetInfo::CurrentOffsetInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string Ptp::UtcOffsetInfo::CurrentOffsetInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/utc-offset-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::CurrentOffsetInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-offset-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::CurrentOffsetInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::CurrentOffsetInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::CurrentOffsetInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffsetInfo::CurrentOffsetInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::CurrentOffsetInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::CurrentOffsetInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "valid" || name == "flag")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::CurrentGmOffsetInfo()
    :
    offset{YType::int16, "offset"},
    valid{YType::boolean, "valid"},
    flag{YType::uint8, "flag"}
{

    yang_name = "current-gm-offset-info"; yang_parent_name = "utc-offset-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::~CurrentGmOffsetInfo()
{
}

bool Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::has_data() const
{
    if (is_presence_container) return true;
    return offset.is_set
	|| valid.is_set
	|| flag.is_set;
}

bool Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/utc-offset-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-gm-offset-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::CurrentGmOffsetInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "valid" || name == "flag")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::ConfiguredOffsetInfo()
    :
    offset{YType::int16, "offset"},
    valid{YType::boolean, "valid"},
    flag{YType::uint8, "flag"}
{

    yang_name = "configured-offset-info"; yang_parent_name = "utc-offset-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::~ConfiguredOffsetInfo()
{
}

bool Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::has_data() const
{
    if (is_presence_container) return true;
    return offset.is_set
	|| valid.is_set
	|| flag.is_set;
}

bool Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/utc-offset-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-offset-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::ConfiguredOffsetInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "valid" || name == "flag")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::PreviousGmOffsetInfo()
    :
    offset{YType::int16, "offset"},
    valid{YType::boolean, "valid"},
    flag{YType::uint8, "flag"}
{

    yang_name = "previous-gm-offset-info"; yang_parent_name = "utc-offset-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::~PreviousGmOffsetInfo()
{
}

bool Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::has_data() const
{
    if (is_presence_container) return true;
    return offset.is_set
	|| valid.is_set
	|| flag.is_set;
}

bool Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/utc-offset-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-gm-offset-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::PreviousGmOffsetInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "valid" || name == "flag")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::HardwareOffsetInfo::HardwareOffsetInfo()
    :
    offset{YType::int16, "offset"},
    valid{YType::boolean, "valid"},
    flag{YType::uint8, "flag"}
{

    yang_name = "hardware-offset-info"; yang_parent_name = "utc-offset-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::HardwareOffsetInfo::~HardwareOffsetInfo()
{
}

bool Ptp::UtcOffsetInfo::HardwareOffsetInfo::has_data() const
{
    if (is_presence_container) return true;
    return offset.is_set
	|| valid.is_set
	|| flag.is_set;
}

bool Ptp::UtcOffsetInfo::HardwareOffsetInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string Ptp::UtcOffsetInfo::HardwareOffsetInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/utc-offset-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::HardwareOffsetInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-offset-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::HardwareOffsetInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::HardwareOffsetInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::HardwareOffsetInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffsetInfo::HardwareOffsetInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::HardwareOffsetInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::HardwareOffsetInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "valid" || name == "flag")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::GmLeapSecond::GmLeapSecond()
    :
    offset{YType::int16, "offset"},
    offset_start_date{YType::uint64, "offset-start-date"},
    offset_change{YType::int16, "offset-change"},
    offset_applied{YType::boolean, "offset-applied"}
{

    yang_name = "gm-leap-second"; yang_parent_name = "utc-offset-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::GmLeapSecond::~GmLeapSecond()
{
}

bool Ptp::UtcOffsetInfo::GmLeapSecond::has_data() const
{
    if (is_presence_container) return true;
    return offset.is_set
	|| offset_start_date.is_set
	|| offset_change.is_set
	|| offset_applied.is_set;
}

bool Ptp::UtcOffsetInfo::GmLeapSecond::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(offset_start_date.yfilter)
	|| ydk::is_set(offset_change.yfilter)
	|| ydk::is_set(offset_applied.yfilter);
}

std::string Ptp::UtcOffsetInfo::GmLeapSecond::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/utc-offset-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::GmLeapSecond::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gm-leap-second";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::GmLeapSecond::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (offset_start_date.is_set || is_set(offset_start_date.yfilter)) leaf_name_data.push_back(offset_start_date.get_name_leafdata());
    if (offset_change.is_set || is_set(offset_change.yfilter)) leaf_name_data.push_back(offset_change.get_name_leafdata());
    if (offset_applied.is_set || is_set(offset_applied.yfilter)) leaf_name_data.push_back(offset_applied.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::GmLeapSecond::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::GmLeapSecond::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffsetInfo::GmLeapSecond::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-start-date")
    {
        offset_start_date = value;
        offset_start_date.value_namespace = name_space;
        offset_start_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-change")
    {
        offset_change = value;
        offset_change.value_namespace = name_space;
        offset_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-applied")
    {
        offset_applied = value;
        offset_applied.value_namespace = name_space;
        offset_applied.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::GmLeapSecond::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "offset-start-date")
    {
        offset_start_date.yfilter = yfilter;
    }
    if(value_path == "offset-change")
    {
        offset_change.yfilter = yfilter;
    }
    if(value_path == "offset-applied")
    {
        offset_applied.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::GmLeapSecond::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "offset-start-date" || name == "offset-change" || name == "offset-applied")
        return true;
    return false;
}

Ptp::UtcOffsetInfo::ConfiguredLeapSecond::ConfiguredLeapSecond()
    :
    offset{YType::int16, "offset"},
    offset_start_date{YType::uint64, "offset-start-date"},
    offset_change{YType::int16, "offset-change"},
    offset_applied{YType::boolean, "offset-applied"}
{

    yang_name = "configured-leap-second"; yang_parent_name = "utc-offset-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::UtcOffsetInfo::ConfiguredLeapSecond::~ConfiguredLeapSecond()
{
}

bool Ptp::UtcOffsetInfo::ConfiguredLeapSecond::has_data() const
{
    if (is_presence_container) return true;
    return offset.is_set
	|| offset_start_date.is_set
	|| offset_change.is_set
	|| offset_applied.is_set;
}

bool Ptp::UtcOffsetInfo::ConfiguredLeapSecond::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(offset_start_date.yfilter)
	|| ydk::is_set(offset_change.yfilter)
	|| ydk::is_set(offset_applied.yfilter);
}

std::string Ptp::UtcOffsetInfo::ConfiguredLeapSecond::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/utc-offset-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::UtcOffsetInfo::ConfiguredLeapSecond::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-leap-second";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::UtcOffsetInfo::ConfiguredLeapSecond::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (offset_start_date.is_set || is_set(offset_start_date.yfilter)) leaf_name_data.push_back(offset_start_date.get_name_leafdata());
    if (offset_change.is_set || is_set(offset_change.yfilter)) leaf_name_data.push_back(offset_change.get_name_leafdata());
    if (offset_applied.is_set || is_set(offset_applied.yfilter)) leaf_name_data.push_back(offset_applied.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::UtcOffsetInfo::ConfiguredLeapSecond::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::UtcOffsetInfo::ConfiguredLeapSecond::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::UtcOffsetInfo::ConfiguredLeapSecond::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-start-date")
    {
        offset_start_date = value;
        offset_start_date.value_namespace = name_space;
        offset_start_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-change")
    {
        offset_change = value;
        offset_change.value_namespace = name_space;
        offset_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-applied")
    {
        offset_applied = value;
        offset_applied.value_namespace = name_space;
        offset_applied.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::UtcOffsetInfo::ConfiguredLeapSecond::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "offset-start-date")
    {
        offset_start_date.yfilter = yfilter;
    }
    if(value_path == "offset-change")
    {
        offset_change.yfilter = yfilter;
    }
    if(value_path == "offset-applied")
    {
        offset_applied.yfilter = yfilter;
    }
}

bool Ptp::UtcOffsetInfo::ConfiguredLeapSecond::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offset" || name == "offset-start-date" || name == "offset-change" || name == "offset-applied")
        return true;
    return false;
}

Ptp::Platform::Platform()
    :
    servo(std::make_shared<Ptp::Platform::Servo>())
{
    servo->parent = this;

    yang_name = "platform"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::~Platform()
{
}

bool Ptp::Platform::has_data() const
{
    if (is_presence_container) return true;
    return (servo !=  nullptr && servo->has_data());
}

bool Ptp::Platform::has_operation() const
{
    return is_set(yfilter)
	|| (servo !=  nullptr && servo->has_operation());
}

std::string Ptp::Platform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-pd-oper:platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "servo")
    {
        if(servo == nullptr)
        {
            servo = std::make_shared<Ptp::Platform::Servo>();
        }
        return servo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(servo != nullptr)
    {
        _children["servo"] = servo;
    }

    return _children;
}

void Ptp::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ptp::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ptp::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servo")
        return true;
    return false;
}

Ptp::Platform::Servo::Servo()
    :
    lock_status{YType::uint16, "lock-status"},
    running{YType::boolean, "running"},
    device_status{YType::str, "device-status"},
    log_level{YType::uint16, "log-level"},
    phase_accuracy_last{YType::int64, "phase-accuracy-last"},
    num_sync_timestamp{YType::uint32, "num-sync-timestamp"},
    num_delay_timestamp{YType::uint32, "num-delay-timestamp"},
    num_set_time{YType::uint32, "num-set-time"},
    num_step_time{YType::uint32, "num-step-time"},
    num_adjust_freq{YType::uint32, "num-adjust-freq"},
    num_adjust_freq_time{YType::uint32, "num-adjust-freq-time"},
    last_adjust_freq{YType::int32, "last-adjust-freq"},
    last_step_time{YType::int32, "last-step-time"},
    num_discard_sync_timestamp{YType::uint32, "num-discard-sync-timestamp"},
    num_discard_delay_timestamp{YType::uint32, "num-discard-delay-timestamp"},
    flagof_last_set_time{YType::boolean, "flagof-last-set-time"},
    offset_from_master{YType::int64, "offset-from-master"},
    mean_path_delay{YType::int64, "mean-path-delay"},
    servo_mode{YType::int32, "servo-mode"}
        ,
    last_set_time(std::make_shared<Ptp::Platform::Servo::LastSetTime>())
    , last_received_t1(std::make_shared<Ptp::Platform::Servo::LastReceivedT1>())
    , last_received_t2(std::make_shared<Ptp::Platform::Servo::LastReceivedT2>())
    , last_received_t3(std::make_shared<Ptp::Platform::Servo::LastReceivedT3>())
    , last_received_t4(std::make_shared<Ptp::Platform::Servo::LastReceivedT4>())
    , pre_received_t1(std::make_shared<Ptp::Platform::Servo::PreReceivedT1>())
    , pre_received_t2(std::make_shared<Ptp::Platform::Servo::PreReceivedT2>())
    , pre_received_t3(std::make_shared<Ptp::Platform::Servo::PreReceivedT3>())
    , pre_received_t4(std::make_shared<Ptp::Platform::Servo::PreReceivedT4>())
{
    last_set_time->parent = this;
    last_received_t1->parent = this;
    last_received_t2->parent = this;
    last_received_t3->parent = this;
    last_received_t4->parent = this;
    pre_received_t1->parent = this;
    pre_received_t2->parent = this;
    pre_received_t3->parent = this;
    pre_received_t4->parent = this;

    yang_name = "servo"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::~Servo()
{
}

bool Ptp::Platform::Servo::has_data() const
{
    if (is_presence_container) return true;
    return lock_status.is_set
	|| running.is_set
	|| device_status.is_set
	|| log_level.is_set
	|| phase_accuracy_last.is_set
	|| num_sync_timestamp.is_set
	|| num_delay_timestamp.is_set
	|| num_set_time.is_set
	|| num_step_time.is_set
	|| num_adjust_freq.is_set
	|| num_adjust_freq_time.is_set
	|| last_adjust_freq.is_set
	|| last_step_time.is_set
	|| num_discard_sync_timestamp.is_set
	|| num_discard_delay_timestamp.is_set
	|| flagof_last_set_time.is_set
	|| offset_from_master.is_set
	|| mean_path_delay.is_set
	|| servo_mode.is_set
	|| (last_set_time !=  nullptr && last_set_time->has_data())
	|| (last_received_t1 !=  nullptr && last_received_t1->has_data())
	|| (last_received_t2 !=  nullptr && last_received_t2->has_data())
	|| (last_received_t3 !=  nullptr && last_received_t3->has_data())
	|| (last_received_t4 !=  nullptr && last_received_t4->has_data())
	|| (pre_received_t1 !=  nullptr && pre_received_t1->has_data())
	|| (pre_received_t2 !=  nullptr && pre_received_t2->has_data())
	|| (pre_received_t3 !=  nullptr && pre_received_t3->has_data())
	|| (pre_received_t4 !=  nullptr && pre_received_t4->has_data());
}

bool Ptp::Platform::Servo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lock_status.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(device_status.yfilter)
	|| ydk::is_set(log_level.yfilter)
	|| ydk::is_set(phase_accuracy_last.yfilter)
	|| ydk::is_set(num_sync_timestamp.yfilter)
	|| ydk::is_set(num_delay_timestamp.yfilter)
	|| ydk::is_set(num_set_time.yfilter)
	|| ydk::is_set(num_step_time.yfilter)
	|| ydk::is_set(num_adjust_freq.yfilter)
	|| ydk::is_set(num_adjust_freq_time.yfilter)
	|| ydk::is_set(last_adjust_freq.yfilter)
	|| ydk::is_set(last_step_time.yfilter)
	|| ydk::is_set(num_discard_sync_timestamp.yfilter)
	|| ydk::is_set(num_discard_delay_timestamp.yfilter)
	|| ydk::is_set(flagof_last_set_time.yfilter)
	|| ydk::is_set(offset_from_master.yfilter)
	|| ydk::is_set(mean_path_delay.yfilter)
	|| ydk::is_set(servo_mode.yfilter)
	|| (last_set_time !=  nullptr && last_set_time->has_operation())
	|| (last_received_t1 !=  nullptr && last_received_t1->has_operation())
	|| (last_received_t2 !=  nullptr && last_received_t2->has_operation())
	|| (last_received_t3 !=  nullptr && last_received_t3->has_operation())
	|| (last_received_t4 !=  nullptr && last_received_t4->has_operation())
	|| (pre_received_t1 !=  nullptr && pre_received_t1->has_operation())
	|| (pre_received_t2 !=  nullptr && pre_received_t2->has_operation())
	|| (pre_received_t3 !=  nullptr && pre_received_t3->has_operation())
	|| (pre_received_t4 !=  nullptr && pre_received_t4->has_operation());
}

std::string Ptp::Platform::Servo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lock_status.is_set || is_set(lock_status.yfilter)) leaf_name_data.push_back(lock_status.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (device_status.is_set || is_set(device_status.yfilter)) leaf_name_data.push_back(device_status.get_name_leafdata());
    if (log_level.is_set || is_set(log_level.yfilter)) leaf_name_data.push_back(log_level.get_name_leafdata());
    if (phase_accuracy_last.is_set || is_set(phase_accuracy_last.yfilter)) leaf_name_data.push_back(phase_accuracy_last.get_name_leafdata());
    if (num_sync_timestamp.is_set || is_set(num_sync_timestamp.yfilter)) leaf_name_data.push_back(num_sync_timestamp.get_name_leafdata());
    if (num_delay_timestamp.is_set || is_set(num_delay_timestamp.yfilter)) leaf_name_data.push_back(num_delay_timestamp.get_name_leafdata());
    if (num_set_time.is_set || is_set(num_set_time.yfilter)) leaf_name_data.push_back(num_set_time.get_name_leafdata());
    if (num_step_time.is_set || is_set(num_step_time.yfilter)) leaf_name_data.push_back(num_step_time.get_name_leafdata());
    if (num_adjust_freq.is_set || is_set(num_adjust_freq.yfilter)) leaf_name_data.push_back(num_adjust_freq.get_name_leafdata());
    if (num_adjust_freq_time.is_set || is_set(num_adjust_freq_time.yfilter)) leaf_name_data.push_back(num_adjust_freq_time.get_name_leafdata());
    if (last_adjust_freq.is_set || is_set(last_adjust_freq.yfilter)) leaf_name_data.push_back(last_adjust_freq.get_name_leafdata());
    if (last_step_time.is_set || is_set(last_step_time.yfilter)) leaf_name_data.push_back(last_step_time.get_name_leafdata());
    if (num_discard_sync_timestamp.is_set || is_set(num_discard_sync_timestamp.yfilter)) leaf_name_data.push_back(num_discard_sync_timestamp.get_name_leafdata());
    if (num_discard_delay_timestamp.is_set || is_set(num_discard_delay_timestamp.yfilter)) leaf_name_data.push_back(num_discard_delay_timestamp.get_name_leafdata());
    if (flagof_last_set_time.is_set || is_set(flagof_last_set_time.yfilter)) leaf_name_data.push_back(flagof_last_set_time.get_name_leafdata());
    if (offset_from_master.is_set || is_set(offset_from_master.yfilter)) leaf_name_data.push_back(offset_from_master.get_name_leafdata());
    if (mean_path_delay.is_set || is_set(mean_path_delay.yfilter)) leaf_name_data.push_back(mean_path_delay.get_name_leafdata());
    if (servo_mode.is_set || is_set(servo_mode.yfilter)) leaf_name_data.push_back(servo_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-set-time")
    {
        if(last_set_time == nullptr)
        {
            last_set_time = std::make_shared<Ptp::Platform::Servo::LastSetTime>();
        }
        return last_set_time;
    }

    if(child_yang_name == "last-received-t1")
    {
        if(last_received_t1 == nullptr)
        {
            last_received_t1 = std::make_shared<Ptp::Platform::Servo::LastReceivedT1>();
        }
        return last_received_t1;
    }

    if(child_yang_name == "last-received-t2")
    {
        if(last_received_t2 == nullptr)
        {
            last_received_t2 = std::make_shared<Ptp::Platform::Servo::LastReceivedT2>();
        }
        return last_received_t2;
    }

    if(child_yang_name == "last-received-t3")
    {
        if(last_received_t3 == nullptr)
        {
            last_received_t3 = std::make_shared<Ptp::Platform::Servo::LastReceivedT3>();
        }
        return last_received_t3;
    }

    if(child_yang_name == "last-received-t4")
    {
        if(last_received_t4 == nullptr)
        {
            last_received_t4 = std::make_shared<Ptp::Platform::Servo::LastReceivedT4>();
        }
        return last_received_t4;
    }

    if(child_yang_name == "pre-received-t1")
    {
        if(pre_received_t1 == nullptr)
        {
            pre_received_t1 = std::make_shared<Ptp::Platform::Servo::PreReceivedT1>();
        }
        return pre_received_t1;
    }

    if(child_yang_name == "pre-received-t2")
    {
        if(pre_received_t2 == nullptr)
        {
            pre_received_t2 = std::make_shared<Ptp::Platform::Servo::PreReceivedT2>();
        }
        return pre_received_t2;
    }

    if(child_yang_name == "pre-received-t3")
    {
        if(pre_received_t3 == nullptr)
        {
            pre_received_t3 = std::make_shared<Ptp::Platform::Servo::PreReceivedT3>();
        }
        return pre_received_t3;
    }

    if(child_yang_name == "pre-received-t4")
    {
        if(pre_received_t4 == nullptr)
        {
            pre_received_t4 = std::make_shared<Ptp::Platform::Servo::PreReceivedT4>();
        }
        return pre_received_t4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_set_time != nullptr)
    {
        _children["last-set-time"] = last_set_time;
    }

    if(last_received_t1 != nullptr)
    {
        _children["last-received-t1"] = last_received_t1;
    }

    if(last_received_t2 != nullptr)
    {
        _children["last-received-t2"] = last_received_t2;
    }

    if(last_received_t3 != nullptr)
    {
        _children["last-received-t3"] = last_received_t3;
    }

    if(last_received_t4 != nullptr)
    {
        _children["last-received-t4"] = last_received_t4;
    }

    if(pre_received_t1 != nullptr)
    {
        _children["pre-received-t1"] = pre_received_t1;
    }

    if(pre_received_t2 != nullptr)
    {
        _children["pre-received-t2"] = pre_received_t2;
    }

    if(pre_received_t3 != nullptr)
    {
        _children["pre-received-t3"] = pre_received_t3;
    }

    if(pre_received_t4 != nullptr)
    {
        _children["pre-received-t4"] = pre_received_t4;
    }

    return _children;
}

void Ptp::Platform::Servo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lock-status")
    {
        lock_status = value;
        lock_status.value_namespace = name_space;
        lock_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-status")
    {
        device_status = value;
        device_status.value_namespace = name_space;
        device_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-level")
    {
        log_level = value;
        log_level.value_namespace = name_space;
        log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phase-accuracy-last")
    {
        phase_accuracy_last = value;
        phase_accuracy_last.value_namespace = name_space;
        phase_accuracy_last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sync-timestamp")
    {
        num_sync_timestamp = value;
        num_sync_timestamp.value_namespace = name_space;
        num_sync_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-delay-timestamp")
    {
        num_delay_timestamp = value;
        num_delay_timestamp.value_namespace = name_space;
        num_delay_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-set-time")
    {
        num_set_time = value;
        num_set_time.value_namespace = name_space;
        num_set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-step-time")
    {
        num_step_time = value;
        num_step_time.value_namespace = name_space;
        num_step_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-adjust-freq")
    {
        num_adjust_freq = value;
        num_adjust_freq.value_namespace = name_space;
        num_adjust_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-adjust-freq-time")
    {
        num_adjust_freq_time = value;
        num_adjust_freq_time.value_namespace = name_space;
        num_adjust_freq_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-adjust-freq")
    {
        last_adjust_freq = value;
        last_adjust_freq.value_namespace = name_space;
        last_adjust_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-step-time")
    {
        last_step_time = value;
        last_step_time.value_namespace = name_space;
        last_step_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discard-sync-timestamp")
    {
        num_discard_sync_timestamp = value;
        num_discard_sync_timestamp.value_namespace = name_space;
        num_discard_sync_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-discard-delay-timestamp")
    {
        num_discard_delay_timestamp = value;
        num_discard_delay_timestamp.value_namespace = name_space;
        num_discard_delay_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flagof-last-set-time")
    {
        flagof_last_set_time = value;
        flagof_last_set_time.value_namespace = name_space;
        flagof_last_set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master = value;
        offset_from_master.value_namespace = name_space;
        offset_from_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay = value;
        mean_path_delay.value_namespace = name_space;
        mean_path_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servo-mode")
    {
        servo_mode = value;
        servo_mode.value_namespace = name_space;
        servo_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lock-status")
    {
        lock_status.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "device-status")
    {
        device_status.yfilter = yfilter;
    }
    if(value_path == "log-level")
    {
        log_level.yfilter = yfilter;
    }
    if(value_path == "phase-accuracy-last")
    {
        phase_accuracy_last.yfilter = yfilter;
    }
    if(value_path == "num-sync-timestamp")
    {
        num_sync_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-delay-timestamp")
    {
        num_delay_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-set-time")
    {
        num_set_time.yfilter = yfilter;
    }
    if(value_path == "num-step-time")
    {
        num_step_time.yfilter = yfilter;
    }
    if(value_path == "num-adjust-freq")
    {
        num_adjust_freq.yfilter = yfilter;
    }
    if(value_path == "num-adjust-freq-time")
    {
        num_adjust_freq_time.yfilter = yfilter;
    }
    if(value_path == "last-adjust-freq")
    {
        last_adjust_freq.yfilter = yfilter;
    }
    if(value_path == "last-step-time")
    {
        last_step_time.yfilter = yfilter;
    }
    if(value_path == "num-discard-sync-timestamp")
    {
        num_discard_sync_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-discard-delay-timestamp")
    {
        num_discard_delay_timestamp.yfilter = yfilter;
    }
    if(value_path == "flagof-last-set-time")
    {
        flagof_last_set_time.yfilter = yfilter;
    }
    if(value_path == "offset-from-master")
    {
        offset_from_master.yfilter = yfilter;
    }
    if(value_path == "mean-path-delay")
    {
        mean_path_delay.yfilter = yfilter;
    }
    if(value_path == "servo-mode")
    {
        servo_mode.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-set-time" || name == "last-received-t1" || name == "last-received-t2" || name == "last-received-t3" || name == "last-received-t4" || name == "pre-received-t1" || name == "pre-received-t2" || name == "pre-received-t3" || name == "pre-received-t4" || name == "lock-status" || name == "running" || name == "device-status" || name == "log-level" || name == "phase-accuracy-last" || name == "num-sync-timestamp" || name == "num-delay-timestamp" || name == "num-set-time" || name == "num-step-time" || name == "num-adjust-freq" || name == "num-adjust-freq-time" || name == "last-adjust-freq" || name == "last-step-time" || name == "num-discard-sync-timestamp" || name == "num-discard-delay-timestamp" || name == "flagof-last-set-time" || name == "offset-from-master" || name == "mean-path-delay" || name == "servo-mode")
        return true;
    return false;
}

Ptp::Platform::Servo::LastSetTime::LastSetTime()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-set-time"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::LastSetTime::~LastSetTime()
{
}

bool Ptp::Platform::Servo::LastSetTime::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::LastSetTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::LastSetTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastSetTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-set-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastSetTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::LastSetTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::LastSetTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::LastSetTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastSetTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastSetTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT1::LastReceivedT1()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t1"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::LastReceivedT1::~LastReceivedT1()
{
}

bool Ptp::Platform::Servo::LastReceivedT1::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::LastReceivedT1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::LastReceivedT1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::LastReceivedT1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT2::LastReceivedT2()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t2"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::LastReceivedT2::~LastReceivedT2()
{
}

bool Ptp::Platform::Servo::LastReceivedT2::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::LastReceivedT2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::LastReceivedT2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::LastReceivedT2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT3::LastReceivedT3()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t3"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::LastReceivedT3::~LastReceivedT3()
{
}

bool Ptp::Platform::Servo::LastReceivedT3::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::LastReceivedT3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::LastReceivedT3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::LastReceivedT3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::LastReceivedT4::LastReceivedT4()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "last-received-t4"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::LastReceivedT4::~LastReceivedT4()
{
}

bool Ptp::Platform::Servo::LastReceivedT4::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::LastReceivedT4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::LastReceivedT4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::LastReceivedT4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-received-t4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::LastReceivedT4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::LastReceivedT4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::LastReceivedT4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::LastReceivedT4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::LastReceivedT4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::LastReceivedT4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT1::PreReceivedT1()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t1"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::PreReceivedT1::~PreReceivedT1()
{
}

bool Ptp::Platform::Servo::PreReceivedT1::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::PreReceivedT1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::PreReceivedT1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::PreReceivedT1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT2::PreReceivedT2()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t2"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::PreReceivedT2::~PreReceivedT2()
{
}

bool Ptp::Platform::Servo::PreReceivedT2::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::PreReceivedT2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::PreReceivedT2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::PreReceivedT2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT3::PreReceivedT3()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t3"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::PreReceivedT3::~PreReceivedT3()
{
}

bool Ptp::Platform::Servo::PreReceivedT3::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::PreReceivedT3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::PreReceivedT3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::PreReceivedT3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

Ptp::Platform::Servo::PreReceivedT4::PreReceivedT4()
    :
    second{YType::uint32, "second"},
    nano_second{YType::uint32, "nano-second"}
{

    yang_name = "pre-received-t4"; yang_parent_name = "servo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ptp::Platform::Servo::PreReceivedT4::~PreReceivedT4()
{
}

bool Ptp::Platform::Servo::PreReceivedT4::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nano_second.is_set;
}

bool Ptp::Platform::Servo::PreReceivedT4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nano_second.yfilter);
}

std::string Ptp::Platform::Servo::PreReceivedT4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-oper:ptp/Cisco-IOS-XR-ptp-pd-oper:platform/servo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ptp::Platform::Servo::PreReceivedT4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-received-t4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ptp::Platform::Servo::PreReceivedT4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nano_second.is_set || is_set(nano_second.yfilter)) leaf_name_data.push_back(nano_second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ptp::Platform::Servo::PreReceivedT4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ptp::Platform::Servo::PreReceivedT4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ptp::Platform::Servo::PreReceivedT4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-second")
    {
        nano_second = value;
        nano_second.value_namespace = name_space;
        nano_second.value_namespace_prefix = name_space_prefix;
    }
}

void Ptp::Platform::Servo::PreReceivedT4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nano-second")
    {
        nano_second.yfilter = yfilter;
    }
}

bool Ptp::Platform::Servo::PreReceivedT4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nano-second")
        return true;
    return false;
}

const Enum::YLeaf PtpBagRestrictPortState::any {0, "any"};
const Enum::YLeaf PtpBagRestrictPortState::slave_only {1, "slave-only"};
const Enum::YLeaf PtpBagRestrictPortState::master_only {2, "master-only"};

const Enum::YLeaf PtpBagPortState::initializing {0, "initializing"};
const Enum::YLeaf PtpBagPortState::listen {1, "listen"};
const Enum::YLeaf PtpBagPortState::passive {2, "passive"};
const Enum::YLeaf PtpBagPortState::pre_master {3, "pre-master"};
const Enum::YLeaf PtpBagPortState::master {4, "master"};
const Enum::YLeaf PtpBagPortState::uncalibrated {5, "uncalibrated"};
const Enum::YLeaf PtpBagPortState::slave {6, "slave"};
const Enum::YLeaf PtpBagPortState::faulty {7, "faulty"};

const Enum::YLeaf PtpBagEncap::unknown {0, "unknown"};
const Enum::YLeaf PtpBagEncap::ethernet {1, "ethernet"};
const Enum::YLeaf PtpBagEncap::ipv4 {2, "ipv4"};
const Enum::YLeaf PtpBagEncap::ipv6 {3, "ipv6"};

const Enum::YLeaf PtpBagDelayMechanism::e2e {0, "e2e"};
const Enum::YLeaf PtpBagDelayMechanism::p2p {1, "p2p"};

const Enum::YLeaf PtpBagTelecomClock::grandmaster {0, "grandmaster"};
const Enum::YLeaf PtpBagTelecomClock::boundary {1, "boundary"};
const Enum::YLeaf PtpBagTelecomClock::slave {2, "slave"};

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf PtpBagCommunicationModel::unicast {0, "unicast"};
const Enum::YLeaf PtpBagCommunicationModel::mixed_mode {1, "mixed-mode"};
const Enum::YLeaf PtpBagCommunicationModel::multicast {2, "multicast"};

const Enum::YLeaf PtpBagClockTimeSource::unknown {0, "unknown"};
const Enum::YLeaf PtpBagClockTimeSource::atomic {16, "atomic"};
const Enum::YLeaf PtpBagClockTimeSource::gps {32, "gps"};
const Enum::YLeaf PtpBagClockTimeSource::terrestrial_radio {48, "terrestrial-radio"};
const Enum::YLeaf PtpBagClockTimeSource::ptp {64, "ptp"};
const Enum::YLeaf PtpBagClockTimeSource::ntp {80, "ntp"};
const Enum::YLeaf PtpBagClockTimeSource::hand_set {96, "hand-set"};
const Enum::YLeaf PtpBagClockTimeSource::other {144, "other"};
const Enum::YLeaf PtpBagClockTimeSource::internal_oscillator {160, "internal-oscillator"};

const Enum::YLeaf PtpBagClockLeapSeconds::none {0, "none"};
const Enum::YLeaf PtpBagClockLeapSeconds::leap59 {1, "leap59"};
const Enum::YLeaf PtpBagClockLeapSeconds::leap61 {2, "leap61"};

const Enum::YLeaf PtpBagProfile::default_ {0, "default"};
const Enum::YLeaf PtpBagProfile::g82651 {1, "g82651"};
const Enum::YLeaf PtpBagProfile::g82751 {2, "g82751"};
const Enum::YLeaf PtpBagProfile::g82752 {3, "g82752"};

const Enum::YLeaf PtpBagClockTimescale::ptp {0, "ptp"};
const Enum::YLeaf PtpBagClockTimescale::arb {1, "arb"};


}
}

