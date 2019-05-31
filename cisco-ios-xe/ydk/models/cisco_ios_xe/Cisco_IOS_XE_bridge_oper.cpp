
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_bridge_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bridge_oper {

BridgeInstances::BridgeInstances()
    :
    bridge_entry(this, {"bridge_id"})
{

    yang_name = "bridge-instances"; yang_parent_name = "Cisco-IOS-XE-bridge-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

BridgeInstances::~BridgeInstances()
{
}

bool BridgeInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_entry.len(); index++)
    {
        if(bridge_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeInstances::has_operation() const
{
    for (std::size_t index=0; index<bridge_entry.len(); index++)
    {
        if(bridge_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-oper:bridge-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BridgeInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-entry")
    {
        auto ent_ = std::make_shared<BridgeInstances::BridgeEntry>();
        ent_->parent = this;
        bridge_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BridgeInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BridgeInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BridgeInstances::clone_ptr() const
{
    return std::make_shared<BridgeInstances>();
}

std::string BridgeInstances::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BridgeInstances::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BridgeInstances::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BridgeInstances::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BridgeInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-entry")
        return true;
    return false;
}

BridgeInstances::BridgeEntry::BridgeEntry()
    :
    bridge_id{YType::uint32, "bridge-id"},
    name{YType::str, "name"},
    vlan{YType::uint32, "vlan"},
    routing_interface{YType::str, "routing-interface"},
    max_macs{YType::uint32, "max-macs"},
    num_macs{YType::uint32, "num-macs"},
    age_time{YType::uint32, "age-time"},
    rx_packets{YType::uint64, "rx-packets"},
    rx_octets{YType::uint64, "rx-octets"},
    tx_packets{YType::uint64, "tx-packets"},
    tx_octets{YType::uint64, "tx-octets"},
    flood_packets{YType::uint64, "flood-packets"},
    flood_octets{YType::uint64, "flood-octets"},
    rx_routed_packets{YType::uint64, "rx-routed-packets"},
    tx_routed_packets{YType::uint64, "tx-routed-packets"},
    learn{YType::uint64, "learn"},
    age{YType::uint64, "age"},
    move{YType::uint64, "move"}
        ,
    bridge_intf_entries(std::make_shared<BridgeInstances::BridgeEntry::BridgeIntfEntries>())
    , bridge_matm_entries(std::make_shared<BridgeInstances::BridgeEntry::BridgeMatmEntries>())
{
    bridge_intf_entries->parent = this;
    bridge_matm_entries->parent = this;

    yang_name = "bridge-entry"; yang_parent_name = "bridge-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

BridgeInstances::BridgeEntry::~BridgeEntry()
{
}

bool BridgeInstances::BridgeEntry::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| name.is_set
	|| vlan.is_set
	|| routing_interface.is_set
	|| max_macs.is_set
	|| num_macs.is_set
	|| age_time.is_set
	|| rx_packets.is_set
	|| rx_octets.is_set
	|| tx_packets.is_set
	|| tx_octets.is_set
	|| flood_packets.is_set
	|| flood_octets.is_set
	|| rx_routed_packets.is_set
	|| tx_routed_packets.is_set
	|| learn.is_set
	|| age.is_set
	|| move.is_set
	|| (bridge_intf_entries !=  nullptr && bridge_intf_entries->has_data())
	|| (bridge_matm_entries !=  nullptr && bridge_matm_entries->has_data());
}

bool BridgeInstances::BridgeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(routing_interface.yfilter)
	|| ydk::is_set(max_macs.yfilter)
	|| ydk::is_set(num_macs.yfilter)
	|| ydk::is_set(age_time.yfilter)
	|| ydk::is_set(rx_packets.yfilter)
	|| ydk::is_set(rx_octets.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| ydk::is_set(tx_octets.yfilter)
	|| ydk::is_set(flood_packets.yfilter)
	|| ydk::is_set(flood_octets.yfilter)
	|| ydk::is_set(rx_routed_packets.yfilter)
	|| ydk::is_set(tx_routed_packets.yfilter)
	|| ydk::is_set(learn.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(move.yfilter)
	|| (bridge_intf_entries !=  nullptr && bridge_intf_entries->has_operation())
	|| (bridge_matm_entries !=  nullptr && bridge_matm_entries->has_operation());
}

std::string BridgeInstances::BridgeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-oper:bridge-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeInstances::BridgeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-entry";
    ADD_KEY_TOKEN(bridge_id, "bridge-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeInstances::BridgeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (routing_interface.is_set || is_set(routing_interface.yfilter)) leaf_name_data.push_back(routing_interface.get_name_leafdata());
    if (max_macs.is_set || is_set(max_macs.yfilter)) leaf_name_data.push_back(max_macs.get_name_leafdata());
    if (num_macs.is_set || is_set(num_macs.yfilter)) leaf_name_data.push_back(num_macs.get_name_leafdata());
    if (age_time.is_set || is_set(age_time.yfilter)) leaf_name_data.push_back(age_time.get_name_leafdata());
    if (rx_packets.is_set || is_set(rx_packets.yfilter)) leaf_name_data.push_back(rx_packets.get_name_leafdata());
    if (rx_octets.is_set || is_set(rx_octets.yfilter)) leaf_name_data.push_back(rx_octets.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (tx_octets.is_set || is_set(tx_octets.yfilter)) leaf_name_data.push_back(tx_octets.get_name_leafdata());
    if (flood_packets.is_set || is_set(flood_packets.yfilter)) leaf_name_data.push_back(flood_packets.get_name_leafdata());
    if (flood_octets.is_set || is_set(flood_octets.yfilter)) leaf_name_data.push_back(flood_octets.get_name_leafdata());
    if (rx_routed_packets.is_set || is_set(rx_routed_packets.yfilter)) leaf_name_data.push_back(rx_routed_packets.get_name_leafdata());
    if (tx_routed_packets.is_set || is_set(tx_routed_packets.yfilter)) leaf_name_data.push_back(tx_routed_packets.get_name_leafdata());
    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (move.is_set || is_set(move.yfilter)) leaf_name_data.push_back(move.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BridgeInstances::BridgeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-intf-entries")
    {
        if(bridge_intf_entries == nullptr)
        {
            bridge_intf_entries = std::make_shared<BridgeInstances::BridgeEntry::BridgeIntfEntries>();
        }
        return bridge_intf_entries;
    }

    if(child_yang_name == "bridge-matm-entries")
    {
        if(bridge_matm_entries == nullptr)
        {
            bridge_matm_entries = std::make_shared<BridgeInstances::BridgeEntry::BridgeMatmEntries>();
        }
        return bridge_matm_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BridgeInstances::BridgeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bridge_intf_entries != nullptr)
    {
        _children["bridge-intf-entries"] = bridge_intf_entries;
    }

    if(bridge_matm_entries != nullptr)
    {
        _children["bridge-matm-entries"] = bridge_matm_entries;
    }

    return _children;
}

void BridgeInstances::BridgeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-interface")
    {
        routing_interface = value;
        routing_interface.value_namespace = name_space;
        routing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-macs")
    {
        max_macs = value;
        max_macs.value_namespace = name_space;
        max_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-macs")
    {
        num_macs = value;
        num_macs.value_namespace = name_space;
        num_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-time")
    {
        age_time = value;
        age_time.value_namespace = name_space;
        age_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packets")
    {
        rx_packets = value;
        rx_packets.value_namespace = name_space;
        rx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-octets")
    {
        rx_octets = value;
        rx_octets.value_namespace = name_space;
        rx_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-octets")
    {
        tx_octets = value;
        tx_octets.value_namespace = name_space;
        tx_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-packets")
    {
        flood_packets = value;
        flood_packets.value_namespace = name_space;
        flood_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-octets")
    {
        flood_octets = value;
        flood_octets.value_namespace = name_space;
        flood_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-routed-packets")
    {
        rx_routed_packets = value;
        rx_routed_packets.value_namespace = name_space;
        rx_routed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-routed-packets")
    {
        tx_routed_packets = value;
        tx_routed_packets.value_namespace = name_space;
        tx_routed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "move")
    {
        move = value;
        move.value_namespace = name_space;
        move.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeInstances::BridgeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "routing-interface")
    {
        routing_interface.yfilter = yfilter;
    }
    if(value_path == "max-macs")
    {
        max_macs.yfilter = yfilter;
    }
    if(value_path == "num-macs")
    {
        num_macs.yfilter = yfilter;
    }
    if(value_path == "age-time")
    {
        age_time.yfilter = yfilter;
    }
    if(value_path == "rx-packets")
    {
        rx_packets.yfilter = yfilter;
    }
    if(value_path == "rx-octets")
    {
        rx_octets.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
    if(value_path == "tx-octets")
    {
        tx_octets.yfilter = yfilter;
    }
    if(value_path == "flood-packets")
    {
        flood_packets.yfilter = yfilter;
    }
    if(value_path == "flood-octets")
    {
        flood_octets.yfilter = yfilter;
    }
    if(value_path == "rx-routed-packets")
    {
        rx_routed_packets.yfilter = yfilter;
    }
    if(value_path == "tx-routed-packets")
    {
        tx_routed_packets.yfilter = yfilter;
    }
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "move")
    {
        move.yfilter = yfilter;
    }
}

bool BridgeInstances::BridgeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-intf-entries" || name == "bridge-matm-entries" || name == "bridge-id" || name == "name" || name == "vlan" || name == "routing-interface" || name == "max-macs" || name == "num-macs" || name == "age-time" || name == "rx-packets" || name == "rx-octets" || name == "tx-packets" || name == "tx-octets" || name == "flood-packets" || name == "flood-octets" || name == "rx-routed-packets" || name == "tx-routed-packets" || name == "learn" || name == "age" || name == "move")
        return true;
    return false;
}

BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntries()
    :
    bridge_intf_entry(this, {"if_name"})
{

    yang_name = "bridge-intf-entries"; yang_parent_name = "bridge-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BridgeInstances::BridgeEntry::BridgeIntfEntries::~BridgeIntfEntries()
{
}

bool BridgeInstances::BridgeEntry::BridgeIntfEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_intf_entry.len(); index++)
    {
        if(bridge_intf_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeInstances::BridgeEntry::BridgeIntfEntries::has_operation() const
{
    for (std::size_t index=0; index<bridge_intf_entry.len(); index++)
    {
        if(bridge_intf_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeInstances::BridgeEntry::BridgeIntfEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-intf-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeInstances::BridgeEntry::BridgeIntfEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BridgeInstances::BridgeEntry::BridgeIntfEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-intf-entry")
    {
        auto ent_ = std::make_shared<BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry>();
        ent_->parent = this;
        bridge_intf_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BridgeInstances::BridgeEntry::BridgeIntfEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_intf_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BridgeInstances::BridgeEntry::BridgeIntfEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeInstances::BridgeEntry::BridgeIntfEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeInstances::BridgeEntry::BridgeIntfEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-intf-entry")
        return true;
    return false;
}

BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::BridgeIntfEntry()
    :
    if_name{YType::str, "if-name"},
    vlan{YType::uint32, "vlan"},
    native_vlan{YType::boolean, "native-vlan"},
    admin_status{YType::enumeration, "admin-status"},
    oper_status{YType::enumeration, "oper-status"},
    encap_type{YType::str, "encap-type"},
    ifindex{YType::uint32, "ifindex"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "bridge-intf-entry"; yang_parent_name = "bridge-intf-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::~BridgeIntfEntry()
{
}

bool BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::has_data() const
{
    if (is_presence_container) return true;
    return if_name.is_set
	|| vlan.is_set
	|| native_vlan.is_set
	|| admin_status.is_set
	|| oper_status.is_set
	|| encap_type.is_set
	|| ifindex.is_set
	|| mtu.is_set;
}

bool BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(encap_type.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-intf-entry";
    ADD_KEY_TOKEN(if_name, "if-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (encap_type.is_set || is_set(encap_type.yfilter)) leaf_name_data.push_back(encap_type.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-type")
    {
        encap_type = value;
        encap_type.value_namespace = name_space;
        encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "encap-type")
    {
        encap_type.yfilter = yfilter;
    }
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-name" || name == "vlan" || name == "native-vlan" || name == "admin-status" || name == "oper-status" || name == "encap-type" || name == "ifindex" || name == "mtu")
        return true;
    return false;
}

BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntries()
    :
    bridge_matm_entry(this, {"mac_address"})
{

    yang_name = "bridge-matm-entries"; yang_parent_name = "bridge-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BridgeInstances::BridgeEntry::BridgeMatmEntries::~BridgeMatmEntries()
{
}

bool BridgeInstances::BridgeEntry::BridgeMatmEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_matm_entry.len(); index++)
    {
        if(bridge_matm_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeInstances::BridgeEntry::BridgeMatmEntries::has_operation() const
{
    for (std::size_t index=0; index<bridge_matm_entry.len(); index++)
    {
        if(bridge_matm_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeInstances::BridgeEntry::BridgeMatmEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-matm-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeInstances::BridgeEntry::BridgeMatmEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BridgeInstances::BridgeEntry::BridgeMatmEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-matm-entry")
    {
        auto ent_ = std::make_shared<BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry>();
        ent_->parent = this;
        bridge_matm_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BridgeInstances::BridgeEntry::BridgeMatmEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_matm_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BridgeInstances::BridgeEntry::BridgeMatmEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeInstances::BridgeEntry::BridgeMatmEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeInstances::BridgeEntry::BridgeMatmEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-matm-entry")
        return true;
    return false;
}

BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::BridgeMatmEntry()
    :
    mac_address{YType::str, "mac-address"},
    interface{YType::str, "interface"},
    vlan{YType::uint32, "vlan"},
    type{YType::enumeration, "type"}
{

    yang_name = "bridge-matm-entry"; yang_parent_name = "bridge-matm-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::~BridgeMatmEntry()
{
}

bool BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return mac_address.is_set
	|| vlan.is_set
	|| type.is_set;
}

bool BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-matm-entry";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface.append(value);
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "interface" || name == "vlan" || name == "type")
        return true;
    return false;
}

const Enum::YLeaf IntfStatusType::up {0, "up"};
const Enum::YLeaf IntfStatusType::down {1, "down"};

const Enum::YLeaf BridgeMacType::bridge_mac_type_static {0, "bridge-mac-type-static"};
const Enum::YLeaf BridgeMacType::bridge_mac_type_dynamic {1, "bridge-mac-type-dynamic"};


}
}

