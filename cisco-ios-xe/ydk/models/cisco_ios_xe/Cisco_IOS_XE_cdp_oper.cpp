
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_cdp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_cdp_oper {

CdpNeighborDetails::CdpNeighborDetails()
    :
    cdp_neighbor_detail(this, {"device_id"})
{

    yang_name = "cdp-neighbor-details"; yang_parent_name = "Cisco-IOS-XE-cdp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

CdpNeighborDetails::~CdpNeighborDetails()
{
}

bool CdpNeighborDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdp_neighbor_detail.len(); index++)
    {
        if(cdp_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool CdpNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<cdp_neighbor_detail.len(); index++)
    {
        if(cdp_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CdpNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp-oper:cdp-neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CdpNeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CdpNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-neighbor-detail")
    {
        auto ent_ = std::make_shared<CdpNeighborDetails::CdpNeighborDetail>();
        ent_->parent = this;
        cdp_neighbor_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CdpNeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdp_neighbor_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CdpNeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CdpNeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CdpNeighborDetails::clone_ptr() const
{
    return std::make_shared<CdpNeighborDetails>();
}

std::string CdpNeighborDetails::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CdpNeighborDetails::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CdpNeighborDetails::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CdpNeighborDetails::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CdpNeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-neighbor-detail")
        return true;
    return false;
}

CdpNeighborDetails::CdpNeighborDetail::CdpNeighborDetail()
    :
    device_id{YType::uint32, "device-id"},
    device_name{YType::str, "device-name"},
    local_intf_name{YType::str, "local-intf-name"},
    port_id{YType::str, "port-id"},
    capability{YType::str, "capability"},
    platform_name{YType::str, "platform-name"},
    version{YType::str, "version"},
    duplex{YType::enumeration, "duplex"},
    adv_version{YType::enumeration, "adv-version"},
    vty_mgmt_domain{YType::str, "vty-mgmt-domain"},
    native_vlan{YType::uint16, "native-vlan"},
    vvid_tag{YType::uint8, "vvid-tag"},
    vvid{YType::uint16, "vvid"},
    power{YType::uint32, "power"},
    unidirectional_mode{YType::enumeration, "unidirectional-mode"},
    mgmt_address{YType::str, "mgmt-address"},
    ip_address{YType::str, "ip-address"},
    ipv6_address{YType::str, "ipv6-address"},
    clns_address{YType::str, "clns-address"},
    decnet_addr{YType::str, "decnet-addr"},
    novell_addr{YType::str, "novell-addr"},
    second_port_status{YType::str, "second-port-status"},
    table_id{YType::uint16, "table-id"}
        ,
    hello_message(std::make_shared<CdpNeighborDetails::CdpNeighborDetail::HelloMessage>())
    , power_request(std::make_shared<CdpNeighborDetails::CdpNeighborDetail::PowerRequest>())
    , power_available(std::make_shared<CdpNeighborDetails::CdpNeighborDetail::PowerAvailable>())
    , spare_pair(std::make_shared<CdpNeighborDetails::CdpNeighborDetail::SparePair>())
{
    hello_message->parent = this;
    power_request->parent = this;
    power_available->parent = this;
    spare_pair->parent = this;

    yang_name = "cdp-neighbor-detail"; yang_parent_name = "cdp-neighbor-details"; is_top_level_class = false; has_list_ancestor = false; 
}

CdpNeighborDetails::CdpNeighborDetail::~CdpNeighborDetail()
{
}

bool CdpNeighborDetails::CdpNeighborDetail::has_data() const
{
    if (is_presence_container) return true;
    return device_id.is_set
	|| device_name.is_set
	|| local_intf_name.is_set
	|| port_id.is_set
	|| capability.is_set
	|| platform_name.is_set
	|| version.is_set
	|| duplex.is_set
	|| adv_version.is_set
	|| vty_mgmt_domain.is_set
	|| native_vlan.is_set
	|| vvid_tag.is_set
	|| vvid.is_set
	|| power.is_set
	|| unidirectional_mode.is_set
	|| mgmt_address.is_set
	|| ip_address.is_set
	|| ipv6_address.is_set
	|| clns_address.is_set
	|| decnet_addr.is_set
	|| novell_addr.is_set
	|| second_port_status.is_set
	|| table_id.is_set
	|| (hello_message !=  nullptr && hello_message->has_data())
	|| (power_request !=  nullptr && power_request->has_data())
	|| (power_available !=  nullptr && power_available->has_data())
	|| (spare_pair !=  nullptr && spare_pair->has_data());
}

bool CdpNeighborDetails::CdpNeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(local_intf_name.yfilter)
	|| ydk::is_set(port_id.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(platform_name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(adv_version.yfilter)
	|| ydk::is_set(vty_mgmt_domain.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(vvid_tag.yfilter)
	|| ydk::is_set(vvid.yfilter)
	|| ydk::is_set(power.yfilter)
	|| ydk::is_set(unidirectional_mode.yfilter)
	|| ydk::is_set(mgmt_address.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(clns_address.yfilter)
	|| ydk::is_set(decnet_addr.yfilter)
	|| ydk::is_set(novell_addr.yfilter)
	|| ydk::is_set(second_port_status.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| (hello_message !=  nullptr && hello_message->has_operation())
	|| (power_request !=  nullptr && power_request->has_operation())
	|| (power_available !=  nullptr && power_available->has_operation())
	|| (spare_pair !=  nullptr && spare_pair->has_operation());
}

std::string CdpNeighborDetails::CdpNeighborDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp-oper:cdp-neighbor-details/" << get_segment_path();
    return path_buffer.str();
}

std::string CdpNeighborDetails::CdpNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-neighbor-detail";
    ADD_KEY_TOKEN(device_id, "device-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CdpNeighborDetails::CdpNeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (local_intf_name.is_set || is_set(local_intf_name.yfilter)) leaf_name_data.push_back(local_intf_name.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.yfilter)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (platform_name.is_set || is_set(platform_name.yfilter)) leaf_name_data.push_back(platform_name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (adv_version.is_set || is_set(adv_version.yfilter)) leaf_name_data.push_back(adv_version.get_name_leafdata());
    if (vty_mgmt_domain.is_set || is_set(vty_mgmt_domain.yfilter)) leaf_name_data.push_back(vty_mgmt_domain.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (vvid_tag.is_set || is_set(vvid_tag.yfilter)) leaf_name_data.push_back(vvid_tag.get_name_leafdata());
    if (vvid.is_set || is_set(vvid.yfilter)) leaf_name_data.push_back(vvid.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());
    if (unidirectional_mode.is_set || is_set(unidirectional_mode.yfilter)) leaf_name_data.push_back(unidirectional_mode.get_name_leafdata());
    if (mgmt_address.is_set || is_set(mgmt_address.yfilter)) leaf_name_data.push_back(mgmt_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (clns_address.is_set || is_set(clns_address.yfilter)) leaf_name_data.push_back(clns_address.get_name_leafdata());
    if (decnet_addr.is_set || is_set(decnet_addr.yfilter)) leaf_name_data.push_back(decnet_addr.get_name_leafdata());
    if (novell_addr.is_set || is_set(novell_addr.yfilter)) leaf_name_data.push_back(novell_addr.get_name_leafdata());
    if (second_port_status.is_set || is_set(second_port_status.yfilter)) leaf_name_data.push_back(second_port_status.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CdpNeighborDetails::CdpNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-message")
    {
        if(hello_message == nullptr)
        {
            hello_message = std::make_shared<CdpNeighborDetails::CdpNeighborDetail::HelloMessage>();
        }
        return hello_message;
    }

    if(child_yang_name == "power-request")
    {
        if(power_request == nullptr)
        {
            power_request = std::make_shared<CdpNeighborDetails::CdpNeighborDetail::PowerRequest>();
        }
        return power_request;
    }

    if(child_yang_name == "power-available")
    {
        if(power_available == nullptr)
        {
            power_available = std::make_shared<CdpNeighborDetails::CdpNeighborDetail::PowerAvailable>();
        }
        return power_available;
    }

    if(child_yang_name == "spare-pair")
    {
        if(spare_pair == nullptr)
        {
            spare_pair = std::make_shared<CdpNeighborDetails::CdpNeighborDetail::SparePair>();
        }
        return spare_pair;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CdpNeighborDetails::CdpNeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hello_message != nullptr)
    {
        _children["hello-message"] = hello_message;
    }

    if(power_request != nullptr)
    {
        _children["power-request"] = power_request;
    }

    if(power_available != nullptr)
    {
        _children["power-available"] = power_available;
    }

    if(spare_pair != nullptr)
    {
        _children["spare-pair"] = spare_pair;
    }

    return _children;
}

void CdpNeighborDetails::CdpNeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-intf-name")
    {
        local_intf_name = value;
        local_intf_name.value_namespace = name_space;
        local_intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id")
    {
        port_id = value;
        port_id.value_namespace = name_space;
        port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-name")
    {
        platform_name = value;
        platform_name.value_namespace = name_space;
        platform_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-version")
    {
        adv_version = value;
        adv_version.value_namespace = name_space;
        adv_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-mgmt-domain")
    {
        vty_mgmt_domain = value;
        vty_mgmt_domain.value_namespace = name_space;
        vty_mgmt_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vvid-tag")
    {
        vvid_tag = value;
        vvid_tag.value_namespace = name_space;
        vvid_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vvid")
    {
        vvid = value;
        vvid.value_namespace = name_space;
        vvid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unidirectional-mode")
    {
        unidirectional_mode = value;
        unidirectional_mode.value_namespace = name_space;
        unidirectional_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmt-address")
    {
        mgmt_address = value;
        mgmt_address.value_namespace = name_space;
        mgmt_address.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "clns-address")
    {
        clns_address = value;
        clns_address.value_namespace = name_space;
        clns_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decnet-addr")
    {
        decnet_addr = value;
        decnet_addr.value_namespace = name_space;
        decnet_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "novell-addr")
    {
        novell_addr = value;
        novell_addr.value_namespace = name_space;
        novell_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-port-status")
    {
        second_port_status = value;
        second_port_status.value_namespace = name_space;
        second_port_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void CdpNeighborDetails::CdpNeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "local-intf-name")
    {
        local_intf_name.yfilter = yfilter;
    }
    if(value_path == "port-id")
    {
        port_id.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "platform-name")
    {
        platform_name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "adv-version")
    {
        adv_version.yfilter = yfilter;
    }
    if(value_path == "vty-mgmt-domain")
    {
        vty_mgmt_domain.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "vvid-tag")
    {
        vvid_tag.yfilter = yfilter;
    }
    if(value_path == "vvid")
    {
        vvid.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
    if(value_path == "unidirectional-mode")
    {
        unidirectional_mode.yfilter = yfilter;
    }
    if(value_path == "mgmt-address")
    {
        mgmt_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "clns-address")
    {
        clns_address.yfilter = yfilter;
    }
    if(value_path == "decnet-addr")
    {
        decnet_addr.yfilter = yfilter;
    }
    if(value_path == "novell-addr")
    {
        novell_addr.yfilter = yfilter;
    }
    if(value_path == "second-port-status")
    {
        second_port_status.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool CdpNeighborDetails::CdpNeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-message" || name == "power-request" || name == "power-available" || name == "spare-pair" || name == "device-id" || name == "device-name" || name == "local-intf-name" || name == "port-id" || name == "capability" || name == "platform-name" || name == "version" || name == "duplex" || name == "adv-version" || name == "vty-mgmt-domain" || name == "native-vlan" || name == "vvid-tag" || name == "vvid" || name == "power" || name == "unidirectional-mode" || name == "mgmt-address" || name == "ip-address" || name == "ipv6-address" || name == "clns-address" || name == "decnet-addr" || name == "novell-addr" || name == "second-port-status" || name == "table-id")
        return true;
    return false;
}

CdpNeighborDetails::CdpNeighborDetail::HelloMessage::HelloMessage()
    :
    oui{YType::str, "oui"},
    protocol_id{YType::str, "protocol-id"},
    payload_value{YType::str, "payload-value"},
    payload_len{YType::uint16, "payload-len"}
{

    yang_name = "hello-message"; yang_parent_name = "cdp-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

CdpNeighborDetails::CdpNeighborDetail::HelloMessage::~HelloMessage()
{
}

bool CdpNeighborDetails::CdpNeighborDetail::HelloMessage::has_data() const
{
    if (is_presence_container) return true;
    return oui.is_set
	|| protocol_id.is_set
	|| payload_value.is_set
	|| payload_len.is_set;
}

bool CdpNeighborDetails::CdpNeighborDetail::HelloMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(payload_value.yfilter)
	|| ydk::is_set(payload_len.yfilter);
}

std::string CdpNeighborDetails::CdpNeighborDetail::HelloMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CdpNeighborDetails::CdpNeighborDetail::HelloMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (payload_value.is_set || is_set(payload_value.yfilter)) leaf_name_data.push_back(payload_value.get_name_leafdata());
    if (payload_len.is_set || is_set(payload_len.yfilter)) leaf_name_data.push_back(payload_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CdpNeighborDetails::CdpNeighborDetail::HelloMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CdpNeighborDetails::CdpNeighborDetail::HelloMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CdpNeighborDetails::CdpNeighborDetail::HelloMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-value")
    {
        payload_value = value;
        payload_value.value_namespace = name_space;
        payload_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-len")
    {
        payload_len = value;
        payload_len.value_namespace = name_space;
        payload_len.value_namespace_prefix = name_space_prefix;
    }
}

void CdpNeighborDetails::CdpNeighborDetail::HelloMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "payload-value")
    {
        payload_value.yfilter = yfilter;
    }
    if(value_path == "payload-len")
    {
        payload_len.yfilter = yfilter;
    }
}

bool CdpNeighborDetails::CdpNeighborDetail::HelloMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oui" || name == "protocol-id" || name == "payload-value" || name == "payload-len")
        return true;
    return false;
}

CdpNeighborDetails::CdpNeighborDetail::PowerRequest::PowerRequest()
    :
    power_request_id{YType::uint16, "power-request-id"},
    power_man_id{YType::uint16, "power-man-id"},
    power_request_level{YType::str, "power-request-level"}
{

    yang_name = "power-request"; yang_parent_name = "cdp-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

CdpNeighborDetails::CdpNeighborDetail::PowerRequest::~PowerRequest()
{
}

bool CdpNeighborDetails::CdpNeighborDetail::PowerRequest::has_data() const
{
    if (is_presence_container) return true;
    return power_request_id.is_set
	|| power_man_id.is_set
	|| power_request_level.is_set;
}

bool CdpNeighborDetails::CdpNeighborDetail::PowerRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_request_id.yfilter)
	|| ydk::is_set(power_man_id.yfilter)
	|| ydk::is_set(power_request_level.yfilter);
}

std::string CdpNeighborDetails::CdpNeighborDetail::PowerRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CdpNeighborDetails::CdpNeighborDetail::PowerRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_request_id.is_set || is_set(power_request_id.yfilter)) leaf_name_data.push_back(power_request_id.get_name_leafdata());
    if (power_man_id.is_set || is_set(power_man_id.yfilter)) leaf_name_data.push_back(power_man_id.get_name_leafdata());
    if (power_request_level.is_set || is_set(power_request_level.yfilter)) leaf_name_data.push_back(power_request_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CdpNeighborDetails::CdpNeighborDetail::PowerRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CdpNeighborDetails::CdpNeighborDetail::PowerRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CdpNeighborDetails::CdpNeighborDetail::PowerRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-request-id")
    {
        power_request_id = value;
        power_request_id.value_namespace = name_space;
        power_request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-man-id")
    {
        power_man_id = value;
        power_man_id.value_namespace = name_space;
        power_man_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-request-level")
    {
        power_request_level = value;
        power_request_level.value_namespace = name_space;
        power_request_level.value_namespace_prefix = name_space_prefix;
    }
}

void CdpNeighborDetails::CdpNeighborDetail::PowerRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-request-id")
    {
        power_request_id.yfilter = yfilter;
    }
    if(value_path == "power-man-id")
    {
        power_man_id.yfilter = yfilter;
    }
    if(value_path == "power-request-level")
    {
        power_request_level.yfilter = yfilter;
    }
}

bool CdpNeighborDetails::CdpNeighborDetail::PowerRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-request-id" || name == "power-man-id" || name == "power-request-level")
        return true;
    return false;
}

CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::PowerAvailable()
    :
    power_request_id{YType::uint16, "power-request-id"},
    power_man_id{YType::uint16, "power-man-id"},
    power_available{YType::uint32, "power-available"},
    power_man_level{YType::uint32, "power-man-level"}
{

    yang_name = "power-available"; yang_parent_name = "cdp-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::~PowerAvailable()
{
}

bool CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::has_data() const
{
    if (is_presence_container) return true;
    return power_request_id.is_set
	|| power_man_id.is_set
	|| power_available.is_set
	|| power_man_level.is_set;
}

bool CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_request_id.yfilter)
	|| ydk::is_set(power_man_id.yfilter)
	|| ydk::is_set(power_available.yfilter)
	|| ydk::is_set(power_man_level.yfilter);
}

std::string CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-available";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_request_id.is_set || is_set(power_request_id.yfilter)) leaf_name_data.push_back(power_request_id.get_name_leafdata());
    if (power_man_id.is_set || is_set(power_man_id.yfilter)) leaf_name_data.push_back(power_man_id.get_name_leafdata());
    if (power_available.is_set || is_set(power_available.yfilter)) leaf_name_data.push_back(power_available.get_name_leafdata());
    if (power_man_level.is_set || is_set(power_man_level.yfilter)) leaf_name_data.push_back(power_man_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-request-id")
    {
        power_request_id = value;
        power_request_id.value_namespace = name_space;
        power_request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-man-id")
    {
        power_man_id = value;
        power_man_id.value_namespace = name_space;
        power_man_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-available")
    {
        power_available = value;
        power_available.value_namespace = name_space;
        power_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-man-level")
    {
        power_man_level = value;
        power_man_level.value_namespace = name_space;
        power_man_level.value_namespace_prefix = name_space_prefix;
    }
}

void CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-request-id")
    {
        power_request_id.yfilter = yfilter;
    }
    if(value_path == "power-man-id")
    {
        power_man_id.yfilter = yfilter;
    }
    if(value_path == "power-available")
    {
        power_available.yfilter = yfilter;
    }
    if(value_path == "power-man-level")
    {
        power_man_level.yfilter = yfilter;
    }
}

bool CdpNeighborDetails::CdpNeighborDetail::PowerAvailable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-request-id" || name == "power-man-id" || name == "power-available" || name == "power-man-level")
        return true;
    return false;
}

CdpNeighborDetails::CdpNeighborDetail::SparePair::SparePair()
    :
    spare_pair_poe{YType::enumeration, "spare-pair-poe"},
    spare_pair_detection_required{YType::enumeration, "spare-pair-detection-required"},
    spare_pair_pd_config{YType::enumeration, "spare-pair-pd-config"},
    spare_pair_pse_operational{YType::enumeration, "spare-pair-pse-operational"}
{

    yang_name = "spare-pair"; yang_parent_name = "cdp-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

CdpNeighborDetails::CdpNeighborDetail::SparePair::~SparePair()
{
}

bool CdpNeighborDetails::CdpNeighborDetail::SparePair::has_data() const
{
    if (is_presence_container) return true;
    return spare_pair_poe.is_set
	|| spare_pair_detection_required.is_set
	|| spare_pair_pd_config.is_set
	|| spare_pair_pse_operational.is_set;
}

bool CdpNeighborDetails::CdpNeighborDetail::SparePair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spare_pair_poe.yfilter)
	|| ydk::is_set(spare_pair_detection_required.yfilter)
	|| ydk::is_set(spare_pair_pd_config.yfilter)
	|| ydk::is_set(spare_pair_pse_operational.yfilter);
}

std::string CdpNeighborDetails::CdpNeighborDetail::SparePair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spare-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CdpNeighborDetails::CdpNeighborDetail::SparePair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spare_pair_poe.is_set || is_set(spare_pair_poe.yfilter)) leaf_name_data.push_back(spare_pair_poe.get_name_leafdata());
    if (spare_pair_detection_required.is_set || is_set(spare_pair_detection_required.yfilter)) leaf_name_data.push_back(spare_pair_detection_required.get_name_leafdata());
    if (spare_pair_pd_config.is_set || is_set(spare_pair_pd_config.yfilter)) leaf_name_data.push_back(spare_pair_pd_config.get_name_leafdata());
    if (spare_pair_pse_operational.is_set || is_set(spare_pair_pse_operational.yfilter)) leaf_name_data.push_back(spare_pair_pse_operational.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CdpNeighborDetails::CdpNeighborDetail::SparePair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CdpNeighborDetails::CdpNeighborDetail::SparePair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CdpNeighborDetails::CdpNeighborDetail::SparePair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spare-pair-poe")
    {
        spare_pair_poe = value;
        spare_pair_poe.value_namespace = name_space;
        spare_pair_poe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spare-pair-detection-required")
    {
        spare_pair_detection_required = value;
        spare_pair_detection_required.value_namespace = name_space;
        spare_pair_detection_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spare-pair-pd-config")
    {
        spare_pair_pd_config = value;
        spare_pair_pd_config.value_namespace = name_space;
        spare_pair_pd_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spare-pair-pse-operational")
    {
        spare_pair_pse_operational = value;
        spare_pair_pse_operational.value_namespace = name_space;
        spare_pair_pse_operational.value_namespace_prefix = name_space_prefix;
    }
}

void CdpNeighborDetails::CdpNeighborDetail::SparePair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spare-pair-poe")
    {
        spare_pair_poe.yfilter = yfilter;
    }
    if(value_path == "spare-pair-detection-required")
    {
        spare_pair_detection_required.yfilter = yfilter;
    }
    if(value_path == "spare-pair-pd-config")
    {
        spare_pair_pd_config.yfilter = yfilter;
    }
    if(value_path == "spare-pair-pse-operational")
    {
        spare_pair_pse_operational.yfilter = yfilter;
    }
}

bool CdpNeighborDetails::CdpNeighborDetail::SparePair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spare-pair-poe" || name == "spare-pair-detection-required" || name == "spare-pair-pd-config" || name == "spare-pair-pse-operational")
        return true;
    return false;
}

const Enum::YLeaf CdpEnableDisable::cdp_disable {0, "cdp-disable"};
const Enum::YLeaf CdpEnableDisable::cdp_enable {1, "cdp-enable"};

const Enum::YLeaf CdpYesNo::cdp_no {0, "cdp-no"};
const Enum::YLeaf CdpYesNo::cdp_yes {1, "cdp-yes"};

const Enum::YLeaf CdpDuplex::cdp_duplex_unknown {0, "cdp-duplex-unknown"};
const Enum::YLeaf CdpDuplex::cdp_half_duplex {1, "cdp-half-duplex"};
const Enum::YLeaf CdpDuplex::cdp_full_duplex {2, "cdp-full-duplex"};
const Enum::YLeaf CdpDuplex::cdp_half_duplex_mismatch {3, "cdp-half-duplex-mismatch"};
const Enum::YLeaf CdpDuplex::cdp_full_duplex_mismatch {4, "cdp-full-duplex-mismatch"};

const Enum::YLeaf CdpUnidirectionalMode::cdp_uni_mode_off {0, "cdp-uni-mode-off"};
const Enum::YLeaf CdpUnidirectionalMode::cdp_uni_mode_send_only {1, "cdp-uni-mode-send-only"};
const Enum::YLeaf CdpUnidirectionalMode::cdp_uni_mode_recv_only {2, "cdp-uni-mode-recv-only"};
const Enum::YLeaf CdpUnidirectionalMode::cdp_uni_mode_unknown {3, "cdp-uni-mode-unknown"};

const Enum::YLeaf CdpAdvVersion::cdp_advertised_none {0, "cdp-advertised-none"};
const Enum::YLeaf CdpAdvVersion::cdp_advertised_v1 {1, "cdp-advertised-v1"};
const Enum::YLeaf CdpAdvVersion::cdp_advertised_v2 {2, "cdp-advertised-v2"};


}
}

