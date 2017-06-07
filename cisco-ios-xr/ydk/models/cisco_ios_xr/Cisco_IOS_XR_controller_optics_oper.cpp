
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_optics_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_controller_optics_oper {

OpticsOper::OpticsOper()
    :
    optics_ports(std::make_shared<OpticsOper::OpticsPorts>())
{
    optics_ports->parent = this;

    yang_name = "optics-oper"; yang_parent_name = "Cisco-IOS-XR-controller-optics-oper";
}

OpticsOper::~OpticsOper()
{
}

bool OpticsOper::has_data() const
{
    return (optics_ports !=  nullptr && optics_ports->has_data());
}

bool OpticsOper::has_operation() const
{
    return is_set(operation)
	|| (optics_ports !=  nullptr && optics_ports->has_operation());
}

std::string OpticsOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-oper:optics-oper";

    return path_buffer.str();

}

const EntityPath OpticsOper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-ports")
    {
        if(optics_ports == nullptr)
        {
            optics_ports = std::make_shared<OpticsOper::OpticsPorts>();
        }
        return optics_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_ports != nullptr)
    {
        children["optics-ports"] = optics_ports;
    }

    return children;
}

void OpticsOper::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> OpticsOper::clone_ptr() const
{
    return std::make_shared<OpticsOper>();
}

std::string OpticsOper::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OpticsOper::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OpticsOper::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

OpticsOper::OpticsPorts::OpticsPorts()
{
    yang_name = "optics-ports"; yang_parent_name = "optics-oper";
}

OpticsOper::OpticsPorts::~OpticsPorts()
{
}

bool OpticsOper::OpticsPorts::has_data() const
{
    for (std::size_t index=0; index<optics_port.size(); index++)
    {
        if(optics_port[index]->has_data())
            return true;
    }
    return false;
}

