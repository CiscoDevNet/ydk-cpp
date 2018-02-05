
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_icpe_infra_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_icpe_infra_cfg {

NvSatelliteGlobal::NvSatelliteGlobal()
    :
    chassis_mac(std::make_shared<NvSatelliteGlobal::ChassisMac>())
{
    chassis_mac->parent = this;

    yang_name = "nv-satellite-global"; yang_parent_name = "Cisco-IOS-XR-icpe-infra-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

NvSatelliteGlobal::~NvSatelliteGlobal()
{
}

bool NvSatelliteGlobal::has_data() const
{
    return (chassis_mac !=  nullptr && chassis_mac->has_data());
}

bool NvSatelliteGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (chassis_mac !=  nullptr && chassis_mac->has_operation());
}

std::string NvSatelliteGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatelliteGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatelliteGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis-mac")
    {
        if(chassis_mac == nullptr)
        {
            chassis_mac = std::make_shared<NvSatelliteGlobal::ChassisMac>();
        }
        return chassis_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatelliteGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(chassis_mac != nullptr)
    {
        children["chassis-mac"] = chassis_mac;
    }

    return children;
}

void NvSatelliteGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatelliteGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NvSatelliteGlobal::clone_ptr() const
{
    return std::make_shared<NvSatelliteGlobal>();
}

std::string NvSatelliteGlobal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NvSatelliteGlobal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NvSatelliteGlobal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NvSatelliteGlobal::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NvSatelliteGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis-mac")
        return true;
    return false;
}

NvSatelliteGlobal::ChassisMac::ChassisMac()
    :
    mac1{YType::uint32, "mac1"},
    mac2{YType::uint32, "mac2"},
    mac3{YType::uint32, "mac3"}
{

    yang_name = "chassis-mac"; yang_parent_name = "nv-satellite-global"; is_top_level_class = false; has_list_ancestor = false;
}

NvSatelliteGlobal::ChassisMac::~ChassisMac()
{
}

bool NvSatelliteGlobal::ChassisMac::has_data() const
{
    return mac1.is_set
	|| mac2.is_set
	|| mac3.is_set;
}

bool NvSatelliteGlobal::ChassisMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac1.yfilter)
	|| ydk::is_set(mac2.yfilter)
	|| ydk::is_set(mac3.yfilter);
}

std::string NvSatelliteGlobal::ChassisMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-global/" << get_segment_path();
    return path_buffer.str();
}

