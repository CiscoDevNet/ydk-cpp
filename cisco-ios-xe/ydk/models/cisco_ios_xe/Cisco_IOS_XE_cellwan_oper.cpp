
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
    :
    cellwan_hardware(this, {"cellular_interface"})
    , cellwan_radio(this, {"cellular_interface"})
    , cellwan_network(this, {"cellular_interface"})
    , cellwan_connection(this, {"cellular_interface"})
    , cellwan_security(this, {"cellular_interface"})
    , cellwan_sms(this, {"cellular_interface"})
    , cellwan_gps(this, {"cellular_interface"})
{

    yang_name = "cellwan-oper-data"; yang_parent_name = "Cisco-IOS-XE-cellwan-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

CellwanOperData::~CellwanOperData()
{
}

bool CellwanOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cellwan_hardware.len(); index++)
    {
        if(cellwan_hardware[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_radio.len(); index++)
    {
        if(cellwan_radio[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_network.len(); index++)
    {
        if(cellwan_network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_connection.len(); index++)
    {
        if(cellwan_connection[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_security.len(); index++)
    {
        if(cellwan_security[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_sms.len(); index++)
    {
        if(cellwan_sms[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellwan_gps.len(); index++)
    {
        if(cellwan_gps[index]->has_data())
            return true;
    }
    return false;
}

bool CellwanOperData::has_operation() const
{
    for (std::size_t index=0; index<cellwan_hardware.len(); index++)
    {
        if(cellwan_hardware[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_radio.len(); index++)
    {
        if(cellwan_radio[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_network.len(); index++)
    {
        if(cellwan_network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_connection.len(); index++)
    {
        if(cellwan_connection[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_security.len(); index++)
    {
        if(cellwan_security[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_sms.len(); index++)
    {
        if(cellwan_sms[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellwan_gps.len(); index++)
    {
        if(cellwan_gps[index]->has_operation())
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

std::shared_ptr<ydk::Entity> CellwanOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cellwan-hardware")
    {
        auto ent_ = std::make_shared<CellwanOperData::CellwanHardware>();
        ent_->parent = this;
        cellwan_hardware.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cellwan-radio")
    {
        auto ent_ = std::make_shared<CellwanOperData::CellwanRadio>();
        ent_->parent = this;
        cellwan_radio.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cellwan-network")
    {
        auto ent_ = std::make_shared<CellwanOperData::CellwanNetwork>();
        ent_->parent = this;
        cellwan_network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cellwan-connection")
    {
        auto ent_ = std::make_shared<CellwanOperData::CellwanConnection>();
        ent_->parent = this;
        cellwan_connection.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cellwan-security")
    {
        auto ent_ = std::make_shared<CellwanOperData::CellwanSecurity>();
        ent_->parent = this;
        cellwan_security.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cellwan-sms")
    {
        auto ent_ = std::make_shared<CellwanOperData::CellwanSms>();
        ent_->parent = this;
        cellwan_sms.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cellwan-gps")
    {
        auto ent_ = std::make_shared<CellwanOperData::CellwanGps>();
        ent_->parent = this;
        cellwan_gps.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cellwan_hardware.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cellwan_radio.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cellwan_network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cellwan_connection.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cellwan_security.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cellwan_sms.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cellwan_gps.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CellwanOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CellwanOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CellwanOperData::clone_ptr() const
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
    if(name == "cellwan-hardware" || name == "cellwan-radio" || name == "cellwan-network" || name == "cellwan-connection" || name == "cellwan-security" || name == "cellwan-sms" || name == "cellwan-gps")
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
    if (is_presence_container) return true;
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
    path_buffer << "cellwan-hardware";
    ADD_KEY_TOKEN(cellular_interface, "cellular-interface");
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

std::shared_ptr<ydk::Entity> CellwanOperData::CellwanHardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::CellwanHardware::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "cellwan-radio";
    ADD_KEY_TOKEN(cellular_interface, "cellular-interface");
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

std::shared_ptr<ydk::Entity> CellwanOperData::CellwanRadio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::CellwanRadio::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "cellwan-network";
    ADD_KEY_TOKEN(cellular_interface, "cellular-interface");
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

std::shared_ptr<ydk::Entity> CellwanOperData::CellwanNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::CellwanNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "cellwan-connection";
    ADD_KEY_TOKEN(cellular_interface, "cellular-interface");
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

std::shared_ptr<ydk::Entity> CellwanOperData::CellwanConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::CellwanConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

CellwanOperData::CellwanSecurity::CellwanSecurity()
    :
    cellular_interface{YType::str, "cellular-interface"},
    active_sim{YType::int8, "active-sim"},
    sim_num_switchover{YType::uint32, "sim-num-switchover"},
    chv1_status{YType::enumeration, "chv1-status"},
    sim_status{YType::enumeration, "sim-status"},
    sim_oper{YType::enumeration, "sim-oper"},
    num_retries{YType::int8, "num-retries"}
{

    yang_name = "cellwan-security"; yang_parent_name = "cellwan-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

CellwanOperData::CellwanSecurity::~CellwanSecurity()
{
}

bool CellwanOperData::CellwanSecurity::has_data() const
{
    if (is_presence_container) return true;
    return cellular_interface.is_set
	|| active_sim.is_set
	|| sim_num_switchover.is_set
	|| chv1_status.is_set
	|| sim_status.is_set
	|| sim_oper.is_set
	|| num_retries.is_set;
}

bool CellwanOperData::CellwanSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cellular_interface.yfilter)
	|| ydk::is_set(active_sim.yfilter)
	|| ydk::is_set(sim_num_switchover.yfilter)
	|| ydk::is_set(chv1_status.yfilter)
	|| ydk::is_set(sim_status.yfilter)
	|| ydk::is_set(sim_oper.yfilter)
	|| ydk::is_set(num_retries.yfilter);
}

std::string CellwanOperData::CellwanSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string CellwanOperData::CellwanSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cellwan-security";
    ADD_KEY_TOKEN(cellular_interface, "cellular-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::CellwanSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cellular_interface.is_set || is_set(cellular_interface.yfilter)) leaf_name_data.push_back(cellular_interface.get_name_leafdata());
    if (active_sim.is_set || is_set(active_sim.yfilter)) leaf_name_data.push_back(active_sim.get_name_leafdata());
    if (sim_num_switchover.is_set || is_set(sim_num_switchover.yfilter)) leaf_name_data.push_back(sim_num_switchover.get_name_leafdata());
    if (chv1_status.is_set || is_set(chv1_status.yfilter)) leaf_name_data.push_back(chv1_status.get_name_leafdata());
    if (sim_status.is_set || is_set(sim_status.yfilter)) leaf_name_data.push_back(sim_status.get_name_leafdata());
    if (sim_oper.is_set || is_set(sim_oper.yfilter)) leaf_name_data.push_back(sim_oper.get_name_leafdata());
    if (num_retries.is_set || is_set(num_retries.yfilter)) leaf_name_data.push_back(num_retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CellwanOperData::CellwanSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::CellwanSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CellwanOperData::CellwanSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface = value;
        cellular_interface.value_namespace = name_space;
        cellular_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-sim")
    {
        active_sim = value;
        active_sim.value_namespace = name_space;
        active_sim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sim-num-switchover")
    {
        sim_num_switchover = value;
        sim_num_switchover.value_namespace = name_space;
        sim_num_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chv1-status")
    {
        chv1_status = value;
        chv1_status.value_namespace = name_space;
        chv1_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sim-status")
    {
        sim_status = value;
        sim_status.value_namespace = name_space;
        sim_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sim-oper")
    {
        sim_oper = value;
        sim_oper.value_namespace = name_space;
        sim_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-retries")
    {
        num_retries = value;
        num_retries.value_namespace = name_space;
        num_retries.value_namespace_prefix = name_space_prefix;
    }
}

void CellwanOperData::CellwanSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface.yfilter = yfilter;
    }
    if(value_path == "active-sim")
    {
        active_sim.yfilter = yfilter;
    }
    if(value_path == "sim-num-switchover")
    {
        sim_num_switchover.yfilter = yfilter;
    }
    if(value_path == "chv1-status")
    {
        chv1_status.yfilter = yfilter;
    }
    if(value_path == "sim-status")
    {
        sim_status.yfilter = yfilter;
    }
    if(value_path == "sim-oper")
    {
        sim_oper.yfilter = yfilter;
    }
    if(value_path == "num-retries")
    {
        num_retries.yfilter = yfilter;
    }
}

bool CellwanOperData::CellwanSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellular-interface" || name == "active-sim" || name == "sim-num-switchover" || name == "chv1-status" || name == "sim-status" || name == "sim-oper" || name == "num-retries")
        return true;
    return false;
}

CellwanOperData::CellwanSms::CellwanSms()
    :
    cellular_interface{YType::str, "cellular-interface"},
    in_sms_count{YType::uint16, "in-sms-count"},
    in_sms_archived{YType::uint16, "in-sms-archived"},
    in_sms_deleted{YType::uint16, "in-sms-deleted"},
    in_sms_max{YType::uint16, "in-sms-max"},
    in_sms_used{YType::uint16, "in-sms-used"},
    sms_callback_count{YType::uint16, "sms-callback-count"},
    in_sms_arch_count{YType::uint16, "in-sms-arch-count"},
    in_sms_arch_error_count{YType::uint16, "in-sms-arch-error-count"},
    out_sms_count{YType::uint16, "out-sms-count"},
    out_sms_error_count{YType::uint16, "out-sms-error-count"},
    out_sms_pending{YType::uint16, "out-sms-pending"},
    out_sms_arch_count{YType::uint16, "out-sms-arch-count"},
    out_sms_arch_error_count{YType::uint16, "out-sms-arch-error-count"}
{

    yang_name = "cellwan-sms"; yang_parent_name = "cellwan-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

CellwanOperData::CellwanSms::~CellwanSms()
{
}

bool CellwanOperData::CellwanSms::has_data() const
{
    if (is_presence_container) return true;
    return cellular_interface.is_set
	|| in_sms_count.is_set
	|| in_sms_archived.is_set
	|| in_sms_deleted.is_set
	|| in_sms_max.is_set
	|| in_sms_used.is_set
	|| sms_callback_count.is_set
	|| in_sms_arch_count.is_set
	|| in_sms_arch_error_count.is_set
	|| out_sms_count.is_set
	|| out_sms_error_count.is_set
	|| out_sms_pending.is_set
	|| out_sms_arch_count.is_set
	|| out_sms_arch_error_count.is_set;
}

bool CellwanOperData::CellwanSms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cellular_interface.yfilter)
	|| ydk::is_set(in_sms_count.yfilter)
	|| ydk::is_set(in_sms_archived.yfilter)
	|| ydk::is_set(in_sms_deleted.yfilter)
	|| ydk::is_set(in_sms_max.yfilter)
	|| ydk::is_set(in_sms_used.yfilter)
	|| ydk::is_set(sms_callback_count.yfilter)
	|| ydk::is_set(in_sms_arch_count.yfilter)
	|| ydk::is_set(in_sms_arch_error_count.yfilter)
	|| ydk::is_set(out_sms_count.yfilter)
	|| ydk::is_set(out_sms_error_count.yfilter)
	|| ydk::is_set(out_sms_pending.yfilter)
	|| ydk::is_set(out_sms_arch_count.yfilter)
	|| ydk::is_set(out_sms_arch_error_count.yfilter);
}

std::string CellwanOperData::CellwanSms::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string CellwanOperData::CellwanSms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cellwan-sms";
    ADD_KEY_TOKEN(cellular_interface, "cellular-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::CellwanSms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cellular_interface.is_set || is_set(cellular_interface.yfilter)) leaf_name_data.push_back(cellular_interface.get_name_leafdata());
    if (in_sms_count.is_set || is_set(in_sms_count.yfilter)) leaf_name_data.push_back(in_sms_count.get_name_leafdata());
    if (in_sms_archived.is_set || is_set(in_sms_archived.yfilter)) leaf_name_data.push_back(in_sms_archived.get_name_leafdata());
    if (in_sms_deleted.is_set || is_set(in_sms_deleted.yfilter)) leaf_name_data.push_back(in_sms_deleted.get_name_leafdata());
    if (in_sms_max.is_set || is_set(in_sms_max.yfilter)) leaf_name_data.push_back(in_sms_max.get_name_leafdata());
    if (in_sms_used.is_set || is_set(in_sms_used.yfilter)) leaf_name_data.push_back(in_sms_used.get_name_leafdata());
    if (sms_callback_count.is_set || is_set(sms_callback_count.yfilter)) leaf_name_data.push_back(sms_callback_count.get_name_leafdata());
    if (in_sms_arch_count.is_set || is_set(in_sms_arch_count.yfilter)) leaf_name_data.push_back(in_sms_arch_count.get_name_leafdata());
    if (in_sms_arch_error_count.is_set || is_set(in_sms_arch_error_count.yfilter)) leaf_name_data.push_back(in_sms_arch_error_count.get_name_leafdata());
    if (out_sms_count.is_set || is_set(out_sms_count.yfilter)) leaf_name_data.push_back(out_sms_count.get_name_leafdata());
    if (out_sms_error_count.is_set || is_set(out_sms_error_count.yfilter)) leaf_name_data.push_back(out_sms_error_count.get_name_leafdata());
    if (out_sms_pending.is_set || is_set(out_sms_pending.yfilter)) leaf_name_data.push_back(out_sms_pending.get_name_leafdata());
    if (out_sms_arch_count.is_set || is_set(out_sms_arch_count.yfilter)) leaf_name_data.push_back(out_sms_arch_count.get_name_leafdata());
    if (out_sms_arch_error_count.is_set || is_set(out_sms_arch_error_count.yfilter)) leaf_name_data.push_back(out_sms_arch_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CellwanOperData::CellwanSms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::CellwanSms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CellwanOperData::CellwanSms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface = value;
        cellular_interface.value_namespace = name_space;
        cellular_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sms-count")
    {
        in_sms_count = value;
        in_sms_count.value_namespace = name_space;
        in_sms_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sms-archived")
    {
        in_sms_archived = value;
        in_sms_archived.value_namespace = name_space;
        in_sms_archived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sms-deleted")
    {
        in_sms_deleted = value;
        in_sms_deleted.value_namespace = name_space;
        in_sms_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sms-max")
    {
        in_sms_max = value;
        in_sms_max.value_namespace = name_space;
        in_sms_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sms-used")
    {
        in_sms_used = value;
        in_sms_used.value_namespace = name_space;
        in_sms_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sms-callback-count")
    {
        sms_callback_count = value;
        sms_callback_count.value_namespace = name_space;
        sms_callback_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sms-arch-count")
    {
        in_sms_arch_count = value;
        in_sms_arch_count.value_namespace = name_space;
        in_sms_arch_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sms-arch-error-count")
    {
        in_sms_arch_error_count = value;
        in_sms_arch_error_count.value_namespace = name_space;
        in_sms_arch_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-sms-count")
    {
        out_sms_count = value;
        out_sms_count.value_namespace = name_space;
        out_sms_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-sms-error-count")
    {
        out_sms_error_count = value;
        out_sms_error_count.value_namespace = name_space;
        out_sms_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-sms-pending")
    {
        out_sms_pending = value;
        out_sms_pending.value_namespace = name_space;
        out_sms_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-sms-arch-count")
    {
        out_sms_arch_count = value;
        out_sms_arch_count.value_namespace = name_space;
        out_sms_arch_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-sms-arch-error-count")
    {
        out_sms_arch_error_count = value;
        out_sms_arch_error_count.value_namespace = name_space;
        out_sms_arch_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void CellwanOperData::CellwanSms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface.yfilter = yfilter;
    }
    if(value_path == "in-sms-count")
    {
        in_sms_count.yfilter = yfilter;
    }
    if(value_path == "in-sms-archived")
    {
        in_sms_archived.yfilter = yfilter;
    }
    if(value_path == "in-sms-deleted")
    {
        in_sms_deleted.yfilter = yfilter;
    }
    if(value_path == "in-sms-max")
    {
        in_sms_max.yfilter = yfilter;
    }
    if(value_path == "in-sms-used")
    {
        in_sms_used.yfilter = yfilter;
    }
    if(value_path == "sms-callback-count")
    {
        sms_callback_count.yfilter = yfilter;
    }
    if(value_path == "in-sms-arch-count")
    {
        in_sms_arch_count.yfilter = yfilter;
    }
    if(value_path == "in-sms-arch-error-count")
    {
        in_sms_arch_error_count.yfilter = yfilter;
    }
    if(value_path == "out-sms-count")
    {
        out_sms_count.yfilter = yfilter;
    }
    if(value_path == "out-sms-error-count")
    {
        out_sms_error_count.yfilter = yfilter;
    }
    if(value_path == "out-sms-pending")
    {
        out_sms_pending.yfilter = yfilter;
    }
    if(value_path == "out-sms-arch-count")
    {
        out_sms_arch_count.yfilter = yfilter;
    }
    if(value_path == "out-sms-arch-error-count")
    {
        out_sms_arch_error_count.yfilter = yfilter;
    }
}

bool CellwanOperData::CellwanSms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellular-interface" || name == "in-sms-count" || name == "in-sms-archived" || name == "in-sms-deleted" || name == "in-sms-max" || name == "in-sms-used" || name == "sms-callback-count" || name == "in-sms-arch-count" || name == "in-sms-arch-error-count" || name == "out-sms-count" || name == "out-sms-error-count" || name == "out-sms-pending" || name == "out-sms-arch-count" || name == "out-sms-arch-error-count")
        return true;
    return false;
}

CellwanOperData::CellwanGps::CellwanGps()
    :
    cellular_interface{YType::str, "cellular-interface"},
    gps_feature_state{YType::enumeration, "gps-feature-state"},
    port_selected{YType::enumeration, "port-selected"},
    state{YType::enumeration, "state"},
    mode_selected{YType::enumeration, "mode-selected"},
    latitude{YType::str, "latitude"},
    longitude{YType::str, "longitude"},
    timestamp{YType::str, "timestamp"}
{

    yang_name = "cellwan-gps"; yang_parent_name = "cellwan-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

CellwanOperData::CellwanGps::~CellwanGps()
{
}

bool CellwanOperData::CellwanGps::has_data() const
{
    if (is_presence_container) return true;
    return cellular_interface.is_set
	|| gps_feature_state.is_set
	|| port_selected.is_set
	|| state.is_set
	|| mode_selected.is_set
	|| latitude.is_set
	|| longitude.is_set
	|| timestamp.is_set;
}

bool CellwanOperData::CellwanGps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cellular_interface.yfilter)
	|| ydk::is_set(gps_feature_state.yfilter)
	|| ydk::is_set(port_selected.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mode_selected.yfilter)
	|| ydk::is_set(latitude.yfilter)
	|| ydk::is_set(longitude.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string CellwanOperData::CellwanGps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellwan-oper:cellwan-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string CellwanOperData::CellwanGps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cellwan-gps";
    ADD_KEY_TOKEN(cellular_interface, "cellular-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CellwanOperData::CellwanGps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cellular_interface.is_set || is_set(cellular_interface.yfilter)) leaf_name_data.push_back(cellular_interface.get_name_leafdata());
    if (gps_feature_state.is_set || is_set(gps_feature_state.yfilter)) leaf_name_data.push_back(gps_feature_state.get_name_leafdata());
    if (port_selected.is_set || is_set(port_selected.yfilter)) leaf_name_data.push_back(port_selected.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mode_selected.is_set || is_set(mode_selected.yfilter)) leaf_name_data.push_back(mode_selected.get_name_leafdata());
    if (latitude.is_set || is_set(latitude.yfilter)) leaf_name_data.push_back(latitude.get_name_leafdata());
    if (longitude.is_set || is_set(longitude.yfilter)) leaf_name_data.push_back(longitude.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CellwanOperData::CellwanGps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CellwanOperData::CellwanGps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CellwanOperData::CellwanGps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface = value;
        cellular_interface.value_namespace = name_space;
        cellular_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gps-feature-state")
    {
        gps_feature_state = value;
        gps_feature_state.value_namespace = name_space;
        gps_feature_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-selected")
    {
        port_selected = value;
        port_selected.value_namespace = name_space;
        port_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-selected")
    {
        mode_selected = value;
        mode_selected.value_namespace = name_space;
        mode_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latitude")
    {
        latitude = value;
        latitude.value_namespace = name_space;
        latitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "longitude")
    {
        longitude = value;
        longitude.value_namespace = name_space;
        longitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void CellwanOperData::CellwanGps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cellular-interface")
    {
        cellular_interface.yfilter = yfilter;
    }
    if(value_path == "gps-feature-state")
    {
        gps_feature_state.yfilter = yfilter;
    }
    if(value_path == "port-selected")
    {
        port_selected.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mode-selected")
    {
        mode_selected.yfilter = yfilter;
    }
    if(value_path == "latitude")
    {
        latitude.yfilter = yfilter;
    }
    if(value_path == "longitude")
    {
        longitude.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool CellwanOperData::CellwanGps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cellular-interface" || name == "gps-feature-state" || name == "port-selected" || name == "state" || name == "mode-selected" || name == "latitude" || name == "longitude" || name == "timestamp")
        return true;
    return false;
}

const Enum::YLeaf ModemService::service_type_circuit_switched {0, "service-type-circuit-switched"};
const Enum::YLeaf ModemService::service_type_packet_switched {1, "service-type-packet-switched"};
const Enum::YLeaf ModemService::service_type_combined {2, "service-type-combined"};
const Enum::YLeaf ModemService::service_type_invalid {3, "service-type-invalid"};
const Enum::YLeaf ModemService::service_type_unknown {4, "service-type-unknown"};

const Enum::YLeaf ServiceStatus::service_status_normal {0, "service-status-normal"};
const Enum::YLeaf ServiceStatus::service_status_emergency {1, "service-status-emergency"};
const Enum::YLeaf ServiceStatus::service_status_no_service {2, "service-status-no-service"};
const Enum::YLeaf ServiceStatus::service_status_unknown {3, "service-status-unknown"};

const Enum::YLeaf RadioBandwidth::bandwidth_1_dot_4_mhz {0, "bandwidth-1-dot-4-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_3_mhz {1, "bandwidth-3-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_5_mhz {2, "bandwidth-5-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_10_mhz {3, "bandwidth-10-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_15_mhz {4, "bandwidth-15-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_20_mhz {5, "bandwidth-20-mhz"};
const Enum::YLeaf RadioBandwidth::bandwidth_invalid {6, "bandwidth-invalid"};
const Enum::YLeaf RadioBandwidth::bandwidth_unknown {7, "bandwidth-unknown"};

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

const Enum::YLeaf CwanGpsModeSelected::gps_mode_disable {0, "gps-mode-disable"};
const Enum::YLeaf CwanGpsModeSelected::gps_mode_standalone {1, "gps-mode-standalone"};
const Enum::YLeaf CwanGpsModeSelected::gps_mode_mbased {2, "gps-mode-mbased"};
const Enum::YLeaf CwanGpsModeSelected::gps_mode_msassist {3, "gps-mode-msassist"};

const Enum::YLeaf CwanGpsFeatureState::gps_disabled {0, "gps-disabled"};
const Enum::YLeaf CwanGpsFeatureState::gps_enabled {1, "gps-enabled"};

const Enum::YLeaf PacketSessStatus::packet_session_status_inactive {0, "packet-session-status-inactive"};
const Enum::YLeaf PacketSessStatus::packet_session_status_active {1, "packet-session-status-active"};

const Enum::YLeaf CwanGpsPortSelected::dedicated_gps_port {0, "dedicated-gps-port"};
const Enum::YLeaf CwanGpsPortSelected::div_gps_port {1, "div-gps-port"};
const Enum::YLeaf CwanGpsPortSelected::voltage_no_bias_gps_port {2, "voltage-no-bias-gps-port"};
const Enum::YLeaf CwanGpsPortSelected::gps_port_none {3, "gps-port-none"};

const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_online {0, "radio-power-mode-online"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_low_power {1, "radio-power-mode-low-power"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_factory_test {2, "radio-power-mode-factory-test"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_offline {3, "radio-power-mode-offline"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_reset {4, "radio-power-mode-reset"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_off {5, "radio-power-mode-off"};
const Enum::YLeaf CwRadioPowerStatus::radio_power_mode_persistent_low_power {6, "radio-power-mode-persistent-low-power"};

const Enum::YLeaf CellwanSimUserOp::sim_user_op_none {0, "sim-user-op-none"};
const Enum::YLeaf CellwanSimUserOp::sim_user_op_chv1 {1, "sim-user-op-chv1"};
const Enum::YLeaf CellwanSimUserOp::sim_user_op_chv2 {2, "sim-user-op-chv2"};
const Enum::YLeaf CellwanSimUserOp::sim_user_op_unblock_chv1 {3, "sim-user-op-unblock-chv1"};
const Enum::YLeaf CellwanSimUserOp::sim_user_op_unblock_chv2 {4, "sim-user-op-unblock-chv2"};
const Enum::YLeaf CellwanSimUserOp::sim_user_op_mep {5, "sim-user-op-mep"};
const Enum::YLeaf CellwanSimUserOp::sim_user_op_unknown {6, "sim-user-op-unknown"};

const Enum::YLeaf ModemTechnology::cdma_evdo_1x_rtt {0, "cdma-evdo-1x-rtt"};
const Enum::YLeaf ModemTechnology::gsm_umts_gprs {1, "gsm-umts-gprs"};
const Enum::YLeaf ModemTechnology::tech_unknown {2, "tech-unknown"};

const Enum::YLeaf ProfileScope::scope_global {0, "scope-global"};
const Enum::YLeaf ProfileScope::scope_link {1, "scope-link"};

const Enum::YLeaf LteCa::lte_ca_deconfigured {0, "lte-ca-deconfigured"};
const Enum::YLeaf LteCa::lte_ca_deactivated {1, "lte-ca-deactivated"};
const Enum::YLeaf LteCa::lte_ca_activated {2, "lte-ca-activated"};
const Enum::YLeaf LteCa::lte_ca_unsupported {3, "lte-ca-unsupported"};

const Enum::YLeaf ModemStatus::modem_status_offline {0, "modem-status-offline"};
const Enum::YLeaf ModemStatus::modem_status_online {1, "modem-status-online"};
const Enum::YLeaf ModemStatus::modem_status_low_power {2, "modem-status-low-power"};
const Enum::YLeaf ModemStatus::modem_status_power_off {3, "modem-status-power-off"};
const Enum::YLeaf ModemStatus::modem_status_boot_ready {4, "modem-status-boot-ready"};
const Enum::YLeaf ModemStatus::modem_status_unknown {5, "modem-status-unknown"};

const Enum::YLeaf CwanGpsState::gps_state_disabled {1, "gps-state-disabled"};
const Enum::YLeaf CwanGpsState::gps_state_acquiring {2, "gps-state-acquiring"};
const Enum::YLeaf CwanGpsState::gps_state_enabled {3, "gps-state-enabled"};
const Enum::YLeaf CwanGpsState::gps_loc_error {4, "gps-loc-error"};

const Enum::YLeaf RegState::reg_status_not_registered {0, "reg-status-not-registered"};
const Enum::YLeaf RegState::reg_status_registered {1, "reg-status-registered"};
const Enum::YLeaf RegState::reg_status_searching {2, "reg-status-searching"};
const Enum::YLeaf RegState::reg_status_registration_denied {3, "reg-status-registration-denied"};
const Enum::YLeaf RegState::reg_status_unsupported {4, "reg-status-unsupported"};

const Enum::YLeaf CellwanSimStatus::sim_status_ok {0, "sim-status-ok"};
const Enum::YLeaf CellwanSimStatus::sim_status_not_inserted {1, "sim-status-not-inserted"};
const Enum::YLeaf CellwanSimStatus::sim_status_removed {2, "sim-status-removed"};
const Enum::YLeaf CellwanSimStatus::sim_status_init_failure {3, "sim-status-init-failure"};
const Enum::YLeaf CellwanSimStatus::sim_status_general_failure {4, "sim-status-general-failure"};
const Enum::YLeaf CellwanSimStatus::sim_status_locked {5, "sim-status-locked"};
const Enum::YLeaf CellwanSimStatus::sim_status_chv1_blocked {6, "sim-status-chv1-blocked"};
const Enum::YLeaf CellwanSimStatus::sim_status_chv2_blocked {7, "sim-status-chv2-blocked"};
const Enum::YLeaf CellwanSimStatus::sim_status_chv1_rejected {8, "sim-status-chv1-rejected"};
const Enum::YLeaf CellwanSimStatus::sim_status_chv2_rejected {9, "sim-status-chv2-rejected"};
const Enum::YLeaf CellwanSimStatus::sim_status_mep_locked {10, "sim-status-mep-locked"};
const Enum::YLeaf CellwanSimStatus::sim_status_network_reject {11, "sim-status-network-reject"};
const Enum::YLeaf CellwanSimStatus::sim_status_unknown {12, "sim-status-unknown"};

const Enum::YLeaf CellwanChv1SimStatus::chv1_verify_disabled {0, "chv1-verify-disabled"};
const Enum::YLeaf CellwanChv1SimStatus::chv1_verify_enabled {1, "chv1-verify-enabled"};
const Enum::YLeaf CellwanChv1SimStatus::chv1_verify_pending {2, "chv1-verify-pending"};


}
}