bool OpticsOper::OpticsPorts::has_operation() const
{
    for (std::size_t index=0; index<optics_port.size(); index++)
    {
        if(optics_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticsOper::OpticsPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-ports";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-controller-optics-oper:optics-oper/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-port")
    {
        for(auto const & c : optics_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticsOper::OpticsPorts::OpticsPort>();
        c->parent = this;
        optics_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticsOper::OpticsPorts::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsPort()
    :
    name{YType::str, "name"}
    	,
    optics_db_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo>())
	,optics_dwdm_carrrier_channel_map(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap>())
	,optics_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo>())
	,optics_lanes(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes>())
{
    optics_db_info->parent = this;

    optics_dwdm_carrrier_channel_map->parent = this;

    optics_info->parent = this;

    optics_lanes->parent = this;

    yang_name = "optics-port"; yang_parent_name = "optics-ports";
}

OpticsOper::OpticsPorts::OpticsPort::~OpticsPort()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::has_data() const
{
    return name.is_set
	|| (optics_db_info !=  nullptr && optics_db_info->has_data())
	|| (optics_dwdm_carrrier_channel_map !=  nullptr && optics_dwdm_carrrier_channel_map->has_data())
	|| (optics_info !=  nullptr && optics_info->has_data())
	|| (optics_lanes !=  nullptr && optics_lanes->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (optics_db_info !=  nullptr && optics_db_info->has_operation())
	|| (optics_dwdm_carrrier_channel_map !=  nullptr && optics_dwdm_carrrier_channel_map->has_operation())
	|| (optics_info !=  nullptr && optics_info->has_operation())
	|| (optics_lanes !=  nullptr && optics_lanes->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-controller-optics-oper:optics-oper/optics-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-db-info")
    {
        if(optics_db_info == nullptr)
        {
            optics_db_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo>();
        }
        return optics_db_info;
    }

    if(child_yang_name == "optics-dwdm-carrrier-channel-map")
    {
        if(optics_dwdm_carrrier_channel_map == nullptr)
        {
            optics_dwdm_carrrier_channel_map = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap>();
        }
        return optics_dwdm_carrrier_channel_map;
    }

    if(child_yang_name == "optics-info")
    {
        if(optics_info == nullptr)
        {
            optics_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo>();
        }
        return optics_info;
    }

    if(child_yang_name == "optics-lanes")
    {
        if(optics_lanes == nullptr)
        {
            optics_lanes = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes>();
        }
        return optics_lanes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_db_info != nullptr)
    {
        children["optics-db-info"] = optics_db_info;
    }

    if(optics_dwdm_carrrier_channel_map != nullptr)
    {
        children["optics-dwdm-carrrier-channel-map"] = optics_dwdm_carrrier_channel_map;
    }

    if(optics_info != nullptr)
    {
        children["optics-info"] = optics_info;
    }

    if(optics_lanes != nullptr)
    {
        children["optics-lanes"] = optics_lanes;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::OpticsDwdmCarrrierChannelMap()
    :
    dwdm_carrier_band{YType::enumeration, "dwdm-carrier-band"},
    dwdm_carrier_max{YType::uint32, "dwdm-carrier-max"},
    dwdm_carrier_min{YType::uint32, "dwdm-carrier-min"}
{
    yang_name = "optics-dwdm-carrrier-channel-map"; yang_parent_name = "optics-port";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::~OpticsDwdmCarrrierChannelMap()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::has_data() const
{
    for (std::size_t index=0; index<dwdm_carrier_map_info.size(); index++)
    {
        if(dwdm_carrier_map_info[index]->has_data())
            return true;
    }
    return dwdm_carrier_band.is_set
	|| dwdm_carrier_max.is_set
	|| dwdm_carrier_min.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::has_operation() const
{
    for (std::size_t index=0; index<dwdm_carrier_map_info.size(); index++)
    {
        if(dwdm_carrier_map_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dwdm_carrier_band.operation)
	|| is_set(dwdm_carrier_max.operation)
	|| is_set(dwdm_carrier_min.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-dwdm-carrrier-channel-map";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsDwdmCarrrierChannelMap' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dwdm_carrier_band.is_set || is_set(dwdm_carrier_band.operation)) leaf_name_data.push_back(dwdm_carrier_band.get_name_leafdata());
    if (dwdm_carrier_max.is_set || is_set(dwdm_carrier_max.operation)) leaf_name_data.push_back(dwdm_carrier_max.get_name_leafdata());
    if (dwdm_carrier_min.is_set || is_set(dwdm_carrier_min.operation)) leaf_name_data.push_back(dwdm_carrier_min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-carrier-map-info")
    {
        for(auto const & c : dwdm_carrier_map_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo>();
        c->parent = this;
        dwdm_carrier_map_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dwdm_carrier_map_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dwdm-carrier-band")
    {
        dwdm_carrier_band = value;
    }
    if(value_path == "dwdm-carrier-max")
    {
        dwdm_carrier_max = value;
    }
    if(value_path == "dwdm-carrier-min")
    {
        dwdm_carrier_min = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::DwdmCarrierMapInfo()
    :
    frequency{YType::str, "frequency"},
    g694_chan_num{YType::int32, "g694-chan-num"},
    itu_chan_num{YType::uint32, "itu-chan-num"},
    wavelength{YType::str, "wavelength"}
{
    yang_name = "dwdm-carrier-map-info"; yang_parent_name = "optics-dwdm-carrrier-channel-map";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::~DwdmCarrierMapInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::has_data() const
{
    return frequency.is_set
	|| g694_chan_num.is_set
	|| itu_chan_num.is_set
	|| wavelength.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(g694_chan_num.operation)
	|| is_set(itu_chan_num.operation)
	|| is_set(wavelength.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-carrier-map-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmCarrierMapInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (g694_chan_num.is_set || is_set(g694_chan_num.operation)) leaf_name_data.push_back(g694_chan_num.get_name_leafdata());
    if (itu_chan_num.is_set || is_set(itu_chan_num.operation)) leaf_name_data.push_back(itu_chan_num.get_name_leafdata());
    if (wavelength.is_set || is_set(wavelength.operation)) leaf_name_data.push_back(wavelength.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "g694-chan-num")
    {
        g694_chan_num = value;
    }
    if(value_path == "itu-chan-num")
    {
        itu_chan_num = value;
    }
    if(value_path == "wavelength")
    {
        wavelength = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsInfo()
    :
    alarm_detected{YType::boolean, "alarm-detected"},
    ampli_channel_power_config_val{YType::int32, "ampli-channel-power-config-val"},
    ampli_control_mode_config_val{YType::enumeration, "ampli-control-mode-config-val"},
    ampli_gain{YType::int32, "ampli-gain"},
    ampli_gain_config_val{YType::int32, "ampli-gain-config-val"},
    ampli_gain_range_config_val{YType::enumeration, "ampli-gain-range-config-val"},
    ampli_gain_thr_deg_high_config_val{YType::int32, "ampli-gain-thr-deg-high-config-val"},
    ampli_gain_thr_deg_low_config_val{YType::int32, "ampli-gain-thr-deg-low-config-val"},
    ampli_tilt{YType::int32, "ampli-tilt"},
    ampli_tilt_config_val{YType::int32, "ampli-tilt-config-val"},
    cd{YType::int32, "cd"},
    cd_configurable{YType::boolean, "cd-configurable"},
    cd_high_threshold{YType::int32, "cd-high-threshold"},
    cd_low_threshold{YType::int32, "cd-low-threshold"},
    cd_max{YType::int32, "cd-max"},
    cd_min{YType::int32, "cd-min"},
    cfg_tx_power{YType::int32, "cfg-tx-power"},
    cfg_tx_power_configurable{YType::boolean, "cfg-tx-power-configurable"},
    channel_power_max_delta_config_val{YType::int32, "channel-power-max-delta-config-val"},
    controller_state{YType::enumeration, "controller-state"},
    dgd_high_threshold{YType::str, "dgd-high-threshold"},
    differential_group_delay{YType::str, "differential-group-delay"},
    display_volt_temp{YType::boolean, "display-volt-temp"},
    dwdm_carrier_band{YType::enumeration, "dwdm-carrier-band"},
    dwdm_carrier_channel{YType::str, "dwdm-carrier-channel"},
    dwdm_carrier_frequency{YType::str, "dwdm-carrier-frequency"},
    dwdm_carrier_wavelength{YType::str, "dwdm-carrier-wavelength"},
    form_factor{YType::enumeration, "form-factor"},
    grey_wavelength{YType::uint32, "grey-wavelength"},
    is_bo_configured{YType::boolean, "is-bo-configured"},
    is_ext_param_valid{YType::boolean, "is-ext-param-valid"},
    laser_state{YType::enumeration, "laser-state"},
    lbc_high_threshold{YType::int32, "lbc-high-threshold"},
    lbc_th_high_default{YType::int32, "lbc-th-high-default"},
    lbc_th_high_warning_default{YType::int32, "lbc-th-high-warning-default"},
    lbc_th_low_default{YType::int32, "lbc-th-low-default"},
    lbc_th_low_warning_default{YType::int32, "lbc-th-low-warning-default"},
    led_state{YType::enumeration, "led-state"},
    optical_signal_to_noise_ratio{YType::str, "optical-signal-to-noise-ratio"},
    optics_fec{YType::enumeration, "optics-fec"},
    optics_module{YType::str, "optics-module"},
    optics_present{YType::boolean, "optics-present"},
    optics_type{YType::enumeration, "optics-type"},
    osnr_low_threshold{YType::str, "osnr-low-threshold"},
    osri_config_val{YType::boolean, "osri-config-val"},
    phase_noise{YType::str, "phase-noise"},
    phy_type{YType::enumeration, "phy-type"},
    pm_enable{YType::uint32, "pm-enable"},
    polarization_change_rate{YType::str, "polarization-change-rate"},
    polarization_dependent_loss{YType::str, "polarization-dependent-loss"},
    polarization_mode_dispersion{YType::str, "polarization-mode-dispersion"},
    port_status{YType::enumeration, "port-status"},
    port_type{YType::enumeration, "port-type"},
    rx_high_threshold{YType::int32, "rx-high-threshold"},
    rx_high_warning_threshold{YType::int32, "rx-high-warning-threshold"},
    rx_low_threshold{YType::int32, "rx-low-threshold"},
    rx_low_warning_threshold{YType::int32, "rx-low-warning-threshold"},
    rx_power{YType::int32, "rx-power"},
    rx_power_th_configurable{YType::boolean, "rx-power-th-configurable"},
    rx_voa_attenuation{YType::int32, "rx-voa-attenuation"},
    rx_voa_attenuation_config_val{YType::int32, "rx-voa-attenuation-config-val"},
    safety_control_mode_config_val{YType::enumeration, "safety-control-mode-config-val"},
    second_order_polarization_mode_dispersion{YType::str, "second-order-polarization-mode-dispersion"},
    temp_high_threshold{YType::int32, "temp-high-threshold"},
    temp_high_warning_threshold{YType::int32, "temp-high-warning-threshold"},
    temp_low_threshold{YType::int32, "temp-low-threshold"},
    temp_low_warning_threshold{YType::int32, "temp-low-warning-threshold"},
    temperature{YType::int32, "temperature"},
    total_rx_power{YType::int32, "total-rx-power"},
    total_tx_power{YType::int32, "total-tx-power"},
    transport_admin_state{YType::enumeration, "transport-admin-state"},
    tx_high_threshold{YType::int32, "tx-high-threshold"},
    tx_high_warning_threshold{YType::int32, "tx-high-warning-threshold"},
    tx_low_threshold{YType::int32, "tx-low-threshold"},
    tx_low_warning_threshold{YType::int32, "tx-low-warning-threshold"},
    tx_power{YType::int32, "tx-power"},
    tx_power_th_configurable{YType::boolean, "tx-power-th-configurable"},
    tx_voa_attenuation{YType::int32, "tx-voa-attenuation"},
    tx_voa_attenuation_config_val{YType::int32, "tx-voa-attenuation-config-val"},
    volt_high_threshold{YType::int32, "volt-high-threshold"},
    volt_high_warning_threshold{YType::int32, "volt-high-warning-threshold"},
    volt_low_threshold{YType::int32, "volt-low-threshold"},
    volt_low_warning_threshold{YType::int32, "volt-low-warning-threshold"},
    voltage{YType::int32, "voltage"}
    	,
    ext_param_threshold_val(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal>())
	,ext_param_val(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal>())
	,network_srlg_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo>())
	,optics_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo>())
	,ots_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo>())
	,transceiver_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo>())
{
    ext_param_threshold_val->parent = this;

    ext_param_val->parent = this;

    network_srlg_info->parent = this;

    optics_alarm_info->parent = this;

    ots_alarm_info->parent = this;

    transceiver_info->parent = this;

    yang_name = "optics-info"; yang_parent_name = "optics-port";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::~OpticsInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::has_data() const
{
    for (std::size_t index=0; index<lane_data.size(); index++)
    {
        if(lane_data[index]->has_data())
            return true;
    }
    return alarm_detected.is_set
	|| ampli_channel_power_config_val.is_set
	|| ampli_control_mode_config_val.is_set
	|| ampli_gain.is_set
	|| ampli_gain_config_val.is_set
	|| ampli_gain_range_config_val.is_set
	|| ampli_gain_thr_deg_high_config_val.is_set
	|| ampli_gain_thr_deg_low_config_val.is_set
	|| ampli_tilt.is_set
	|| ampli_tilt_config_val.is_set
	|| cd.is_set
	|| cd_configurable.is_set
	|| cd_high_threshold.is_set
	|| cd_low_threshold.is_set
	|| cd_max.is_set
	|| cd_min.is_set
	|| cfg_tx_power.is_set
	|| cfg_tx_power_configurable.is_set
	|| channel_power_max_delta_config_val.is_set
	|| controller_state.is_set
	|| dgd_high_threshold.is_set
	|| differential_group_delay.is_set
	|| display_volt_temp.is_set
	|| dwdm_carrier_band.is_set
	|| dwdm_carrier_channel.is_set
	|| dwdm_carrier_frequency.is_set
	|| dwdm_carrier_wavelength.is_set
	|| form_factor.is_set
	|| grey_wavelength.is_set
	|| is_bo_configured.is_set
	|| is_ext_param_valid.is_set
	|| laser_state.is_set
	|| lbc_high_threshold.is_set
	|| lbc_th_high_default.is_set
	|| lbc_th_high_warning_default.is_set
	|| lbc_th_low_default.is_set
	|| lbc_th_low_warning_default.is_set
	|| led_state.is_set
	|| optical_signal_to_noise_ratio.is_set
	|| optics_fec.is_set
	|| optics_module.is_set
	|| optics_present.is_set
	|| optics_type.is_set
	|| osnr_low_threshold.is_set
	|| osri_config_val.is_set
	|| phase_noise.is_set
	|| phy_type.is_set
	|| pm_enable.is_set
	|| polarization_change_rate.is_set
	|| polarization_dependent_loss.is_set
	|| polarization_mode_dispersion.is_set
	|| port_status.is_set
	|| port_type.is_set
	|| rx_high_threshold.is_set
	|| rx_high_warning_threshold.is_set
	|| rx_low_threshold.is_set
	|| rx_low_warning_threshold.is_set
	|| rx_power.is_set
	|| rx_power_th_configurable.is_set
	|| rx_voa_attenuation.is_set
	|| rx_voa_attenuation_config_val.is_set
	|| safety_control_mode_config_val.is_set
	|| second_order_polarization_mode_dispersion.is_set
	|| temp_high_threshold.is_set
	|| temp_high_warning_threshold.is_set
	|| temp_low_threshold.is_set
	|| temp_low_warning_threshold.is_set
	|| temperature.is_set
	|| total_rx_power.is_set
	|| total_tx_power.is_set
	|| transport_admin_state.is_set
	|| tx_high_threshold.is_set
	|| tx_high_warning_threshold.is_set
	|| tx_low_threshold.is_set
	|| tx_low_warning_threshold.is_set
	|| tx_power.is_set
	|| tx_power_th_configurable.is_set
	|| tx_voa_attenuation.is_set
	|| tx_voa_attenuation_config_val.is_set
	|| volt_high_threshold.is_set
	|| volt_high_warning_threshold.is_set
	|| volt_low_threshold.is_set
	|| volt_low_warning_threshold.is_set
	|| voltage.is_set
	|| (ext_param_threshold_val !=  nullptr && ext_param_threshold_val->has_data())
	|| (ext_param_val !=  nullptr && ext_param_val->has_data())
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_data())
	|| (optics_alarm_info !=  nullptr && optics_alarm_info->has_data())
	|| (ots_alarm_info !=  nullptr && ots_alarm_info->has_data())
	|| (transceiver_info !=  nullptr && transceiver_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::has_operation() const
{
    for (std::size_t index=0; index<lane_data.size(); index++)
    {
        if(lane_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_detected.operation)
	|| is_set(ampli_channel_power_config_val.operation)
	|| is_set(ampli_control_mode_config_val.operation)
	|| is_set(ampli_gain.operation)
	|| is_set(ampli_gain_config_val.operation)
	|| is_set(ampli_gain_range_config_val.operation)
	|| is_set(ampli_gain_thr_deg_high_config_val.operation)
	|| is_set(ampli_gain_thr_deg_low_config_val.operation)
	|| is_set(ampli_tilt.operation)
	|| is_set(ampli_tilt_config_val.operation)
	|| is_set(cd.operation)
	|| is_set(cd_configurable.operation)
	|| is_set(cd_high_threshold.operation)
	|| is_set(cd_low_threshold.operation)
	|| is_set(cd_max.operation)
	|| is_set(cd_min.operation)
	|| is_set(cfg_tx_power.operation)
	|| is_set(cfg_tx_power_configurable.operation)
	|| is_set(channel_power_max_delta_config_val.operation)
	|| is_set(controller_state.operation)
	|| is_set(dgd_high_threshold.operation)
	|| is_set(differential_group_delay.operation)
	|| is_set(display_volt_temp.operation)
	|| is_set(dwdm_carrier_band.operation)
	|| is_set(dwdm_carrier_channel.operation)
	|| is_set(dwdm_carrier_frequency.operation)
	|| is_set(dwdm_carrier_wavelength.operation)
	|| is_set(form_factor.operation)
	|| is_set(grey_wavelength.operation)
	|| is_set(is_bo_configured.operation)
	|| is_set(is_ext_param_valid.operation)
	|| is_set(laser_state.operation)
	|| is_set(lbc_high_threshold.operation)
	|| is_set(lbc_th_high_default.operation)
	|| is_set(lbc_th_high_warning_default.operation)
	|| is_set(lbc_th_low_default.operation)
	|| is_set(lbc_th_low_warning_default.operation)
	|| is_set(led_state.operation)
	|| is_set(optical_signal_to_noise_ratio.operation)
	|| is_set(optics_fec.operation)
	|| is_set(optics_module.operation)
	|| is_set(optics_present.operation)
	|| is_set(optics_type.operation)
	|| is_set(osnr_low_threshold.operation)
	|| is_set(osri_config_val.operation)
	|| is_set(phase_noise.operation)
	|| is_set(phy_type.operation)
	|| is_set(pm_enable.operation)
	|| is_set(polarization_change_rate.operation)
	|| is_set(polarization_dependent_loss.operation)
	|| is_set(polarization_mode_dispersion.operation)
	|| is_set(port_status.operation)
	|| is_set(port_type.operation)
	|| is_set(rx_high_threshold.operation)
	|| is_set(rx_high_warning_threshold.operation)
	|| is_set(rx_low_threshold.operation)
	|| is_set(rx_low_warning_threshold.operation)
	|| is_set(rx_power.operation)
	|| is_set(rx_power_th_configurable.operation)
	|| is_set(rx_voa_attenuation.operation)
	|| is_set(rx_voa_attenuation_config_val.operation)
	|| is_set(safety_control_mode_config_val.operation)
	|| is_set(second_order_polarization_mode_dispersion.operation)
	|| is_set(temp_high_threshold.operation)
	|| is_set(temp_high_warning_threshold.operation)
	|| is_set(temp_low_threshold.operation)
	|| is_set(temp_low_warning_threshold.operation)
	|| is_set(temperature.operation)
	|| is_set(total_rx_power.operation)
	|| is_set(total_tx_power.operation)
	|| is_set(transport_admin_state.operation)
	|| is_set(tx_high_threshold.operation)
	|| is_set(tx_high_warning_threshold.operation)
	|| is_set(tx_low_threshold.operation)
	|| is_set(tx_low_warning_threshold.operation)
	|| is_set(tx_power.operation)
	|| is_set(tx_power_th_configurable.operation)
	|| is_set(tx_voa_attenuation.operation)
	|| is_set(tx_voa_attenuation_config_val.operation)
	|| is_set(volt_high_threshold.operation)
	|| is_set(volt_high_warning_threshold.operation)
	|| is_set(volt_low_threshold.operation)
	|| is_set(volt_low_warning_threshold.operation)
	|| is_set(voltage.operation)
	|| (ext_param_threshold_val !=  nullptr && ext_param_threshold_val->has_operation())
	|| (ext_param_val !=  nullptr && ext_param_val->has_operation())
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_operation())
	|| (optics_alarm_info !=  nullptr && optics_alarm_info->has_operation())
	|| (ots_alarm_info !=  nullptr && ots_alarm_info->has_operation())
	|| (transceiver_info !=  nullptr && transceiver_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_detected.is_set || is_set(alarm_detected.operation)) leaf_name_data.push_back(alarm_detected.get_name_leafdata());
    if (ampli_channel_power_config_val.is_set || is_set(ampli_channel_power_config_val.operation)) leaf_name_data.push_back(ampli_channel_power_config_val.get_name_leafdata());
    if (ampli_control_mode_config_val.is_set || is_set(ampli_control_mode_config_val.operation)) leaf_name_data.push_back(ampli_control_mode_config_val.get_name_leafdata());
    if (ampli_gain.is_set || is_set(ampli_gain.operation)) leaf_name_data.push_back(ampli_gain.get_name_leafdata());
    if (ampli_gain_config_val.is_set || is_set(ampli_gain_config_val.operation)) leaf_name_data.push_back(ampli_gain_config_val.get_name_leafdata());
    if (ampli_gain_range_config_val.is_set || is_set(ampli_gain_range_config_val.operation)) leaf_name_data.push_back(ampli_gain_range_config_val.get_name_leafdata());
    if (ampli_gain_thr_deg_high_config_val.is_set || is_set(ampli_gain_thr_deg_high_config_val.operation)) leaf_name_data.push_back(ampli_gain_thr_deg_high_config_val.get_name_leafdata());
    if (ampli_gain_thr_deg_low_config_val.is_set || is_set(ampli_gain_thr_deg_low_config_val.operation)) leaf_name_data.push_back(ampli_gain_thr_deg_low_config_val.get_name_leafdata());
    if (ampli_tilt.is_set || is_set(ampli_tilt.operation)) leaf_name_data.push_back(ampli_tilt.get_name_leafdata());
    if (ampli_tilt_config_val.is_set || is_set(ampli_tilt_config_val.operation)) leaf_name_data.push_back(ampli_tilt_config_val.get_name_leafdata());
    if (cd.is_set || is_set(cd.operation)) leaf_name_data.push_back(cd.get_name_leafdata());
    if (cd_configurable.is_set || is_set(cd_configurable.operation)) leaf_name_data.push_back(cd_configurable.get_name_leafdata());
    if (cd_high_threshold.is_set || is_set(cd_high_threshold.operation)) leaf_name_data.push_back(cd_high_threshold.get_name_leafdata());
    if (cd_low_threshold.is_set || is_set(cd_low_threshold.operation)) leaf_name_data.push_back(cd_low_threshold.get_name_leafdata());
    if (cd_max.is_set || is_set(cd_max.operation)) leaf_name_data.push_back(cd_max.get_name_leafdata());
    if (cd_min.is_set || is_set(cd_min.operation)) leaf_name_data.push_back(cd_min.get_name_leafdata());
    if (cfg_tx_power.is_set || is_set(cfg_tx_power.operation)) leaf_name_data.push_back(cfg_tx_power.get_name_leafdata());
    if (cfg_tx_power_configurable.is_set || is_set(cfg_tx_power_configurable.operation)) leaf_name_data.push_back(cfg_tx_power_configurable.get_name_leafdata());
    if (channel_power_max_delta_config_val.is_set || is_set(channel_power_max_delta_config_val.operation)) leaf_name_data.push_back(channel_power_max_delta_config_val.get_name_leafdata());
    if (controller_state.is_set || is_set(controller_state.operation)) leaf_name_data.push_back(controller_state.get_name_leafdata());
    if (dgd_high_threshold.is_set || is_set(dgd_high_threshold.operation)) leaf_name_data.push_back(dgd_high_threshold.get_name_leafdata());
    if (differential_group_delay.is_set || is_set(differential_group_delay.operation)) leaf_name_data.push_back(differential_group_delay.get_name_leafdata());
    if (display_volt_temp.is_set || is_set(display_volt_temp.operation)) leaf_name_data.push_back(display_volt_temp.get_name_leafdata());
    if (dwdm_carrier_band.is_set || is_set(dwdm_carrier_band.operation)) leaf_name_data.push_back(dwdm_carrier_band.get_name_leafdata());
    if (dwdm_carrier_channel.is_set || is_set(dwdm_carrier_channel.operation)) leaf_name_data.push_back(dwdm_carrier_channel.get_name_leafdata());
    if (dwdm_carrier_frequency.is_set || is_set(dwdm_carrier_frequency.operation)) leaf_name_data.push_back(dwdm_carrier_frequency.get_name_leafdata());
    if (dwdm_carrier_wavelength.is_set || is_set(dwdm_carrier_wavelength.operation)) leaf_name_data.push_back(dwdm_carrier_wavelength.get_name_leafdata());
    if (form_factor.is_set || is_set(form_factor.operation)) leaf_name_data.push_back(form_factor.get_name_leafdata());
    if (grey_wavelength.is_set || is_set(grey_wavelength.operation)) leaf_name_data.push_back(grey_wavelength.get_name_leafdata());
    if (is_bo_configured.is_set || is_set(is_bo_configured.operation)) leaf_name_data.push_back(is_bo_configured.get_name_leafdata());
    if (is_ext_param_valid.is_set || is_set(is_ext_param_valid.operation)) leaf_name_data.push_back(is_ext_param_valid.get_name_leafdata());
    if (laser_state.is_set || is_set(laser_state.operation)) leaf_name_data.push_back(laser_state.get_name_leafdata());
    if (lbc_high_threshold.is_set || is_set(lbc_high_threshold.operation)) leaf_name_data.push_back(lbc_high_threshold.get_name_leafdata());
    if (lbc_th_high_default.is_set || is_set(lbc_th_high_default.operation)) leaf_name_data.push_back(lbc_th_high_default.get_name_leafdata());
    if (lbc_th_high_warning_default.is_set || is_set(lbc_th_high_warning_default.operation)) leaf_name_data.push_back(lbc_th_high_warning_default.get_name_leafdata());
    if (lbc_th_low_default.is_set || is_set(lbc_th_low_default.operation)) leaf_name_data.push_back(lbc_th_low_default.get_name_leafdata());
    if (lbc_th_low_warning_default.is_set || is_set(lbc_th_low_warning_default.operation)) leaf_name_data.push_back(lbc_th_low_warning_default.get_name_leafdata());
    if (led_state.is_set || is_set(led_state.operation)) leaf_name_data.push_back(led_state.get_name_leafdata());
    if (optical_signal_to_noise_ratio.is_set || is_set(optical_signal_to_noise_ratio.operation)) leaf_name_data.push_back(optical_signal_to_noise_ratio.get_name_leafdata());
    if (optics_fec.is_set || is_set(optics_fec.operation)) leaf_name_data.push_back(optics_fec.get_name_leafdata());
    if (optics_module.is_set || is_set(optics_module.operation)) leaf_name_data.push_back(optics_module.get_name_leafdata());
    if (optics_present.is_set || is_set(optics_present.operation)) leaf_name_data.push_back(optics_present.get_name_leafdata());
    if (optics_type.is_set || is_set(optics_type.operation)) leaf_name_data.push_back(optics_type.get_name_leafdata());
    if (osnr_low_threshold.is_set || is_set(osnr_low_threshold.operation)) leaf_name_data.push_back(osnr_low_threshold.get_name_leafdata());
    if (osri_config_val.is_set || is_set(osri_config_val.operation)) leaf_name_data.push_back(osri_config_val.get_name_leafdata());
    if (phase_noise.is_set || is_set(phase_noise.operation)) leaf_name_data.push_back(phase_noise.get_name_leafdata());
    if (phy_type.is_set || is_set(phy_type.operation)) leaf_name_data.push_back(phy_type.get_name_leafdata());
    if (pm_enable.is_set || is_set(pm_enable.operation)) leaf_name_data.push_back(pm_enable.get_name_leafdata());
    if (polarization_change_rate.is_set || is_set(polarization_change_rate.operation)) leaf_name_data.push_back(polarization_change_rate.get_name_leafdata());
    if (polarization_dependent_loss.is_set || is_set(polarization_dependent_loss.operation)) leaf_name_data.push_back(polarization_dependent_loss.get_name_leafdata());
    if (polarization_mode_dispersion.is_set || is_set(polarization_mode_dispersion.operation)) leaf_name_data.push_back(polarization_mode_dispersion.get_name_leafdata());
    if (port_status.is_set || is_set(port_status.operation)) leaf_name_data.push_back(port_status.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (rx_high_threshold.is_set || is_set(rx_high_threshold.operation)) leaf_name_data.push_back(rx_high_threshold.get_name_leafdata());
    if (rx_high_warning_threshold.is_set || is_set(rx_high_warning_threshold.operation)) leaf_name_data.push_back(rx_high_warning_threshold.get_name_leafdata());
    if (rx_low_threshold.is_set || is_set(rx_low_threshold.operation)) leaf_name_data.push_back(rx_low_threshold.get_name_leafdata());
    if (rx_low_warning_threshold.is_set || is_set(rx_low_warning_threshold.operation)) leaf_name_data.push_back(rx_low_warning_threshold.get_name_leafdata());
    if (rx_power.is_set || is_set(rx_power.operation)) leaf_name_data.push_back(rx_power.get_name_leafdata());
    if (rx_power_th_configurable.is_set || is_set(rx_power_th_configurable.operation)) leaf_name_data.push_back(rx_power_th_configurable.get_name_leafdata());
    if (rx_voa_attenuation.is_set || is_set(rx_voa_attenuation.operation)) leaf_name_data.push_back(rx_voa_attenuation.get_name_leafdata());
    if (rx_voa_attenuation_config_val.is_set || is_set(rx_voa_attenuation_config_val.operation)) leaf_name_data.push_back(rx_voa_attenuation_config_val.get_name_leafdata());
    if (safety_control_mode_config_val.is_set || is_set(safety_control_mode_config_val.operation)) leaf_name_data.push_back(safety_control_mode_config_val.get_name_leafdata());
    if (second_order_polarization_mode_dispersion.is_set || is_set(second_order_polarization_mode_dispersion.operation)) leaf_name_data.push_back(second_order_polarization_mode_dispersion.get_name_leafdata());
    if (temp_high_threshold.is_set || is_set(temp_high_threshold.operation)) leaf_name_data.push_back(temp_high_threshold.get_name_leafdata());
    if (temp_high_warning_threshold.is_set || is_set(temp_high_warning_threshold.operation)) leaf_name_data.push_back(temp_high_warning_threshold.get_name_leafdata());
    if (temp_low_threshold.is_set || is_set(temp_low_threshold.operation)) leaf_name_data.push_back(temp_low_threshold.get_name_leafdata());
    if (temp_low_warning_threshold.is_set || is_set(temp_low_warning_threshold.operation)) leaf_name_data.push_back(temp_low_warning_threshold.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.operation)) leaf_name_data.push_back(temperature.get_name_leafdata());
    if (total_rx_power.is_set || is_set(total_rx_power.operation)) leaf_name_data.push_back(total_rx_power.get_name_leafdata());
    if (total_tx_power.is_set || is_set(total_tx_power.operation)) leaf_name_data.push_back(total_tx_power.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.operation)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());
    if (tx_high_threshold.is_set || is_set(tx_high_threshold.operation)) leaf_name_data.push_back(tx_high_threshold.get_name_leafdata());
    if (tx_high_warning_threshold.is_set || is_set(tx_high_warning_threshold.operation)) leaf_name_data.push_back(tx_high_warning_threshold.get_name_leafdata());
    if (tx_low_threshold.is_set || is_set(tx_low_threshold.operation)) leaf_name_data.push_back(tx_low_threshold.get_name_leafdata());
    if (tx_low_warning_threshold.is_set || is_set(tx_low_warning_threshold.operation)) leaf_name_data.push_back(tx_low_warning_threshold.get_name_leafdata());
    if (tx_power.is_set || is_set(tx_power.operation)) leaf_name_data.push_back(tx_power.get_name_leafdata());
    if (tx_power_th_configurable.is_set || is_set(tx_power_th_configurable.operation)) leaf_name_data.push_back(tx_power_th_configurable.get_name_leafdata());
    if (tx_voa_attenuation.is_set || is_set(tx_voa_attenuation.operation)) leaf_name_data.push_back(tx_voa_attenuation.get_name_leafdata());
    if (tx_voa_attenuation_config_val.is_set || is_set(tx_voa_attenuation_config_val.operation)) leaf_name_data.push_back(tx_voa_attenuation_config_val.get_name_leafdata());
    if (volt_high_threshold.is_set || is_set(volt_high_threshold.operation)) leaf_name_data.push_back(volt_high_threshold.get_name_leafdata());
    if (volt_high_warning_threshold.is_set || is_set(volt_high_warning_threshold.operation)) leaf_name_data.push_back(volt_high_warning_threshold.get_name_leafdata());
    if (volt_low_threshold.is_set || is_set(volt_low_threshold.operation)) leaf_name_data.push_back(volt_low_threshold.get_name_leafdata());
    if (volt_low_warning_threshold.is_set || is_set(volt_low_warning_threshold.operation)) leaf_name_data.push_back(volt_low_warning_threshold.get_name_leafdata());
    if (voltage.is_set || is_set(voltage.operation)) leaf_name_data.push_back(voltage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-param-threshold-val")
    {
        if(ext_param_threshold_val == nullptr)
        {
            ext_param_threshold_val = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal>();
        }
        return ext_param_threshold_val;
    }

    if(child_yang_name == "ext-param-val")
    {
        if(ext_param_val == nullptr)
        {
            ext_param_val = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal>();
        }
        return ext_param_val;
    }

    if(child_yang_name == "lane-data")
    {
        for(auto const & c : lane_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData>();
        c->parent = this;
        lane_data.push_back(c);
        return c;
    }

    if(child_yang_name == "network-srlg-info")
    {
        if(network_srlg_info == nullptr)
        {
            network_srlg_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo>();
        }
        return network_srlg_info;
    }

    if(child_yang_name == "optics-alarm-info")
    {
        if(optics_alarm_info == nullptr)
        {
            optics_alarm_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo>();
        }
        return optics_alarm_info;
    }

    if(child_yang_name == "ots-alarm-info")
    {
        if(ots_alarm_info == nullptr)
        {
            ots_alarm_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo>();
        }
        return ots_alarm_info;
    }

    if(child_yang_name == "transceiver-info")
    {
        if(transceiver_info == nullptr)
        {
            transceiver_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo>();
        }
        return transceiver_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ext_param_threshold_val != nullptr)
    {
        children["ext-param-threshold-val"] = ext_param_threshold_val;
    }

    if(ext_param_val != nullptr)
    {
        children["ext-param-val"] = ext_param_val;
    }

    for (auto const & c : lane_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(network_srlg_info != nullptr)
    {
        children["network-srlg-info"] = network_srlg_info;
    }

    if(optics_alarm_info != nullptr)
    {
        children["optics-alarm-info"] = optics_alarm_info;
    }

    if(ots_alarm_info != nullptr)
    {
        children["ots-alarm-info"] = ots_alarm_info;
    }

    if(transceiver_info != nullptr)
    {
        children["transceiver-info"] = transceiver_info;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-detected")
    {
        alarm_detected = value;
    }
    if(value_path == "ampli-channel-power-config-val")
    {
        ampli_channel_power_config_val = value;
    }
    if(value_path == "ampli-control-mode-config-val")
    {
        ampli_control_mode_config_val = value;
    }
    if(value_path == "ampli-gain")
    {
        ampli_gain = value;
    }
    if(value_path == "ampli-gain-config-val")
    {
        ampli_gain_config_val = value;
    }
    if(value_path == "ampli-gain-range-config-val")
    {
        ampli_gain_range_config_val = value;
    }
    if(value_path == "ampli-gain-thr-deg-high-config-val")
    {
        ampli_gain_thr_deg_high_config_val = value;
    }
    if(value_path == "ampli-gain-thr-deg-low-config-val")
    {
        ampli_gain_thr_deg_low_config_val = value;
    }
    if(value_path == "ampli-tilt")
    {
        ampli_tilt = value;
    }
    if(value_path == "ampli-tilt-config-val")
    {
        ampli_tilt_config_val = value;
    }
    if(value_path == "cd")
    {
        cd = value;
    }
    if(value_path == "cd-configurable")
    {
        cd_configurable = value;
    }
    if(value_path == "cd-high-threshold")
    {
        cd_high_threshold = value;
    }
    if(value_path == "cd-low-threshold")
    {
        cd_low_threshold = value;
    }
    if(value_path == "cd-max")
    {
        cd_max = value;
    }
    if(value_path == "cd-min")
    {
        cd_min = value;
    }
    if(value_path == "cfg-tx-power")
    {
        cfg_tx_power = value;
    }
    if(value_path == "cfg-tx-power-configurable")
    {
        cfg_tx_power_configurable = value;
    }
    if(value_path == "channel-power-max-delta-config-val")
    {
        channel_power_max_delta_config_val = value;
    }
    if(value_path == "controller-state")
    {
        controller_state = value;
    }
    if(value_path == "dgd-high-threshold")
    {
        dgd_high_threshold = value;
    }
    if(value_path == "differential-group-delay")
    {
        differential_group_delay = value;
    }
    if(value_path == "display-volt-temp")
    {
        display_volt_temp = value;
    }
    if(value_path == "dwdm-carrier-band")
    {
        dwdm_carrier_band = value;
    }
    if(value_path == "dwdm-carrier-channel")
    {
        dwdm_carrier_channel = value;
    }
    if(value_path == "dwdm-carrier-frequency")
    {
        dwdm_carrier_frequency = value;
    }
    if(value_path == "dwdm-carrier-wavelength")
    {
        dwdm_carrier_wavelength = value;
    }
    if(value_path == "form-factor")
    {
        form_factor = value;
    }
    if(value_path == "grey-wavelength")
    {
        grey_wavelength = value;
    }
    if(value_path == "is-bo-configured")
    {
        is_bo_configured = value;
    }
    if(value_path == "is-ext-param-valid")
    {
        is_ext_param_valid = value;
    }
    if(value_path == "laser-state")
    {
        laser_state = value;
    }
    if(value_path == "lbc-high-threshold")
    {
        lbc_high_threshold = value;
    }
    if(value_path == "lbc-th-high-default")
    {
        lbc_th_high_default = value;
    }
    if(value_path == "lbc-th-high-warning-default")
    {
        lbc_th_high_warning_default = value;
    }
    if(value_path == "lbc-th-low-default")
    {
        lbc_th_low_default = value;
    }
    if(value_path == "lbc-th-low-warning-default")
    {
        lbc_th_low_warning_default = value;
    }
    if(value_path == "led-state")
    {
        led_state = value;
    }
    if(value_path == "optical-signal-to-noise-ratio")
    {
        optical_signal_to_noise_ratio = value;
    }
    if(value_path == "optics-fec")
    {
        optics_fec = value;
    }
    if(value_path == "optics-module")
    {
        optics_module = value;
    }
    if(value_path == "optics-present")
    {
        optics_present = value;
    }
    if(value_path == "optics-type")
    {
        optics_type = value;
    }
    if(value_path == "osnr-low-threshold")
    {
        osnr_low_threshold = value;
    }
    if(value_path == "osri-config-val")
    {
        osri_config_val = value;
    }
    if(value_path == "phase-noise")
    {
        phase_noise = value;
    }
    if(value_path == "phy-type")
    {
        phy_type = value;
    }
    if(value_path == "pm-enable")
    {
        pm_enable = value;
    }
    if(value_path == "polarization-change-rate")
    {
        polarization_change_rate = value;
    }
    if(value_path == "polarization-dependent-loss")
    {
        polarization_dependent_loss = value;
    }
    if(value_path == "polarization-mode-dispersion")
    {
        polarization_mode_dispersion = value;
    }
    if(value_path == "port-status")
    {
        port_status = value;
    }
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "rx-high-threshold")
    {
        rx_high_threshold = value;
    }
    if(value_path == "rx-high-warning-threshold")
    {
        rx_high_warning_threshold = value;
    }
    if(value_path == "rx-low-threshold")
    {
        rx_low_threshold = value;
    }
    if(value_path == "rx-low-warning-threshold")
    {
        rx_low_warning_threshold = value;
    }
    if(value_path == "rx-power")
    {
        rx_power = value;
    }
    if(value_path == "rx-power-th-configurable")
    {
        rx_power_th_configurable = value;
    }
    if(value_path == "rx-voa-attenuation")
    {
        rx_voa_attenuation = value;
    }
    if(value_path == "rx-voa-attenuation-config-val")
    {
        rx_voa_attenuation_config_val = value;
    }
    if(value_path == "safety-control-mode-config-val")
    {
        safety_control_mode_config_val = value;
    }
    if(value_path == "second-order-polarization-mode-dispersion")
    {
        second_order_polarization_mode_dispersion = value;
    }
    if(value_path == "temp-high-threshold")
    {
        temp_high_threshold = value;
    }
    if(value_path == "temp-high-warning-threshold")
    {
        temp_high_warning_threshold = value;
    }
    if(value_path == "temp-low-threshold")
    {
        temp_low_threshold = value;
    }
    if(value_path == "temp-low-warning-threshold")
    {
        temp_low_warning_threshold = value;
    }
    if(value_path == "temperature")
    {
        temperature = value;
    }
    if(value_path == "total-rx-power")
    {
        total_rx_power = value;
    }
    if(value_path == "total-tx-power")
    {
        total_tx_power = value;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
    }
    if(value_path == "tx-high-threshold")
    {
        tx_high_threshold = value;
    }
    if(value_path == "tx-high-warning-threshold")
    {
        tx_high_warning_threshold = value;
    }
    if(value_path == "tx-low-threshold")
    {
        tx_low_threshold = value;
    }
    if(value_path == "tx-low-warning-threshold")
    {
        tx_low_warning_threshold = value;
    }
    if(value_path == "tx-power")
    {
        tx_power = value;
    }
    if(value_path == "tx-power-th-configurable")
    {
        tx_power_th_configurable = value;
    }
    if(value_path == "tx-voa-attenuation")
    {
        tx_voa_attenuation = value;
    }
    if(value_path == "tx-voa-attenuation-config-val")
    {
        tx_voa_attenuation_config_val = value;
    }
    if(value_path == "volt-high-threshold")
    {
        volt_high_threshold = value;
    }
    if(value_path == "volt-high-warning-threshold")
    {
        volt_high_warning_threshold = value;
    }
    if(value_path == "volt-low-threshold")
    {
        volt_low_threshold = value;
    }
    if(value_path == "volt-low-warning-threshold")
    {
        volt_low_warning_threshold = value;
    }
    if(value_path == "voltage")
    {
        voltage = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgInfo()
{
    yang_name = "network-srlg-info"; yang_parent_name = "optics-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::~NetworkSrlgInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::has_data() const
{
    for (std::size_t index=0; index<network_srlg_array.size(); index++)
    {
        if(network_srlg_array[index]->has_data())
            return true;
    }
    return false;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::has_operation() const
{
    for (std::size_t index=0; index<network_srlg_array.size(); index++)
    {
        if(network_srlg_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg-array")
    {
        for(auto const & c : network_srlg_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray>();
        c->parent = this;
        network_srlg_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_srlg_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::NetworkSrlgArray()
    :
    network_srlg{YType::uint32, "network-srlg"},
    set_number{YType::uint32, "set-number"}
{
    yang_name = "network-srlg-array"; yang_parent_name = "network-srlg-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::~NetworkSrlgArray()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::has_data() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return set_number.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::has_operation() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(network_srlg.operation)
	|| is_set(set_number.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-array";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgArray' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_number.is_set || is_set(set_number.operation)) leaf_name_data.push_back(set_number.get_name_leafdata());

    auto network_srlg_name_datas = network_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_srlg_name_datas.begin(), network_srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-srlg")
    {
        network_srlg.append(value);
    }
    if(value_path == "set-number")
    {
        set_number = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::OpticsAlarmInfo()
    :
    amp_gain_deg_high(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh>())
	,amp_gain_deg_low(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow>())
	,hidgd(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd>())
	,high_lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc>())
	,high_rx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power>())
	,high_rx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power>())
	,high_rx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power>())
	,high_rx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power>())
	,high_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower>())
	,high_tx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power>())
	,high_tx1lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc>())
	,high_tx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power>())
	,high_tx2lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc>())
	,high_tx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power>())
	,high_tx3lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc>())
	,high_tx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power>())
	,high_tx4lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc>())
	,high_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower>())
	,imp_removal(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval>())
	,low_rx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power>())
	,low_rx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power>())
	,low_rx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power>())
	,low_rx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower>())
	,low_tx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power>())
	,low_tx1lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc>())
	,low_tx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power>())
	,low_tx2lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc>())
	,low_tx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power>())
	,low_tx3lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc>())
	,low_tx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power>())
	,low_tx4lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc>())
	,low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower>())
	,mea(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea>())
	,oorcd(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd>())
	,osnr(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr>())
	,rx_loc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc>())
	,rx_lol(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol>())
	,rx_los(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos>())
	,tx_fault(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault>())
	,tx_lol(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol>())
	,tx_los(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos>())
	,wvlool(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool>())
{
    amp_gain_deg_high->parent = this;

    amp_gain_deg_low->parent = this;

    hidgd->parent = this;

    high_lbc->parent = this;

    high_rx1_power->parent = this;

    high_rx2_power->parent = this;

    high_rx3_power->parent = this;

    high_rx4_power->parent = this;

    high_rx_power->parent = this;

    high_tx1_power->parent = this;

    high_tx1lbc->parent = this;

    high_tx2_power->parent = this;

    high_tx2lbc->parent = this;

    high_tx3_power->parent = this;

    high_tx3lbc->parent = this;

    high_tx4_power->parent = this;

    high_tx4lbc->parent = this;

    high_tx_power->parent = this;

    imp_removal->parent = this;

    low_rx1_power->parent = this;

    low_rx2_power->parent = this;

    low_rx3_power->parent = this;

    low_rx4_power->parent = this;

    low_rx_power->parent = this;

    low_tx1_power->parent = this;

    low_tx1lbc->parent = this;

    low_tx2_power->parent = this;

    low_tx2lbc->parent = this;

    low_tx3_power->parent = this;

    low_tx3lbc->parent = this;

    low_tx4_power->parent = this;

    low_tx4lbc->parent = this;

    low_tx_power->parent = this;

    mea->parent = this;

    oorcd->parent = this;

    osnr->parent = this;

    rx_loc->parent = this;

    rx_lol->parent = this;

    rx_los->parent = this;

    tx_fault->parent = this;

    tx_lol->parent = this;

    tx_los->parent = this;

    wvlool->parent = this;

    yang_name = "optics-alarm-info"; yang_parent_name = "optics-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::~OpticsAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::has_data() const
{
    return (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_data())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_data())
	|| (hidgd !=  nullptr && hidgd->has_data())
	|| (high_lbc !=  nullptr && high_lbc->has_data())
	|| (high_rx1_power !=  nullptr && high_rx1_power->has_data())
	|| (high_rx2_power !=  nullptr && high_rx2_power->has_data())
	|| (high_rx3_power !=  nullptr && high_rx3_power->has_data())
	|| (high_rx4_power !=  nullptr && high_rx4_power->has_data())
	|| (high_rx_power !=  nullptr && high_rx_power->has_data())
	|| (high_tx1_power !=  nullptr && high_tx1_power->has_data())
	|| (high_tx1lbc !=  nullptr && high_tx1lbc->has_data())
	|| (high_tx2_power !=  nullptr && high_tx2_power->has_data())
	|| (high_tx2lbc !=  nullptr && high_tx2lbc->has_data())
	|| (high_tx3_power !=  nullptr && high_tx3_power->has_data())
	|| (high_tx3lbc !=  nullptr && high_tx3lbc->has_data())
	|| (high_tx4_power !=  nullptr && high_tx4_power->has_data())
	|| (high_tx4lbc !=  nullptr && high_tx4lbc->has_data())
	|| (high_tx_power !=  nullptr && high_tx_power->has_data())
	|| (imp_removal !=  nullptr && imp_removal->has_data())
	|| (low_rx1_power !=  nullptr && low_rx1_power->has_data())
	|| (low_rx2_power !=  nullptr && low_rx2_power->has_data())
	|| (low_rx3_power !=  nullptr && low_rx3_power->has_data())
	|| (low_rx4_power !=  nullptr && low_rx4_power->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (low_tx1_power !=  nullptr && low_tx1_power->has_data())
	|| (low_tx1lbc !=  nullptr && low_tx1lbc->has_data())
	|| (low_tx2_power !=  nullptr && low_tx2_power->has_data())
	|| (low_tx2lbc !=  nullptr && low_tx2lbc->has_data())
	|| (low_tx3_power !=  nullptr && low_tx3_power->has_data())
	|| (low_tx3lbc !=  nullptr && low_tx3lbc->has_data())
	|| (low_tx4_power !=  nullptr && low_tx4_power->has_data())
	|| (low_tx4lbc !=  nullptr && low_tx4lbc->has_data())
	|| (low_tx_power !=  nullptr && low_tx_power->has_data())
	|| (mea !=  nullptr && mea->has_data())
	|| (oorcd !=  nullptr && oorcd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (rx_loc !=  nullptr && rx_loc->has_data())
	|| (rx_lol !=  nullptr && rx_lol->has_data())
	|| (rx_los !=  nullptr && rx_los->has_data())
	|| (tx_fault !=  nullptr && tx_fault->has_data())
	|| (tx_lol !=  nullptr && tx_lol->has_data())
	|| (tx_los !=  nullptr && tx_los->has_data())
	|| (wvlool !=  nullptr && wvlool->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::has_operation() const
{
    return is_set(operation)
	|| (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_operation())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_operation())
	|| (hidgd !=  nullptr && hidgd->has_operation())
	|| (high_lbc !=  nullptr && high_lbc->has_operation())
	|| (high_rx1_power !=  nullptr && high_rx1_power->has_operation())
	|| (high_rx2_power !=  nullptr && high_rx2_power->has_operation())
	|| (high_rx3_power !=  nullptr && high_rx3_power->has_operation())
	|| (high_rx4_power !=  nullptr && high_rx4_power->has_operation())
	|| (high_rx_power !=  nullptr && high_rx_power->has_operation())
	|| (high_tx1_power !=  nullptr && high_tx1_power->has_operation())
	|| (high_tx1lbc !=  nullptr && high_tx1lbc->has_operation())
	|| (high_tx2_power !=  nullptr && high_tx2_power->has_operation())
	|| (high_tx2lbc !=  nullptr && high_tx2lbc->has_operation())
	|| (high_tx3_power !=  nullptr && high_tx3_power->has_operation())
	|| (high_tx3lbc !=  nullptr && high_tx3lbc->has_operation())
	|| (high_tx4_power !=  nullptr && high_tx4_power->has_operation())
	|| (high_tx4lbc !=  nullptr && high_tx4lbc->has_operation())
	|| (high_tx_power !=  nullptr && high_tx_power->has_operation())
	|| (imp_removal !=  nullptr && imp_removal->has_operation())
	|| (low_rx1_power !=  nullptr && low_rx1_power->has_operation())
	|| (low_rx2_power !=  nullptr && low_rx2_power->has_operation())
	|| (low_rx3_power !=  nullptr && low_rx3_power->has_operation())
	|| (low_rx4_power !=  nullptr && low_rx4_power->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (low_tx1_power !=  nullptr && low_tx1_power->has_operation())
	|| (low_tx1lbc !=  nullptr && low_tx1lbc->has_operation())
	|| (low_tx2_power !=  nullptr && low_tx2_power->has_operation())
	|| (low_tx2lbc !=  nullptr && low_tx2lbc->has_operation())
	|| (low_tx3_power !=  nullptr && low_tx3_power->has_operation())
	|| (low_tx3lbc !=  nullptr && low_tx3lbc->has_operation())
	|| (low_tx4_power !=  nullptr && low_tx4_power->has_operation())
	|| (low_tx4lbc !=  nullptr && low_tx4lbc->has_operation())
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation())
	|| (mea !=  nullptr && mea->has_operation())
	|| (oorcd !=  nullptr && oorcd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (rx_loc !=  nullptr && rx_loc->has_operation())
	|| (rx_lol !=  nullptr && rx_lol->has_operation())
	|| (rx_los !=  nullptr && rx_los->has_operation())
	|| (tx_fault !=  nullptr && tx_fault->has_operation())
	|| (tx_lol !=  nullptr && tx_lol->has_operation())
	|| (tx_los !=  nullptr && tx_los->has_operation())
	|| (wvlool !=  nullptr && wvlool->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-alarm-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsAlarmInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amp-gain-deg-high")
    {
        if(amp_gain_deg_high == nullptr)
        {
            amp_gain_deg_high = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh>();
        }
        return amp_gain_deg_high;
    }

    if(child_yang_name == "amp-gain-deg-low")
    {
        if(amp_gain_deg_low == nullptr)
        {
            amp_gain_deg_low = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow>();
        }
        return amp_gain_deg_low;
    }

    if(child_yang_name == "hidgd")
    {
        if(hidgd == nullptr)
        {
            hidgd = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd>();
        }
        return hidgd;
    }

    if(child_yang_name == "high-lbc")
    {
        if(high_lbc == nullptr)
        {
            high_lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc>();
        }
        return high_lbc;
    }

    if(child_yang_name == "high-rx1-power")
    {
        if(high_rx1_power == nullptr)
        {
            high_rx1_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power>();
        }
        return high_rx1_power;
    }

    if(child_yang_name == "high-rx2-power")
    {
        if(high_rx2_power == nullptr)
        {
            high_rx2_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power>();
        }
        return high_rx2_power;
    }

    if(child_yang_name == "high-rx3-power")
    {
        if(high_rx3_power == nullptr)
        {
            high_rx3_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power>();
        }
        return high_rx3_power;
    }

    if(child_yang_name == "high-rx4-power")
    {
        if(high_rx4_power == nullptr)
        {
            high_rx4_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power>();
        }
        return high_rx4_power;
    }

    if(child_yang_name == "high-rx-power")
    {
        if(high_rx_power == nullptr)
        {
            high_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower>();
        }
        return high_rx_power;
    }

    if(child_yang_name == "high-tx1-power")
    {
        if(high_tx1_power == nullptr)
        {
            high_tx1_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power>();
        }
        return high_tx1_power;
    }

    if(child_yang_name == "high-tx1lbc")
    {
        if(high_tx1lbc == nullptr)
        {
            high_tx1lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc>();
        }
        return high_tx1lbc;
    }

    if(child_yang_name == "high-tx2-power")
    {
        if(high_tx2_power == nullptr)
        {
            high_tx2_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power>();
        }
        return high_tx2_power;
    }

    if(child_yang_name == "high-tx2lbc")
    {
        if(high_tx2lbc == nullptr)
        {
            high_tx2lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc>();
        }
        return high_tx2lbc;
    }

    if(child_yang_name == "high-tx3-power")
    {
        if(high_tx3_power == nullptr)
        {
            high_tx3_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power>();
        }
        return high_tx3_power;
    }

    if(child_yang_name == "high-tx3lbc")
    {
        if(high_tx3lbc == nullptr)
        {
            high_tx3lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc>();
        }
        return high_tx3lbc;
    }

    if(child_yang_name == "high-tx4-power")
    {
        if(high_tx4_power == nullptr)
        {
            high_tx4_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power>();
        }
        return high_tx4_power;
    }

    if(child_yang_name == "high-tx4lbc")
    {
        if(high_tx4lbc == nullptr)
        {
            high_tx4lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc>();
        }
        return high_tx4lbc;
    }

    if(child_yang_name == "high-tx-power")
    {
        if(high_tx_power == nullptr)
        {
            high_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower>();
        }
        return high_tx_power;
    }

    if(child_yang_name == "imp-removal")
    {
        if(imp_removal == nullptr)
        {
            imp_removal = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval>();
        }
        return imp_removal;
    }

    if(child_yang_name == "low-rx1-power")
    {
        if(low_rx1_power == nullptr)
        {
            low_rx1_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power>();
        }
        return low_rx1_power;
    }

    if(child_yang_name == "low-rx2-power")
    {
        if(low_rx2_power == nullptr)
        {
            low_rx2_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power>();
        }
        return low_rx2_power;
    }

    if(child_yang_name == "low-rx3-power")
    {
        if(low_rx3_power == nullptr)
        {
            low_rx3_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power>();
        }
        return low_rx3_power;
    }

    if(child_yang_name == "low-rx4-power")
    {
        if(low_rx4_power == nullptr)
        {
            low_rx4_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power>();
        }
        return low_rx4_power;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "low-tx1-power")
    {
        if(low_tx1_power == nullptr)
        {
            low_tx1_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power>();
        }
        return low_tx1_power;
    }

    if(child_yang_name == "low-tx1lbc")
    {
        if(low_tx1lbc == nullptr)
        {
            low_tx1lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc>();
        }
        return low_tx1lbc;
    }

    if(child_yang_name == "low-tx2-power")
    {
        if(low_tx2_power == nullptr)
        {
            low_tx2_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power>();
        }
        return low_tx2_power;
    }

    if(child_yang_name == "low-tx2lbc")
    {
        if(low_tx2lbc == nullptr)
        {
            low_tx2lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc>();
        }
        return low_tx2lbc;
    }

    if(child_yang_name == "low-tx3-power")
    {
        if(low_tx3_power == nullptr)
        {
            low_tx3_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power>();
        }
        return low_tx3_power;
    }

    if(child_yang_name == "low-tx3lbc")
    {
        if(low_tx3lbc == nullptr)
        {
            low_tx3lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc>();
        }
        return low_tx3lbc;
    }

    if(child_yang_name == "low-tx4-power")
    {
        if(low_tx4_power == nullptr)
        {
            low_tx4_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power>();
        }
        return low_tx4_power;
    }

    if(child_yang_name == "low-tx4lbc")
    {
        if(low_tx4lbc == nullptr)
        {
            low_tx4lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc>();
        }
        return low_tx4lbc;
    }

    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
    }

    if(child_yang_name == "mea")
    {
        if(mea == nullptr)
        {
            mea = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea>();
        }
        return mea;
    }

    if(child_yang_name == "oorcd")
    {
        if(oorcd == nullptr)
        {
            oorcd = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd>();
        }
        return oorcd;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "rx-loc")
    {
        if(rx_loc == nullptr)
        {
            rx_loc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc>();
        }
        return rx_loc;
    }

    if(child_yang_name == "rx-lol")
    {
        if(rx_lol == nullptr)
        {
            rx_lol = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol>();
        }
        return rx_lol;
    }

    if(child_yang_name == "rx-los")
    {
        if(rx_los == nullptr)
        {
            rx_los = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos>();
        }
        return rx_los;
    }

    if(child_yang_name == "tx-fault")
    {
        if(tx_fault == nullptr)
        {
            tx_fault = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault>();
        }
        return tx_fault;
    }

    if(child_yang_name == "tx-lol")
    {
        if(tx_lol == nullptr)
        {
            tx_lol = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol>();
        }
        return tx_lol;
    }

    if(child_yang_name == "tx-los")
    {
        if(tx_los == nullptr)
        {
            tx_los = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos>();
        }
        return tx_los;
    }

    if(child_yang_name == "wvlool")
    {
        if(wvlool == nullptr)
        {
            wvlool = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool>();
        }
        return wvlool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(amp_gain_deg_high != nullptr)
    {
        children["amp-gain-deg-high"] = amp_gain_deg_high;
    }

    if(amp_gain_deg_low != nullptr)
    {
        children["amp-gain-deg-low"] = amp_gain_deg_low;
    }

    if(hidgd != nullptr)
    {
        children["hidgd"] = hidgd;
    }

    if(high_lbc != nullptr)
    {
        children["high-lbc"] = high_lbc;
    }

    if(high_rx1_power != nullptr)
    {
        children["high-rx1-power"] = high_rx1_power;
    }

    if(high_rx2_power != nullptr)
    {
        children["high-rx2-power"] = high_rx2_power;
    }

    if(high_rx3_power != nullptr)
    {
        children["high-rx3-power"] = high_rx3_power;
    }

    if(high_rx4_power != nullptr)
    {
        children["high-rx4-power"] = high_rx4_power;
    }

    if(high_rx_power != nullptr)
    {
        children["high-rx-power"] = high_rx_power;
    }

    if(high_tx1_power != nullptr)
    {
        children["high-tx1-power"] = high_tx1_power;
    }

    if(high_tx1lbc != nullptr)
    {
        children["high-tx1lbc"] = high_tx1lbc;
    }

    if(high_tx2_power != nullptr)
    {
        children["high-tx2-power"] = high_tx2_power;
    }

    if(high_tx2lbc != nullptr)
    {
        children["high-tx2lbc"] = high_tx2lbc;
    }

    if(high_tx3_power != nullptr)
    {
        children["high-tx3-power"] = high_tx3_power;
    }

    if(high_tx3lbc != nullptr)
    {
        children["high-tx3lbc"] = high_tx3lbc;
    }

    if(high_tx4_power != nullptr)
    {
        children["high-tx4-power"] = high_tx4_power;
    }

    if(high_tx4lbc != nullptr)
    {
        children["high-tx4lbc"] = high_tx4lbc;
    }

    if(high_tx_power != nullptr)
    {
        children["high-tx-power"] = high_tx_power;
    }

    if(imp_removal != nullptr)
    {
        children["imp-removal"] = imp_removal;
    }

    if(low_rx1_power != nullptr)
    {
        children["low-rx1-power"] = low_rx1_power;
    }

    if(low_rx2_power != nullptr)
    {
        children["low-rx2-power"] = low_rx2_power;
    }

    if(low_rx3_power != nullptr)
    {
        children["low-rx3-power"] = low_rx3_power;
    }

    if(low_rx4_power != nullptr)
    {
        children["low-rx4-power"] = low_rx4_power;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(low_tx1_power != nullptr)
    {
        children["low-tx1-power"] = low_tx1_power;
    }

    if(low_tx1lbc != nullptr)
    {
        children["low-tx1lbc"] = low_tx1lbc;
    }

    if(low_tx2_power != nullptr)
    {
        children["low-tx2-power"] = low_tx2_power;
    }

    if(low_tx2lbc != nullptr)
    {
        children["low-tx2lbc"] = low_tx2lbc;
    }

    if(low_tx3_power != nullptr)
    {
        children["low-tx3-power"] = low_tx3_power;
    }

    if(low_tx3lbc != nullptr)
    {
        children["low-tx3lbc"] = low_tx3lbc;
    }

    if(low_tx4_power != nullptr)
    {
        children["low-tx4-power"] = low_tx4_power;
    }

    if(low_tx4lbc != nullptr)
    {
        children["low-tx4lbc"] = low_tx4lbc;
    }

    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
    }

    if(mea != nullptr)
    {
        children["mea"] = mea;
    }

    if(oorcd != nullptr)
    {
        children["oorcd"] = oorcd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(rx_loc != nullptr)
    {
        children["rx-loc"] = rx_loc;
    }

    if(rx_lol != nullptr)
    {
        children["rx-lol"] = rx_lol;
    }

    if(rx_los != nullptr)
    {
        children["rx-los"] = rx_los;
    }

    if(tx_fault != nullptr)
    {
        children["tx-fault"] = tx_fault;
    }

    if(tx_lol != nullptr)
    {
        children["tx-lol"] = tx_lol;
    }

    if(tx_los != nullptr)
    {
        children["tx-los"] = tx_los;
    }

    if(wvlool != nullptr)
    {
        children["wvlool"] = wvlool;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::HighRxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-rx-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::~HighRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighRxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::LowRxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::HighTxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::~HighTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::LowTxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::HighLbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::~HighLbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighLbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::HighRx1Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-rx1-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::~HighRx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx1-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighRx1Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::HighRx2Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-rx2-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::~HighRx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx2-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighRx2Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::HighRx3Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-rx3-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::~HighRx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx3-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighRx3Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::HighRx4Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-rx4-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::~HighRx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx4-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighRx4Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::LowRx1Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx1-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::~LowRx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx1-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRx1Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::LowRx2Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx2-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::~LowRx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx2-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRx2Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::LowRx3Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx3-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::~LowRx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx3-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRx3Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::LowRx4Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx4-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::~LowRx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx4-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRx4Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::HighTx1Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx1-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::~HighTx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx1-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx1Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::HighTx2Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx2-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::~HighTx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx2-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx2Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::HighTx3Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx3-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::~HighTx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx3-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx3Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::HighTx4Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx4-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::~HighTx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx4-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx4Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::LowTx1Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx1-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::~LowTx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx1-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx1Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::LowTx2Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx2-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::~LowTx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx2-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx2Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::LowTx3Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx3-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::~LowTx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx3-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx3Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::LowTx4Power()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx4-power"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::~LowTx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx4-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx4Power' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::HighTx1Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx1lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::~HighTx1Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx1lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx1Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::HighTx2Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx2lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::~HighTx2Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx2lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx2Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::HighTx3Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx3lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::~HighTx3Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx3lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx3Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::HighTx4Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx4lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::~HighTx4Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx4lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTx4Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::LowTx1Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx1lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::~LowTx1Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx1lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx1Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::LowTx2Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx2lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::~LowTx2Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx2lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx2Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::LowTx3Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx3lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::~LowTx3Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx3lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx3Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::LowTx4Lbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx4lbc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::~LowTx4Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx4lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTx4Lbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::RxLos()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "rx-los"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::~RxLos()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-los";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxLos' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::TxLos()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "tx-los"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::~TxLos()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-los";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxLos' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::RxLol()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "rx-lol"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::~RxLol()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lol";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxLol' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::TxLol()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "tx-lol"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::~TxLol()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-lol";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxLol' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::TxFault()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "tx-fault"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::~TxFault()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fault";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxFault' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::Hidgd()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "hidgd"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::~Hidgd()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hidgd";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hidgd' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::Oorcd()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "oorcd"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::~Oorcd()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oorcd";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oorcd' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::Osnr()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "osnr"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::~Osnr()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::Wvlool()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "wvlool"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::~Wvlool()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wvlool";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wvlool' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::Mea()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "mea"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::~Mea()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mea";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mea' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::ImpRemoval()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "imp-removal"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::~ImpRemoval()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imp-removal";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpRemoval' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::RxLoc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "rx-loc"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::~RxLoc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-loc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxLoc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::AmpGainDegLow()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "amp-gain-deg-low"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::~AmpGainDegLow()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-low";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AmpGainDegLow' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::AmpGainDegHigh()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "amp-gain-deg-high"; yang_parent_name = "optics-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::~AmpGainDegHigh()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-high";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AmpGainDegHigh' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::OtsAlarmInfo()
    :
    amp_gain_deg_high(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh>())
	,amp_gain_deg_low(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow>())
	,auto_ampli_ctrl_config_mismatch(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch>())
	,auto_ampli_ctrl_disabled(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled>())
	,auto_laser_shut(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut>())
	,auto_power_red(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower>())
	,low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower>())
	,rx_loc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc>())
	,rx_los_p(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP>())
	,switch_to_protect(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect>())
{
    amp_gain_deg_high->parent = this;

    amp_gain_deg_low->parent = this;

    auto_ampli_ctrl_config_mismatch->parent = this;

    auto_ampli_ctrl_disabled->parent = this;

    auto_laser_shut->parent = this;

    auto_power_red->parent = this;

    low_rx_power->parent = this;

    low_tx_power->parent = this;

    rx_loc->parent = this;

    rx_los_p->parent = this;

    switch_to_protect->parent = this;

    yang_name = "ots-alarm-info"; yang_parent_name = "optics-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::~OtsAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::has_data() const
{
    return (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_data())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_data())
	|| (auto_ampli_ctrl_config_mismatch !=  nullptr && auto_ampli_ctrl_config_mismatch->has_data())
	|| (auto_ampli_ctrl_disabled !=  nullptr && auto_ampli_ctrl_disabled->has_data())
	|| (auto_laser_shut !=  nullptr && auto_laser_shut->has_data())
	|| (auto_power_red !=  nullptr && auto_power_red->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (low_tx_power !=  nullptr && low_tx_power->has_data())
	|| (rx_loc !=  nullptr && rx_loc->has_data())
	|| (rx_los_p !=  nullptr && rx_los_p->has_data())
	|| (switch_to_protect !=  nullptr && switch_to_protect->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::has_operation() const
{
    return is_set(operation)
	|| (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_operation())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_operation())
	|| (auto_ampli_ctrl_config_mismatch !=  nullptr && auto_ampli_ctrl_config_mismatch->has_operation())
	|| (auto_ampli_ctrl_disabled !=  nullptr && auto_ampli_ctrl_disabled->has_operation())
	|| (auto_laser_shut !=  nullptr && auto_laser_shut->has_operation())
	|| (auto_power_red !=  nullptr && auto_power_red->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation())
	|| (rx_loc !=  nullptr && rx_loc->has_operation())
	|| (rx_los_p !=  nullptr && rx_los_p->has_operation())
	|| (switch_to_protect !=  nullptr && switch_to_protect->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ots-alarm-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtsAlarmInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amp-gain-deg-high")
    {
        if(amp_gain_deg_high == nullptr)
        {
            amp_gain_deg_high = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh>();
        }
        return amp_gain_deg_high;
    }

    if(child_yang_name == "amp-gain-deg-low")
    {
        if(amp_gain_deg_low == nullptr)
        {
            amp_gain_deg_low = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow>();
        }
        return amp_gain_deg_low;
    }

    if(child_yang_name == "auto-ampli-ctrl-config-mismatch")
    {
        if(auto_ampli_ctrl_config_mismatch == nullptr)
        {
            auto_ampli_ctrl_config_mismatch = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch>();
        }
        return auto_ampli_ctrl_config_mismatch;
    }

    if(child_yang_name == "auto-ampli-ctrl-disabled")
    {
        if(auto_ampli_ctrl_disabled == nullptr)
        {
            auto_ampli_ctrl_disabled = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled>();
        }
        return auto_ampli_ctrl_disabled;
    }

    if(child_yang_name == "auto-laser-shut")
    {
        if(auto_laser_shut == nullptr)
        {
            auto_laser_shut = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut>();
        }
        return auto_laser_shut;
    }

    if(child_yang_name == "auto-power-red")
    {
        if(auto_power_red == nullptr)
        {
            auto_power_red = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed>();
        }
        return auto_power_red;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
    }

    if(child_yang_name == "rx-loc")
    {
        if(rx_loc == nullptr)
        {
            rx_loc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc>();
        }
        return rx_loc;
    }

    if(child_yang_name == "rx-los-p")
    {
        if(rx_los_p == nullptr)
        {
            rx_los_p = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP>();
        }
        return rx_los_p;
    }

    if(child_yang_name == "switch-to-protect")
    {
        if(switch_to_protect == nullptr)
        {
            switch_to_protect = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect>();
        }
        return switch_to_protect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(amp_gain_deg_high != nullptr)
    {
        children["amp-gain-deg-high"] = amp_gain_deg_high;
    }

    if(amp_gain_deg_low != nullptr)
    {
        children["amp-gain-deg-low"] = amp_gain_deg_low;
    }

    if(auto_ampli_ctrl_config_mismatch != nullptr)
    {
        children["auto-ampli-ctrl-config-mismatch"] = auto_ampli_ctrl_config_mismatch;
    }

    if(auto_ampli_ctrl_disabled != nullptr)
    {
        children["auto-ampli-ctrl-disabled"] = auto_ampli_ctrl_disabled;
    }

    if(auto_laser_shut != nullptr)
    {
        children["auto-laser-shut"] = auto_laser_shut;
    }

    if(auto_power_red != nullptr)
    {
        children["auto-power-red"] = auto_power_red;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
    }

    if(rx_loc != nullptr)
    {
        children["rx-loc"] = rx_loc;
    }

    if(rx_los_p != nullptr)
    {
        children["rx-los-p"] = rx_los_p;
    }

    if(switch_to_protect != nullptr)
    {
        children["switch-to-protect"] = switch_to_protect;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::LowTxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx-power"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::LowRxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx-power"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::RxLosP()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "rx-los-p"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::~RxLosP()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-los-p";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxLosP' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::RxLoc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "rx-loc"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::~RxLoc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-loc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxLoc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::AmpGainDegLow()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "amp-gain-deg-low"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::~AmpGainDegLow()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-low";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AmpGainDegLow' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::AmpGainDegHigh()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "amp-gain-deg-high"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::~AmpGainDegHigh()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-high";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AmpGainDegHigh' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::AutoLaserShut()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "auto-laser-shut"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::~AutoLaserShut()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-laser-shut";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoLaserShut' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::AutoPowerRed()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "auto-power-red"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::~AutoPowerRed()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-power-red";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoPowerRed' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::AutoAmpliCtrlDisabled()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "auto-ampli-ctrl-disabled"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::~AutoAmpliCtrlDisabled()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-ampli-ctrl-disabled";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoAmpliCtrlDisabled' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::AutoAmpliCtrlConfigMismatch()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "auto-ampli-ctrl-config-mismatch"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::~AutoAmpliCtrlConfigMismatch()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-ampli-ctrl-config-mismatch";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoAmpliCtrlConfigMismatch' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::SwitchToProtect()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "switch-to-protect"; yang_parent_name = "ots-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::~SwitchToProtect()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-to-protect";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchToProtect' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::TransceiverInfo()
    :
    connector_type{YType::enumeration, "connector-type"},
    date{YType::str, "date"},
    ethernet_compliance_code{YType::enumeration, "ethernet-compliance-code"},
    internal_temperature{YType::int32, "internal-temperature"},
    optics_serial_no{YType::str, "optics-serial-no"},
    optics_vendor_part{YType::str, "optics-vendor-part"},
    optics_vendor_rev{YType::str, "optics-vendor-rev"},
    otn_application_code{YType::enumeration, "otn-application-code"},
    sonet_application_code{YType::enumeration, "sonet-application-code"},
    vendor_info{YType::str, "vendor-info"}
{
    yang_name = "transceiver-info"; yang_parent_name = "optics-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::~TransceiverInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::has_data() const
{
    return connector_type.is_set
	|| date.is_set
	|| ethernet_compliance_code.is_set
	|| internal_temperature.is_set
	|| optics_serial_no.is_set
	|| optics_vendor_part.is_set
	|| optics_vendor_rev.is_set
	|| otn_application_code.is_set
	|| sonet_application_code.is_set
	|| vendor_info.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(connector_type.operation)
	|| is_set(date.operation)
	|| is_set(ethernet_compliance_code.operation)
	|| is_set(internal_temperature.operation)
	|| is_set(optics_serial_no.operation)
	|| is_set(optics_vendor_part.operation)
	|| is_set(optics_vendor_rev.operation)
	|| is_set(otn_application_code.operation)
	|| is_set(sonet_application_code.operation)
	|| is_set(vendor_info.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransceiverInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (date.is_set || is_set(date.operation)) leaf_name_data.push_back(date.get_name_leafdata());
    if (ethernet_compliance_code.is_set || is_set(ethernet_compliance_code.operation)) leaf_name_data.push_back(ethernet_compliance_code.get_name_leafdata());
    if (internal_temperature.is_set || is_set(internal_temperature.operation)) leaf_name_data.push_back(internal_temperature.get_name_leafdata());
    if (optics_serial_no.is_set || is_set(optics_serial_no.operation)) leaf_name_data.push_back(optics_serial_no.get_name_leafdata());
    if (optics_vendor_part.is_set || is_set(optics_vendor_part.operation)) leaf_name_data.push_back(optics_vendor_part.get_name_leafdata());
    if (optics_vendor_rev.is_set || is_set(optics_vendor_rev.operation)) leaf_name_data.push_back(optics_vendor_rev.get_name_leafdata());
    if (otn_application_code.is_set || is_set(otn_application_code.operation)) leaf_name_data.push_back(otn_application_code.get_name_leafdata());
    if (sonet_application_code.is_set || is_set(sonet_application_code.operation)) leaf_name_data.push_back(sonet_application_code.get_name_leafdata());
    if (vendor_info.is_set || is_set(vendor_info.operation)) leaf_name_data.push_back(vendor_info.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "date")
    {
        date = value;
    }
    if(value_path == "ethernet-compliance-code")
    {
        ethernet_compliance_code = value;
    }
    if(value_path == "internal-temperature")
    {
        internal_temperature = value;
    }
    if(value_path == "optics-serial-no")
    {
        optics_serial_no = value;
    }
    if(value_path == "optics-vendor-part")
    {
        optics_vendor_part = value;
    }
    if(value_path == "optics-vendor-rev")
    {
        optics_vendor_rev = value;
    }
    if(value_path == "otn-application-code")
    {
        otn_application_code = value;
    }
    if(value_path == "sonet-application-code")
    {
        sonet_application_code = value;
    }
    if(value_path == "vendor-info")
    {
        vendor_info = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::ExtParamVal()
    :
    isi_correction_lane1{YType::int32, "isi-correction-lane1"},
    isi_correction_lane2{YType::int32, "isi-correction-lane2"},
    laser_diff_frequency_lane1{YType::int32, "laser-diff-frequency-lane1"},
    laser_diff_frequency_lane2{YType::int32, "laser-diff-frequency-lane2"},
    laser_diff_temperature_lane1{YType::int32, "laser-diff-temperature-lane1"},
    laser_diff_temperature_lane2{YType::int32, "laser-diff-temperature-lane2"},
    pam_rate_lane1{YType::int32, "pam-rate-lane1"},
    pam_rate_lane2{YType::int32, "pam-rate-lane2"},
    pre_fec_ber{YType::int32, "pre-fec-ber"},
    pre_fec_ber_accumulated{YType::int32, "pre-fec-ber-accumulated"},
    pre_fec_ber_instantaneous{YType::int32, "pre-fec-ber-instantaneous"},
    pre_fec_ber_latched_max{YType::int32, "pre-fec-ber-latched-max"},
    pre_fec_ber_latched_min{YType::int32, "pre-fec-ber-latched-min"},
    snr_lane1{YType::int32, "snr-lane1"},
    snr_lane2{YType::int32, "snr-lane2"},
    tec_current_lane1{YType::int32, "tec-current-lane1"},
    tec_current_lane2{YType::int32, "tec-current-lane2"},
    uncorrected_ber{YType::int32, "uncorrected-ber"},
    uncorrected_ber_accumulated{YType::int32, "uncorrected-ber-accumulated"},
    uncorrected_ber_instantaneous{YType::int32, "uncorrected-ber-instantaneous"},
    uncorrected_ber_latched_max{YType::int32, "uncorrected-ber-latched-max"},
    uncorrected_ber_latched_min{YType::int32, "uncorrected-ber-latched-min"}
{
    yang_name = "ext-param-val"; yang_parent_name = "optics-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::~ExtParamVal()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::has_data() const
{
    return isi_correction_lane1.is_set
	|| isi_correction_lane2.is_set
	|| laser_diff_frequency_lane1.is_set
	|| laser_diff_frequency_lane2.is_set
	|| laser_diff_temperature_lane1.is_set
	|| laser_diff_temperature_lane2.is_set
	|| pam_rate_lane1.is_set
	|| pam_rate_lane2.is_set
	|| pre_fec_ber.is_set
	|| pre_fec_ber_accumulated.is_set
	|| pre_fec_ber_instantaneous.is_set
	|| pre_fec_ber_latched_max.is_set
	|| pre_fec_ber_latched_min.is_set
	|| snr_lane1.is_set
	|| snr_lane2.is_set
	|| tec_current_lane1.is_set
	|| tec_current_lane2.is_set
	|| uncorrected_ber.is_set
	|| uncorrected_ber_accumulated.is_set
	|| uncorrected_ber_instantaneous.is_set
	|| uncorrected_ber_latched_max.is_set
	|| uncorrected_ber_latched_min.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::has_operation() const
{
    return is_set(operation)
	|| is_set(isi_correction_lane1.operation)
	|| is_set(isi_correction_lane2.operation)
	|| is_set(laser_diff_frequency_lane1.operation)
	|| is_set(laser_diff_frequency_lane2.operation)
	|| is_set(laser_diff_temperature_lane1.operation)
	|| is_set(laser_diff_temperature_lane2.operation)
	|| is_set(pam_rate_lane1.operation)
	|| is_set(pam_rate_lane2.operation)
	|| is_set(pre_fec_ber.operation)
	|| is_set(pre_fec_ber_accumulated.operation)
	|| is_set(pre_fec_ber_instantaneous.operation)
	|| is_set(pre_fec_ber_latched_max.operation)
	|| is_set(pre_fec_ber_latched_min.operation)
	|| is_set(snr_lane1.operation)
	|| is_set(snr_lane2.operation)
	|| is_set(tec_current_lane1.operation)
	|| is_set(tec_current_lane2.operation)
	|| is_set(uncorrected_ber.operation)
	|| is_set(uncorrected_ber_accumulated.operation)
	|| is_set(uncorrected_ber_instantaneous.operation)
	|| is_set(uncorrected_ber_latched_max.operation)
	|| is_set(uncorrected_ber_latched_min.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-param-val";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtParamVal' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isi_correction_lane1.is_set || is_set(isi_correction_lane1.operation)) leaf_name_data.push_back(isi_correction_lane1.get_name_leafdata());
    if (isi_correction_lane2.is_set || is_set(isi_correction_lane2.operation)) leaf_name_data.push_back(isi_correction_lane2.get_name_leafdata());
    if (laser_diff_frequency_lane1.is_set || is_set(laser_diff_frequency_lane1.operation)) leaf_name_data.push_back(laser_diff_frequency_lane1.get_name_leafdata());
    if (laser_diff_frequency_lane2.is_set || is_set(laser_diff_frequency_lane2.operation)) leaf_name_data.push_back(laser_diff_frequency_lane2.get_name_leafdata());
    if (laser_diff_temperature_lane1.is_set || is_set(laser_diff_temperature_lane1.operation)) leaf_name_data.push_back(laser_diff_temperature_lane1.get_name_leafdata());
    if (laser_diff_temperature_lane2.is_set || is_set(laser_diff_temperature_lane2.operation)) leaf_name_data.push_back(laser_diff_temperature_lane2.get_name_leafdata());
    if (pam_rate_lane1.is_set || is_set(pam_rate_lane1.operation)) leaf_name_data.push_back(pam_rate_lane1.get_name_leafdata());
    if (pam_rate_lane2.is_set || is_set(pam_rate_lane2.operation)) leaf_name_data.push_back(pam_rate_lane2.get_name_leafdata());
    if (pre_fec_ber.is_set || is_set(pre_fec_ber.operation)) leaf_name_data.push_back(pre_fec_ber.get_name_leafdata());
    if (pre_fec_ber_accumulated.is_set || is_set(pre_fec_ber_accumulated.operation)) leaf_name_data.push_back(pre_fec_ber_accumulated.get_name_leafdata());
    if (pre_fec_ber_instantaneous.is_set || is_set(pre_fec_ber_instantaneous.operation)) leaf_name_data.push_back(pre_fec_ber_instantaneous.get_name_leafdata());
    if (pre_fec_ber_latched_max.is_set || is_set(pre_fec_ber_latched_max.operation)) leaf_name_data.push_back(pre_fec_ber_latched_max.get_name_leafdata());
    if (pre_fec_ber_latched_min.is_set || is_set(pre_fec_ber_latched_min.operation)) leaf_name_data.push_back(pre_fec_ber_latched_min.get_name_leafdata());
    if (snr_lane1.is_set || is_set(snr_lane1.operation)) leaf_name_data.push_back(snr_lane1.get_name_leafdata());
    if (snr_lane2.is_set || is_set(snr_lane2.operation)) leaf_name_data.push_back(snr_lane2.get_name_leafdata());
    if (tec_current_lane1.is_set || is_set(tec_current_lane1.operation)) leaf_name_data.push_back(tec_current_lane1.get_name_leafdata());
    if (tec_current_lane2.is_set || is_set(tec_current_lane2.operation)) leaf_name_data.push_back(tec_current_lane2.get_name_leafdata());
    if (uncorrected_ber.is_set || is_set(uncorrected_ber.operation)) leaf_name_data.push_back(uncorrected_ber.get_name_leafdata());
    if (uncorrected_ber_accumulated.is_set || is_set(uncorrected_ber_accumulated.operation)) leaf_name_data.push_back(uncorrected_ber_accumulated.get_name_leafdata());
    if (uncorrected_ber_instantaneous.is_set || is_set(uncorrected_ber_instantaneous.operation)) leaf_name_data.push_back(uncorrected_ber_instantaneous.get_name_leafdata());
    if (uncorrected_ber_latched_max.is_set || is_set(uncorrected_ber_latched_max.operation)) leaf_name_data.push_back(uncorrected_ber_latched_max.get_name_leafdata());
    if (uncorrected_ber_latched_min.is_set || is_set(uncorrected_ber_latched_min.operation)) leaf_name_data.push_back(uncorrected_ber_latched_min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isi-correction-lane1")
    {
        isi_correction_lane1 = value;
    }
    if(value_path == "isi-correction-lane2")
    {
        isi_correction_lane2 = value;
    }
    if(value_path == "laser-diff-frequency-lane1")
    {
        laser_diff_frequency_lane1 = value;
    }
    if(value_path == "laser-diff-frequency-lane2")
    {
        laser_diff_frequency_lane2 = value;
    }
    if(value_path == "laser-diff-temperature-lane1")
    {
        laser_diff_temperature_lane1 = value;
    }
    if(value_path == "laser-diff-temperature-lane2")
    {
        laser_diff_temperature_lane2 = value;
    }
    if(value_path == "pam-rate-lane1")
    {
        pam_rate_lane1 = value;
    }
    if(value_path == "pam-rate-lane2")
    {
        pam_rate_lane2 = value;
    }
    if(value_path == "pre-fec-ber")
    {
        pre_fec_ber = value;
    }
    if(value_path == "pre-fec-ber-accumulated")
    {
        pre_fec_ber_accumulated = value;
    }
    if(value_path == "pre-fec-ber-instantaneous")
    {
        pre_fec_ber_instantaneous = value;
    }
    if(value_path == "pre-fec-ber-latched-max")
    {
        pre_fec_ber_latched_max = value;
    }
    if(value_path == "pre-fec-ber-latched-min")
    {
        pre_fec_ber_latched_min = value;
    }
    if(value_path == "snr-lane1")
    {
        snr_lane1 = value;
    }
    if(value_path == "snr-lane2")
    {
        snr_lane2 = value;
    }
    if(value_path == "tec-current-lane1")
    {
        tec_current_lane1 = value;
    }
    if(value_path == "tec-current-lane2")
    {
        tec_current_lane2 = value;
    }
    if(value_path == "uncorrected-ber")
    {
        uncorrected_ber = value;
    }
    if(value_path == "uncorrected-ber-accumulated")
    {
        uncorrected_ber_accumulated = value;
    }
    if(value_path == "uncorrected-ber-instantaneous")
    {
        uncorrected_ber_instantaneous = value;
    }
    if(value_path == "uncorrected-ber-latched-max")
    {
        uncorrected_ber_latched_max = value;
    }
    if(value_path == "uncorrected-ber-latched-min")
    {
        uncorrected_ber_latched_min = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::ExtParamThresholdVal()
    :
    isi_correction_alarm_high_threshold{YType::int32, "isi-correction-alarm-high-threshold"},
    isi_correction_alarm_low_threshold{YType::int32, "isi-correction-alarm-low-threshold"},
    isi_correction_warn_high_threshold{YType::int32, "isi-correction-warn-high-threshold"},
    isi_correction_warn_low_threshold{YType::int32, "isi-correction-warn-low-threshold"},
    laser_diff_frequency_alarm_high_threshold{YType::int32, "laser-diff-frequency-alarm-high-threshold"},
    laser_diff_frequency_alarm_low_threshold{YType::int32, "laser-diff-frequency-alarm-low-threshold"},
    laser_diff_frequency_warn_high_threshold{YType::int32, "laser-diff-frequency-warn-high-threshold"},
    laser_diff_frequency_warn_low_threshold{YType::int32, "laser-diff-frequency-warn-low-threshold"},
    laser_diff_temperature_alarm_high_threshold{YType::int32, "laser-diff-temperature-alarm-high-threshold"},
    laser_diff_temperature_alarm_low_threshold{YType::int32, "laser-diff-temperature-alarm-low-threshold"},
    laser_diff_temperature_warn_high_threshold{YType::int32, "laser-diff-temperature-warn-high-threshold"},
    laser_diff_temperature_warn_low_threshold{YType::int32, "laser-diff-temperature-warn-low-threshold"},
    pam_rate_alarm_high_threshold{YType::int32, "pam-rate-alarm-high-threshold"},
    pam_rate_alarm_low_threshold{YType::int32, "pam-rate-alarm-low-threshold"},
    pam_rate_warn_high_threshold{YType::int32, "pam-rate-warn-high-threshold"},
    pam_rate_warn_low_threshold{YType::int32, "pam-rate-warn-low-threshold"},
    pre_fec_ber_accumulated_alarm_high_threshold{YType::int32, "pre-fec-ber-accumulated-alarm-high-threshold"},
    pre_fec_ber_accumulated_alarm_low_threshold{YType::int32, "pre-fec-ber-accumulated-alarm-low-threshold"},
    pre_fec_ber_accumulated_warn_high_threshold{YType::int32, "pre-fec-ber-accumulated-warn-high-threshold"},
    pre_fec_ber_accumulated_warn_low_threshold{YType::int32, "pre-fec-ber-accumulated-warn-low-threshold"},
    pre_fec_ber_alarm_high_threshold{YType::int32, "pre-fec-ber-alarm-high-threshold"},
    pre_fec_ber_alarm_low_threshold{YType::int32, "pre-fec-ber-alarm-low-threshold"},
    pre_fec_ber_instantaneous_alarm_high_threshold{YType::int32, "pre-fec-ber-instantaneous-alarm-high-threshold"},
    pre_fec_ber_instantaneous_alarm_low_threshold{YType::int32, "pre-fec-ber-instantaneous-alarm-low-threshold"},
    pre_fec_ber_instantaneous_warn_high_threshold{YType::int32, "pre-fec-ber-instantaneous-warn-high-threshold"},
    pre_fec_ber_instantaneous_warn_low_threshold{YType::int32, "pre-fec-ber-instantaneous-warn-low-threshold"},
    pre_fec_ber_latched_max_alarm_high_threshold{YType::int32, "pre-fec-ber-latched-max-alarm-high-threshold"},
    pre_fec_ber_latched_max_alarm_low_threshold{YType::int32, "pre-fec-ber-latched-max-alarm-low-threshold"},
    pre_fec_ber_latched_max_warn_high_threshold{YType::int32, "pre-fec-ber-latched-max-warn-high-threshold"},
    pre_fec_ber_latched_max_warn_low_threshold{YType::int32, "pre-fec-ber-latched-max-warn-low-threshold"},
    pre_fec_ber_latched_min_alarm_high_threshold{YType::int32, "pre-fec-ber-latched-min-alarm-high-threshold"},
    pre_fec_ber_latched_min_alarm_low_threshold{YType::int32, "pre-fec-ber-latched-min-alarm-low-threshold"},
    pre_fec_ber_latched_min_warn_high_threshold{YType::int32, "pre-fec-ber-latched-min-warn-high-threshold"},
    pre_fec_ber_latched_min_warn_low_threshold{YType::int32, "pre-fec-ber-latched-min-warn-low-threshold"},
    pre_fec_ber_warn_high_threshold{YType::int32, "pre-fec-ber-warn-high-threshold"},
    pre_fec_ber_warn_low_threshold{YType::int32, "pre-fec-ber-warn-low-threshold"},
    snr_alarm_high_threshold{YType::int32, "snr-alarm-high-threshold"},
    snr_alarm_low_threshold{YType::int32, "snr-alarm-low-threshold"},
    snr_warn_high_threshold{YType::int32, "snr-warn-high-threshold"},
    snr_warn_low_threshold{YType::int32, "snr-warn-low-threshold"},
    tec_current_alarm_high_threshold{YType::int32, "tec-current-alarm-high-threshold"},
    tec_current_alarm_low_threshold{YType::int32, "tec-current-alarm-low-threshold"},
    tec_current_warn_high_threshold{YType::int32, "tec-current-warn-high-threshold"},
    tec_current_warn_low_threshold{YType::int32, "tec-current-warn-low-threshold"},
    uncorrected_ber_accumulated_alarm_high_threshold{YType::int32, "uncorrected-ber-accumulated-alarm-high-threshold"},
    uncorrected_ber_accumulated_alarm_low_threshold{YType::int32, "uncorrected-ber-accumulated-alarm-low-threshold"},
    uncorrected_ber_accumulated_warn_high_threshold{YType::int32, "uncorrected-ber-accumulated-warn-high-threshold"},
    uncorrected_ber_accumulated_warn_low_threshold{YType::int32, "uncorrected-ber-accumulated-warn-low-threshold"},
    uncorrected_ber_alarm_high_threshold{YType::int32, "uncorrected-ber-alarm-high-threshold"},
    uncorrected_ber_alarm_low_threshold{YType::int32, "uncorrected-ber-alarm-low-threshold"},
    uncorrected_ber_instantaneous_alarm_high_threshold{YType::int32, "uncorrected-ber-instantaneous-alarm-high-threshold"},
    uncorrected_ber_instantaneous_alarm_low_threshold{YType::int32, "uncorrected-ber-instantaneous-alarm-low-threshold"},
    uncorrected_ber_instantaneous_warn_high_threshold{YType::int32, "uncorrected-ber-instantaneous-warn-high-threshold"},
    uncorrected_ber_instantaneous_warn_low_threshold{YType::int32, "uncorrected-ber-instantaneous-warn-low-threshold"},
    uncorrected_ber_latched_max_alarm_high_threshold{YType::int32, "uncorrected-ber-latched-max-alarm-high-threshold"},
    uncorrected_ber_latched_max_alarm_low_threshold{YType::int32, "uncorrected-ber-latched-max-alarm-low-threshold"},
    uncorrected_ber_latched_max_warn_high_threshold{YType::int32, "uncorrected-ber-latched-max-warn-high-threshold"},
    uncorrected_ber_latched_max_warn_low_threshold{YType::int32, "uncorrected-ber-latched-max-warn-low-threshold"},
    uncorrected_ber_latched_min_alarm_high_threshold{YType::int32, "uncorrected-ber-latched-min-alarm-high-threshold"},
    uncorrected_ber_latched_min_alarm_low_threshold{YType::int32, "uncorrected-ber-latched-min-alarm-low-threshold"},
    uncorrected_ber_latched_min_warn_high_threshold{YType::int32, "uncorrected-ber-latched-min-warn-high-threshold"},
    uncorrected_ber_latched_min_warn_low_threshold{YType::int32, "uncorrected-ber-latched-min-warn-low-threshold"},
    uncorrected_ber_warn_high_threshold{YType::int32, "uncorrected-ber-warn-high-threshold"},
    uncorrected_ber_warn_low_threshold{YType::int32, "uncorrected-ber-warn-low-threshold"}
{
    yang_name = "ext-param-threshold-val"; yang_parent_name = "optics-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::~ExtParamThresholdVal()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::has_data() const
{
    return isi_correction_alarm_high_threshold.is_set
	|| isi_correction_alarm_low_threshold.is_set
	|| isi_correction_warn_high_threshold.is_set
	|| isi_correction_warn_low_threshold.is_set
	|| laser_diff_frequency_alarm_high_threshold.is_set
	|| laser_diff_frequency_alarm_low_threshold.is_set
	|| laser_diff_frequency_warn_high_threshold.is_set
	|| laser_diff_frequency_warn_low_threshold.is_set
	|| laser_diff_temperature_alarm_high_threshold.is_set
	|| laser_diff_temperature_alarm_low_threshold.is_set
	|| laser_diff_temperature_warn_high_threshold.is_set
	|| laser_diff_temperature_warn_low_threshold.is_set
	|| pam_rate_alarm_high_threshold.is_set
	|| pam_rate_alarm_low_threshold.is_set
	|| pam_rate_warn_high_threshold.is_set
	|| pam_rate_warn_low_threshold.is_set
	|| pre_fec_ber_accumulated_alarm_high_threshold.is_set
	|| pre_fec_ber_accumulated_alarm_low_threshold.is_set
	|| pre_fec_ber_accumulated_warn_high_threshold.is_set
	|| pre_fec_ber_accumulated_warn_low_threshold.is_set
	|| pre_fec_ber_alarm_high_threshold.is_set
	|| pre_fec_ber_alarm_low_threshold.is_set
	|| pre_fec_ber_instantaneous_alarm_high_threshold.is_set
	|| pre_fec_ber_instantaneous_alarm_low_threshold.is_set
	|| pre_fec_ber_instantaneous_warn_high_threshold.is_set
	|| pre_fec_ber_instantaneous_warn_low_threshold.is_set
	|| pre_fec_ber_latched_max_alarm_high_threshold.is_set
	|| pre_fec_ber_latched_max_alarm_low_threshold.is_set
	|| pre_fec_ber_latched_max_warn_high_threshold.is_set
	|| pre_fec_ber_latched_max_warn_low_threshold.is_set
	|| pre_fec_ber_latched_min_alarm_high_threshold.is_set
	|| pre_fec_ber_latched_min_alarm_low_threshold.is_set
	|| pre_fec_ber_latched_min_warn_high_threshold.is_set
	|| pre_fec_ber_latched_min_warn_low_threshold.is_set
	|| pre_fec_ber_warn_high_threshold.is_set
	|| pre_fec_ber_warn_low_threshold.is_set
	|| snr_alarm_high_threshold.is_set
	|| snr_alarm_low_threshold.is_set
	|| snr_warn_high_threshold.is_set
	|| snr_warn_low_threshold.is_set
	|| tec_current_alarm_high_threshold.is_set
	|| tec_current_alarm_low_threshold.is_set
	|| tec_current_warn_high_threshold.is_set
	|| tec_current_warn_low_threshold.is_set
	|| uncorrected_ber_accumulated_alarm_high_threshold.is_set
	|| uncorrected_ber_accumulated_alarm_low_threshold.is_set
	|| uncorrected_ber_accumulated_warn_high_threshold.is_set
	|| uncorrected_ber_accumulated_warn_low_threshold.is_set
	|| uncorrected_ber_alarm_high_threshold.is_set
	|| uncorrected_ber_alarm_low_threshold.is_set
	|| uncorrected_ber_instantaneous_alarm_high_threshold.is_set
	|| uncorrected_ber_instantaneous_alarm_low_threshold.is_set
	|| uncorrected_ber_instantaneous_warn_high_threshold.is_set
	|| uncorrected_ber_instantaneous_warn_low_threshold.is_set
	|| uncorrected_ber_latched_max_alarm_high_threshold.is_set
	|| uncorrected_ber_latched_max_alarm_low_threshold.is_set
	|| uncorrected_ber_latched_max_warn_high_threshold.is_set
	|| uncorrected_ber_latched_max_warn_low_threshold.is_set
	|| uncorrected_ber_latched_min_alarm_high_threshold.is_set
	|| uncorrected_ber_latched_min_alarm_low_threshold.is_set
	|| uncorrected_ber_latched_min_warn_high_threshold.is_set
	|| uncorrected_ber_latched_min_warn_low_threshold.is_set
	|| uncorrected_ber_warn_high_threshold.is_set
	|| uncorrected_ber_warn_low_threshold.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::has_operation() const
{
    return is_set(operation)
	|| is_set(isi_correction_alarm_high_threshold.operation)
	|| is_set(isi_correction_alarm_low_threshold.operation)
	|| is_set(isi_correction_warn_high_threshold.operation)
	|| is_set(isi_correction_warn_low_threshold.operation)
	|| is_set(laser_diff_frequency_alarm_high_threshold.operation)
	|| is_set(laser_diff_frequency_alarm_low_threshold.operation)
	|| is_set(laser_diff_frequency_warn_high_threshold.operation)
	|| is_set(laser_diff_frequency_warn_low_threshold.operation)
	|| is_set(laser_diff_temperature_alarm_high_threshold.operation)
	|| is_set(laser_diff_temperature_alarm_low_threshold.operation)
	|| is_set(laser_diff_temperature_warn_high_threshold.operation)
	|| is_set(laser_diff_temperature_warn_low_threshold.operation)
	|| is_set(pam_rate_alarm_high_threshold.operation)
	|| is_set(pam_rate_alarm_low_threshold.operation)
	|| is_set(pam_rate_warn_high_threshold.operation)
	|| is_set(pam_rate_warn_low_threshold.operation)
	|| is_set(pre_fec_ber_accumulated_alarm_high_threshold.operation)
	|| is_set(pre_fec_ber_accumulated_alarm_low_threshold.operation)
	|| is_set(pre_fec_ber_accumulated_warn_high_threshold.operation)
	|| is_set(pre_fec_ber_accumulated_warn_low_threshold.operation)
	|| is_set(pre_fec_ber_alarm_high_threshold.operation)
	|| is_set(pre_fec_ber_alarm_low_threshold.operation)
	|| is_set(pre_fec_ber_instantaneous_alarm_high_threshold.operation)
	|| is_set(pre_fec_ber_instantaneous_alarm_low_threshold.operation)
	|| is_set(pre_fec_ber_instantaneous_warn_high_threshold.operation)
	|| is_set(pre_fec_ber_instantaneous_warn_low_threshold.operation)
	|| is_set(pre_fec_ber_latched_max_alarm_high_threshold.operation)
	|| is_set(pre_fec_ber_latched_max_alarm_low_threshold.operation)
	|| is_set(pre_fec_ber_latched_max_warn_high_threshold.operation)
	|| is_set(pre_fec_ber_latched_max_warn_low_threshold.operation)
	|| is_set(pre_fec_ber_latched_min_alarm_high_threshold.operation)
	|| is_set(pre_fec_ber_latched_min_alarm_low_threshold.operation)
	|| is_set(pre_fec_ber_latched_min_warn_high_threshold.operation)
	|| is_set(pre_fec_ber_latched_min_warn_low_threshold.operation)
	|| is_set(pre_fec_ber_warn_high_threshold.operation)
	|| is_set(pre_fec_ber_warn_low_threshold.operation)
	|| is_set(snr_alarm_high_threshold.operation)
	|| is_set(snr_alarm_low_threshold.operation)
	|| is_set(snr_warn_high_threshold.operation)
	|| is_set(snr_warn_low_threshold.operation)
	|| is_set(tec_current_alarm_high_threshold.operation)
	|| is_set(tec_current_alarm_low_threshold.operation)
	|| is_set(tec_current_warn_high_threshold.operation)
	|| is_set(tec_current_warn_low_threshold.operation)
	|| is_set(uncorrected_ber_accumulated_alarm_high_threshold.operation)
	|| is_set(uncorrected_ber_accumulated_alarm_low_threshold.operation)
	|| is_set(uncorrected_ber_accumulated_warn_high_threshold.operation)
	|| is_set(uncorrected_ber_accumulated_warn_low_threshold.operation)
	|| is_set(uncorrected_ber_alarm_high_threshold.operation)
	|| is_set(uncorrected_ber_alarm_low_threshold.operation)
	|| is_set(uncorrected_ber_instantaneous_alarm_high_threshold.operation)
	|| is_set(uncorrected_ber_instantaneous_alarm_low_threshold.operation)
	|| is_set(uncorrected_ber_instantaneous_warn_high_threshold.operation)
	|| is_set(uncorrected_ber_instantaneous_warn_low_threshold.operation)
	|| is_set(uncorrected_ber_latched_max_alarm_high_threshold.operation)
	|| is_set(uncorrected_ber_latched_max_alarm_low_threshold.operation)
	|| is_set(uncorrected_ber_latched_max_warn_high_threshold.operation)
	|| is_set(uncorrected_ber_latched_max_warn_low_threshold.operation)
	|| is_set(uncorrected_ber_latched_min_alarm_high_threshold.operation)
	|| is_set(uncorrected_ber_latched_min_alarm_low_threshold.operation)
	|| is_set(uncorrected_ber_latched_min_warn_high_threshold.operation)
	|| is_set(uncorrected_ber_latched_min_warn_low_threshold.operation)
	|| is_set(uncorrected_ber_warn_high_threshold.operation)
	|| is_set(uncorrected_ber_warn_low_threshold.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-param-threshold-val";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtParamThresholdVal' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isi_correction_alarm_high_threshold.is_set || is_set(isi_correction_alarm_high_threshold.operation)) leaf_name_data.push_back(isi_correction_alarm_high_threshold.get_name_leafdata());
    if (isi_correction_alarm_low_threshold.is_set || is_set(isi_correction_alarm_low_threshold.operation)) leaf_name_data.push_back(isi_correction_alarm_low_threshold.get_name_leafdata());
    if (isi_correction_warn_high_threshold.is_set || is_set(isi_correction_warn_high_threshold.operation)) leaf_name_data.push_back(isi_correction_warn_high_threshold.get_name_leafdata());
    if (isi_correction_warn_low_threshold.is_set || is_set(isi_correction_warn_low_threshold.operation)) leaf_name_data.push_back(isi_correction_warn_low_threshold.get_name_leafdata());
    if (laser_diff_frequency_alarm_high_threshold.is_set || is_set(laser_diff_frequency_alarm_high_threshold.operation)) leaf_name_data.push_back(laser_diff_frequency_alarm_high_threshold.get_name_leafdata());
    if (laser_diff_frequency_alarm_low_threshold.is_set || is_set(laser_diff_frequency_alarm_low_threshold.operation)) leaf_name_data.push_back(laser_diff_frequency_alarm_low_threshold.get_name_leafdata());
    if (laser_diff_frequency_warn_high_threshold.is_set || is_set(laser_diff_frequency_warn_high_threshold.operation)) leaf_name_data.push_back(laser_diff_frequency_warn_high_threshold.get_name_leafdata());
    if (laser_diff_frequency_warn_low_threshold.is_set || is_set(laser_diff_frequency_warn_low_threshold.operation)) leaf_name_data.push_back(laser_diff_frequency_warn_low_threshold.get_name_leafdata());
    if (laser_diff_temperature_alarm_high_threshold.is_set || is_set(laser_diff_temperature_alarm_high_threshold.operation)) leaf_name_data.push_back(laser_diff_temperature_alarm_high_threshold.get_name_leafdata());
    if (laser_diff_temperature_alarm_low_threshold.is_set || is_set(laser_diff_temperature_alarm_low_threshold.operation)) leaf_name_data.push_back(laser_diff_temperature_alarm_low_threshold.get_name_leafdata());
    if (laser_diff_temperature_warn_high_threshold.is_set || is_set(laser_diff_temperature_warn_high_threshold.operation)) leaf_name_data.push_back(laser_diff_temperature_warn_high_threshold.get_name_leafdata());
    if (laser_diff_temperature_warn_low_threshold.is_set || is_set(laser_diff_temperature_warn_low_threshold.operation)) leaf_name_data.push_back(laser_diff_temperature_warn_low_threshold.get_name_leafdata());
    if (pam_rate_alarm_high_threshold.is_set || is_set(pam_rate_alarm_high_threshold.operation)) leaf_name_data.push_back(pam_rate_alarm_high_threshold.get_name_leafdata());
    if (pam_rate_alarm_low_threshold.is_set || is_set(pam_rate_alarm_low_threshold.operation)) leaf_name_data.push_back(pam_rate_alarm_low_threshold.get_name_leafdata());
    if (pam_rate_warn_high_threshold.is_set || is_set(pam_rate_warn_high_threshold.operation)) leaf_name_data.push_back(pam_rate_warn_high_threshold.get_name_leafdata());
    if (pam_rate_warn_low_threshold.is_set || is_set(pam_rate_warn_low_threshold.operation)) leaf_name_data.push_back(pam_rate_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_alarm_high_threshold.is_set || is_set(pre_fec_ber_accumulated_alarm_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_accumulated_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_alarm_low_threshold.is_set || is_set(pre_fec_ber_accumulated_alarm_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_accumulated_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_warn_high_threshold.is_set || is_set(pre_fec_ber_accumulated_warn_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_accumulated_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_warn_low_threshold.is_set || is_set(pre_fec_ber_accumulated_warn_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_accumulated_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_alarm_high_threshold.is_set || is_set(pre_fec_ber_alarm_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_alarm_low_threshold.is_set || is_set(pre_fec_ber_alarm_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_alarm_high_threshold.is_set || is_set(pre_fec_ber_instantaneous_alarm_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_instantaneous_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_alarm_low_threshold.is_set || is_set(pre_fec_ber_instantaneous_alarm_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_instantaneous_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_warn_high_threshold.is_set || is_set(pre_fec_ber_instantaneous_warn_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_instantaneous_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_warn_low_threshold.is_set || is_set(pre_fec_ber_instantaneous_warn_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_instantaneous_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_alarm_high_threshold.is_set || is_set(pre_fec_ber_latched_max_alarm_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_max_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_alarm_low_threshold.is_set || is_set(pre_fec_ber_latched_max_alarm_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_max_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_warn_high_threshold.is_set || is_set(pre_fec_ber_latched_max_warn_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_max_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_warn_low_threshold.is_set || is_set(pre_fec_ber_latched_max_warn_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_max_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_alarm_high_threshold.is_set || is_set(pre_fec_ber_latched_min_alarm_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_min_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_alarm_low_threshold.is_set || is_set(pre_fec_ber_latched_min_alarm_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_min_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_warn_high_threshold.is_set || is_set(pre_fec_ber_latched_min_warn_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_min_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_warn_low_threshold.is_set || is_set(pre_fec_ber_latched_min_warn_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_latched_min_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_warn_high_threshold.is_set || is_set(pre_fec_ber_warn_high_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_warn_low_threshold.is_set || is_set(pre_fec_ber_warn_low_threshold.operation)) leaf_name_data.push_back(pre_fec_ber_warn_low_threshold.get_name_leafdata());
    if (snr_alarm_high_threshold.is_set || is_set(snr_alarm_high_threshold.operation)) leaf_name_data.push_back(snr_alarm_high_threshold.get_name_leafdata());
    if (snr_alarm_low_threshold.is_set || is_set(snr_alarm_low_threshold.operation)) leaf_name_data.push_back(snr_alarm_low_threshold.get_name_leafdata());
    if (snr_warn_high_threshold.is_set || is_set(snr_warn_high_threshold.operation)) leaf_name_data.push_back(snr_warn_high_threshold.get_name_leafdata());
    if (snr_warn_low_threshold.is_set || is_set(snr_warn_low_threshold.operation)) leaf_name_data.push_back(snr_warn_low_threshold.get_name_leafdata());
    if (tec_current_alarm_high_threshold.is_set || is_set(tec_current_alarm_high_threshold.operation)) leaf_name_data.push_back(tec_current_alarm_high_threshold.get_name_leafdata());
    if (tec_current_alarm_low_threshold.is_set || is_set(tec_current_alarm_low_threshold.operation)) leaf_name_data.push_back(tec_current_alarm_low_threshold.get_name_leafdata());
    if (tec_current_warn_high_threshold.is_set || is_set(tec_current_warn_high_threshold.operation)) leaf_name_data.push_back(tec_current_warn_high_threshold.get_name_leafdata());
    if (tec_current_warn_low_threshold.is_set || is_set(tec_current_warn_low_threshold.operation)) leaf_name_data.push_back(tec_current_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_alarm_high_threshold.is_set || is_set(uncorrected_ber_accumulated_alarm_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_accumulated_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_alarm_low_threshold.is_set || is_set(uncorrected_ber_accumulated_alarm_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_accumulated_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_warn_high_threshold.is_set || is_set(uncorrected_ber_accumulated_warn_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_accumulated_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_warn_low_threshold.is_set || is_set(uncorrected_ber_accumulated_warn_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_accumulated_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_alarm_high_threshold.is_set || is_set(uncorrected_ber_alarm_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_alarm_low_threshold.is_set || is_set(uncorrected_ber_alarm_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_alarm_high_threshold.is_set || is_set(uncorrected_ber_instantaneous_alarm_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_instantaneous_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_alarm_low_threshold.is_set || is_set(uncorrected_ber_instantaneous_alarm_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_instantaneous_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_warn_high_threshold.is_set || is_set(uncorrected_ber_instantaneous_warn_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_instantaneous_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_warn_low_threshold.is_set || is_set(uncorrected_ber_instantaneous_warn_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_instantaneous_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_alarm_high_threshold.is_set || is_set(uncorrected_ber_latched_max_alarm_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_max_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_alarm_low_threshold.is_set || is_set(uncorrected_ber_latched_max_alarm_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_max_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_warn_high_threshold.is_set || is_set(uncorrected_ber_latched_max_warn_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_max_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_warn_low_threshold.is_set || is_set(uncorrected_ber_latched_max_warn_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_max_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_alarm_high_threshold.is_set || is_set(uncorrected_ber_latched_min_alarm_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_min_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_alarm_low_threshold.is_set || is_set(uncorrected_ber_latched_min_alarm_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_min_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_warn_high_threshold.is_set || is_set(uncorrected_ber_latched_min_warn_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_min_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_warn_low_threshold.is_set || is_set(uncorrected_ber_latched_min_warn_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_latched_min_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_warn_high_threshold.is_set || is_set(uncorrected_ber_warn_high_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_warn_low_threshold.is_set || is_set(uncorrected_ber_warn_low_threshold.operation)) leaf_name_data.push_back(uncorrected_ber_warn_low_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isi-correction-alarm-high-threshold")
    {
        isi_correction_alarm_high_threshold = value;
    }
    if(value_path == "isi-correction-alarm-low-threshold")
    {
        isi_correction_alarm_low_threshold = value;
    }
    if(value_path == "isi-correction-warn-high-threshold")
    {
        isi_correction_warn_high_threshold = value;
    }
    if(value_path == "isi-correction-warn-low-threshold")
    {
        isi_correction_warn_low_threshold = value;
    }
    if(value_path == "laser-diff-frequency-alarm-high-threshold")
    {
        laser_diff_frequency_alarm_high_threshold = value;
    }
    if(value_path == "laser-diff-frequency-alarm-low-threshold")
    {
        laser_diff_frequency_alarm_low_threshold = value;
    }
    if(value_path == "laser-diff-frequency-warn-high-threshold")
    {
        laser_diff_frequency_warn_high_threshold = value;
    }
    if(value_path == "laser-diff-frequency-warn-low-threshold")
    {
        laser_diff_frequency_warn_low_threshold = value;
    }
    if(value_path == "laser-diff-temperature-alarm-high-threshold")
    {
        laser_diff_temperature_alarm_high_threshold = value;
    }
    if(value_path == "laser-diff-temperature-alarm-low-threshold")
    {
        laser_diff_temperature_alarm_low_threshold = value;
    }
    if(value_path == "laser-diff-temperature-warn-high-threshold")
    {
        laser_diff_temperature_warn_high_threshold = value;
    }
    if(value_path == "laser-diff-temperature-warn-low-threshold")
    {
        laser_diff_temperature_warn_low_threshold = value;
    }
    if(value_path == "pam-rate-alarm-high-threshold")
    {
        pam_rate_alarm_high_threshold = value;
    }
    if(value_path == "pam-rate-alarm-low-threshold")
    {
        pam_rate_alarm_low_threshold = value;
    }
    if(value_path == "pam-rate-warn-high-threshold")
    {
        pam_rate_warn_high_threshold = value;
    }
    if(value_path == "pam-rate-warn-low-threshold")
    {
        pam_rate_warn_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-accumulated-alarm-high-threshold")
    {
        pre_fec_ber_accumulated_alarm_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-accumulated-alarm-low-threshold")
    {
        pre_fec_ber_accumulated_alarm_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-accumulated-warn-high-threshold")
    {
        pre_fec_ber_accumulated_warn_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-accumulated-warn-low-threshold")
    {
        pre_fec_ber_accumulated_warn_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-alarm-high-threshold")
    {
        pre_fec_ber_alarm_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-alarm-low-threshold")
    {
        pre_fec_ber_alarm_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-instantaneous-alarm-high-threshold")
    {
        pre_fec_ber_instantaneous_alarm_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-instantaneous-alarm-low-threshold")
    {
        pre_fec_ber_instantaneous_alarm_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-instantaneous-warn-high-threshold")
    {
        pre_fec_ber_instantaneous_warn_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-instantaneous-warn-low-threshold")
    {
        pre_fec_ber_instantaneous_warn_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-max-alarm-high-threshold")
    {
        pre_fec_ber_latched_max_alarm_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-max-alarm-low-threshold")
    {
        pre_fec_ber_latched_max_alarm_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-max-warn-high-threshold")
    {
        pre_fec_ber_latched_max_warn_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-max-warn-low-threshold")
    {
        pre_fec_ber_latched_max_warn_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-min-alarm-high-threshold")
    {
        pre_fec_ber_latched_min_alarm_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-min-alarm-low-threshold")
    {
        pre_fec_ber_latched_min_alarm_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-min-warn-high-threshold")
    {
        pre_fec_ber_latched_min_warn_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-latched-min-warn-low-threshold")
    {
        pre_fec_ber_latched_min_warn_low_threshold = value;
    }
    if(value_path == "pre-fec-ber-warn-high-threshold")
    {
        pre_fec_ber_warn_high_threshold = value;
    }
    if(value_path == "pre-fec-ber-warn-low-threshold")
    {
        pre_fec_ber_warn_low_threshold = value;
    }
    if(value_path == "snr-alarm-high-threshold")
    {
        snr_alarm_high_threshold = value;
    }
    if(value_path == "snr-alarm-low-threshold")
    {
        snr_alarm_low_threshold = value;
    }
    if(value_path == "snr-warn-high-threshold")
    {
        snr_warn_high_threshold = value;
    }
    if(value_path == "snr-warn-low-threshold")
    {
        snr_warn_low_threshold = value;
    }
    if(value_path == "tec-current-alarm-high-threshold")
    {
        tec_current_alarm_high_threshold = value;
    }
    if(value_path == "tec-current-alarm-low-threshold")
    {
        tec_current_alarm_low_threshold = value;
    }
    if(value_path == "tec-current-warn-high-threshold")
    {
        tec_current_warn_high_threshold = value;
    }
    if(value_path == "tec-current-warn-low-threshold")
    {
        tec_current_warn_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-accumulated-alarm-high-threshold")
    {
        uncorrected_ber_accumulated_alarm_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-accumulated-alarm-low-threshold")
    {
        uncorrected_ber_accumulated_alarm_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-accumulated-warn-high-threshold")
    {
        uncorrected_ber_accumulated_warn_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-accumulated-warn-low-threshold")
    {
        uncorrected_ber_accumulated_warn_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-alarm-high-threshold")
    {
        uncorrected_ber_alarm_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-alarm-low-threshold")
    {
        uncorrected_ber_alarm_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-instantaneous-alarm-high-threshold")
    {
        uncorrected_ber_instantaneous_alarm_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-instantaneous-alarm-low-threshold")
    {
        uncorrected_ber_instantaneous_alarm_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-instantaneous-warn-high-threshold")
    {
        uncorrected_ber_instantaneous_warn_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-instantaneous-warn-low-threshold")
    {
        uncorrected_ber_instantaneous_warn_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-max-alarm-high-threshold")
    {
        uncorrected_ber_latched_max_alarm_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-max-alarm-low-threshold")
    {
        uncorrected_ber_latched_max_alarm_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-max-warn-high-threshold")
    {
        uncorrected_ber_latched_max_warn_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-max-warn-low-threshold")
    {
        uncorrected_ber_latched_max_warn_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-min-alarm-high-threshold")
    {
        uncorrected_ber_latched_min_alarm_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-min-alarm-low-threshold")
    {
        uncorrected_ber_latched_min_alarm_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-min-warn-high-threshold")
    {
        uncorrected_ber_latched_min_warn_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-latched-min-warn-low-threshold")
    {
        uncorrected_ber_latched_min_warn_low_threshold = value;
    }
    if(value_path == "uncorrected-ber-warn-high-threshold")
    {
        uncorrected_ber_warn_high_threshold = value;
    }
    if(value_path == "uncorrected-ber-warn-low-threshold")
    {
        uncorrected_ber_warn_low_threshold = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneData()
    :
    lane_index{YType::uint32, "lane-index"},
    laser_bias_current_milli_amps{YType::uint32, "laser-bias-current-milli-amps"},
    laser_bias_current_percent{YType::uint32, "laser-bias-current-percent"},
    output_frequency{YType::int32, "output-frequency"},
    receive_power{YType::int32, "receive-power"},
    receive_signal_power{YType::int32, "receive-signal-power"},
    transmit_power{YType::int32, "transmit-power"},
    transmit_signal_power{YType::int32, "transmit-signal-power"}
    	,
    lane_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo>())
{
    lane_alarm_info->parent = this;

    yang_name = "lane-data"; yang_parent_name = "optics-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::~LaneData()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::has_data() const
{
    return lane_index.is_set
	|| laser_bias_current_milli_amps.is_set
	|| laser_bias_current_percent.is_set
	|| output_frequency.is_set
	|| receive_power.is_set
	|| receive_signal_power.is_set
	|| transmit_power.is_set
	|| transmit_signal_power.is_set
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::has_operation() const
{
    return is_set(operation)
	|| is_set(lane_index.operation)
	|| is_set(laser_bias_current_milli_amps.operation)
	|| is_set(laser_bias_current_percent.operation)
	|| is_set(output_frequency.operation)
	|| is_set(receive_power.operation)
	|| is_set(receive_signal_power.operation)
	|| is_set(transmit_power.operation)
	|| is_set(transmit_signal_power.operation)
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-data";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LaneData' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lane_index.is_set || is_set(lane_index.operation)) leaf_name_data.push_back(lane_index.get_name_leafdata());
    if (laser_bias_current_milli_amps.is_set || is_set(laser_bias_current_milli_amps.operation)) leaf_name_data.push_back(laser_bias_current_milli_amps.get_name_leafdata());
    if (laser_bias_current_percent.is_set || is_set(laser_bias_current_percent.operation)) leaf_name_data.push_back(laser_bias_current_percent.get_name_leafdata());
    if (output_frequency.is_set || is_set(output_frequency.operation)) leaf_name_data.push_back(output_frequency.get_name_leafdata());
    if (receive_power.is_set || is_set(receive_power.operation)) leaf_name_data.push_back(receive_power.get_name_leafdata());
    if (receive_signal_power.is_set || is_set(receive_signal_power.operation)) leaf_name_data.push_back(receive_signal_power.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.operation)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (transmit_signal_power.is_set || is_set(transmit_signal_power.operation)) leaf_name_data.push_back(transmit_signal_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lane-alarm-info")
    {
        if(lane_alarm_info == nullptr)
        {
            lane_alarm_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo>();
        }
        return lane_alarm_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lane_alarm_info != nullptr)
    {
        children["lane-alarm-info"] = lane_alarm_info;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lane-index")
    {
        lane_index = value;
    }
    if(value_path == "laser-bias-current-milli-amps")
    {
        laser_bias_current_milli_amps = value;
    }
    if(value_path == "laser-bias-current-percent")
    {
        laser_bias_current_percent = value;
    }
    if(value_path == "output-frequency")
    {
        output_frequency = value;
    }
    if(value_path == "receive-power")
    {
        receive_power = value;
    }
    if(value_path == "receive-signal-power")
    {
        receive_signal_power = value;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
    }
    if(value_path == "transmit-signal-power")
    {
        transmit_signal_power = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LaneAlarmInfo()
    :
    high_lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc>())
	,high_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower>())
	,high_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower>())
	,low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower>())
{
    high_lbc->parent = this;

    high_rx_power->parent = this;

    high_tx_power->parent = this;

    low_rx_power->parent = this;

    low_tx_power->parent = this;

    yang_name = "lane-alarm-info"; yang_parent_name = "lane-data";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::~LaneAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::has_data() const
{
    return (high_lbc !=  nullptr && high_lbc->has_data())
	|| (high_rx_power !=  nullptr && high_rx_power->has_data())
	|| (high_tx_power !=  nullptr && high_tx_power->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (low_tx_power !=  nullptr && low_tx_power->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::has_operation() const
{
    return is_set(operation)
	|| (high_lbc !=  nullptr && high_lbc->has_operation())
	|| (high_rx_power !=  nullptr && high_rx_power->has_operation())
	|| (high_tx_power !=  nullptr && high_tx_power->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-alarm-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LaneAlarmInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high-lbc")
    {
        if(high_lbc == nullptr)
        {
            high_lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc>();
        }
        return high_lbc;
    }

    if(child_yang_name == "high-rx-power")
    {
        if(high_rx_power == nullptr)
        {
            high_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower>();
        }
        return high_rx_power;
    }

    if(child_yang_name == "high-tx-power")
    {
        if(high_tx_power == nullptr)
        {
            high_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower>();
        }
        return high_tx_power;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high_lbc != nullptr)
    {
        children["high-lbc"] = high_lbc;
    }

    if(high_rx_power != nullptr)
    {
        children["high-rx-power"] = high_rx_power;
    }

    if(high_tx_power != nullptr)
    {
        children["high-tx-power"] = high_tx_power;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::HighRxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-rx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::~HighRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighRxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::LowRxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::HighTxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::~HighTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::LowTxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::HighLbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-lbc"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::~HighLbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighLbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLanes()
{
    yang_name = "optics-lanes"; yang_parent_name = "optics-port";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::~OpticsLanes()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::has_data() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_data())
            return true;
    }
    return false;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::has_operation() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lanes";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsLanes' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-lane")
    {
        for(auto const & c : optics_lane)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane>();
        c->parent = this;
        optics_lane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_lane)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::OpticsLane()
    :
    number{YType::int32, "number"},
    lane_index{YType::uint32, "lane-index"},
    laser_bias_current_milli_amps{YType::uint32, "laser-bias-current-milli-amps"},
    laser_bias_current_percent{YType::uint32, "laser-bias-current-percent"},
    output_frequency{YType::int32, "output-frequency"},
    receive_power{YType::int32, "receive-power"},
    receive_signal_power{YType::int32, "receive-signal-power"},
    transmit_power{YType::int32, "transmit-power"},
    transmit_signal_power{YType::int32, "transmit-signal-power"}
    	,
    lane_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo>())
{
    lane_alarm_info->parent = this;

    yang_name = "optics-lane"; yang_parent_name = "optics-lanes";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::~OpticsLane()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::has_data() const
{
    return number.is_set
	|| lane_index.is_set
	|| laser_bias_current_milli_amps.is_set
	|| laser_bias_current_percent.is_set
	|| output_frequency.is_set
	|| receive_power.is_set
	|| receive_signal_power.is_set
	|| transmit_power.is_set
	|| transmit_signal_power.is_set
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(lane_index.operation)
	|| is_set(laser_bias_current_milli_amps.operation)
	|| is_set(laser_bias_current_percent.operation)
	|| is_set(output_frequency.operation)
	|| is_set(receive_power.operation)
	|| is_set(receive_signal_power.operation)
	|| is_set(transmit_power.operation)
	|| is_set(transmit_signal_power.operation)
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lane" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsLane' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (lane_index.is_set || is_set(lane_index.operation)) leaf_name_data.push_back(lane_index.get_name_leafdata());
    if (laser_bias_current_milli_amps.is_set || is_set(laser_bias_current_milli_amps.operation)) leaf_name_data.push_back(laser_bias_current_milli_amps.get_name_leafdata());
    if (laser_bias_current_percent.is_set || is_set(laser_bias_current_percent.operation)) leaf_name_data.push_back(laser_bias_current_percent.get_name_leafdata());
    if (output_frequency.is_set || is_set(output_frequency.operation)) leaf_name_data.push_back(output_frequency.get_name_leafdata());
    if (receive_power.is_set || is_set(receive_power.operation)) leaf_name_data.push_back(receive_power.get_name_leafdata());
    if (receive_signal_power.is_set || is_set(receive_signal_power.operation)) leaf_name_data.push_back(receive_signal_power.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.operation)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (transmit_signal_power.is_set || is_set(transmit_signal_power.operation)) leaf_name_data.push_back(transmit_signal_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lane-alarm-info")
    {
        if(lane_alarm_info == nullptr)
        {
            lane_alarm_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo>();
        }
        return lane_alarm_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lane_alarm_info != nullptr)
    {
        children["lane-alarm-info"] = lane_alarm_info;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "lane-index")
    {
        lane_index = value;
    }
    if(value_path == "laser-bias-current-milli-amps")
    {
        laser_bias_current_milli_amps = value;
    }
    if(value_path == "laser-bias-current-percent")
    {
        laser_bias_current_percent = value;
    }
    if(value_path == "output-frequency")
    {
        output_frequency = value;
    }
    if(value_path == "receive-power")
    {
        receive_power = value;
    }
    if(value_path == "receive-signal-power")
    {
        receive_signal_power = value;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
    }
    if(value_path == "transmit-signal-power")
    {
        transmit_signal_power = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LaneAlarmInfo()
    :
    high_lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc>())
	,high_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower>())
	,high_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower>())
	,low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower>())
{
    high_lbc->parent = this;

    high_rx_power->parent = this;

    high_tx_power->parent = this;

    low_rx_power->parent = this;

    low_tx_power->parent = this;

    yang_name = "lane-alarm-info"; yang_parent_name = "optics-lane";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::~LaneAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::has_data() const
{
    return (high_lbc !=  nullptr && high_lbc->has_data())
	|| (high_rx_power !=  nullptr && high_rx_power->has_data())
	|| (high_tx_power !=  nullptr && high_tx_power->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (low_tx_power !=  nullptr && low_tx_power->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::has_operation() const
{
    return is_set(operation)
	|| (high_lbc !=  nullptr && high_lbc->has_operation())
	|| (high_rx_power !=  nullptr && high_rx_power->has_operation())
	|| (high_tx_power !=  nullptr && high_tx_power->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-alarm-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LaneAlarmInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high-lbc")
    {
        if(high_lbc == nullptr)
        {
            high_lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc>();
        }
        return high_lbc;
    }

    if(child_yang_name == "high-rx-power")
    {
        if(high_rx_power == nullptr)
        {
            high_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower>();
        }
        return high_rx_power;
    }

    if(child_yang_name == "high-tx-power")
    {
        if(high_tx_power == nullptr)
        {
            high_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower>();
        }
        return high_tx_power;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high_lbc != nullptr)
    {
        children["high-lbc"] = high_lbc;
    }

    if(high_rx_power != nullptr)
    {
        children["high-rx-power"] = high_rx_power;
    }

    if(high_tx_power != nullptr)
    {
        children["high-tx-power"] = high_tx_power;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::HighRxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-rx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::~HighRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighRxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::LowRxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-rx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowRxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::HighTxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-tx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::~HighTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighTxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::LowTxPower()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "low-tx-power"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowTxPower' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::HighLbc()
    :
    counter{YType::uint32, "counter"},
    is_detected{YType::boolean, "is-detected"}
{
    yang_name = "high-lbc"; yang_parent_name = "lane-alarm-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::~HighLbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::has_data() const
{
    return counter.is_set
	|| is_detected.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_detected.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-lbc";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighLbc' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::OpticsDbInfo()
    :
    controller_state{YType::enumeration, "controller-state"},
    transport_admin_state{YType::enumeration, "transport-admin-state"}
    	,
    network_srlg_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo>())
{
    network_srlg_info->parent = this;

    yang_name = "optics-db-info"; yang_parent_name = "optics-port";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::~OpticsDbInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::has_data() const
{
    return controller_state.is_set
	|| transport_admin_state.is_set
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_state.operation)
	|| is_set(transport_admin_state.operation)
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-db-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsDbInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_state.is_set || is_set(controller_state.operation)) leaf_name_data.push_back(controller_state.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.operation)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg-info")
    {
        if(network_srlg_info == nullptr)
        {
            network_srlg_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo>();
        }
        return network_srlg_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_srlg_info != nullptr)
    {
        children["network-srlg-info"] = network_srlg_info;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-state")
    {
        controller_state = value;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
    }
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgInfo()
{
    yang_name = "network-srlg-info"; yang_parent_name = "optics-db-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::~NetworkSrlgInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::has_data() const
{
    for (std::size_t index=0; index<network_srlg_array.size(); index++)
    {
        if(network_srlg_array[index]->has_data())
            return true;
    }
    return false;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::has_operation() const
{
    for (std::size_t index=0; index<network_srlg_array.size(); index++)
    {
        if(network_srlg_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-info";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgInfo' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg-array")
    {
        for(auto const & c : network_srlg_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray>();
        c->parent = this;
        network_srlg_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_srlg_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::set_value(const std::string & value_path, std::string value)
{
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::NetworkSrlgArray()
    :
    network_srlg{YType::uint32, "network-srlg"},
    set_number{YType::uint32, "set-number"}
{
    yang_name = "network-srlg-array"; yang_parent_name = "network-srlg-info";
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::~NetworkSrlgArray()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::has_data() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return set_number.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::has_operation() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(network_srlg.operation)
	|| is_set(set_number.operation);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-array";

    return path_buffer.str();

}

const EntityPath OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgArray' in Cisco_IOS_XR_controller_optics_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_number.is_set || is_set(set_number.operation)) leaf_name_data.push_back(set_number.get_name_leafdata());

    auto network_srlg_name_datas = network_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_srlg_name_datas.begin(), network_srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-srlg")
    {
        network_srlg.append(value);
    }
    if(value_path == "set-number")
    {
        set_number = value;
    }
}

const Enum::YLeaf OpticsAmplifierGainRangeEnum::optics_amplifier_gain_range_normal {1, "optics-amplifier-gain-range-normal"};
const Enum::YLeaf OpticsAmplifierGainRangeEnum::optics_amplifier_gain_range_ext_end_ed {2, "optics-amplifier-gain-range-ext-end-ed"};

const Enum::YLeaf OpticsAmplifierControlModeEnum::automatic {1, "automatic"};
const Enum::YLeaf OpticsAmplifierControlModeEnum::manual {2, "manual"};

const Enum::YLeaf EthernetPmdEnum::optics_eth_not_set {0, "optics-eth-not-set"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_10gbase_lrm {1, "optics-eth-10gbase-lrm"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_10gbase_lr {2, "optics-eth-10gbase-lr"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_10gbase_zr {3, "optics-eth-10gbase-zr"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_10gbase_er {4, "optics-eth-10gbase-er"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_10gbase_sr {5, "optics-eth-10gbase-sr"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_10gbase {6, "optics-eth-10gbase"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40gbase_cr4 {7, "optics-eth-40gbase-cr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40gbase_sr4 {8, "optics-eth-40gbase-sr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40gbase_lr4 {9, "optics-eth-40gbase-lr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40gbase_er4 {10, "optics-eth-40gbase-er4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40gbase_psm4 {11, "optics-eth-40gbase-psm4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40gbase_csr4 {12, "optics-eth-40gbase-csr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40gbase_sr_bd {13, "optics-eth-40gbase-sr-bd"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_40g_aoc {14, "optics-eth-40g-aoc"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_4x10gbase_lr {15, "optics-eth-4x10gbase-lr"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_4x10gbase_sr {16, "optics-eth-4x10gbase-sr"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100g_aoc {17, "optics-eth-100g-aoc"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100g_acc {18, "optics-eth-100g-acc"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_sr10 {19, "optics-eth-100gbase-sr10"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_sr4 {20, "optics-eth-100gbase-sr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_lr4 {21, "optics-eth-100gbase-lr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_er4 {22, "optics-eth-100gbase-er4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_cwdm4 {23, "optics-eth-100gbase-cwdm4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_clr4 {24, "optics-eth-100gbase-clr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_psm4 {25, "optics-eth-100gbase-psm4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_cr4 {26, "optics-eth-100gbase-cr4"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_al {27, "optics-eth-100gbase-al"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_100gbase_pl {28, "optics-eth-100gbase-pl"};
const Enum::YLeaf EthernetPmdEnum::optics_eth_undefined {29, "optics-eth-undefined"};

const Enum::YLeaf OpticsWaveBandEnum::c_band {0, "c-band"};
const Enum::YLeaf OpticsWaveBandEnum::l_band {1, "l-band"};
const Enum::YLeaf OpticsWaveBandEnum::c_band_odd {2, "c-band-odd"};
const Enum::YLeaf OpticsWaveBandEnum::c_band_even {3, "c-band-even"};
const Enum::YLeaf OpticsWaveBandEnum::invalid_band {4, "invalid-band"};

const Enum::YLeaf FiberConnectorEnum::optics_connect_or_not_set {0, "optics-connect-or-not-set"};
const Enum::YLeaf FiberConnectorEnum::optics_sc_connect_or {1, "optics-sc-connect-or"};
const Enum::YLeaf FiberConnectorEnum::optics_lc_connect_or {2, "optics-lc-connect-or"};
const Enum::YLeaf FiberConnectorEnum::optics_mpo_connect_or {3, "optics-mpo-connect-or"};
const Enum::YLeaf FiberConnectorEnum::optics_undefined_connect_or {4, "optics-undefined-connect-or"};

const Enum::YLeaf OpticsFormFactorEnum::not_set {0, "not-set"};
const Enum::YLeaf OpticsFormFactorEnum::invalid {1, "invalid"};
const Enum::YLeaf OpticsFormFactorEnum::cpak {2, "cpak"};
const Enum::YLeaf OpticsFormFactorEnum::cxp {3, "cxp"};
const Enum::YLeaf OpticsFormFactorEnum::sfp_plus {4, "sfp-plus"};
const Enum::YLeaf OpticsFormFactorEnum::qsfp {5, "qsfp"};
const Enum::YLeaf OpticsFormFactorEnum::qsfp_plus {6, "qsfp-plus"};
const Enum::YLeaf OpticsFormFactorEnum::qsfp28 {7, "qsfp28"};
const Enum::YLeaf OpticsFormFactorEnum::sfp {8, "sfp"};
const Enum::YLeaf OpticsFormFactorEnum::cfp {9, "cfp"};
const Enum::YLeaf OpticsFormFactorEnum::cfp2 {10, "cfp2"};
const Enum::YLeaf OpticsFormFactorEnum::cfp4 {11, "cfp4"};
const Enum::YLeaf OpticsFormFactorEnum::xfp {12, "xfp"};
const Enum::YLeaf OpticsFormFactorEnum::x2 {13, "x2"};
const Enum::YLeaf OpticsFormFactorEnum::non_pluggable {14, "non-pluggable"};
const Enum::YLeaf OpticsFormFactorEnum::other {15, "other"};

const Enum::YLeaf SonetApplicationCodeEnum::optics_sonet_not_set {0, "optics-sonet-not-set"};
const Enum::YLeaf SonetApplicationCodeEnum::optics_vsr2000_3r2 {1, "optics-vsr2000-3r2"};
const Enum::YLeaf SonetApplicationCodeEnum::optics_vsr2000_3r3 {2, "optics-vsr2000-3r3"};
const Enum::YLeaf SonetApplicationCodeEnum::optics_vsr2000_3r5 {3, "optics-vsr2000-3r5"};
const Enum::YLeaf SonetApplicationCodeEnum::optics_sonet_undefined {4, "optics-sonet-undefined"};

const Enum::YLeaf OpticsControllerStateEnum::optics_state_up {0, "optics-state-up"};
const Enum::YLeaf OpticsControllerStateEnum::optics_state_down {1, "optics-state-down"};
const Enum::YLeaf OpticsControllerStateEnum::optics_state_admin_down {2, "optics-state-admin-down"};

const Enum::YLeaf OpticsAmplifierSafetyControlModeEnum::optics_amplifier_safety_mode_auto {1, "optics-amplifier-safety-mode-auto"};
const Enum::YLeaf OpticsAmplifierSafetyControlModeEnum::optics_amplifier_safety_mode_disabled {2, "optics-amplifier-safety-mode-disabled"};

const Enum::YLeaf OpticsLaserStateEnum::on {0, "on"};
const Enum::YLeaf OpticsLaserStateEnum::off {1, "off"};
const Enum::YLeaf OpticsLaserStateEnum::unknown {2, "unknown"};
const Enum::YLeaf OpticsLaserStateEnum::apr {3, "apr"};

const Enum::YLeaf OpticsFecEnum::fec_none {0, "fec-none"};
const Enum::YLeaf OpticsFecEnum::fec_hg15 {1, "fec-hg15"};
const Enum::YLeaf OpticsFecEnum::fec_hg25 {2, "fec-hg25"};
const Enum::YLeaf OpticsFecEnum::fec_hg15_de {4, "fec-hg15-de"};
const Enum::YLeaf OpticsFecEnum::fec_hg25_de {8, "fec-hg25-de"};
const Enum::YLeaf OpticsFecEnum::fec_enabled {16, "fec-enabled"};

const Enum::YLeaf OpticsPortStatusEnum::active {0, "active"};
const Enum::YLeaf OpticsPortStatusEnum::standby {1, "standby"};

const Enum::YLeaf OpticsPhyEnum::not_set {0, "not-set"};
const Enum::YLeaf OpticsPhyEnum::invalid {1, "invalid"};
const Enum::YLeaf OpticsPhyEnum::long_reach_four_lanes {2, "long-reach-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::short_reach_ten_lanes {3, "short-reach-ten-lanes"};
const Enum::YLeaf OpticsPhyEnum::short_reach_one_lane {4, "short-reach-one-lane"};
const Enum::YLeaf OpticsPhyEnum::long_reach_one_lane {5, "long-reach-one-lane"};
const Enum::YLeaf OpticsPhyEnum::short_reach_four_lanes {6, "short-reach-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::copper_four_lanes {7, "copper-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::active_optical_cable {8, "active-optical-cable"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_e_long_reach_four_lanes {9, "fourty-gig-e-long-reach-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_e_short_reach_four_lanes {10, "fourty-gig-e-short-reach-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::cwdm_four_lanes {11, "cwdm-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::extended_reach_four_lanes {12, "extended-reach-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::psm_four_lanes {13, "psm-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::active_copper_cable {14, "active-copper-cable"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_e_extended_reach_four_lanes {15, "fourty-gig-e-extended-reach-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::four_x_ten_gig_e_short_reach_one_lane {16, "four-x-ten-gig-e-short-reach-one-lane"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_epsm_four_lanes {17, "fourty-gig-epsm-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_e_copper_four_lanes {18, "fourty-gig-e-copper-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::long_reach_mm_one_lane {19, "long-reach-mm-one-lane"};
const Enum::YLeaf OpticsPhyEnum::copper_short_reach {20, "copper-short-reach"};
const Enum::YLeaf OpticsPhyEnum::short_reach_srbd {21, "short-reach-srbd"};
const Enum::YLeaf OpticsPhyEnum::copper_one_lane {22, "copper-one-lane"};
const Enum::YLeaf OpticsPhyEnum::four_x_ten_gig_e_long_reach_one_lane {23, "four-x-ten-gig-e-long-reach-one-lane"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_eaoc_four_lanes {24, "fourty-gig-eaoc-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::extended_one_lane {25, "extended-one-lane"};
const Enum::YLeaf OpticsPhyEnum::zr_one_lane {26, "zr-one-lane"};
const Enum::YLeaf OpticsPhyEnum::dwdm_one_lane {27, "dwdm-one-lane"};
const Enum::YLeaf OpticsPhyEnum::sx_one_lane {28, "sx-one-lane"};
const Enum::YLeaf OpticsPhyEnum::lx_one_lane {29, "lx-one-lane"};
const Enum::YLeaf OpticsPhyEnum::ex_one_lane {30, "ex-one-lane"};
const Enum::YLeaf OpticsPhyEnum::zx_one_lane {31, "zx-one-lane"};
const Enum::YLeaf OpticsPhyEnum::ba_set_one_lane {32, "ba-set-one-lane"};
const Enum::YLeaf OpticsPhyEnum::aoc_one_lane {33, "aoc-one-lane"};
const Enum::YLeaf OpticsPhyEnum::active_copper_one_lane {34, "active-copper-one-lane"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_eacu_four_lanes {35, "fourty-gig-eacu-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::four_x_ten_gig_eacu_one_lanes {36, "four-x-ten-gig-eacu-one-lanes"};
const Enum::YLeaf OpticsPhyEnum::four_x_ten_gig_ecu_one_lanes {37, "four-x-ten-gig-ecu-one-lanes"};
const Enum::YLeaf OpticsPhyEnum::four_x_ten_gig_eaoc_one_lanes {38, "four-x-ten-gig-eaoc-one-lanes"};
const Enum::YLeaf OpticsPhyEnum::twenty_five_gig_short_reach_one_lane {39, "twenty-five-gig-short-reach-one-lane"};
const Enum::YLeaf OpticsPhyEnum::twenty_five_gig_long_reach_one_lane {40, "twenty-five-gig-long-reach-one-lane"};
const Enum::YLeaf OpticsPhyEnum::twenty_five_gig_extended_reach_one_lane {41, "twenty-five-gig-extended-reach-one-lane"};
const Enum::YLeaf OpticsPhyEnum::twenty_five_gig_copper_one_lane {42, "twenty-five-gig-copper-one-lane"};
const Enum::YLeaf OpticsPhyEnum::twenty_five_gig_active_optical_one_lane {43, "twenty-five-gig-active-optical-one-lane"};
const Enum::YLeaf OpticsPhyEnum::hundred_gig_edwdm_two {44, "hundred-gig-edwdm-two"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_plr4_four_lanes {45, "fourty-gig-plr4-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::fourty_gig_esr4_four_lanes {46, "fourty-gig-esr4-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::smsr_four_lanes {47, "smsr-four-lanes"};
const Enum::YLeaf OpticsPhyEnum::trunk_port_cfp2 {48, "trunk-port-cfp2"};
const Enum::YLeaf OpticsPhyEnum::short_reach1_lane {49, "short-reach1-lane"};
const Enum::YLeaf OpticsPhyEnum::inmd_reach1lane {50, "inmd-reach1lane"};
const Enum::YLeaf OpticsPhyEnum::long_reach1_lane {51, "long-reach1-lane"};

const Enum::YLeaf OpticsTasEnum::tas_ui_oos {0, "tas-ui-oos"};
const Enum::YLeaf OpticsTasEnum::tas_ui_main {1, "tas-ui-main"};
const Enum::YLeaf OpticsTasEnum::tas_ui_is {2, "tas-ui-is"};
const Enum::YLeaf OpticsTasEnum::tas_ui_ains {3, "tas-ui-ains"};

const Enum::YLeaf OpticsEnum::optics_unknown {0, "optics-unknown"};
const Enum::YLeaf OpticsEnum::optics_grey {1, "optics-grey"};
const Enum::YLeaf OpticsEnum::optics_dwdm {2, "optics-dwdm"};
const Enum::YLeaf OpticsEnum::optics_cwdm {3, "optics-cwdm"};

const Enum::YLeaf OtnApplicationCodeEnum::optics_not_set {0, "optics-not-set"};
const Enum::YLeaf OtnApplicationCodeEnum::optics_p1l1_2d1 {1, "optics-p1l1-2d1"};
const Enum::YLeaf OtnApplicationCodeEnum::optics_p1s1_2d2 {2, "optics-p1s1-2d2"};
const Enum::YLeaf OtnApplicationCodeEnum::optics_p1l1_2d2 {3, "optics-p1l1-2d2"};
const Enum::YLeaf OtnApplicationCodeEnum::optics_undefined {4, "optics-undefined"};

const Enum::YLeaf OpticsLedStateEnum::off {0, "off"};
const Enum::YLeaf OpticsLedStateEnum::green_on {1, "green-on"};
const Enum::YLeaf OpticsLedStateEnum::green_flashing {2, "green-flashing"};
const Enum::YLeaf OpticsLedStateEnum::yellow_on {3, "yellow-on"};
const Enum::YLeaf OpticsLedStateEnum::yellow_flashing {4, "yellow-flashing"};
const Enum::YLeaf OpticsLedStateEnum::red_on {5, "red-on"};
const Enum::YLeaf OpticsLedStateEnum::red_flashing {6, "red-flashing"};

const Enum::YLeaf OpticsPortEnum::com {0, "com"};
const Enum::YLeaf OpticsPortEnum::line {1, "line"};
const Enum::YLeaf OpticsPortEnum::osc {2, "osc"};
const Enum::YLeaf OpticsPortEnum::com_check {3, "com-check"};
const Enum::YLeaf OpticsPortEnum::work {4, "work"};
const Enum::YLeaf OpticsPortEnum::prot {5, "prot"};


}
}

