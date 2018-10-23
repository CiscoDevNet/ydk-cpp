
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_lldp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_lldp_oper {

LldpSnoopData::LldpSnoopData()
    :
    ethernet_controller_names(std::make_shared<LldpSnoopData::EthernetControllerNames>())
{
    ethernet_controller_names->parent = this;

    yang_name = "lldp-snoop-data"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-lldp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

LldpSnoopData::~LldpSnoopData()
{
}

bool LldpSnoopData::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet_controller_names !=  nullptr && ethernet_controller_names->has_data());
}

bool LldpSnoopData::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet_controller_names !=  nullptr && ethernet_controller_names->has_operation());
}

std::string LldpSnoopData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LldpSnoopData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LldpSnoopData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-controller-names")
    {
        if(ethernet_controller_names == nullptr)
        {
            ethernet_controller_names = std::make_shared<LldpSnoopData::EthernetControllerNames>();
        }
        return ethernet_controller_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LldpSnoopData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_controller_names != nullptr)
    {
        _children["ethernet-controller-names"] = ethernet_controller_names;
    }

    return _children;
}

void LldpSnoopData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpSnoopData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> LldpSnoopData::clone_ptr() const
{
    return std::make_shared<LldpSnoopData>();
}

std::string LldpSnoopData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LldpSnoopData::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LldpSnoopData::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LldpSnoopData::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LldpSnoopData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-controller-names")
        return true;
    return false;
}

LldpSnoopData::EthernetControllerNames::EthernetControllerNames()
    :
    ethernet_controller_name(this, {"name"})
{

    yang_name = "ethernet-controller-names"; yang_parent_name = "lldp-snoop-data"; is_top_level_class = false; has_list_ancestor = false; 
}

LldpSnoopData::EthernetControllerNames::~EthernetControllerNames()
{
}

bool LldpSnoopData::EthernetControllerNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_controller_name.len(); index++)
    {
        if(ethernet_controller_name[index]->has_data())
            return true;
    }
    return false;
}

