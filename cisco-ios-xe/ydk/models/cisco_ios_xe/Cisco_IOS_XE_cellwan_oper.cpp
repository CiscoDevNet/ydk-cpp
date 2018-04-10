
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_cellwan_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_cellwan_oper {

CellwanOperData::CellwanOperData()
{

    yang_name = "cellwan-oper-data"; yang_parent_name = "Cisco-IOS-XE-cellwan-oper"; is_top_level_class = true; has_list_ancestor = false;
}

CellwanOperData::~CellwanOperData()
{
}

bool CellwanOperData::has_data() const
{
    for (std::size_t index=0; index<cellwan_hardware.size(); index++)
    {
        if(cellwan_hardware[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_radio.size(); index++)
    {
        if(cellwan_radio[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_network.size(); index++)
    {
        if(cellwan_network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_connection.size(); index++)
    {
        if(cellwan_connection[index]->has_data())
            return true;
    }
    return false;
}

bool CellwanOperData::has_operation() const
{
    for (std::size_t index=0; index<cellwan_hardware.size(); index++)
    {
        if(cellwan_hardware[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_radio.size(); index++)
    {
        if(cellwan_radio[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_network.size(); index++)
    {
        if(cellwan_network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_connection.size(); index++)
    {
        if(cellwan_connection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CellwanOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CellwanOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cellwan-hardware")
    {
        auto c = std::make_shared<CellwanOperData::CellwanHardware>();
        c->parent = this;
        cellwan_hardware.push_back(c);
        return c;
    }

    if(child_yang_name == "cellwan-radio")
    {
        auto c = std::make_shared<CellwanOperData::CellwanRadio>();
        c->parent = this;
        cellwan_radio.push_back(c);
        return c;
    }

    if(child_yang_name == "cellwan-network")
    {
        auto c = std::make_shared<CellwanOperData::CellwanNetwork>();
        c->parent = this;
        cellwan_network.push_back(c);
        return c;
    }

    if(child_yang_name == "cellwan-connection")
    {
        auto c = std::make_shared<CellwanOperData::CellwanConnection>();
        c->parent = this;
        cellwan_connection.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CellwanOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cellwan_hardware)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : cellwan_radio)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : cellwan_network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : cellwan_connection)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CellwanOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CellwanOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CellwanOperData::clone_ptr() const
{
    return std::make_shared<CellwanOperData>();
}

std::string CellwanOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CellwanOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CellwanOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CellwanOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CellwanOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellwan-hardware" || name == "cellwan-radio" || name == "cellwan-network" || name == "cellwan-connection")
        return true;
    return false;
}

CellwanOperData::CellwanHardware::CellwanHardware()
    :
    cellular_interface{YType::str, "cellular-interface"},
    cellular_firmware_version{YType::str, "cellular-firmware-version"},
    cellular_firmware_build_time{YType::str, "cellular-firmware-build-time"},
    cellular_hardware_version{YType::str, "cellular-hardware-version"},
    cellular_device_model{YType::str, "cellular-device-model"},
    cellular_imsi{YType::str, "cellular-imsi"},
    cellular_imei{YType::str, "cellular-imei"},
    cellular_iccid{YType::str, "cellular-iccid"},
    cellular_msisdn{YType::str, "cellular-msisdn"},
    cellular_fsn{YType::str, "cellular-fsn"},
    cellular_modem_status{YType::enumeration, "cellular-modem-status"},
    cellular_modem_temperature{YType::int16, "cellular-modem-temperature"},
    cellular_pri_skuid{YType::str, "cellular-pri-skuid"},
    cellular_pri_version{YType::str, "cellular-pri-version"},
    cellular_carrier{YType::str, "cellular-carrier"},
    cellular_oem_pri_version{YType::str, "cellular-oem-pri-version"}
{

    yang_name = "cellwan-hardware"; yang_parent_name = "cellwan-oper-data"; is_top_level_class = false; has_list_ancestor = false;
}

CellwanOperData::CellwanHardware::~CellwanHardware()
{
}

bool CellwanOperData::CellwanHardware::has_data() const
{
    return cellular_interface.is_set
	|| cellular_firmware_version.is_set
	|| cellular_firmware_build_time.is_set
	|| cellular_hardware_version.is_set
	|| cellular_device_model.is_set
	|| cellular_imsi.is_set
	|| cellular_imei.is_set
	|| cellular_iccid.is_set
	|| cellular_msisdn.is_set
	|| cellular_fsn.is_set
	|| cellular_modem_status.is_set
	|| cellular_modem_temperature.is_set
	|| cellular_pri_skuid.is_set
	|| cellular_pri_version.is_set
	|| cellular_carrier.is_set
	|| cellular_oem_pri_version.is_set;
}

bool CellwanOperData::CellwanHardware::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cellular_interface.yfilter)
	|| ydk::is_set(cellular_firmware_version.yfilter)
	|| ydk::is_set(cellular_firmware_build_time.yfilter)
	|| ydk::is_set(cellular_hardware_version.yfilter)
	|| ydk::is_set(cellular_device_model.yfilter)
	|| ydk::is_set(cellular_imsi.yfilter)
	|| ydk::is_set(cellular_imei.yfilter)
	|| ydk::is_set(cellular_iccid.yfilter)
	|| ydk::is_set(cellular_msisdn.yfilter)
	|| ydk::is_set(cellular_fsn.yfilter)
	|| ydk::is_set(cellular_modem_status.yfilter)
	|| ydk::is_set(cellular_modem_temperature.yfilter)
	|| ydk::is_set(cellular_pri_skuid.yfilter)
	|| ydk::is_set(cellular_pri_version.yfilter)
	|| ydk::is_set(cellular_carrier.yfilter)
	|| ydk::is_set(cellular_oem_pri_version.yfilter);
}

std::string CellwanOperData::CellwanHardware::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string CellwanOperData::CellwanHardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cellwan-hardware" <<"[cellular-interface='" <<cellular_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::CellwanHardware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cellular_interface.is_set || is_set(cellular_interface.yfilter)) leaf_name_data.push_back(cellular_interface.get_name_leafdata());
    if (cellular_firmware_version.is_set || is_set(cellular_firmware_version.yfilter)) leaf_name_data.push_back(cellular_firmware_version.get_name_leafdata());
    if (cellular_firmware_build_time.is_set || is_set(cellular_firmware_build_time.yfilter)) leaf_name_data.push_back(cellular_firmware_build_time.get_name_leafdata());
    if (cellular_hardware_version.is_set || is_set(cellular_hardware_version.yfilter)) leaf_name_data.push_back(cellular_hardware_version.get_name_leafdata());
    if (cellular_device_model.is_set || is_set(cellular_device_model.yfilter)) leaf_name_data.push_back(cellular_device_model.get_name_leafdata());
    if (cellular_imsi.is_set || is_set(cellular_imsi.yfilter)) leaf_name_data.push_back(cellular_imsi.get_name_leafdata());
    if (cellular_imei.is_set || is_set(cellular_imei.yfilter)) leaf_name_data.push_back(cellular_imei.get_name_leafdata());
    if (cellular_iccid.is_set || is_set(cellular_iccid.yfilter)) leaf_name_data.push_back(cellular_iccid.get_name_leafdata());
    if (cellular_msisdn.is_set || is_set(cellular_msisdn.yfilter)) leaf_name_data.push_back(cellular_msisdn.get_name_leafdata());
    if (cellular_fsn.is_set || is_set(cellular_fsn.yfilter)) leaf_name_data.push_back(cellular_fsn.get_name_leafdata());
    if (cellular_modem_status.is_set || is_set(cellular_modem_status.yfilter)) leaf_name_data.push_back(cellular_modem_status.get_name_leafdata());
    if (cellular_modem_temperature.is_set || is_set(cellular_modem_temperature.yfilter)) leaf_name_data.push_back(cellular_modem_temperature.get_name_leafdata());
    if (cellular_pri_skuid.is_set || is_set(cellular_pri_skuid.yfilter)) leaf_name_data.push_back(cellular_pri_skuid.get_name_leafdata());
    if (cellular_pri_version.is_set || is_set(cellular_pri_version.yfilter)) leaf_name_data.push_back(cellular_pri_version.get_name_leafdata());
    if (cellular_carrier.is_set || is_set(cellular_carrier.yfilter)) leaf_name_data.push_back(cellular_carrier.get_name_leafdata());
    if (cellular_oem_pri_version.is_set || is_set(cellular_oem_pri_version.yfilter)) leaf_name_data.push_back(cellular_oem_pri_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CellwanOperData::CellwanHardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CellwanOperData::CellwanHardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CellwanOperData::CellwanHardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface = value;
        cellular_interface.value_namespace = name_space;
        cellular_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-firmware-version")
    {
        cellular_firmware_version = value;
        cellular_firmware_version.value_namespace = name_space;
        cellular_firmware_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-firmware-build-time")
    {
        cellular_firmware_build_time = value;
        cellular_firmware_build_time.value_namespace = name_space;
        cellular_firmware_build_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-hardware-version")
    {
        cellular_hardware_version = value;
        cellular_hardware_version.value_namespace = name_space;
        cellular_hardware_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-device-model")
    {
        cellular_device_model = value;
        cellular_device_model.value_namespace = name_space;
        cellular_device_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-imsi")
    {
        cellular_imsi = value;
        cellular_imsi.value_namespace = name_space;
        cellular_imsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-imei")
    {
        cellular_imei = value;
        cellular_imei.value_namespace = name_space;
        cellular_imei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-iccid")
    {
        cellular_iccid = value;
        cellular_iccid.value_namespace = name_space;
        cellular_iccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-msisdn")
    {
        cellular_msisdn = value;
        cellular_msisdn.value_namespace = name_space;
        cellular_msisdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-fsn")
    {
        cellular_fsn = value;
        cellular_fsn.value_namespace = name_space;
        cellular_fsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-modem-status")
    {
        cellular_modem_status = value;
        cellular_modem_status.value_namespace = name_space;
        cellular_modem_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-modem-temperature")
    {
        cellular_modem_temperature = value;
        cellular_modem_temperature.value_namespace = name_space;
        cellular_modem_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-pri-skuid")
    {
        cellular_pri_skuid = value;
        cellular_pri_skuid.value_namespace = name_space;
        cellular_pri_skuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-pri-version")
    {
        cellular_pri_version = value;
        cellular_pri_version.value_namespace = name_space;
        cellular_pri_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-carrier")
    {
        cellular_carrier = value;
        cellular_carrier.value_namespace = name_space;
        cellular_carrier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-oem-pri-version")
    {
        cellular_oem_pri_version = value;
        cellular_oem_pri_version.value_namespace = name_space;
        cellular_oem_pri_version.value_namespace_prefix = name_space_prefix;
    }
}

void CellwanOperData::CellwanHardware::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface.yfilter = yfilter;
    }
    if(value_path == "cellular-firmware-version")
    {
        cellular_firmware_version.yfilter = yfilter;
    }
    if(value_path == "cellular-firmware-build-time")
    {
        cellular_firmware_build_time.yfilter = yfilter;
    }
    if(value_path == "cellular-hardware-version")
    {
        cellular_hardware_version.yfilter = yfilter;
    }
    if(value_path == "cellular-device-model")
    {
        cellular_device_model.yfilter = yfilter;
    }
    if(value_path == "cellular-imsi")
    {
        cellular_imsi.yfilter = yfilter;
    }
    if(value_path == "cellular-imei")
    {
        cellular_imei.yfilter = yfilter;
    }
    if(value_path == "cellular-iccid")
    {
        cellular_iccid.yfilter = yfilter;
    }
    if(value_path == "cellular-msisdn")
    {
        cellular_msisdn.yfilter = yfilter;
    }
    if(value_path == "cellular-fsn")
    {
        cellular_fsn.yfilter = yfilter;
    }
    if(value_path == "cellular-modem-status")
    {
        cellular_modem_status.yfilter = yfilter;
    }
    if(value_path == "cellular-modem-temperature")
    {
        cellular_modem_temperature.yfilter = yfilter;
    }
    if(value_path == "cellular-pri-skuid")
    {
        cellular_pri_skuid.yfilter = yfilter;
    }
    if(value_path == "cellular-pri-version")
    {
        cellular_pri_version.yfilter = yfilter;
    }
    if(value_path == "cellular-carrier")
    {
        cellular_carrier.yfilter = yfilter;
    }
    if(value_path == "cellular-oem-pri-version")
    {
        cellular_oem_pri_version.yfilter = yfilter;
    }
}

bool CellwanOperData::CellwanHardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellular-interface" || name == "cellular-firmware-version" || name == "cellular-firmware-build-time" || name == "cellular-hardware-version" || name == "cellular-device-model" || name == "cellular-imsi" || name == "cellular-imei" || name == "cellular-iccid" || name == "cellular-msisdn" || name == "cellular-fsn" || name == "cellular-modem-status" || name == "cellular-modem-temperature" || name == "cellular-pri-skuid" || name == "cellular-pri-version" || name == "cellular-carrier" || name == "cellular-oem-pri-version")
        return true;
    return false;
}

CellwanOperData::CellwanRadio::CellwanRadio()
    :
    cellular_interface{YType::str, "cellular-interface"},
    technology{YType::enumeration, "technology"},
    radio_power_mode{YType::enumeration, "radio-power-mode"},
    radio_rx_channel{YType::uint32, "radio-rx-channel"},
    radio_tx_channel{YType::uint32, "radio-tx-channel"},
    radio_band{YType::uint32, "radio-band"},
    bandwidth{YType::enumeration, "bandwidth"},
    radio_rssi{YType::int16, "radio-rssi"},
    radio_rsrp{YType::int16, "radio-rsrp"},
    radio_rsrq{YType::int8, "radio-rsrq"},
    radio_snr{YType::str, "radio-snr"},
    radio_rat_preference{YType::enumeration, "radio-rat-preference"},
    radio_rat_selected{YType::enumeration, "radio-rat-selected"}
{

    yang_name = "cellwan-radio"; yang_parent_name = "cellwan-oper-data"; is_top_level_class = false; has_list_ancestor = false;
}

CellwanOperData::CellwanRadio::~CellwanRadio()
{
}

bool CellwanOperData::CellwanRadio::has_data() const
{
    return cellular_interface.is_set
	|| technology.is_set
	|| radio_power_mode.is_set
	|| radio_rx_channel.is_set
	|| radio_tx_channel.is_set
	|| radio_band.is_set
	|| bandwidth.is_set
	|| radio_rssi.is_set
	|| radio_rsrp.is_set
	|| radio_rsrq.is_set
	|| radio_snr.is_set
	|| radio_rat_preference.is_set
	|| radio_rat_selected.is_set;
}

bool CellwanOperData::CellwanRadio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cellular_interface.yfilter)
	|| ydk::is_set(technology.yfilter)
	|| ydk::is_set(radio_power_mode.yfilter)
	|| ydk::is_set(radio_rx_channel.yfilter)
	|| ydk::is_set(radio_tx_channel.yfilter)
	|| ydk::is_set(radio_band.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(radio_rssi.yfilter)
	|| ydk::is_set(radio_rsrp.yfilter)
	|| ydk::is_set(radio_rsrq.yfilter)
	|| ydk::is_set(radio_snr.yfilter)
	|| ydk::is_set(radio_rat_preference.yfilter)
	|| ydk::is_set(radio_rat_selected.yfilter);
}

std::string CellwanOperData::CellwanRadio::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string CellwanOperData::CellwanRadio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cellwan-radio" <<"[cellular-interface='" <<cellular_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::CellwanRadio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cellular_interface.is_set || is_set(cellular_interface.yfilter)) leaf_name_data.push_back(cellular_interface.get_name_leafdata());
    if (technology.is_set || is_set(technology.yfilter)) leaf_name_data.push_back(technology.get_name_leafdata());
    if (radio_power_mode.is_set || is_set(radio_power_mode.yfilter)) leaf_name_data.push_back(radio_power_mode.get_name_leafdata());
    if (radio_rx_channel.is_set || is_set(radio_rx_channel.yfilter)) leaf_name_data.push_back(radio_rx_channel.get_name_leafdata());
    if (radio_tx_channel.is_set || is_set(radio_tx_channel.yfilter)) leaf_name_data.push_back(radio_tx_channel.get_name_leafdata());
    if (radio_band.is_set || is_set(radio_band.yfilter)) leaf_name_data.push_back(radio_band.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (radio_rssi.is_set || is_set(radio_rssi.yfilter)) leaf_name_data.push_back(radio_rssi.get_name_leafdata());
    if (radio_rsrp.is_set || is_set(radio_rsrp.yfilter)) leaf_name_data.push_back(radio_rsrp.get_name_leafdata());
    if (radio_rsrq.is_set || is_set(radio_rsrq.yfilter)) leaf_name_data.push_back(radio_rsrq.get_name_leafdata());
    if (radio_snr.is_set || is_set(radio_snr.yfilter)) leaf_name_data.push_back(radio_snr.get_name_leafdata());
    if (radio_rat_preference.is_set || is_set(radio_rat_preference.yfilter)) leaf_name_data.push_back(radio_rat_preference.get_name_leafdata());
    if (radio_rat_selected.is_set || is_set(radio_rat_selected.yfilter)) leaf_name_data.push_back(radio_rat_selected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CellwanOperData::CellwanRadio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CellwanOperData::CellwanRadio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CellwanOperData::CellwanRadio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface = value;
        cellular_interface.value_namespace = name_space;
        cellular_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "technology")
    {
        technology = value;
        technology.value_namespace = name_space;
        technology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-power-mode")
    {
        radio_power_mode = value;
        radio_power_mode.value_namespace = name_space;
        radio_power_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-rx-channel")
    {
        radio_rx_channel = value;
        radio_rx_channel.value_namespace = name_space;
        radio_rx_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-tx-channel")
    {
        radio_tx_channel = value;
        radio_tx_channel.value_namespace = name_space;
        radio_tx_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-band")
    {
        radio_band = value;
        radio_band.value_namespace = name_space;
        radio_band.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-rssi")
    {
        radio_rssi = value;
        radio_rssi.value_namespace = name_space;
        radio_rssi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-rsrp")
    {
        radio_rsrp = value;
        radio_rsrp.value_namespace = name_space;
        radio_rsrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-rsrq")
    {
        radio_rsrq = value;
        radio_rsrq.value_namespace = name_space;
        radio_rsrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-snr")
    {
        radio_snr = value;
        radio_snr.value_namespace = name_space;
        radio_snr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-rat-preference")
    {
        radio_rat_preference = value;
        radio_rat_preference.value_namespace = name_space;
        radio_rat_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-rat-selected")
    {
        radio_rat_selected = value;
        radio_rat_selected.value_namespace = name_space;
        radio_rat_selected.value_namespace_prefix = name_space_prefix;
    }
}

void CellwanOperData::CellwanRadio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface.yfilter = yfilter;
    }
    if(value_path == "technology")
    {
        technology.yfilter = yfilter;
    }
    if(value_path == "radio-power-mode")
    {
        radio_power_mode.yfilter = yfilter;
    }
    if(value_path == "radio-rx-channel")
    {
        radio_rx_channel.yfilter = yfilter;
    }
    if(value_path == "radio-tx-channel")
    {
        radio_tx_channel.yfilter = yfilter;
    }
    if(value_path == "radio-band")
    {
        radio_band.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "radio-rssi")
    {
        radio_rssi.yfilter = yfilter;
    }
    if(value_path == "radio-rsrp")
    {
        radio_rsrp.yfilter = yfilter;
    }
    if(value_path == "radio-rsrq")
    {
        radio_rsrq.yfilter = yfilter;
    }
    if(value_path == "radio-snr")
    {
        radio_snr.yfilter = yfilter;
    }
    if(value_path == "radio-rat-preference")
    {
        radio_rat_preference.yfilter = yfilter;
    }
    if(value_path == "radio-rat-selected")
    {
        radio_rat_selected.yfilter = yfilter;
    }
}

bool CellwanOperData::CellwanRadio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellular-interface" || name == "technology" || name == "radio-power-mode" || name == "radio-rx-channel" || name == "radio-tx-channel" || name == "radio-band" || name == "bandwidth" || name == "radio-rssi" || name == "radio-rsrp" || name == "radio-rsrq" || name == "radio-snr" || name == "radio-rat-preference" || name == "radio-rat-selected")
        return true;
    return false;
}

CellwanOperData::CellwanNetwork::CellwanNetwork()
    :
    cellular_interface{YType::str, "cellular-interface"},
    cellular_modem_time{YType::str, "cellular-modem-time"},
    radio_access_technology_selected{YType::enumeration, "radio-access-technology-selected"},
    current_service_status{YType::enumeration, "current-service-status"},
    current_system_identifier{YType::uint16, "current-system-identifier"},
    current_network_identifier{YType::uint16, "current-network-identifier"},
    current_service_type{YType::enumeration, "current-service-type"},
    current_roaming_status{YType::str, "current-roaming-status"},
    network_selection_mode{YType::str, "network-selection-mode"},
    network_name{YType::str, "network-name"},
    mobile_country_code{YType::uint16, "mobile-country-code"},
    mobile_network_code{YType::uint16, "mobile-network-code"},
    packet_switch_domain_state{YType::str, "packet-switch-domain-state"},
    lte_carrier_aggregation{YType::enumeration, "lte-carrier-aggregation"},
    registration_state{YType::enumeration, "registration-state"},
    emm_state{YType::str, "emm-state"},
    emm_substate{YType::str, "emm-substate"},
    location_area_code{YType::uint16, "location-area-code"},
    tracking_area_code{YType::uint16, "tracking-area-code"},
    cell_id{YType::uint64, "cell-id"},
    negotiated_network_mtu{YType::uint16, "negotiated-network-mtu"}
{

    yang_name = "cellwan-network"; yang_parent_name = "cellwan-oper-data"; is_top_level_class = false; has_list_ancestor = false;
}

CellwanOperData::CellwanNetwork::~CellwanNetwork()
{
}

bool CellwanOperData::CellwanNetwork::has_data() const
{
    return cellular_interface.is_set
	|| cellular_modem_time.is_set
	|| radio_access_technology_selected.is_set
	|| current_service_status.is_set
	|| current_system_identifier.is_set
	|| current_network_identifier.is_set
	|| current_service_type.is_set
	|| current_roaming_status.is_set
	|| network_selection_mode.is_set
	|| network_name.is_set
	|| mobile_country_code.is_set
	|| mobile_network_code.is_set
	|| packet_switch_domain_state.is_set
	|| lte_carrier_aggregation.is_set
	|| registration_state.is_set
	|| emm_state.is_set
	|| emm_substate.is_set
	|| location_area_code.is_set
	|| tracking_area_code.is_set
	|| cell_id.is_set
	|| negotiated_network_mtu.is_set;
}

bool CellwanOperData::CellwanNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cellular_interface.yfilter)
	|| ydk::is_set(cellular_modem_time.yfilter)
	|| ydk::is_set(radio_access_technology_selected.yfilter)
	|| ydk::is_set(current_service_status.yfilter)
	|| ydk::is_set(current_system_identifier.yfilter)
	|| ydk::is_set(current_network_identifier.yfilter)
	|| ydk::is_set(current_service_type.yfilter)
	|| ydk::is_set(current_roaming_status.yfilter)
	|| ydk::is_set(network_selection_mode.yfilter)
	|| ydk::is_set(network_name.yfilter)
	|| ydk::is_set(mobile_country_code.yfilter)
	|| ydk::is_set(mobile_network_code.yfilter)
	|| ydk::is_set(packet_switch_domain_state.yfilter)
	|| ydk::is_set(lte_carrier_aggregation.yfilter)
	|| ydk::is_set(registration_state.yfilter)
	|| ydk::is_set(emm_state.yfilter)
	|| ydk::is_set(emm_substate.yfilter)
	|| ydk::is_set(location_area_code.yfilter)
	|| ydk::is_set(tracking_area_code.yfilter)
	|| ydk::is_set(cell_id.yfilter)
	|| ydk::is_set(negotiated_network_mtu.yfilter);
}

std::string CellwanOperData::CellwanNetwork::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string CellwanOperData::CellwanNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cellwan-network" <<"[cellular-interface='" <<cellular_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::CellwanNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cellular_interface.is_set || is_set(cellular_interface.yfilter)) leaf_name_data.push_back(cellular_interface.get_name_leafdata());
    if (cellular_modem_time.is_set || is_set(cellular_modem_time.yfilter)) leaf_name_data.push_back(cellular_modem_time.get_name_leafdata());
    if (radio_access_technology_selected.is_set || is_set(radio_access_technology_selected.yfilter)) leaf_name_data.push_back(radio_access_technology_selected.get_name_leafdata());
    if (current_service_status.is_set || is_set(current_service_status.yfilter)) leaf_name_data.push_back(current_service_status.get_name_leafdata());
    if (current_system_identifier.is_set || is_set(current_system_identifier.yfilter)) leaf_name_data.push_back(current_system_identifier.get_name_leafdata());
    if (current_network_identifier.is_set || is_set(current_network_identifier.yfilter)) leaf_name_data.push_back(current_network_identifier.get_name_leafdata());
    if (current_service_type.is_set || is_set(current_service_type.yfilter)) leaf_name_data.push_back(current_service_type.get_name_leafdata());
    if (current_roaming_status.is_set || is_set(current_roaming_status.yfilter)) leaf_name_data.push_back(current_roaming_status.get_name_leafdata());
    if (network_selection_mode.is_set || is_set(network_selection_mode.yfilter)) leaf_name_data.push_back(network_selection_mode.get_name_leafdata());
    if (network_name.is_set || is_set(network_name.yfilter)) leaf_name_data.push_back(network_name.get_name_leafdata());
    if (mobile_country_code.is_set || is_set(mobile_country_code.yfilter)) leaf_name_data.push_back(mobile_country_code.get_name_leafdata());
    if (mobile_network_code.is_set || is_set(mobile_network_code.yfilter)) leaf_name_data.push_back(mobile_network_code.get_name_leafdata());
    if (packet_switch_domain_state.is_set || is_set(packet_switch_domain_state.yfilter)) leaf_name_data.push_back(packet_switch_domain_state.get_name_leafdata());
    if (lte_carrier_aggregation.is_set || is_set(lte_carrier_aggregation.yfilter)) leaf_name_data.push_back(lte_carrier_aggregation.get_name_leafdata());
    if (registration_state.is_set || is_set(registration_state.yfilter)) leaf_name_data.push_back(registration_state.get_name_leafdata());
    if (emm_state.is_set || is_set(emm_state.yfilter)) leaf_name_data.push_back(emm_state.get_name_leafdata());
    if (emm_substate.is_set || is_set(emm_substate.yfilter)) leaf_name_data.push_back(emm_substate.get_name_leafdata());
    if (location_area_code.is_set || is_set(location_area_code.yfilter)) leaf_name_data.push_back(location_area_code.get_name_leafdata());
    if (tracking_area_code.is_set || is_set(tracking_area_code.yfilter)) leaf_name_data.push_back(tracking_area_code.get_name_leafdata());
    if (cell_id.is_set || is_set(cell_id.yfilter)) leaf_name_data.push_back(cell_id.get_name_leafdata());
    if (negotiated_network_mtu.is_set || is_set(negotiated_network_mtu.yfilter)) leaf_name_data.push_back(negotiated_network_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CellwanOperData::CellwanNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CellwanOperData::CellwanNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CellwanOperData::CellwanNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface = value;
        cellular_interface.value_namespace = name_space;
        cellular_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-modem-time")
    {
        cellular_modem_time = value;
        cellular_modem_time.value_namespace = name_space;
        cellular_modem_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-access-technology-selected")
    {
        radio_access_technology_selected = value;
        radio_access_technology_selected.value_namespace = name_space;
        radio_access_technology_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-service-status")
    {
        current_service_status = value;
        current_service_status.value_namespace = name_space;
        current_service_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-system-identifier")
    {
        current_system_identifier = value;
        current_system_identifier.value_namespace = name_space;
        current_system_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-network-identifier")
    {
        current_network_identifier = value;
        current_network_identifier.value_namespace = name_space;
        current_network_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-service-type")
    {
        current_service_type = value;
        current_service_type.value_namespace = name_space;
        current_service_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-roaming-status")
    {
        current_roaming_status = value;
        current_roaming_status.value_namespace = name_space;
        current_roaming_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-selection-mode")
    {
        network_selection_mode = value;
        network_selection_mode.value_namespace = name_space;
        network_selection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-name")
    {
        network_name = value;
        network_name.value_namespace = name_space;
        network_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-country-code")
    {
        mobile_country_code = value;
        mobile_country_code.value_namespace = name_space;
        mobile_country_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-network-code")
    {
        mobile_network_code = value;
        mobile_network_code.value_namespace = name_space;
        mobile_network_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-switch-domain-state")
    {
        packet_switch_domain_state = value;
        packet_switch_domain_state.value_namespace = name_space;
        packet_switch_domain_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lte-carrier-aggregation")
    {
        lte_carrier_aggregation = value;
        lte_carrier_aggregation.value_namespace = name_space;
        lte_carrier_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registration-state")
    {
        registration_state = value;
        registration_state.value_namespace = name_space;
        registration_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emm-state")
    {
        emm_state = value;
        emm_state.value_namespace = name_space;
        emm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emm-substate")
    {
        emm_substate = value;
        emm_substate.value_namespace = name_space;
        emm_substate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location-area-code")
    {
        location_area_code = value;
        location_area_code.value_namespace = name_space;
        location_area_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracking-area-code")
    {
        tracking_area_code = value;
        tracking_area_code.value_namespace = name_space;
        tracking_area_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-id")
    {
        cell_id = value;
        cell_id.value_namespace = name_space;
        cell_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-network-mtu")
    {
        negotiated_network_mtu = value;
        negotiated_network_mtu.value_namespace = name_space;
        negotiated_network_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void CellwanOperData::CellwanNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface.yfilter = yfilter;
    }
    if(value_path == "cellular-modem-time")
    {
        cellular_modem_time.yfilter = yfilter;
    }
    if(value_path == "radio-access-technology-selected")
    {
        radio_access_technology_selected.yfilter = yfilter;
    }
    if(value_path == "current-service-status")
    {
        current_service_status.yfilter = yfilter;
    }
    if(value_path == "current-system-identifier")
    {
        current_system_identifier.yfilter = yfilter;
    }
    if(value_path == "current-network-identifier")
    {
        current_network_identifier.yfilter = yfilter;
    }
    if(value_path == "current-service-type")
    {
        current_service_type.yfilter = yfilter;
    }
    if(value_path == "current-roaming-status")
    {
        current_roaming_status.yfilter = yfilter;
    }
    if(value_path == "network-selection-mode")
    {
        network_selection_mode.yfilter = yfilter;
    }
    if(value_path == "network-name")
    {
        network_name.yfilter = yfilter;
    }
    if(value_path == "mobile-country-code")
    {
        mobile_country_code.yfilter = yfilter;
    }
    if(value_path == "mobile-network-code")
    {
        mobile_network_code.yfilter = yfilter;
    }
    if(value_path == "packet-switch-domain-state")
    {
        packet_switch_domain_state.yfilter = yfilter;
    }
    if(value_path == "lte-carrier-aggregation")
    {
        lte_carrier_aggregation.yfilter = yfilter;
    }
    if(value_path == "registration-state")
    {
        registration_state.yfilter = yfilter;
    }
    if(value_path == "emm-state")
    {
        emm_state.yfilter = yfilter;
    }
    if(value_path == "emm-substate")
    {
        emm_substate.yfilter = yfilter;
    }
    if(value_path == "location-area-code")
    {
        location_area_code.yfilter = yfilter;
    }
    if(value_path == "tracking-area-code")
    {
        tracking_area_code.yfilter = yfilter;
    }
    if(value_path == "cell-id")
    {
        cell_id.yfilter = yfilter;
    }
    if(value_path == "negotiated-network-mtu")
    {
        negotiated_network_mtu.yfilter = yfilter;
    }
}

bool CellwanOperData::CellwanNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellular-interface" || name == "cellular-modem-time" || name == "radio-access-technology-selected" || name == "current-service-status" || name == "current-system-identifier" || name == "current-network-identifier" || name == "current-service-type" || name == "current-roaming-status" || name == "network-selection-mode" || name == "network-name" || name == "mobile-country-code" || name == "mobile-network-code" || name == "packet-switch-domain-state" || name == "lte-carrier-aggregation" || name == "registration-state" || name == "emm-state" || name == "emm-substate" || name == "location-area-code" || name == "tracking-area-code" || name == "cell-id" || name == "negotiated-network-mtu")
        return true;
    return false;
}

CellwanOperData::CellwanConnection::CellwanConnection()
    :
    cellular_interface{YType::str, "cellular-interface"},
    active_profile{YType::uint64, "active-profile"},
    cellular_packet_status{YType::enumeration, "cellular-packet-status"},
    tx_packets{YType::uint64, "tx-packets"},
    rx_packets{YType::uint64, "rx-packets"},
    tx_bytes{YType::uint64, "tx-bytes"},
    rx_bytes{YType::uint64, "rx-bytes"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv4_dns_pri{YType::str, "ipv4-dns-pri"},
    ipv4_dns_sec{YType::str, "ipv4-dns-sec"},
    ipv6_dns_pri{YType::str, "ipv6-dns-pri"},
    ipv6_dns_sec{YType::str, "ipv6-dns-sec"},
    scope{YType::enumeration, "scope"}
{

    yang_name = "cellwan-connection"; yang_parent_name = "cellwan-oper-data"; is_top_level_class = false; has_list_ancestor = false;
}

CellwanOperData::CellwanConnection::~CellwanConnection()
{
}

bool CellwanOperData::CellwanConnection::has_data() const
{
    return cellular_interface.is_set
	|| active_profile.is_set
	|| cellular_packet_status.is_set
	|| tx_packets.is_set
	|| rx_packets.is_set
	|| tx_bytes.is_set
	|| rx_bytes.is_set
	|| ipv4_addr.is_set
	|| ipv6_addr.is_set
	|| ipv4_dns_pri.is_set
	|| ipv4_dns_sec.is_set
	|| ipv6_dns_pri.is_set
	|| ipv6_dns_sec.is_set
	|| scope.is_set;
}

bool CellwanOperData::CellwanConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cellular_interface.yfilter)
	|| ydk::is_set(active_profile.yfilter)
	|| ydk::is_set(cellular_packet_status.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| ydk::is_set(rx_packets.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(rx_bytes.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv4_dns_pri.yfilter)
	|| ydk::is_set(ipv4_dns_sec.yfilter)
	|| ydk::is_set(ipv6_dns_pri.yfilter)
	|| ydk::is_set(ipv6_dns_sec.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string CellwanOperData::CellwanConnection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string CellwanOperData::CellwanConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cellwan-connection" <<"[cellular-interface='" <<cellular_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::CellwanConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cellular_interface.is_set || is_set(cellular_interface.yfilter)) leaf_name_data.push_back(cellular_interface.get_name_leafdata());
    if (active_profile.is_set || is_set(active_profile.yfilter)) leaf_name_data.push_back(active_profile.get_name_leafdata());
    if (cellular_packet_status.is_set || is_set(cellular_packet_status.yfilter)) leaf_name_data.push_back(cellular_packet_status.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (rx_packets.is_set || is_set(rx_packets.yfilter)) leaf_name_data.push_back(rx_packets.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (rx_bytes.is_set || is_set(rx_bytes.yfilter)) leaf_name_data.push_back(rx_bytes.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv4_dns_pri.is_set || is_set(ipv4_dns_pri.yfilter)) leaf_name_data.push_back(ipv4_dns_pri.get_name_leafdata());
    if (ipv4_dns_sec.is_set || is_set(ipv4_dns_sec.yfilter)) leaf_name_data.push_back(ipv4_dns_sec.get_name_leafdata());
    if (ipv6_dns_pri.is_set || is_set(ipv6_dns_pri.yfilter)) leaf_name_data.push_back(ipv6_dns_pri.get_name_leafdata());
    if (ipv6_dns_sec.is_set || is_set(ipv6_dns_sec.yfilter)) leaf_name_data.push_back(ipv6_dns_sec.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CellwanOperData::CellwanConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CellwanOperData::CellwanConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CellwanOperData::CellwanConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface = value;
        cellular_interface.value_namespace = name_space;
        cellular_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-profile")
    {
        active_profile = value;
        active_profile.value_namespace = name_space;
        active_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cellular-packet-status")
    {
        cellular_packet_status = value;
        cellular_packet_status.value_namespace = name_space;
        cellular_packet_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packets")
    {
        rx_packets = value;
        rx_packets.value_namespace = name_space;
        rx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-bytes")
    {
        rx_bytes = value;
        rx_bytes.value_namespace = name_space;
        rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-dns-pri")
    {
        ipv4_dns_pri = value;
        ipv4_dns_pri.value_namespace = name_space;
        ipv4_dns_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-dns-sec")
    {
        ipv4_dns_sec = value;
        ipv4_dns_sec.value_namespace = name_space;
        ipv4_dns_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-dns-pri")
    {
        ipv6_dns_pri = value;
        ipv6_dns_pri.value_namespace = name_space;
        ipv6_dns_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-dns-sec")
    {
        ipv6_dns_sec = value;
        ipv6_dns_sec.value_namespace = name_space;
        ipv6_dns_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void CellwanOperData::CellwanConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface.yfilter = yfilter;
    }
    if(value_path == "active-profile")
    {
        active_profile.yfilter = yfilter;
    }
    if(value_path == "cellular-packet-status")
    {
        cellular_packet_status.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
    if(value_path == "rx-packets")
    {
        rx_packets.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-bytes")
    {
        rx_bytes.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-dns-pri")
    {
        ipv4_dns_pri.yfilter = yfilter;
    }
    if(value_path == "ipv4-dns-sec")
    {
        ipv4_dns_sec.yfilter = yfilter;
    }
    if(value_path == "ipv6-dns-pri")
    {
        ipv6_dns_pri.yfilter = yfilter;
    }
    if(value_path == "ipv6-dns-sec")
    {
        ipv6_dns_sec.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool CellwanOperData::CellwanConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellular-interface" || name == "active-profile" || name == "cellular-packet-status" || name == "tx-packets" || name == "rx-packets" || name == "tx-bytes" || name == "rx-bytes" || name == "ipv4-addr" || name == "ipv6-addr" || name == "ipv4-dns-pri" || name == "ipv4-dns-sec" || name == "ipv6-dns-pri" || name == "ipv6-dns-sec" || name == "scope")
        return true;
    return false;
}

const Enum::YLeaf ModemStatus::modem_status_offline {0, "modem-status-offline"};
const Enum::YLeaf ModemStatus::modem_status_online {1, "modem-status-online"};
const Enum::YLeaf ModemStatus::modem_status_low_power {2, "modem-status-low-power"};
const Enum::YLeaf ModemStatus::modem_status_power_off {3, "modem-status-power-off"};
const Enum::YLeaf ModemStatus::modem_status_boot_ready {4, "modem-status-boot-ready"};
const Enum::YLeaf ModemStatus::modem_status_unknown {5, "modem-status-unknown"};

const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_online {0, "radio-power-mode-online"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_low_power {1, "radio-power-mode-low-power"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_factory_test {2, "radio-power-mode-factory-test"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_offline {3, "radio-power-mode-offline"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_reset {4, "radio-power-mode-reset"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_off {5, "radio-power-mode-off"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_persistent_low_power {6, "radio-power-mode-persistent-low-power"};

const Enum::YLeaf RadioBandwidth::bandwidth_1_dot_4_mhz {0, "bandwidth-1-dot-4-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_3_mhz {1, "bandwidth-3-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_5_mhz {2, "bandwidth-5-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_10_mhz {3, "bandwidth-10-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_15_mhz {4, "bandwidth-15-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_20_mhz {5, "bandwidth-20-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_invalid {6, "bandwidth-invalid"};
const Enum::YLeaf RadioBandwidth::bandwidth_unknown {7, "bandwidth-unknown"};

const Enum::YLeaf ModemTechnology::cdma_evdo_1x_rtt {0, "cdma-evdo-1x-rtt"};
const Enum::YLeaf ModemTechnology::gsm_umts_gprs {1, "gsm-umts-gprs"};
const Enum::YLeaf ModemTechnology::tech_unknown {2, "tech-unknown"};

const Enum::YLeaf RatPreference::lte_radio_tech_no_svc {0, "lte-radio-tech-no-svc"};
const Enum::YLeaf RatPreference::lte_radio_tech_cdma_1_xrtt {1, "lte-radio-tech-cdma-1-xrtt"};
const Enum::YLeaf RatPreference::lte_radio_tech_cdma_evdo {2, "lte-radio-tech-cdma-evdo"};
const Enum::YLeaf RatPreference::lte_radio_tech_amps {3, "lte-radio-tech-amps"};
const Enum::YLeaf RatPreference::lte_radio_tech_gsm {4, "lte-radio-tech-gsm"};
const Enum::YLeaf RatPreference::lte_radio_tech_umts {5, "lte-radio-tech-umts"};
const Enum::YLeaf RatPreference::lte_radio_tech_wlan {6, "lte-radio-tech-wlan"};
const Enum::YLeaf RatPreference::lte_radio_tech_gprs {7, "lte-radio-tech-gprs"};
const Enum::YLeaf RatPreference::lte_radio_tech_lte {8, "lte-radio-tech-lte"};
const Enum::YLeaf RatPreference::lte_radio_tech_auto {9, "lte-radio-tech-auto"};
const Enum::YLeaf RatPreference::lte_radio_tech_hybrid_cdma {10, "lte-radio-tech-hybrid-cdma"};
const Enum::YLeaf RatPreference::lte_radio_tech_wcdma {11, "lte-radio-tech-wcdma"};
const Enum::YLeaf RatPreference::lte_radio_tech_gwl {12, "lte-radio-tech-gwl"};
const Enum::YLeaf RatPreference::lte_radio_tech_edge {13, "lte-radio-tech-edge"};
const Enum::YLeaf RatPreference::lte_radio_tech_hsdpa_n_wcdma {14, "lte-radio-tech-hsdpa-n-wcdma"};
const Enum::YLeaf RatPreference::lte_radio_tech_wcdma_n_hsupa {15, "lte-radio-tech-wcdma-n-hsupa"};
const Enum::YLeaf RatPreference::lte_radio_tech_hsdpa_n_hsupa {16, "lte-radio-tech-hsdpa-n-hsupa"};
const Enum::YLeaf RatPreference::lte_radio_tech_hsdpa_plus_n_wcdma {17, "lte-radio-tech-hsdpa-plus-n-wcdma"};
const Enum::YLeaf RatPreference::lte_radio_tech_hsdpa_plus_n_hsupa {18, "lte-radio-tech-hsdpa-plus-n-hsupa"};
const Enum::YLeaf RatPreference::lte_radio_tech_dc_hsdpa_plus_n_wcdma {19, "lte-radio-tech-dc-hsdpa-plus-n-wcdma"};
const Enum::YLeaf RatPreference::lte_radio_tech_dc_hsdpa_plus_n_hsupa {20, "lte-radio-tech-dc-hsdpa-plus-n-hsupa"};
const Enum::YLeaf RatPreference::lte_radio_tech_null_bearer {21, "lte-radio-tech-null-bearer"};
const Enum::YLeaf RatPreference::lte_radio_tech_unknown {22, "lte-radio-tech-unknown"};
const Enum::YLeaf RatPreference::lte_radio_tech_no_change {23, "lte-radio-tech-no-change"};

const Enum::YLeaf RatTechnology::system_mode_none {0, "system-mode-none"};
const Enum::YLeaf RatTechnology::system_mode_gprs {1, "system-mode-gprs"};
const Enum::YLeaf RatTechnology::system_mode_edge {2, "system-mode-edge"};
const Enum::YLeaf RatTechnology::system_mode_umts {3, "system-mode-umts"};
const Enum::YLeaf RatTechnology::system_mode_hsdpa {4, "system-mode-hsdpa"};
const Enum::YLeaf RatTechnology::system_mode_hsupa {5, "system-mode-hsupa"};
const Enum::YLeaf RatTechnology::system_mode_hspa {6, "system-mode-hspa"};
const Enum::YLeaf RatTechnology::system_mode_hspa_plus {7, "system-mode-hspa-plus"};
const Enum::YLeaf RatTechnology::system_mode_lte_fdd {8, "system-mode-lte-fdd"};
const Enum::YLeaf RatTechnology::system_mode_lte_tdd {9, "system-mode-lte-tdd"};
const Enum::YLeaf RatTechnology::system_mode_lte_e_hrpd_1x_rtt {10, "system-mode-lte-e-hrpd-1x-rtt"};
const Enum::YLeaf RatTechnology::system_mode_lte_e_hrpd_evdo {11, "system-mode-lte-e-hrpd-evdo"};
const Enum::YLeaf RatTechnology::system_mode_evdo {12, "system-mode-evdo"};
const Enum::YLeaf RatTechnology::system_mode_evdo_reva {13, "system-mode-evdo-reva"};
const Enum::YLeaf RatTechnology::system_mode_hsdpa_n_wcdma {14, "system-mode-hsdpa-n-wcdma"};
const Enum::YLeaf RatTechnology::system_mode_wcdma_n_hsupa {15, "system-mode-wcdma-n-hsupa"};
const Enum::YLeaf RatTechnology::system_mode_hsdpa_n_hsupa {16, "system-mode-hsdpa-n-hsupa"};
const Enum::YLeaf RatTechnology::system_mode_hsdpa_plus_n_wcdma {17, "system-mode-hsdpa-plus-n-wcdma"};
const Enum::YLeaf RatTechnology::system_mode_hsdpa_plus_n_hsupa {18, "system-mode-hsdpa-plus-n-hsupa"};
const Enum::YLeaf RatTechnology::system_mode_dc_hsdpa_plus_n_wcdma {19, "system-mode-dc-hsdpa-plus-n-wcdma"};
const Enum::YLeaf RatTechnology::system_mode_dc_hsdpa_plus_n_hsupa {20, "system-mode-dc-hsdpa-plus-n-hsupa"};
const Enum::YLeaf RatTechnology::sysyem_mode_null_bearer {21, "sysyem-mode-null-bearer"};
const Enum::YLeaf RatTechnology::system_mode_unknown {22, "system-mode-unknown"};

const Enum::YLeaf ServiceStatus::service_status_normal {0, "service-status-normal"};
const Enum::YLeaf ServiceStatus::service_status_emergency {1, "service-status-emergency"};
const Enum::YLeaf ServiceStatus::service_status_no_service {2, "service-status-no-service"};
const Enum::YLeaf ServiceStatus::service_status_unknown {3, "service-status-unknown"};

const Enum::YLeaf ModemService::service_type_circuit_switched {0, "service-type-circuit-switched"};
const Enum::YLeaf ModemService::service_type_packet_switched {1, "service-type-packet-switched"};
const Enum::YLeaf ModemService::service_type_combined {2, "service-type-combined"};
const Enum::YLeaf ModemService::service_type_invalid {3, "service-type-invalid"};
const Enum::YLeaf ModemService::service_type_unknown {4, "service-type-unknown"};

const Enum::YLeaf LteCa::lte_ca_deconfigured {0, "lte-ca-deconfigured"};
const Enum::YLeaf LteCa::lte_ca_deactivated {1, "lte-ca-deactivated"};
const Enum::YLeaf LteCa::lte_ca_activated {2, "lte-ca-activated"};
const Enum::YLeaf LteCa::lte_ca_unsupported {3, "lte-ca-unsupported"};

const Enum::YLeaf RegState::reg_status_not_registered {0, "reg-status-not-registered"};
const Enum::YLeaf RegState::reg_status_registered {1, "reg-status-registered"};
const Enum::YLeaf RegState::reg_status_searching {2, "reg-status-searching"};
const Enum::YLeaf RegState::reg_status_registration_denied {3, "reg-status-registration-denied"};
const Enum::YLeaf RegState::reg_status_unsupported {4, "reg-status-unsupported"};

const Enum::YLeaf PacketSessStatus::packet_session_status_inactive {0, "packet-session-status-inactive"};
const Enum::YLeaf PacketSessStatus::packet_session_status_active {1, "packet-session-status-active"};

const Enum::YLeaf ProfileScope::scope_global {0, "scope-global"};
const Enum::YLeaf ProfileScope::scope_link {1, "scope-link"};


}
}