std::string NvSatelliteGlobal::ChassisMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatelliteGlobal::ChassisMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac1.is_set || is_set(mac1.yfilter)) leaf_name_data.push_back(mac1.get_name_leafdata());
    if (mac2.is_set || is_set(mac2.yfilter)) leaf_name_data.push_back(mac2.get_name_leafdata());
    if (mac3.is_set || is_set(mac3.yfilter)) leaf_name_data.push_back(mac3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatelliteGlobal::ChassisMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatelliteGlobal::ChassisMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NvSatelliteGlobal::ChassisMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac1")
    {
        mac1 = value;
        mac1.value_namespace = name_space;
        mac1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac2")
    {
        mac2 = value;
        mac2.value_namespace = name_space;
        mac2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac3")
    {
        mac3 = value;
        mac3.value_namespace = name_space;
        mac3.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatelliteGlobal::ChassisMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac1")
    {
        mac1.yfilter = yfilter;
    }
    if(value_path == "mac2")
    {
        mac2.yfilter = yfilter;
    }
    if(value_path == "mac3")
    {
        mac3.yfilter = yfilter;
    }
}

bool NvSatelliteGlobal::ChassisMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac1" || name == "mac2" || name == "mac3")
        return true;
    return false;
}

NvSatellites::NvSatellites()
{

    yang_name = "nv-satellites"; yang_parent_name = "Cisco-IOS-XR-icpe-infra-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

NvSatellites::~NvSatellites()
{
}

bool NvSatellites::has_data() const
{
    for (std::size_t index=0; index<nv_satellite.size(); index++)
    {
        if(nv_satellite[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellites::has_operation() const
{
    for (std::size_t index=0; index<nv_satellite.size(); index++)
    {
        if(nv_satellite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NvSatellites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatellites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite")
    {
        auto c = std::make_shared<NvSatellites::NvSatellite>();
        c->parent = this;
        nv_satellite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellites::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nv_satellite)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NvSatellites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NvSatellites::clone_ptr() const
{
    return std::make_shared<NvSatellites>();
}

std::string NvSatellites::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NvSatellites::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NvSatellites::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NvSatellites::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NvSatellites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nv-satellite")
        return true;
    return false;
}

NvSatellites::NvSatellite::NvSatellite()
    :
    satellite_id{YType::uint32, "satellite-id"},
    vrf{YType::str, "vrf"},
    timeout_warning{YType::uint32, "timeout-warning"},
    device_name{YType::str, "device-name"},
    description{YType::str, "description"},
    type{YType::str, "type"},
    enable{YType::empty, "enable"},
    disc_timeout{YType::uint32, "disc-timeout"},
    delayed_switchback{YType::uint32, "delayed-switchback"},
    serial_number{YType::str, "serial-number"},
    secret{YType::str, "secret"},
    ip_address{YType::str, "ip-address"}
    	,
    upgrade_on_connect(std::make_shared<NvSatellites::NvSatellite::UpgradeOnConnect>())
	,candidate_fabric_ports(std::make_shared<NvSatellites::NvSatellite::CandidateFabricPorts>())
	,connection_info(std::make_shared<NvSatellites::NvSatellite::ConnectionInfo>())
	,redundancy(std::make_shared<NvSatellites::NvSatellite::Redundancy>())
{
    upgrade_on_connect->parent = this;
    candidate_fabric_ports->parent = this;
    connection_info->parent = this;
    redundancy->parent = this;

    yang_name = "nv-satellite"; yang_parent_name = "nv-satellites"; is_top_level_class = false; has_list_ancestor = false;
}

NvSatellites::NvSatellite::~NvSatellite()
{
}

bool NvSatellites::NvSatellite::has_data() const
{
    return satellite_id.is_set
	|| vrf.is_set
	|| timeout_warning.is_set
	|| device_name.is_set
	|| description.is_set
	|| type.is_set
	|| enable.is_set
	|| disc_timeout.is_set
	|| delayed_switchback.is_set
	|| serial_number.is_set
	|| secret.is_set
	|| ip_address.is_set
	|| (upgrade_on_connect !=  nullptr && upgrade_on_connect->has_data())
	|| (candidate_fabric_ports !=  nullptr && candidate_fabric_ports->has_data())
	|| (connection_info !=  nullptr && connection_info->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool NvSatellites::NvSatellite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(timeout_warning.yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disc_timeout.yfilter)
	|| ydk::is_set(delayed_switchback.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (upgrade_on_connect !=  nullptr && upgrade_on_connect->has_operation())
	|| (candidate_fabric_ports !=  nullptr && candidate_fabric_ports->has_operation())
	|| (connection_info !=  nullptr && connection_info->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string NvSatellites::NvSatellite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellites/" << get_segment_path();
    return path_buffer.str();
}

std::string NvSatellites::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite" <<"[satellite-id='" <<satellite_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatellites::NvSatellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (timeout_warning.is_set || is_set(timeout_warning.yfilter)) leaf_name_data.push_back(timeout_warning.get_name_leafdata());
    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disc_timeout.is_set || is_set(disc_timeout.yfilter)) leaf_name_data.push_back(disc_timeout.get_name_leafdata());
    if (delayed_switchback.is_set || is_set(delayed_switchback.yfilter)) leaf_name_data.push_back(delayed_switchback.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatellites::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "upgrade-on-connect")
    {
        if(upgrade_on_connect == nullptr)
        {
            upgrade_on_connect = std::make_shared<NvSatellites::NvSatellite::UpgradeOnConnect>();
        }
        return upgrade_on_connect;
    }

    if(child_yang_name == "candidate-fabric-ports")
    {
        if(candidate_fabric_ports == nullptr)
        {
            candidate_fabric_ports = std::make_shared<NvSatellites::NvSatellite::CandidateFabricPorts>();
        }
        return candidate_fabric_ports;
    }

    if(child_yang_name == "connection-info")
    {
        if(connection_info == nullptr)
        {
            connection_info = std::make_shared<NvSatellites::NvSatellite::ConnectionInfo>();
        }
        return connection_info;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<NvSatellites::NvSatellite::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellites::NvSatellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(upgrade_on_connect != nullptr)
    {
        children["upgrade-on-connect"] = upgrade_on_connect;
    }

    if(candidate_fabric_ports != nullptr)
    {
        children["candidate-fabric-ports"] = candidate_fabric_ports;
    }

    if(connection_info != nullptr)
    {
        children["connection-info"] = connection_info;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void NvSatellites::NvSatellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-warning")
    {
        timeout_warning = value;
        timeout_warning.value_namespace = name_space;
        timeout_warning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-timeout")
    {
        disc_timeout = value;
        disc_timeout.value_namespace = name_space;
        disc_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayed-switchback")
    {
        delayed_switchback = value;
        delayed_switchback.value_namespace = name_space;
        delayed_switchback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellites::NvSatellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "timeout-warning")
    {
        timeout_warning.yfilter = yfilter;
    }
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disc-timeout")
    {
        disc_timeout.yfilter = yfilter;
    }
    if(value_path == "delayed-switchback")
    {
        delayed_switchback.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool NvSatellites::NvSatellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "upgrade-on-connect" || name == "candidate-fabric-ports" || name == "connection-info" || name == "redundancy" || name == "satellite-id" || name == "vrf" || name == "timeout-warning" || name == "device-name" || name == "description" || name == "type" || name == "enable" || name == "disc-timeout" || name == "delayed-switchback" || name == "serial-number" || name == "secret" || name == "ip-address")
        return true;
    return false;
}

NvSatellites::NvSatellite::UpgradeOnConnect::UpgradeOnConnect()
    :
    connect_type{YType::enumeration, "connect-type"},
    reference{YType::str, "reference"}
{

    yang_name = "upgrade-on-connect"; yang_parent_name = "nv-satellite"; is_top_level_class = false; has_list_ancestor = true;
}

NvSatellites::NvSatellite::UpgradeOnConnect::~UpgradeOnConnect()
{
}

bool NvSatellites::NvSatellite::UpgradeOnConnect::has_data() const
{
    return connect_type.is_set
	|| reference.is_set;
}

bool NvSatellites::NvSatellite::UpgradeOnConnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_type.yfilter)
	|| ydk::is_set(reference.yfilter);
}

std::string NvSatellites::NvSatellite::UpgradeOnConnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade-on-connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatellites::NvSatellite::UpgradeOnConnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_type.is_set || is_set(connect_type.yfilter)) leaf_name_data.push_back(connect_type.get_name_leafdata());
    if (reference.is_set || is_set(reference.yfilter)) leaf_name_data.push_back(reference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatellites::NvSatellite::UpgradeOnConnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellites::NvSatellite::UpgradeOnConnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NvSatellites::NvSatellite::UpgradeOnConnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-type")
    {
        connect_type = value;
        connect_type.value_namespace = name_space;
        connect_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference")
    {
        reference = value;
        reference.value_namespace = name_space;
        reference.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellites::NvSatellite::UpgradeOnConnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-type")
    {
        connect_type.yfilter = yfilter;
    }
    if(value_path == "reference")
    {
        reference.yfilter = yfilter;
    }
}

bool NvSatellites::NvSatellite::UpgradeOnConnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-type" || name == "reference")
        return true;
    return false;
}

NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPorts()
{

    yang_name = "candidate-fabric-ports"; yang_parent_name = "nv-satellite"; is_top_level_class = false; has_list_ancestor = true;
}

NvSatellites::NvSatellite::CandidateFabricPorts::~CandidateFabricPorts()
{
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::has_data() const
{
    for (std::size_t index=0; index<candidate_fabric_port.size(); index++)
    {
        if(candidate_fabric_port[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::has_operation() const
{
    for (std::size_t index=0; index<candidate_fabric_port.size(); index++)
    {
        if(candidate_fabric_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NvSatellites::NvSatellite::CandidateFabricPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-fabric-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatellites::NvSatellite::CandidateFabricPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatellites::NvSatellite::CandidateFabricPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-fabric-port")
    {
        auto c = std::make_shared<NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort>();
        c->parent = this;
        candidate_fabric_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellites::NvSatellite::CandidateFabricPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_fabric_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NvSatellites::NvSatellite::CandidateFabricPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellites::NvSatellite::CandidateFabricPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-fabric-port")
        return true;
    return false;
}

NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::CandidateFabricPort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{

    yang_name = "candidate-fabric-port"; yang_parent_name = "candidate-fabric-ports"; is_top_level_class = false; has_list_ancestor = true;
}

NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::~CandidateFabricPort()
{
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(sub_slot.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-fabric-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.yfilter)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
        sub_slot.value_namespace = name_space;
        sub_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "sub-slot")
    {
        sub_slot.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-type" || name == "slot" || name == "sub-slot" || name == "port-range")
        return true;
    return false;
}

NvSatellites::NvSatellite::ConnectionInfo::ConnectionInfo()
    :
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "connection-info"; yang_parent_name = "nv-satellite"; is_top_level_class = false; has_list_ancestor = true;
}

NvSatellites::NvSatellite::ConnectionInfo::~ConnectionInfo()
{
}

bool NvSatellites::NvSatellite::ConnectionInfo::has_data() const
{
    return username.is_set
	|| password.is_set;
}

bool NvSatellites::NvSatellite::ConnectionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string NvSatellites::NvSatellite::ConnectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatellites::NvSatellite::ConnectionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatellites::NvSatellite::ConnectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellites::NvSatellite::ConnectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NvSatellites::NvSatellite::ConnectionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellites::NvSatellite::ConnectionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool NvSatellites::NvSatellite::ConnectionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
        return true;
    return false;
}

NvSatellites::NvSatellite::Redundancy::Redundancy()
    :
    host_priority{YType::uint32, "host-priority"}
{

    yang_name = "redundancy"; yang_parent_name = "nv-satellite"; is_top_level_class = false; has_list_ancestor = true;
}

NvSatellites::NvSatellite::Redundancy::~Redundancy()
{
}

bool NvSatellites::NvSatellite::Redundancy::has_data() const
{
    return host_priority.is_set;
}

bool NvSatellites::NvSatellite::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_priority.yfilter);
}

std::string NvSatellites::NvSatellite::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NvSatellites::NvSatellite::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_priority.is_set || is_set(host_priority.yfilter)) leaf_name_data.push_back(host_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NvSatellites::NvSatellite::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellites::NvSatellite::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NvSatellites::NvSatellite::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-priority")
    {
        host_priority = value;
        host_priority.value_namespace = name_space;
        host_priority.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellites::NvSatellite::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-priority")
    {
        host_priority.yfilter = yfilter;
    }
}

bool NvSatellites::NvSatellite::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-priority")
        return true;
    return false;
}

const Enum::YLeaf NvSatellites::NvSatellite::UpgradeOnConnect::ConnectType::on_connection {1, "on-connection"};
const Enum::YLeaf NvSatellites::NvSatellite::UpgradeOnConnect::ConnectType::on_first_connection {2, "on-first-connection"};


}
}