bool LldpSnoopData::EthernetControllerNames::has_operation() const
{
    for (std::size_t index=0; index<ethernet_controller_name.len(); index++)
    {
        if(ethernet_controller_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpSnoopData::EthernetControllerNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data/" << get_segment_path();
    return path_buffer.str();
}

std::string LldpSnoopData::EthernetControllerNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-controller-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LldpSnoopData::EthernetControllerNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LldpSnoopData::EthernetControllerNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-controller-name")
    {
        auto ent_ = std::make_shared<LldpSnoopData::EthernetControllerNames::EthernetControllerName>();
        ent_->parent = this;
        ethernet_controller_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LldpSnoopData::EthernetControllerNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_controller_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LldpSnoopData::EthernetControllerNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpSnoopData::EthernetControllerNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpSnoopData::EthernetControllerNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-controller-name")
        return true;
    return false;
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::EthernetControllerName()
    :
    name{YType::str, "name"},
    source_mac{YType::str, "source-mac"},
    chassis_id{YType::str, "chassis-id"},
    port_id_detail{YType::str, "port-id-detail"},
    hold_time{YType::uint16, "hold-time"},
    port_description{YType::str, "port-description"},
    system_name{YType::str, "system-name"},
    system_description{YType::str, "system-description"},
    system_capabilities{YType::str, "system-capabilities"},
    enabled_capabilities{YType::str, "enabled-capabilities"},
    lldp_neighbor{YType::str, "lldp-neighbor"},
    drop_enabled{YType::boolean, "drop-enabled"},
    rx_lldp_pkts{YType::uint64, "rx-lldp-pkts"}
        ,
    network_addresses(std::make_shared<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses>())
{
    network_addresses->parent = this;

    yang_name = "ethernet-controller-name"; yang_parent_name = "ethernet-controller-names"; is_top_level_class = false; has_list_ancestor = false; 
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::~EthernetControllerName()
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source_mac.is_set
	|| chassis_id.is_set
	|| port_id_detail.is_set
	|| hold_time.is_set
	|| port_description.is_set
	|| system_name.is_set
	|| system_description.is_set
	|| system_capabilities.is_set
	|| enabled_capabilities.is_set
	|| lldp_neighbor.is_set
	|| drop_enabled.is_set
	|| rx_lldp_pkts.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data());
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_mac.yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(port_id_detail.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(port_description.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| ydk::is_set(system_description.yfilter)
	|| ydk::is_set(system_capabilities.yfilter)
	|| ydk::is_set(enabled_capabilities.yfilter)
	|| ydk::is_set(lldp_neighbor.yfilter)
	|| ydk::is_set(drop_enabled.yfilter)
	|| ydk::is_set(rx_lldp_pkts.yfilter)
	|| (network_addresses !=  nullptr && network_addresses->has_operation());
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data/ethernet-controller-names/" << get_segment_path();
    return path_buffer.str();
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-controller-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_mac.is_set || is_set(source_mac.yfilter)) leaf_name_data.push_back(source_mac.get_name_leafdata());
    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (port_id_detail.is_set || is_set(port_id_detail.yfilter)) leaf_name_data.push_back(port_id_detail.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (port_description.is_set || is_set(port_description.yfilter)) leaf_name_data.push_back(port_description.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.yfilter)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (system_capabilities.is_set || is_set(system_capabilities.yfilter)) leaf_name_data.push_back(system_capabilities.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.yfilter)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (lldp_neighbor.is_set || is_set(lldp_neighbor.yfilter)) leaf_name_data.push_back(lldp_neighbor.get_name_leafdata());
    if (drop_enabled.is_set || is_set(drop_enabled.yfilter)) leaf_name_data.push_back(drop_enabled.get_name_leafdata());
    if (rx_lldp_pkts.is_set || is_set(rx_lldp_pkts.yfilter)) leaf_name_data.push_back(rx_lldp_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-addresses")
    {
        if(network_addresses == nullptr)
        {
            network_addresses = std::make_shared<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses>();
        }
        return network_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network_addresses != nullptr)
    {
        _children["network-addresses"] = network_addresses;
    }

    return _children;
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac")
    {
        source_mac = value;
        source_mac.value_namespace = name_space;
        source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail = value;
        port_id_detail.value_namespace = name_space;
        port_id_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-description")
    {
        port_description = value;
        port_description.value_namespace = name_space;
        port_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-description")
    {
        system_description = value;
        system_description.value_namespace = name_space;
        system_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities = value;
        system_capabilities.value_namespace = name_space;
        system_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
        enabled_capabilities.value_namespace = name_space;
        enabled_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp-neighbor")
    {
        lldp_neighbor = value;
        lldp_neighbor.value_namespace = name_space;
        lldp_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-enabled")
    {
        drop_enabled = value;
        drop_enabled.value_namespace = name_space;
        drop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lldp-pkts")
    {
        rx_lldp_pkts = value;
        rx_lldp_pkts.value_namespace = name_space;
        rx_lldp_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-mac")
    {
        source_mac.yfilter = yfilter;
    }
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "port-description")
    {
        port_description.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
    if(value_path == "system-description")
    {
        system_description.yfilter = yfilter;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities.yfilter = yfilter;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities.yfilter = yfilter;
    }
    if(value_path == "lldp-neighbor")
    {
        lldp_neighbor.yfilter = yfilter;
    }
    if(value_path == "drop-enabled")
    {
        drop_enabled.yfilter = yfilter;
    }
    if(value_path == "rx-lldp-pkts")
    {
        rx_lldp_pkts.yfilter = yfilter;
    }
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addresses" || name == "name" || name == "source-mac" || name == "chassis-id" || name == "port-id-detail" || name == "hold-time" || name == "port-description" || name == "system-name" || name == "system-description" || name == "system-capabilities" || name == "enabled-capabilities" || name == "lldp-neighbor" || name == "drop-enabled" || name == "rx-lldp-pkts")
        return true;
    return false;
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::NetworkAddresses()
    :
    lldp_addr_entry(this, {})
{

    yang_name = "network-addresses"; yang_parent_name = "ethernet-controller-name"; is_top_level_class = false; has_list_ancestor = true; 
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::~NetworkAddresses()
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldp_addr_entry.len(); index++)
    {
        if(lldp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<lldp_addr_entry.len(); index++)
    {
        if(lldp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-addr-entry")
    {
        auto ent_ = std::make_shared<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry>();
        ent_->parent = this;
        lldp_addr_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldp_addr_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-addr-entry")
        return true;
    return false;
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::LldpAddrEntry()
    :
    ma_subtype{YType::uint8, "ma-subtype"},
    if_num{YType::uint32, "if-num"}
        ,
    address(std::make_shared<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "lldp-addr-entry"; yang_parent_name = "network-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::~LldpAddrEntry()
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ma_subtype.is_set
	|| if_num.is_set
	|| (address !=  nullptr && address->has_data());
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ma_subtype.yfilter)
	|| ydk::is_set(if_num.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ma_subtype.is_set || is_set(ma_subtype.yfilter)) leaf_name_data.push_back(ma_subtype.get_name_leafdata());
    if (if_num.is_set || is_set(if_num.yfilter)) leaf_name_data.push_back(if_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ma-subtype")
    {
        ma_subtype = value;
        ma_subtype.value_namespace = name_space;
        ma_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-num")
    {
        if_num = value;
        if_num.value_namespace = name_space;
        if_num.value_namespace_prefix = name_space_prefix;
    }
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ma-subtype")
    {
        ma_subtype.yfilter = yfilter;
    }
    if(value_path == "if-num")
    {
        if_num.yfilter = yfilter;
    }
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ma-subtype" || name == "if-num")
        return true;
    return false;
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "lldp-addr-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::~Address()
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddresses::LldpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

const Enum::YLeaf LldpL3AddrProtocol::ipv4 {0, "ipv4"};
const Enum::YLeaf LldpL3AddrProtocol::ipv6 {1, "ipv6"};


}
}

