
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_optics_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_optics_oper {

OpticsOper::OpticsOper()
    :
    optics_ports(std::make_shared<OpticsOper::OpticsPorts>())
{
    optics_ports->parent = this;

    yang_name = "optics-oper"; yang_parent_name = "Cisco-IOS-XR-controller-optics-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (optics_ports !=  nullptr && optics_ports->has_operation());
}

std::string OpticsOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-oper:optics-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void OpticsOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> OpticsOper::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OpticsOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-ports")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPorts()
{

    yang_name = "optics-ports"; yang_parent_name = "optics-oper"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string OpticsOper::OpticsPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-oper:optics-oper/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticsOper::OpticsPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void OpticsOper::OpticsPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-port")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsPort()
    :
    name{YType::str, "name"}
    	,
    optics_dwdm_carrrier_channel_map(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap>())
	,optics_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo>())
	,optics_lanes(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes>())
	,optics_db_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo>())
{
    optics_dwdm_carrrier_channel_map->parent = this;
    optics_info->parent = this;
    optics_lanes->parent = this;
    optics_db_info->parent = this;

    yang_name = "optics-port"; yang_parent_name = "optics-ports"; is_top_level_class = false; has_list_ancestor = false;
}

OpticsOper::OpticsPorts::OpticsPort::~OpticsPort()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::has_data() const
{
    return name.is_set
	|| (optics_dwdm_carrrier_channel_map !=  nullptr && optics_dwdm_carrrier_channel_map->has_data())
	|| (optics_info !=  nullptr && optics_info->has_data())
	|| (optics_lanes !=  nullptr && optics_lanes->has_data())
	|| (optics_db_info !=  nullptr && optics_db_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (optics_dwdm_carrrier_channel_map !=  nullptr && optics_dwdm_carrrier_channel_map->has_operation())
	|| (optics_info !=  nullptr && optics_info->has_operation())
	|| (optics_lanes !=  nullptr && optics_lanes->has_operation())
	|| (optics_db_info !=  nullptr && optics_db_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-oper:optics-oper/optics-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticsOper::OpticsPorts::OpticsPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "optics-db-info")
    {
        if(optics_db_info == nullptr)
        {
            optics_db_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo>();
        }
        return optics_db_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(optics_db_info != nullptr)
    {
        children["optics-db-info"] = optics_db_info;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-dwdm-carrrier-channel-map" || name == "optics-info" || name == "optics-lanes" || name == "optics-db-info" || name == "name")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::OpticsDwdmCarrrierChannelMap()
    :
    dwdm_carrier_band{YType::enumeration, "dwdm-carrier-band"},
    dwdm_carrier_min{YType::uint32, "dwdm-carrier-min"},
    dwdm_carrier_max{YType::uint32, "dwdm-carrier-max"}
{

    yang_name = "optics-dwdm-carrrier-channel-map"; yang_parent_name = "optics-port"; is_top_level_class = false; has_list_ancestor = true;
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
	|| dwdm_carrier_min.is_set
	|| dwdm_carrier_max.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::has_operation() const
{
    for (std::size_t index=0; index<dwdm_carrier_map_info.size(); index++)
    {
        if(dwdm_carrier_map_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dwdm_carrier_band.yfilter)
	|| ydk::is_set(dwdm_carrier_min.yfilter)
	|| ydk::is_set(dwdm_carrier_max.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-dwdm-carrrier-channel-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dwdm_carrier_band.is_set || is_set(dwdm_carrier_band.yfilter)) leaf_name_data.push_back(dwdm_carrier_band.get_name_leafdata());
    if (dwdm_carrier_min.is_set || is_set(dwdm_carrier_min.yfilter)) leaf_name_data.push_back(dwdm_carrier_min.get_name_leafdata());
    if (dwdm_carrier_max.is_set || is_set(dwdm_carrier_max.yfilter)) leaf_name_data.push_back(dwdm_carrier_max.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dwdm-carrier-band")
    {
        dwdm_carrier_band = value;
        dwdm_carrier_band.value_namespace = name_space;
        dwdm_carrier_band.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-carrier-min")
    {
        dwdm_carrier_min = value;
        dwdm_carrier_min.value_namespace = name_space;
        dwdm_carrier_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-carrier-max")
    {
        dwdm_carrier_max = value;
        dwdm_carrier_max.value_namespace = name_space;
        dwdm_carrier_max.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dwdm-carrier-band")
    {
        dwdm_carrier_band.yfilter = yfilter;
    }
    if(value_path == "dwdm-carrier-min")
    {
        dwdm_carrier_min.yfilter = yfilter;
    }
    if(value_path == "dwdm-carrier-max")
    {
        dwdm_carrier_max.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-carrier-map-info" || name == "dwdm-carrier-band" || name == "dwdm-carrier-min" || name == "dwdm-carrier-max")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::DwdmCarrierMapInfo()
    :
    itu_chan_num{YType::uint32, "itu-chan-num"},
    g694_chan_num{YType::int32, "g694-chan-num"},
    frequency{YType::str, "frequency"},
    wavelength{YType::str, "wavelength"}
{

    yang_name = "dwdm-carrier-map-info"; yang_parent_name = "optics-dwdm-carrrier-channel-map"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::~DwdmCarrierMapInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::has_data() const
{
    return itu_chan_num.is_set
	|| g694_chan_num.is_set
	|| frequency.is_set
	|| wavelength.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itu_chan_num.yfilter)
	|| ydk::is_set(g694_chan_num.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(wavelength.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-carrier-map-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itu_chan_num.is_set || is_set(itu_chan_num.yfilter)) leaf_name_data.push_back(itu_chan_num.get_name_leafdata());
    if (g694_chan_num.is_set || is_set(g694_chan_num.yfilter)) leaf_name_data.push_back(g694_chan_num.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (wavelength.is_set || is_set(wavelength.yfilter)) leaf_name_data.push_back(wavelength.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itu-chan-num")
    {
        itu_chan_num = value;
        itu_chan_num.value_namespace = name_space;
        itu_chan_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g694-chan-num")
    {
        g694_chan_num = value;
        g694_chan_num.value_namespace = name_space;
        g694_chan_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wavelength")
    {
        wavelength = value;
        wavelength.value_namespace = name_space;
        wavelength.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itu-chan-num")
    {
        itu_chan_num.yfilter = yfilter;
    }
    if(value_path == "g694-chan-num")
    {
        g694_chan_num.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "wavelength")
    {
        wavelength.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itu-chan-num" || name == "g694-chan-num" || name == "frequency" || name == "wavelength")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsInfo()
    :
    transport_admin_state{YType::enumeration, "transport-admin-state"},
    optics_present{YType::boolean, "optics-present"},
    optics_type{YType::enumeration, "optics-type"},
    derived_optics_type{YType::str, "derived-optics-type"},
    optics_module{YType::str, "optics-module"},
    dwdm_carrier_band{YType::enumeration, "dwdm-carrier-band"},
    dwdm_carrier_channel{YType::str, "dwdm-carrier-channel"},
    dwdm_carrier_frequency{YType::str, "dwdm-carrier-frequency"},
    dwdm_carrier_wavelength{YType::str, "dwdm-carrier-wavelength"},
    grey_wavelength{YType::uint32, "grey-wavelength"},
    rx_low_threshold{YType::int32, "rx-low-threshold"},
    rx_high_threshold{YType::int32, "rx-high-threshold"},
    lbc_high_threshold{YType::int32, "lbc-high-threshold"},
    tx_low_threshold{YType::int32, "tx-low-threshold"},
    tx_high_threshold{YType::int32, "tx-high-threshold"},
    lbc_th_high_default{YType::int32, "lbc-th-high-default"},
    lbc_th_low_default{YType::int32, "lbc-th-low-default"},
    temp_low_threshold{YType::int32, "temp-low-threshold"},
    temp_high_threshold{YType::int32, "temp-high-threshold"},
    volt_low_threshold{YType::int32, "volt-low-threshold"},
    volt_high_threshold{YType::int32, "volt-high-threshold"},
    cd{YType::int32, "cd"},
    cd_min{YType::int32, "cd-min"},
    cd_max{YType::int32, "cd-max"},
    cd_low_threshold{YType::int32, "cd-low-threshold"},
    cd_high_threshold{YType::int32, "cd-high-threshold"},
    osnr_low_threshold{YType::str, "osnr-low-threshold"},
    dgd_high_threshold{YType::str, "dgd-high-threshold"},
    polarization_mode_dispersion{YType::str, "polarization-mode-dispersion"},
    second_order_polarization_mode_dispersion{YType::str, "second-order-polarization-mode-dispersion"},
    optical_signal_to_noise_ratio{YType::str, "optical-signal-to-noise-ratio"},
    polarization_dependent_loss{YType::str, "polarization-dependent-loss"},
    polarization_change_rate{YType::str, "polarization-change-rate"},
    differential_group_delay{YType::str, "differential-group-delay"},
    phase_noise{YType::str, "phase-noise"},
    pm_enable{YType::uint32, "pm-enable"},
    laser_state{YType::enumeration, "laser-state"},
    led_state{YType::enumeration, "led-state"},
    controller_state{YType::enumeration, "controller-state"},
    form_factor{YType::enumeration, "form-factor"},
    phy_type{YType::enumeration, "phy-type"},
    cfg_tx_power{YType::int32, "cfg-tx-power"},
    cfg_tx_power_configurable{YType::boolean, "cfg-tx-power-configurable"},
    temperature{YType::int32, "temperature"},
    voltage{YType::int32, "voltage"},
    display_volt_temp{YType::boolean, "display-volt-temp"},
    cd_configurable{YType::boolean, "cd-configurable"},
    optics_fec{YType::enumeration, "optics-fec"},
    port_type{YType::enumeration, "port-type"},
    port_status{YType::enumeration, "port-status"},
    rx_voa_attenuation{YType::int32, "rx-voa-attenuation"},
    tx_voa_attenuation{YType::int32, "tx-voa-attenuation"},
    ampli_gain{YType::int32, "ampli-gain"},
    ampli_tilt{YType::int32, "ampli-tilt"},
    rx_power_th_configurable{YType::boolean, "rx-power-th-configurable"},
    tx_power_th_configurable{YType::boolean, "tx-power-th-configurable"},
    rx_voa_attenuation_config_val{YType::int32, "rx-voa-attenuation-config-val"},
    tx_voa_attenuation_config_val{YType::int32, "tx-voa-attenuation-config-val"},
    ampli_control_mode_config_val{YType::enumeration, "ampli-control-mode-config-val"},
    ampli_gain_range_config_val{YType::enumeration, "ampli-gain-range-config-val"},
    ampli_gain_config_val{YType::int32, "ampli-gain-config-val"},
    ampli_tilt_config_val{YType::int32, "ampli-tilt-config-val"},
    ampli_channel_power_config_val{YType::int32, "ampli-channel-power-config-val"},
    channel_power_max_delta_config_val{YType::int32, "channel-power-max-delta-config-val"},
    ampli_gain_thr_deg_low_config_val{YType::int32, "ampli-gain-thr-deg-low-config-val"},
    ampli_gain_thr_deg_high_config_val{YType::int32, "ampli-gain-thr-deg-high-config-val"},
    osri_config_val{YType::boolean, "osri-config-val"},
    safety_control_mode_config_val{YType::enumeration, "safety-control-mode-config-val"},
    total_rx_power{YType::int32, "total-rx-power"},
    total_tx_power{YType::int32, "total-tx-power"},
    is_bo_configured{YType::boolean, "is-bo-configured"},
    is_ext_param_valid{YType::boolean, "is-ext-param-valid"},
    alarm_detected{YType::boolean, "alarm-detected"},
    rx_low_warning_threshold{YType::int32, "rx-low-warning-threshold"},
    rx_high_warning_threshold{YType::int32, "rx-high-warning-threshold"},
    tx_low_warning_threshold{YType::int32, "tx-low-warning-threshold"},
    tx_high_warning_threshold{YType::int32, "tx-high-warning-threshold"},
    lbc_th_high_warning_default{YType::int32, "lbc-th-high-warning-default"},
    lbc_th_low_warning_default{YType::int32, "lbc-th-low-warning-default"},
    temp_low_warning_threshold{YType::int32, "temp-low-warning-threshold"},
    temp_high_warning_threshold{YType::int32, "temp-high-warning-threshold"},
    volt_low_warning_threshold{YType::int32, "volt-low-warning-threshold"},
    volt_high_warning_threshold{YType::int32, "volt-high-warning-threshold"},
    ampli_gain_range{YType::enumeration, "ampli-gain-range"},
    safety_control_mode{YType::enumeration, "safety-control-mode"},
    osri{YType::boolean, "osri"},
    description{YType::str, "description"},
    is_optics_type_string_valid{YType::boolean, "is-optics-type-string-valid"},
    optics_type_str{YType::str, "optics-type-str"}
    	,
    network_srlg_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo>())
	,optics_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo>())
	,ots_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo>())
	,transceiver_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo>())
	,ext_param_val(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal>())
	,ext_param_threshold_val(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal>())
	,spectrum_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo>())
{
    network_srlg_info->parent = this;
    optics_alarm_info->parent = this;
    ots_alarm_info->parent = this;
    transceiver_info->parent = this;
    ext_param_val->parent = this;
    ext_param_threshold_val->parent = this;
    spectrum_info->parent = this;

    yang_name = "optics-info"; yang_parent_name = "optics-port"; is_top_level_class = false; has_list_ancestor = true;
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
    return transport_admin_state.is_set
	|| optics_present.is_set
	|| optics_type.is_set
	|| derived_optics_type.is_set
	|| optics_module.is_set
	|| dwdm_carrier_band.is_set
	|| dwdm_carrier_channel.is_set
	|| dwdm_carrier_frequency.is_set
	|| dwdm_carrier_wavelength.is_set
	|| grey_wavelength.is_set
	|| rx_low_threshold.is_set
	|| rx_high_threshold.is_set
	|| lbc_high_threshold.is_set
	|| tx_low_threshold.is_set
	|| tx_high_threshold.is_set
	|| lbc_th_high_default.is_set
	|| lbc_th_low_default.is_set
	|| temp_low_threshold.is_set
	|| temp_high_threshold.is_set
	|| volt_low_threshold.is_set
	|| volt_high_threshold.is_set
	|| cd.is_set
	|| cd_min.is_set
	|| cd_max.is_set
	|| cd_low_threshold.is_set
	|| cd_high_threshold.is_set
	|| osnr_low_threshold.is_set
	|| dgd_high_threshold.is_set
	|| polarization_mode_dispersion.is_set
	|| second_order_polarization_mode_dispersion.is_set
	|| optical_signal_to_noise_ratio.is_set
	|| polarization_dependent_loss.is_set
	|| polarization_change_rate.is_set
	|| differential_group_delay.is_set
	|| phase_noise.is_set
	|| pm_enable.is_set
	|| laser_state.is_set
	|| led_state.is_set
	|| controller_state.is_set
	|| form_factor.is_set
	|| phy_type.is_set
	|| cfg_tx_power.is_set
	|| cfg_tx_power_configurable.is_set
	|| temperature.is_set
	|| voltage.is_set
	|| display_volt_temp.is_set
	|| cd_configurable.is_set
	|| optics_fec.is_set
	|| port_type.is_set
	|| port_status.is_set
	|| rx_voa_attenuation.is_set
	|| tx_voa_attenuation.is_set
	|| ampli_gain.is_set
	|| ampli_tilt.is_set
	|| rx_power_th_configurable.is_set
	|| tx_power_th_configurable.is_set
	|| rx_voa_attenuation_config_val.is_set
	|| tx_voa_attenuation_config_val.is_set
	|| ampli_control_mode_config_val.is_set
	|| ampli_gain_range_config_val.is_set
	|| ampli_gain_config_val.is_set
	|| ampli_tilt_config_val.is_set
	|| ampli_channel_power_config_val.is_set
	|| channel_power_max_delta_config_val.is_set
	|| ampli_gain_thr_deg_low_config_val.is_set
	|| ampli_gain_thr_deg_high_config_val.is_set
	|| osri_config_val.is_set
	|| safety_control_mode_config_val.is_set
	|| total_rx_power.is_set
	|| total_tx_power.is_set
	|| is_bo_configured.is_set
	|| is_ext_param_valid.is_set
	|| alarm_detected.is_set
	|| rx_low_warning_threshold.is_set
	|| rx_high_warning_threshold.is_set
	|| tx_low_warning_threshold.is_set
	|| tx_high_warning_threshold.is_set
	|| lbc_th_high_warning_default.is_set
	|| lbc_th_low_warning_default.is_set
	|| temp_low_warning_threshold.is_set
	|| temp_high_warning_threshold.is_set
	|| volt_low_warning_threshold.is_set
	|| volt_high_warning_threshold.is_set
	|| ampli_gain_range.is_set
	|| safety_control_mode.is_set
	|| osri.is_set
	|| description.is_set
	|| is_optics_type_string_valid.is_set
	|| optics_type_str.is_set
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_data())
	|| (optics_alarm_info !=  nullptr && optics_alarm_info->has_data())
	|| (ots_alarm_info !=  nullptr && ots_alarm_info->has_data())
	|| (transceiver_info !=  nullptr && transceiver_info->has_data())
	|| (ext_param_val !=  nullptr && ext_param_val->has_data())
	|| (ext_param_threshold_val !=  nullptr && ext_param_threshold_val->has_data())
	|| (spectrum_info !=  nullptr && spectrum_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::has_operation() const
{
    for (std::size_t index=0; index<lane_data.size(); index++)
    {
        if(lane_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transport_admin_state.yfilter)
	|| ydk::is_set(optics_present.yfilter)
	|| ydk::is_set(optics_type.yfilter)
	|| ydk::is_set(derived_optics_type.yfilter)
	|| ydk::is_set(optics_module.yfilter)
	|| ydk::is_set(dwdm_carrier_band.yfilter)
	|| ydk::is_set(dwdm_carrier_channel.yfilter)
	|| ydk::is_set(dwdm_carrier_frequency.yfilter)
	|| ydk::is_set(dwdm_carrier_wavelength.yfilter)
	|| ydk::is_set(grey_wavelength.yfilter)
	|| ydk::is_set(rx_low_threshold.yfilter)
	|| ydk::is_set(rx_high_threshold.yfilter)
	|| ydk::is_set(lbc_high_threshold.yfilter)
	|| ydk::is_set(tx_low_threshold.yfilter)
	|| ydk::is_set(tx_high_threshold.yfilter)
	|| ydk::is_set(lbc_th_high_default.yfilter)
	|| ydk::is_set(lbc_th_low_default.yfilter)
	|| ydk::is_set(temp_low_threshold.yfilter)
	|| ydk::is_set(temp_high_threshold.yfilter)
	|| ydk::is_set(volt_low_threshold.yfilter)
	|| ydk::is_set(volt_high_threshold.yfilter)
	|| ydk::is_set(cd.yfilter)
	|| ydk::is_set(cd_min.yfilter)
	|| ydk::is_set(cd_max.yfilter)
	|| ydk::is_set(cd_low_threshold.yfilter)
	|| ydk::is_set(cd_high_threshold.yfilter)
	|| ydk::is_set(osnr_low_threshold.yfilter)
	|| ydk::is_set(dgd_high_threshold.yfilter)
	|| ydk::is_set(polarization_mode_dispersion.yfilter)
	|| ydk::is_set(second_order_polarization_mode_dispersion.yfilter)
	|| ydk::is_set(optical_signal_to_noise_ratio.yfilter)
	|| ydk::is_set(polarization_dependent_loss.yfilter)
	|| ydk::is_set(polarization_change_rate.yfilter)
	|| ydk::is_set(differential_group_delay.yfilter)
	|| ydk::is_set(phase_noise.yfilter)
	|| ydk::is_set(pm_enable.yfilter)
	|| ydk::is_set(laser_state.yfilter)
	|| ydk::is_set(led_state.yfilter)
	|| ydk::is_set(controller_state.yfilter)
	|| ydk::is_set(form_factor.yfilter)
	|| ydk::is_set(phy_type.yfilter)
	|| ydk::is_set(cfg_tx_power.yfilter)
	|| ydk::is_set(cfg_tx_power_configurable.yfilter)
	|| ydk::is_set(temperature.yfilter)
	|| ydk::is_set(voltage.yfilter)
	|| ydk::is_set(display_volt_temp.yfilter)
	|| ydk::is_set(cd_configurable.yfilter)
	|| ydk::is_set(optics_fec.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(port_status.yfilter)
	|| ydk::is_set(rx_voa_attenuation.yfilter)
	|| ydk::is_set(tx_voa_attenuation.yfilter)
	|| ydk::is_set(ampli_gain.yfilter)
	|| ydk::is_set(ampli_tilt.yfilter)
	|| ydk::is_set(rx_power_th_configurable.yfilter)
	|| ydk::is_set(tx_power_th_configurable.yfilter)
	|| ydk::is_set(rx_voa_attenuation_config_val.yfilter)
	|| ydk::is_set(tx_voa_attenuation_config_val.yfilter)
	|| ydk::is_set(ampli_control_mode_config_val.yfilter)
	|| ydk::is_set(ampli_gain_range_config_val.yfilter)
	|| ydk::is_set(ampli_gain_config_val.yfilter)
	|| ydk::is_set(ampli_tilt_config_val.yfilter)
	|| ydk::is_set(ampli_channel_power_config_val.yfilter)
	|| ydk::is_set(channel_power_max_delta_config_val.yfilter)
	|| ydk::is_set(ampli_gain_thr_deg_low_config_val.yfilter)
	|| ydk::is_set(ampli_gain_thr_deg_high_config_val.yfilter)
	|| ydk::is_set(osri_config_val.yfilter)
	|| ydk::is_set(safety_control_mode_config_val.yfilter)
	|| ydk::is_set(total_rx_power.yfilter)
	|| ydk::is_set(total_tx_power.yfilter)
	|| ydk::is_set(is_bo_configured.yfilter)
	|| ydk::is_set(is_ext_param_valid.yfilter)
	|| ydk::is_set(alarm_detected.yfilter)
	|| ydk::is_set(rx_low_warning_threshold.yfilter)
	|| ydk::is_set(rx_high_warning_threshold.yfilter)
	|| ydk::is_set(tx_low_warning_threshold.yfilter)
	|| ydk::is_set(tx_high_warning_threshold.yfilter)
	|| ydk::is_set(lbc_th_high_warning_default.yfilter)
	|| ydk::is_set(lbc_th_low_warning_default.yfilter)
	|| ydk::is_set(temp_low_warning_threshold.yfilter)
	|| ydk::is_set(temp_high_warning_threshold.yfilter)
	|| ydk::is_set(volt_low_warning_threshold.yfilter)
	|| ydk::is_set(volt_high_warning_threshold.yfilter)
	|| ydk::is_set(ampli_gain_range.yfilter)
	|| ydk::is_set(safety_control_mode.yfilter)
	|| ydk::is_set(osri.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(is_optics_type_string_valid.yfilter)
	|| ydk::is_set(optics_type_str.yfilter)
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_operation())
	|| (optics_alarm_info !=  nullptr && optics_alarm_info->has_operation())
	|| (ots_alarm_info !=  nullptr && ots_alarm_info->has_operation())
	|| (transceiver_info !=  nullptr && transceiver_info->has_operation())
	|| (ext_param_val !=  nullptr && ext_param_val->has_operation())
	|| (ext_param_threshold_val !=  nullptr && ext_param_threshold_val->has_operation())
	|| (spectrum_info !=  nullptr && spectrum_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_admin_state.is_set || is_set(transport_admin_state.yfilter)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());
    if (optics_present.is_set || is_set(optics_present.yfilter)) leaf_name_data.push_back(optics_present.get_name_leafdata());
    if (optics_type.is_set || is_set(optics_type.yfilter)) leaf_name_data.push_back(optics_type.get_name_leafdata());
    if (derived_optics_type.is_set || is_set(derived_optics_type.yfilter)) leaf_name_data.push_back(derived_optics_type.get_name_leafdata());
    if (optics_module.is_set || is_set(optics_module.yfilter)) leaf_name_data.push_back(optics_module.get_name_leafdata());
    if (dwdm_carrier_band.is_set || is_set(dwdm_carrier_band.yfilter)) leaf_name_data.push_back(dwdm_carrier_band.get_name_leafdata());
    if (dwdm_carrier_channel.is_set || is_set(dwdm_carrier_channel.yfilter)) leaf_name_data.push_back(dwdm_carrier_channel.get_name_leafdata());
    if (dwdm_carrier_frequency.is_set || is_set(dwdm_carrier_frequency.yfilter)) leaf_name_data.push_back(dwdm_carrier_frequency.get_name_leafdata());
    if (dwdm_carrier_wavelength.is_set || is_set(dwdm_carrier_wavelength.yfilter)) leaf_name_data.push_back(dwdm_carrier_wavelength.get_name_leafdata());
    if (grey_wavelength.is_set || is_set(grey_wavelength.yfilter)) leaf_name_data.push_back(grey_wavelength.get_name_leafdata());
    if (rx_low_threshold.is_set || is_set(rx_low_threshold.yfilter)) leaf_name_data.push_back(rx_low_threshold.get_name_leafdata());
    if (rx_high_threshold.is_set || is_set(rx_high_threshold.yfilter)) leaf_name_data.push_back(rx_high_threshold.get_name_leafdata());
    if (lbc_high_threshold.is_set || is_set(lbc_high_threshold.yfilter)) leaf_name_data.push_back(lbc_high_threshold.get_name_leafdata());
    if (tx_low_threshold.is_set || is_set(tx_low_threshold.yfilter)) leaf_name_data.push_back(tx_low_threshold.get_name_leafdata());
    if (tx_high_threshold.is_set || is_set(tx_high_threshold.yfilter)) leaf_name_data.push_back(tx_high_threshold.get_name_leafdata());
    if (lbc_th_high_default.is_set || is_set(lbc_th_high_default.yfilter)) leaf_name_data.push_back(lbc_th_high_default.get_name_leafdata());
    if (lbc_th_low_default.is_set || is_set(lbc_th_low_default.yfilter)) leaf_name_data.push_back(lbc_th_low_default.get_name_leafdata());
    if (temp_low_threshold.is_set || is_set(temp_low_threshold.yfilter)) leaf_name_data.push_back(temp_low_threshold.get_name_leafdata());
    if (temp_high_threshold.is_set || is_set(temp_high_threshold.yfilter)) leaf_name_data.push_back(temp_high_threshold.get_name_leafdata());
    if (volt_low_threshold.is_set || is_set(volt_low_threshold.yfilter)) leaf_name_data.push_back(volt_low_threshold.get_name_leafdata());
    if (volt_high_threshold.is_set || is_set(volt_high_threshold.yfilter)) leaf_name_data.push_back(volt_high_threshold.get_name_leafdata());
    if (cd.is_set || is_set(cd.yfilter)) leaf_name_data.push_back(cd.get_name_leafdata());
    if (cd_min.is_set || is_set(cd_min.yfilter)) leaf_name_data.push_back(cd_min.get_name_leafdata());
    if (cd_max.is_set || is_set(cd_max.yfilter)) leaf_name_data.push_back(cd_max.get_name_leafdata());
    if (cd_low_threshold.is_set || is_set(cd_low_threshold.yfilter)) leaf_name_data.push_back(cd_low_threshold.get_name_leafdata());
    if (cd_high_threshold.is_set || is_set(cd_high_threshold.yfilter)) leaf_name_data.push_back(cd_high_threshold.get_name_leafdata());
    if (osnr_low_threshold.is_set || is_set(osnr_low_threshold.yfilter)) leaf_name_data.push_back(osnr_low_threshold.get_name_leafdata());
    if (dgd_high_threshold.is_set || is_set(dgd_high_threshold.yfilter)) leaf_name_data.push_back(dgd_high_threshold.get_name_leafdata());
    if (polarization_mode_dispersion.is_set || is_set(polarization_mode_dispersion.yfilter)) leaf_name_data.push_back(polarization_mode_dispersion.get_name_leafdata());
    if (second_order_polarization_mode_dispersion.is_set || is_set(second_order_polarization_mode_dispersion.yfilter)) leaf_name_data.push_back(second_order_polarization_mode_dispersion.get_name_leafdata());
    if (optical_signal_to_noise_ratio.is_set || is_set(optical_signal_to_noise_ratio.yfilter)) leaf_name_data.push_back(optical_signal_to_noise_ratio.get_name_leafdata());
    if (polarization_dependent_loss.is_set || is_set(polarization_dependent_loss.yfilter)) leaf_name_data.push_back(polarization_dependent_loss.get_name_leafdata());
    if (polarization_change_rate.is_set || is_set(polarization_change_rate.yfilter)) leaf_name_data.push_back(polarization_change_rate.get_name_leafdata());
    if (differential_group_delay.is_set || is_set(differential_group_delay.yfilter)) leaf_name_data.push_back(differential_group_delay.get_name_leafdata());
    if (phase_noise.is_set || is_set(phase_noise.yfilter)) leaf_name_data.push_back(phase_noise.get_name_leafdata());
    if (pm_enable.is_set || is_set(pm_enable.yfilter)) leaf_name_data.push_back(pm_enable.get_name_leafdata());
    if (laser_state.is_set || is_set(laser_state.yfilter)) leaf_name_data.push_back(laser_state.get_name_leafdata());
    if (led_state.is_set || is_set(led_state.yfilter)) leaf_name_data.push_back(led_state.get_name_leafdata());
    if (controller_state.is_set || is_set(controller_state.yfilter)) leaf_name_data.push_back(controller_state.get_name_leafdata());
    if (form_factor.is_set || is_set(form_factor.yfilter)) leaf_name_data.push_back(form_factor.get_name_leafdata());
    if (phy_type.is_set || is_set(phy_type.yfilter)) leaf_name_data.push_back(phy_type.get_name_leafdata());
    if (cfg_tx_power.is_set || is_set(cfg_tx_power.yfilter)) leaf_name_data.push_back(cfg_tx_power.get_name_leafdata());
    if (cfg_tx_power_configurable.is_set || is_set(cfg_tx_power_configurable.yfilter)) leaf_name_data.push_back(cfg_tx_power_configurable.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.yfilter)) leaf_name_data.push_back(temperature.get_name_leafdata());
    if (voltage.is_set || is_set(voltage.yfilter)) leaf_name_data.push_back(voltage.get_name_leafdata());
    if (display_volt_temp.is_set || is_set(display_volt_temp.yfilter)) leaf_name_data.push_back(display_volt_temp.get_name_leafdata());
    if (cd_configurable.is_set || is_set(cd_configurable.yfilter)) leaf_name_data.push_back(cd_configurable.get_name_leafdata());
    if (optics_fec.is_set || is_set(optics_fec.yfilter)) leaf_name_data.push_back(optics_fec.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (port_status.is_set || is_set(port_status.yfilter)) leaf_name_data.push_back(port_status.get_name_leafdata());
    if (rx_voa_attenuation.is_set || is_set(rx_voa_attenuation.yfilter)) leaf_name_data.push_back(rx_voa_attenuation.get_name_leafdata());
    if (tx_voa_attenuation.is_set || is_set(tx_voa_attenuation.yfilter)) leaf_name_data.push_back(tx_voa_attenuation.get_name_leafdata());
    if (ampli_gain.is_set || is_set(ampli_gain.yfilter)) leaf_name_data.push_back(ampli_gain.get_name_leafdata());
    if (ampli_tilt.is_set || is_set(ampli_tilt.yfilter)) leaf_name_data.push_back(ampli_tilt.get_name_leafdata());
    if (rx_power_th_configurable.is_set || is_set(rx_power_th_configurable.yfilter)) leaf_name_data.push_back(rx_power_th_configurable.get_name_leafdata());
    if (tx_power_th_configurable.is_set || is_set(tx_power_th_configurable.yfilter)) leaf_name_data.push_back(tx_power_th_configurable.get_name_leafdata());
    if (rx_voa_attenuation_config_val.is_set || is_set(rx_voa_attenuation_config_val.yfilter)) leaf_name_data.push_back(rx_voa_attenuation_config_val.get_name_leafdata());
    if (tx_voa_attenuation_config_val.is_set || is_set(tx_voa_attenuation_config_val.yfilter)) leaf_name_data.push_back(tx_voa_attenuation_config_val.get_name_leafdata());
    if (ampli_control_mode_config_val.is_set || is_set(ampli_control_mode_config_val.yfilter)) leaf_name_data.push_back(ampli_control_mode_config_val.get_name_leafdata());
    if (ampli_gain_range_config_val.is_set || is_set(ampli_gain_range_config_val.yfilter)) leaf_name_data.push_back(ampli_gain_range_config_val.get_name_leafdata());
    if (ampli_gain_config_val.is_set || is_set(ampli_gain_config_val.yfilter)) leaf_name_data.push_back(ampli_gain_config_val.get_name_leafdata());
    if (ampli_tilt_config_val.is_set || is_set(ampli_tilt_config_val.yfilter)) leaf_name_data.push_back(ampli_tilt_config_val.get_name_leafdata());
    if (ampli_channel_power_config_val.is_set || is_set(ampli_channel_power_config_val.yfilter)) leaf_name_data.push_back(ampli_channel_power_config_val.get_name_leafdata());
    if (channel_power_max_delta_config_val.is_set || is_set(channel_power_max_delta_config_val.yfilter)) leaf_name_data.push_back(channel_power_max_delta_config_val.get_name_leafdata());
    if (ampli_gain_thr_deg_low_config_val.is_set || is_set(ampli_gain_thr_deg_low_config_val.yfilter)) leaf_name_data.push_back(ampli_gain_thr_deg_low_config_val.get_name_leafdata());
    if (ampli_gain_thr_deg_high_config_val.is_set || is_set(ampli_gain_thr_deg_high_config_val.yfilter)) leaf_name_data.push_back(ampli_gain_thr_deg_high_config_val.get_name_leafdata());
    if (osri_config_val.is_set || is_set(osri_config_val.yfilter)) leaf_name_data.push_back(osri_config_val.get_name_leafdata());
    if (safety_control_mode_config_val.is_set || is_set(safety_control_mode_config_val.yfilter)) leaf_name_data.push_back(safety_control_mode_config_val.get_name_leafdata());
    if (total_rx_power.is_set || is_set(total_rx_power.yfilter)) leaf_name_data.push_back(total_rx_power.get_name_leafdata());
    if (total_tx_power.is_set || is_set(total_tx_power.yfilter)) leaf_name_data.push_back(total_tx_power.get_name_leafdata());
    if (is_bo_configured.is_set || is_set(is_bo_configured.yfilter)) leaf_name_data.push_back(is_bo_configured.get_name_leafdata());
    if (is_ext_param_valid.is_set || is_set(is_ext_param_valid.yfilter)) leaf_name_data.push_back(is_ext_param_valid.get_name_leafdata());
    if (alarm_detected.is_set || is_set(alarm_detected.yfilter)) leaf_name_data.push_back(alarm_detected.get_name_leafdata());
    if (rx_low_warning_threshold.is_set || is_set(rx_low_warning_threshold.yfilter)) leaf_name_data.push_back(rx_low_warning_threshold.get_name_leafdata());
    if (rx_high_warning_threshold.is_set || is_set(rx_high_warning_threshold.yfilter)) leaf_name_data.push_back(rx_high_warning_threshold.get_name_leafdata());
    if (tx_low_warning_threshold.is_set || is_set(tx_low_warning_threshold.yfilter)) leaf_name_data.push_back(tx_low_warning_threshold.get_name_leafdata());
    if (tx_high_warning_threshold.is_set || is_set(tx_high_warning_threshold.yfilter)) leaf_name_data.push_back(tx_high_warning_threshold.get_name_leafdata());
    if (lbc_th_high_warning_default.is_set || is_set(lbc_th_high_warning_default.yfilter)) leaf_name_data.push_back(lbc_th_high_warning_default.get_name_leafdata());
    if (lbc_th_low_warning_default.is_set || is_set(lbc_th_low_warning_default.yfilter)) leaf_name_data.push_back(lbc_th_low_warning_default.get_name_leafdata());
    if (temp_low_warning_threshold.is_set || is_set(temp_low_warning_threshold.yfilter)) leaf_name_data.push_back(temp_low_warning_threshold.get_name_leafdata());
    if (temp_high_warning_threshold.is_set || is_set(temp_high_warning_threshold.yfilter)) leaf_name_data.push_back(temp_high_warning_threshold.get_name_leafdata());
    if (volt_low_warning_threshold.is_set || is_set(volt_low_warning_threshold.yfilter)) leaf_name_data.push_back(volt_low_warning_threshold.get_name_leafdata());
    if (volt_high_warning_threshold.is_set || is_set(volt_high_warning_threshold.yfilter)) leaf_name_data.push_back(volt_high_warning_threshold.get_name_leafdata());
    if (ampli_gain_range.is_set || is_set(ampli_gain_range.yfilter)) leaf_name_data.push_back(ampli_gain_range.get_name_leafdata());
    if (safety_control_mode.is_set || is_set(safety_control_mode.yfilter)) leaf_name_data.push_back(safety_control_mode.get_name_leafdata());
    if (osri.is_set || is_set(osri.yfilter)) leaf_name_data.push_back(osri.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (is_optics_type_string_valid.is_set || is_set(is_optics_type_string_valid.yfilter)) leaf_name_data.push_back(is_optics_type_string_valid.get_name_leafdata());
    if (optics_type_str.is_set || is_set(optics_type_str.yfilter)) leaf_name_data.push_back(optics_type_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "ext-param-val")
    {
        if(ext_param_val == nullptr)
        {
            ext_param_val = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal>();
        }
        return ext_param_val;
    }

    if(child_yang_name == "ext-param-threshold-val")
    {
        if(ext_param_threshold_val == nullptr)
        {
            ext_param_threshold_val = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal>();
        }
        return ext_param_threshold_val;
    }

    if(child_yang_name == "spectrum-info")
    {
        if(spectrum_info == nullptr)
        {
            spectrum_info = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo>();
        }
        return spectrum_info;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(ext_param_val != nullptr)
    {
        children["ext-param-val"] = ext_param_val;
    }

    if(ext_param_threshold_val != nullptr)
    {
        children["ext-param-threshold-val"] = ext_param_threshold_val;
    }

    if(spectrum_info != nullptr)
    {
        children["spectrum-info"] = spectrum_info;
    }

    for (auto const & c : lane_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
        transport_admin_state.value_namespace = name_space;
        transport_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-present")
    {
        optics_present = value;
        optics_present.value_namespace = name_space;
        optics_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-type")
    {
        optics_type = value;
        optics_type.value_namespace = name_space;
        optics_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "derived-optics-type")
    {
        derived_optics_type = value;
        derived_optics_type.value_namespace = name_space;
        derived_optics_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-module")
    {
        optics_module = value;
        optics_module.value_namespace = name_space;
        optics_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-carrier-band")
    {
        dwdm_carrier_band = value;
        dwdm_carrier_band.value_namespace = name_space;
        dwdm_carrier_band.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-carrier-channel")
    {
        dwdm_carrier_channel = value;
        dwdm_carrier_channel.value_namespace = name_space;
        dwdm_carrier_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-carrier-frequency")
    {
        dwdm_carrier_frequency = value;
        dwdm_carrier_frequency.value_namespace = name_space;
        dwdm_carrier_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-carrier-wavelength")
    {
        dwdm_carrier_wavelength = value;
        dwdm_carrier_wavelength.value_namespace = name_space;
        dwdm_carrier_wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grey-wavelength")
    {
        grey_wavelength = value;
        grey_wavelength.value_namespace = name_space;
        grey_wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-low-threshold")
    {
        rx_low_threshold = value;
        rx_low_threshold.value_namespace = name_space;
        rx_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-high-threshold")
    {
        rx_high_threshold = value;
        rx_high_threshold.value_namespace = name_space;
        rx_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbc-high-threshold")
    {
        lbc_high_threshold = value;
        lbc_high_threshold.value_namespace = name_space;
        lbc_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-low-threshold")
    {
        tx_low_threshold = value;
        tx_low_threshold.value_namespace = name_space;
        tx_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-high-threshold")
    {
        tx_high_threshold = value;
        tx_high_threshold.value_namespace = name_space;
        tx_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbc-th-high-default")
    {
        lbc_th_high_default = value;
        lbc_th_high_default.value_namespace = name_space;
        lbc_th_high_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbc-th-low-default")
    {
        lbc_th_low_default = value;
        lbc_th_low_default.value_namespace = name_space;
        lbc_th_low_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-low-threshold")
    {
        temp_low_threshold = value;
        temp_low_threshold.value_namespace = name_space;
        temp_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-high-threshold")
    {
        temp_high_threshold = value;
        temp_high_threshold.value_namespace = name_space;
        temp_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt-low-threshold")
    {
        volt_low_threshold = value;
        volt_low_threshold.value_namespace = name_space;
        volt_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt-high-threshold")
    {
        volt_high_threshold = value;
        volt_high_threshold.value_namespace = name_space;
        volt_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd")
    {
        cd = value;
        cd.value_namespace = name_space;
        cd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-min")
    {
        cd_min = value;
        cd_min.value_namespace = name_space;
        cd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-max")
    {
        cd_max = value;
        cd_max.value_namespace = name_space;
        cd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-low-threshold")
    {
        cd_low_threshold = value;
        cd_low_threshold.value_namespace = name_space;
        cd_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-high-threshold")
    {
        cd_high_threshold = value;
        cd_high_threshold.value_namespace = name_space;
        cd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "osnr-low-threshold")
    {
        osnr_low_threshold = value;
        osnr_low_threshold.value_namespace = name_space;
        osnr_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dgd-high-threshold")
    {
        dgd_high_threshold = value;
        dgd_high_threshold.value_namespace = name_space;
        dgd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polarization-mode-dispersion")
    {
        polarization_mode_dispersion = value;
        polarization_mode_dispersion.value_namespace = name_space;
        polarization_mode_dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-order-polarization-mode-dispersion")
    {
        second_order_polarization_mode_dispersion = value;
        second_order_polarization_mode_dispersion.value_namespace = name_space;
        second_order_polarization_mode_dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-signal-to-noise-ratio")
    {
        optical_signal_to_noise_ratio = value;
        optical_signal_to_noise_ratio.value_namespace = name_space;
        optical_signal_to_noise_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polarization-dependent-loss")
    {
        polarization_dependent_loss = value;
        polarization_dependent_loss.value_namespace = name_space;
        polarization_dependent_loss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polarization-change-rate")
    {
        polarization_change_rate = value;
        polarization_change_rate.value_namespace = name_space;
        polarization_change_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "differential-group-delay")
    {
        differential_group_delay = value;
        differential_group_delay.value_namespace = name_space;
        differential_group_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phase-noise")
    {
        phase_noise = value;
        phase_noise.value_namespace = name_space;
        phase_noise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-enable")
    {
        pm_enable = value;
        pm_enable.value_namespace = name_space;
        pm_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-state")
    {
        laser_state = value;
        laser_state.value_namespace = name_space;
        laser_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "led-state")
    {
        led_state = value;
        led_state.value_namespace = name_space;
        led_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-state")
    {
        controller_state = value;
        controller_state.value_namespace = name_space;
        controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "form-factor")
    {
        form_factor = value;
        form_factor.value_namespace = name_space;
        form_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-type")
    {
        phy_type = value;
        phy_type.value_namespace = name_space;
        phy_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-tx-power")
    {
        cfg_tx_power = value;
        cfg_tx_power.value_namespace = name_space;
        cfg_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-tx-power-configurable")
    {
        cfg_tx_power_configurable = value;
        cfg_tx_power_configurable.value_namespace = name_space;
        cfg_tx_power_configurable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature")
    {
        temperature = value;
        temperature.value_namespace = name_space;
        temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voltage")
    {
        voltage = value;
        voltage.value_namespace = name_space;
        voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-volt-temp")
    {
        display_volt_temp = value;
        display_volt_temp.value_namespace = name_space;
        display_volt_temp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-configurable")
    {
        cd_configurable = value;
        cd_configurable.value_namespace = name_space;
        cd_configurable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-fec")
    {
        optics_fec = value;
        optics_fec.value_namespace = name_space;
        optics_fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-status")
    {
        port_status = value;
        port_status.value_namespace = name_space;
        port_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-voa-attenuation")
    {
        rx_voa_attenuation = value;
        rx_voa_attenuation.value_namespace = name_space;
        rx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-voa-attenuation")
    {
        tx_voa_attenuation = value;
        tx_voa_attenuation.value_namespace = name_space;
        tx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-gain")
    {
        ampli_gain = value;
        ampli_gain.value_namespace = name_space;
        ampli_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-tilt")
    {
        ampli_tilt = value;
        ampli_tilt.value_namespace = name_space;
        ampli_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-power-th-configurable")
    {
        rx_power_th_configurable = value;
        rx_power_th_configurable.value_namespace = name_space;
        rx_power_th_configurable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-power-th-configurable")
    {
        tx_power_th_configurable = value;
        tx_power_th_configurable.value_namespace = name_space;
        tx_power_th_configurable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-voa-attenuation-config-val")
    {
        rx_voa_attenuation_config_val = value;
        rx_voa_attenuation_config_val.value_namespace = name_space;
        rx_voa_attenuation_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-voa-attenuation-config-val")
    {
        tx_voa_attenuation_config_val = value;
        tx_voa_attenuation_config_val.value_namespace = name_space;
        tx_voa_attenuation_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-control-mode-config-val")
    {
        ampli_control_mode_config_val = value;
        ampli_control_mode_config_val.value_namespace = name_space;
        ampli_control_mode_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-gain-range-config-val")
    {
        ampli_gain_range_config_val = value;
        ampli_gain_range_config_val.value_namespace = name_space;
        ampli_gain_range_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-gain-config-val")
    {
        ampli_gain_config_val = value;
        ampli_gain_config_val.value_namespace = name_space;
        ampli_gain_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-tilt-config-val")
    {
        ampli_tilt_config_val = value;
        ampli_tilt_config_val.value_namespace = name_space;
        ampli_tilt_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-channel-power-config-val")
    {
        ampli_channel_power_config_val = value;
        ampli_channel_power_config_val.value_namespace = name_space;
        ampli_channel_power_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-power-max-delta-config-val")
    {
        channel_power_max_delta_config_val = value;
        channel_power_max_delta_config_val.value_namespace = name_space;
        channel_power_max_delta_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-gain-thr-deg-low-config-val")
    {
        ampli_gain_thr_deg_low_config_val = value;
        ampli_gain_thr_deg_low_config_val.value_namespace = name_space;
        ampli_gain_thr_deg_low_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-gain-thr-deg-high-config-val")
    {
        ampli_gain_thr_deg_high_config_val = value;
        ampli_gain_thr_deg_high_config_val.value_namespace = name_space;
        ampli_gain_thr_deg_high_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "osri-config-val")
    {
        osri_config_val = value;
        osri_config_val.value_namespace = name_space;
        osri_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safety-control-mode-config-val")
    {
        safety_control_mode_config_val = value;
        safety_control_mode_config_val.value_namespace = name_space;
        safety_control_mode_config_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rx-power")
    {
        total_rx_power = value;
        total_rx_power.value_namespace = name_space;
        total_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tx-power")
    {
        total_tx_power = value;
        total_tx_power.value_namespace = name_space;
        total_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bo-configured")
    {
        is_bo_configured = value;
        is_bo_configured.value_namespace = name_space;
        is_bo_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ext-param-valid")
    {
        is_ext_param_valid = value;
        is_ext_param_valid.value_namespace = name_space;
        is_ext_param_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-detected")
    {
        alarm_detected = value;
        alarm_detected.value_namespace = name_space;
        alarm_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-low-warning-threshold")
    {
        rx_low_warning_threshold = value;
        rx_low_warning_threshold.value_namespace = name_space;
        rx_low_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-high-warning-threshold")
    {
        rx_high_warning_threshold = value;
        rx_high_warning_threshold.value_namespace = name_space;
        rx_high_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-low-warning-threshold")
    {
        tx_low_warning_threshold = value;
        tx_low_warning_threshold.value_namespace = name_space;
        tx_low_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-high-warning-threshold")
    {
        tx_high_warning_threshold = value;
        tx_high_warning_threshold.value_namespace = name_space;
        tx_high_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbc-th-high-warning-default")
    {
        lbc_th_high_warning_default = value;
        lbc_th_high_warning_default.value_namespace = name_space;
        lbc_th_high_warning_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbc-th-low-warning-default")
    {
        lbc_th_low_warning_default = value;
        lbc_th_low_warning_default.value_namespace = name_space;
        lbc_th_low_warning_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-low-warning-threshold")
    {
        temp_low_warning_threshold = value;
        temp_low_warning_threshold.value_namespace = name_space;
        temp_low_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-high-warning-threshold")
    {
        temp_high_warning_threshold = value;
        temp_high_warning_threshold.value_namespace = name_space;
        temp_high_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt-low-warning-threshold")
    {
        volt_low_warning_threshold = value;
        volt_low_warning_threshold.value_namespace = name_space;
        volt_low_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt-high-warning-threshold")
    {
        volt_high_warning_threshold = value;
        volt_high_warning_threshold.value_namespace = name_space;
        volt_high_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ampli-gain-range")
    {
        ampli_gain_range = value;
        ampli_gain_range.value_namespace = name_space;
        ampli_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safety-control-mode")
    {
        safety_control_mode = value;
        safety_control_mode.value_namespace = name_space;
        safety_control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "osri")
    {
        osri = value;
        osri.value_namespace = name_space;
        osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-optics-type-string-valid")
    {
        is_optics_type_string_valid = value;
        is_optics_type_string_valid.value_namespace = name_space;
        is_optics_type_string_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-type-str")
    {
        optics_type_str = value;
        optics_type_str.value_namespace = name_space;
        optics_type_str.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-admin-state")
    {
        transport_admin_state.yfilter = yfilter;
    }
    if(value_path == "optics-present")
    {
        optics_present.yfilter = yfilter;
    }
    if(value_path == "optics-type")
    {
        optics_type.yfilter = yfilter;
    }
    if(value_path == "derived-optics-type")
    {
        derived_optics_type.yfilter = yfilter;
    }
    if(value_path == "optics-module")
    {
        optics_module.yfilter = yfilter;
    }
    if(value_path == "dwdm-carrier-band")
    {
        dwdm_carrier_band.yfilter = yfilter;
    }
    if(value_path == "dwdm-carrier-channel")
    {
        dwdm_carrier_channel.yfilter = yfilter;
    }
    if(value_path == "dwdm-carrier-frequency")
    {
        dwdm_carrier_frequency.yfilter = yfilter;
    }
    if(value_path == "dwdm-carrier-wavelength")
    {
        dwdm_carrier_wavelength.yfilter = yfilter;
    }
    if(value_path == "grey-wavelength")
    {
        grey_wavelength.yfilter = yfilter;
    }
    if(value_path == "rx-low-threshold")
    {
        rx_low_threshold.yfilter = yfilter;
    }
    if(value_path == "rx-high-threshold")
    {
        rx_high_threshold.yfilter = yfilter;
    }
    if(value_path == "lbc-high-threshold")
    {
        lbc_high_threshold.yfilter = yfilter;
    }
    if(value_path == "tx-low-threshold")
    {
        tx_low_threshold.yfilter = yfilter;
    }
    if(value_path == "tx-high-threshold")
    {
        tx_high_threshold.yfilter = yfilter;
    }
    if(value_path == "lbc-th-high-default")
    {
        lbc_th_high_default.yfilter = yfilter;
    }
    if(value_path == "lbc-th-low-default")
    {
        lbc_th_low_default.yfilter = yfilter;
    }
    if(value_path == "temp-low-threshold")
    {
        temp_low_threshold.yfilter = yfilter;
    }
    if(value_path == "temp-high-threshold")
    {
        temp_high_threshold.yfilter = yfilter;
    }
    if(value_path == "volt-low-threshold")
    {
        volt_low_threshold.yfilter = yfilter;
    }
    if(value_path == "volt-high-threshold")
    {
        volt_high_threshold.yfilter = yfilter;
    }
    if(value_path == "cd")
    {
        cd.yfilter = yfilter;
    }
    if(value_path == "cd-min")
    {
        cd_min.yfilter = yfilter;
    }
    if(value_path == "cd-max")
    {
        cd_max.yfilter = yfilter;
    }
    if(value_path == "cd-low-threshold")
    {
        cd_low_threshold.yfilter = yfilter;
    }
    if(value_path == "cd-high-threshold")
    {
        cd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "osnr-low-threshold")
    {
        osnr_low_threshold.yfilter = yfilter;
    }
    if(value_path == "dgd-high-threshold")
    {
        dgd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "polarization-mode-dispersion")
    {
        polarization_mode_dispersion.yfilter = yfilter;
    }
    if(value_path == "second-order-polarization-mode-dispersion")
    {
        second_order_polarization_mode_dispersion.yfilter = yfilter;
    }
    if(value_path == "optical-signal-to-noise-ratio")
    {
        optical_signal_to_noise_ratio.yfilter = yfilter;
    }
    if(value_path == "polarization-dependent-loss")
    {
        polarization_dependent_loss.yfilter = yfilter;
    }
    if(value_path == "polarization-change-rate")
    {
        polarization_change_rate.yfilter = yfilter;
    }
    if(value_path == "differential-group-delay")
    {
        differential_group_delay.yfilter = yfilter;
    }
    if(value_path == "phase-noise")
    {
        phase_noise.yfilter = yfilter;
    }
    if(value_path == "pm-enable")
    {
        pm_enable.yfilter = yfilter;
    }
    if(value_path == "laser-state")
    {
        laser_state.yfilter = yfilter;
    }
    if(value_path == "led-state")
    {
        led_state.yfilter = yfilter;
    }
    if(value_path == "controller-state")
    {
        controller_state.yfilter = yfilter;
    }
    if(value_path == "form-factor")
    {
        form_factor.yfilter = yfilter;
    }
    if(value_path == "phy-type")
    {
        phy_type.yfilter = yfilter;
    }
    if(value_path == "cfg-tx-power")
    {
        cfg_tx_power.yfilter = yfilter;
    }
    if(value_path == "cfg-tx-power-configurable")
    {
        cfg_tx_power_configurable.yfilter = yfilter;
    }
    if(value_path == "temperature")
    {
        temperature.yfilter = yfilter;
    }
    if(value_path == "voltage")
    {
        voltage.yfilter = yfilter;
    }
    if(value_path == "display-volt-temp")
    {
        display_volt_temp.yfilter = yfilter;
    }
    if(value_path == "cd-configurable")
    {
        cd_configurable.yfilter = yfilter;
    }
    if(value_path == "optics-fec")
    {
        optics_fec.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "port-status")
    {
        port_status.yfilter = yfilter;
    }
    if(value_path == "rx-voa-attenuation")
    {
        rx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "tx-voa-attenuation")
    {
        tx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "ampli-gain")
    {
        ampli_gain.yfilter = yfilter;
    }
    if(value_path == "ampli-tilt")
    {
        ampli_tilt.yfilter = yfilter;
    }
    if(value_path == "rx-power-th-configurable")
    {
        rx_power_th_configurable.yfilter = yfilter;
    }
    if(value_path == "tx-power-th-configurable")
    {
        tx_power_th_configurable.yfilter = yfilter;
    }
    if(value_path == "rx-voa-attenuation-config-val")
    {
        rx_voa_attenuation_config_val.yfilter = yfilter;
    }
    if(value_path == "tx-voa-attenuation-config-val")
    {
        tx_voa_attenuation_config_val.yfilter = yfilter;
    }
    if(value_path == "ampli-control-mode-config-val")
    {
        ampli_control_mode_config_val.yfilter = yfilter;
    }
    if(value_path == "ampli-gain-range-config-val")
    {
        ampli_gain_range_config_val.yfilter = yfilter;
    }
    if(value_path == "ampli-gain-config-val")
    {
        ampli_gain_config_val.yfilter = yfilter;
    }
    if(value_path == "ampli-tilt-config-val")
    {
        ampli_tilt_config_val.yfilter = yfilter;
    }
    if(value_path == "ampli-channel-power-config-val")
    {
        ampli_channel_power_config_val.yfilter = yfilter;
    }
    if(value_path == "channel-power-max-delta-config-val")
    {
        channel_power_max_delta_config_val.yfilter = yfilter;
    }
    if(value_path == "ampli-gain-thr-deg-low-config-val")
    {
        ampli_gain_thr_deg_low_config_val.yfilter = yfilter;
    }
    if(value_path == "ampli-gain-thr-deg-high-config-val")
    {
        ampli_gain_thr_deg_high_config_val.yfilter = yfilter;
    }
    if(value_path == "osri-config-val")
    {
        osri_config_val.yfilter = yfilter;
    }
    if(value_path == "safety-control-mode-config-val")
    {
        safety_control_mode_config_val.yfilter = yfilter;
    }
    if(value_path == "total-rx-power")
    {
        total_rx_power.yfilter = yfilter;
    }
    if(value_path == "total-tx-power")
    {
        total_tx_power.yfilter = yfilter;
    }
    if(value_path == "is-bo-configured")
    {
        is_bo_configured.yfilter = yfilter;
    }
    if(value_path == "is-ext-param-valid")
    {
        is_ext_param_valid.yfilter = yfilter;
    }
    if(value_path == "alarm-detected")
    {
        alarm_detected.yfilter = yfilter;
    }
    if(value_path == "rx-low-warning-threshold")
    {
        rx_low_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "rx-high-warning-threshold")
    {
        rx_high_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "tx-low-warning-threshold")
    {
        tx_low_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "tx-high-warning-threshold")
    {
        tx_high_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "lbc-th-high-warning-default")
    {
        lbc_th_high_warning_default.yfilter = yfilter;
    }
    if(value_path == "lbc-th-low-warning-default")
    {
        lbc_th_low_warning_default.yfilter = yfilter;
    }
    if(value_path == "temp-low-warning-threshold")
    {
        temp_low_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "temp-high-warning-threshold")
    {
        temp_high_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "volt-low-warning-threshold")
    {
        volt_low_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "volt-high-warning-threshold")
    {
        volt_high_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "ampli-gain-range")
    {
        ampli_gain_range.yfilter = yfilter;
    }
    if(value_path == "safety-control-mode")
    {
        safety_control_mode.yfilter = yfilter;
    }
    if(value_path == "osri")
    {
        osri.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "is-optics-type-string-valid")
    {
        is_optics_type_string_valid.yfilter = yfilter;
    }
    if(value_path == "optics-type-str")
    {
        optics_type_str.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg-info" || name == "optics-alarm-info" || name == "ots-alarm-info" || name == "transceiver-info" || name == "ext-param-val" || name == "ext-param-threshold-val" || name == "spectrum-info" || name == "lane-data" || name == "transport-admin-state" || name == "optics-present" || name == "optics-type" || name == "derived-optics-type" || name == "optics-module" || name == "dwdm-carrier-band" || name == "dwdm-carrier-channel" || name == "dwdm-carrier-frequency" || name == "dwdm-carrier-wavelength" || name == "grey-wavelength" || name == "rx-low-threshold" || name == "rx-high-threshold" || name == "lbc-high-threshold" || name == "tx-low-threshold" || name == "tx-high-threshold" || name == "lbc-th-high-default" || name == "lbc-th-low-default" || name == "temp-low-threshold" || name == "temp-high-threshold" || name == "volt-low-threshold" || name == "volt-high-threshold" || name == "cd" || name == "cd-min" || name == "cd-max" || name == "cd-low-threshold" || name == "cd-high-threshold" || name == "osnr-low-threshold" || name == "dgd-high-threshold" || name == "polarization-mode-dispersion" || name == "second-order-polarization-mode-dispersion" || name == "optical-signal-to-noise-ratio" || name == "polarization-dependent-loss" || name == "polarization-change-rate" || name == "differential-group-delay" || name == "phase-noise" || name == "pm-enable" || name == "laser-state" || name == "led-state" || name == "controller-state" || name == "form-factor" || name == "phy-type" || name == "cfg-tx-power" || name == "cfg-tx-power-configurable" || name == "temperature" || name == "voltage" || name == "display-volt-temp" || name == "cd-configurable" || name == "optics-fec" || name == "port-type" || name == "port-status" || name == "rx-voa-attenuation" || name == "tx-voa-attenuation" || name == "ampli-gain" || name == "ampli-tilt" || name == "rx-power-th-configurable" || name == "tx-power-th-configurable" || name == "rx-voa-attenuation-config-val" || name == "tx-voa-attenuation-config-val" || name == "ampli-control-mode-config-val" || name == "ampli-gain-range-config-val" || name == "ampli-gain-config-val" || name == "ampli-tilt-config-val" || name == "ampli-channel-power-config-val" || name == "channel-power-max-delta-config-val" || name == "ampli-gain-thr-deg-low-config-val" || name == "ampli-gain-thr-deg-high-config-val" || name == "osri-config-val" || name == "safety-control-mode-config-val" || name == "total-rx-power" || name == "total-tx-power" || name == "is-bo-configured" || name == "is-ext-param-valid" || name == "alarm-detected" || name == "rx-low-warning-threshold" || name == "rx-high-warning-threshold" || name == "tx-low-warning-threshold" || name == "tx-high-warning-threshold" || name == "lbc-th-high-warning-default" || name == "lbc-th-low-warning-default" || name == "temp-low-warning-threshold" || name == "temp-high-warning-threshold" || name == "volt-low-warning-threshold" || name == "volt-high-warning-threshold" || name == "ampli-gain-range" || name == "safety-control-mode" || name == "osri" || name == "description" || name == "is-optics-type-string-valid" || name == "optics-type-str")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgInfo()
{

    yang_name = "network-srlg-info"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg-array")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::NetworkSrlgArray()
    :
    set_number{YType::uint32, "set-number"},
    network_srlg{YType::uint32, "network-srlg"}
{

    yang_name = "network-srlg-array"; yang_parent_name = "network-srlg-info"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(set_number.yfilter)
	|| ydk::is_set(network_srlg.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_number.is_set || is_set(set_number.yfilter)) leaf_name_data.push_back(set_number.get_name_leafdata());

    auto network_srlg_name_datas = network_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_srlg_name_datas.begin(), network_srlg_name_datas.end());
    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-number")
    {
        set_number = value;
        set_number.value_namespace = name_space;
        set_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-srlg")
    {
        network_srlg.append(value);
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-number")
    {
        set_number.yfilter = yfilter;
    }
    if(value_path == "network-srlg")
    {
        network_srlg.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-number" || name == "network-srlg")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::OpticsAlarmInfo()
    :
    high_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower>())
	,high_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower>())
	,low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower>())
	,high_lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc>())
	,high_rx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power>())
	,high_rx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power>())
	,high_rx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power>())
	,high_rx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power>())
	,low_rx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power>())
	,low_rx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power>())
	,low_rx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power>())
	,low_rx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power>())
	,high_tx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power>())
	,high_tx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power>())
	,high_tx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power>())
	,high_tx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power>())
	,low_tx1_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power>())
	,low_tx2_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power>())
	,low_tx3_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power>())
	,low_tx4_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power>())
	,high_tx1lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc>())
	,high_tx2lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc>())
	,high_tx3lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc>())
	,high_tx4lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc>())
	,low_tx1lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc>())
	,low_tx2lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc>())
	,low_tx3lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc>())
	,low_tx4lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc>())
	,rx_los(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos>())
	,tx_los(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos>())
	,rx_lol(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol>())
	,tx_lol(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol>())
	,tx_fault(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault>())
	,hidgd(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd>())
	,oorcd(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd>())
	,osnr(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr>())
	,wvlool(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool>())
	,mea(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea>())
	,imp_removal(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval>())
	,rx_loc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc>())
	,amp_gain_deg_low(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow>())
	,amp_gain_deg_high(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh>())
	,txpwr_mismatch(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch>())
{
    high_rx_power->parent = this;
    low_rx_power->parent = this;
    high_tx_power->parent = this;
    low_tx_power->parent = this;
    high_lbc->parent = this;
    high_rx1_power->parent = this;
    high_rx2_power->parent = this;
    high_rx3_power->parent = this;
    high_rx4_power->parent = this;
    low_rx1_power->parent = this;
    low_rx2_power->parent = this;
    low_rx3_power->parent = this;
    low_rx4_power->parent = this;
    high_tx1_power->parent = this;
    high_tx2_power->parent = this;
    high_tx3_power->parent = this;
    high_tx4_power->parent = this;
    low_tx1_power->parent = this;
    low_tx2_power->parent = this;
    low_tx3_power->parent = this;
    low_tx4_power->parent = this;
    high_tx1lbc->parent = this;
    high_tx2lbc->parent = this;
    high_tx3lbc->parent = this;
    high_tx4lbc->parent = this;
    low_tx1lbc->parent = this;
    low_tx2lbc->parent = this;
    low_tx3lbc->parent = this;
    low_tx4lbc->parent = this;
    rx_los->parent = this;
    tx_los->parent = this;
    rx_lol->parent = this;
    tx_lol->parent = this;
    tx_fault->parent = this;
    hidgd->parent = this;
    oorcd->parent = this;
    osnr->parent = this;
    wvlool->parent = this;
    mea->parent = this;
    imp_removal->parent = this;
    rx_loc->parent = this;
    amp_gain_deg_low->parent = this;
    amp_gain_deg_high->parent = this;
    txpwr_mismatch->parent = this;

    yang_name = "optics-alarm-info"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::~OpticsAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::has_data() const
{
    return (high_rx_power !=  nullptr && high_rx_power->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (high_tx_power !=  nullptr && high_tx_power->has_data())
	|| (low_tx_power !=  nullptr && low_tx_power->has_data())
	|| (high_lbc !=  nullptr && high_lbc->has_data())
	|| (high_rx1_power !=  nullptr && high_rx1_power->has_data())
	|| (high_rx2_power !=  nullptr && high_rx2_power->has_data())
	|| (high_rx3_power !=  nullptr && high_rx3_power->has_data())
	|| (high_rx4_power !=  nullptr && high_rx4_power->has_data())
	|| (low_rx1_power !=  nullptr && low_rx1_power->has_data())
	|| (low_rx2_power !=  nullptr && low_rx2_power->has_data())
	|| (low_rx3_power !=  nullptr && low_rx3_power->has_data())
	|| (low_rx4_power !=  nullptr && low_rx4_power->has_data())
	|| (high_tx1_power !=  nullptr && high_tx1_power->has_data())
	|| (high_tx2_power !=  nullptr && high_tx2_power->has_data())
	|| (high_tx3_power !=  nullptr && high_tx3_power->has_data())
	|| (high_tx4_power !=  nullptr && high_tx4_power->has_data())
	|| (low_tx1_power !=  nullptr && low_tx1_power->has_data())
	|| (low_tx2_power !=  nullptr && low_tx2_power->has_data())
	|| (low_tx3_power !=  nullptr && low_tx3_power->has_data())
	|| (low_tx4_power !=  nullptr && low_tx4_power->has_data())
	|| (high_tx1lbc !=  nullptr && high_tx1lbc->has_data())
	|| (high_tx2lbc !=  nullptr && high_tx2lbc->has_data())
	|| (high_tx3lbc !=  nullptr && high_tx3lbc->has_data())
	|| (high_tx4lbc !=  nullptr && high_tx4lbc->has_data())
	|| (low_tx1lbc !=  nullptr && low_tx1lbc->has_data())
	|| (low_tx2lbc !=  nullptr && low_tx2lbc->has_data())
	|| (low_tx3lbc !=  nullptr && low_tx3lbc->has_data())
	|| (low_tx4lbc !=  nullptr && low_tx4lbc->has_data())
	|| (rx_los !=  nullptr && rx_los->has_data())
	|| (tx_los !=  nullptr && tx_los->has_data())
	|| (rx_lol !=  nullptr && rx_lol->has_data())
	|| (tx_lol !=  nullptr && tx_lol->has_data())
	|| (tx_fault !=  nullptr && tx_fault->has_data())
	|| (hidgd !=  nullptr && hidgd->has_data())
	|| (oorcd !=  nullptr && oorcd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (wvlool !=  nullptr && wvlool->has_data())
	|| (mea !=  nullptr && mea->has_data())
	|| (imp_removal !=  nullptr && imp_removal->has_data())
	|| (rx_loc !=  nullptr && rx_loc->has_data())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_data())
	|| (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_data())
	|| (txpwr_mismatch !=  nullptr && txpwr_mismatch->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| (high_rx_power !=  nullptr && high_rx_power->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (high_tx_power !=  nullptr && high_tx_power->has_operation())
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation())
	|| (high_lbc !=  nullptr && high_lbc->has_operation())
	|| (high_rx1_power !=  nullptr && high_rx1_power->has_operation())
	|| (high_rx2_power !=  nullptr && high_rx2_power->has_operation())
	|| (high_rx3_power !=  nullptr && high_rx3_power->has_operation())
	|| (high_rx4_power !=  nullptr && high_rx4_power->has_operation())
	|| (low_rx1_power !=  nullptr && low_rx1_power->has_operation())
	|| (low_rx2_power !=  nullptr && low_rx2_power->has_operation())
	|| (low_rx3_power !=  nullptr && low_rx3_power->has_operation())
	|| (low_rx4_power !=  nullptr && low_rx4_power->has_operation())
	|| (high_tx1_power !=  nullptr && high_tx1_power->has_operation())
	|| (high_tx2_power !=  nullptr && high_tx2_power->has_operation())
	|| (high_tx3_power !=  nullptr && high_tx3_power->has_operation())
	|| (high_tx4_power !=  nullptr && high_tx4_power->has_operation())
	|| (low_tx1_power !=  nullptr && low_tx1_power->has_operation())
	|| (low_tx2_power !=  nullptr && low_tx2_power->has_operation())
	|| (low_tx3_power !=  nullptr && low_tx3_power->has_operation())
	|| (low_tx4_power !=  nullptr && low_tx4_power->has_operation())
	|| (high_tx1lbc !=  nullptr && high_tx1lbc->has_operation())
	|| (high_tx2lbc !=  nullptr && high_tx2lbc->has_operation())
	|| (high_tx3lbc !=  nullptr && high_tx3lbc->has_operation())
	|| (high_tx4lbc !=  nullptr && high_tx4lbc->has_operation())
	|| (low_tx1lbc !=  nullptr && low_tx1lbc->has_operation())
	|| (low_tx2lbc !=  nullptr && low_tx2lbc->has_operation())
	|| (low_tx3lbc !=  nullptr && low_tx3lbc->has_operation())
	|| (low_tx4lbc !=  nullptr && low_tx4lbc->has_operation())
	|| (rx_los !=  nullptr && rx_los->has_operation())
	|| (tx_los !=  nullptr && tx_los->has_operation())
	|| (rx_lol !=  nullptr && rx_lol->has_operation())
	|| (tx_lol !=  nullptr && tx_lol->has_operation())
	|| (tx_fault !=  nullptr && tx_fault->has_operation())
	|| (hidgd !=  nullptr && hidgd->has_operation())
	|| (oorcd !=  nullptr && oorcd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (wvlool !=  nullptr && wvlool->has_operation())
	|| (mea !=  nullptr && mea->has_operation())
	|| (imp_removal !=  nullptr && imp_removal->has_operation())
	|| (rx_loc !=  nullptr && rx_loc->has_operation())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_operation())
	|| (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_operation())
	|| (txpwr_mismatch !=  nullptr && txpwr_mismatch->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high-rx-power")
    {
        if(high_rx_power == nullptr)
        {
            high_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower>();
        }
        return high_rx_power;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "high-tx-power")
    {
        if(high_tx_power == nullptr)
        {
            high_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower>();
        }
        return high_tx_power;
    }

    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
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

    if(child_yang_name == "high-tx1-power")
    {
        if(high_tx1_power == nullptr)
        {
            high_tx1_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power>();
        }
        return high_tx1_power;
    }

    if(child_yang_name == "high-tx2-power")
    {
        if(high_tx2_power == nullptr)
        {
            high_tx2_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power>();
        }
        return high_tx2_power;
    }

    if(child_yang_name == "high-tx3-power")
    {
        if(high_tx3_power == nullptr)
        {
            high_tx3_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power>();
        }
        return high_tx3_power;
    }

    if(child_yang_name == "high-tx4-power")
    {
        if(high_tx4_power == nullptr)
        {
            high_tx4_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power>();
        }
        return high_tx4_power;
    }

    if(child_yang_name == "low-tx1-power")
    {
        if(low_tx1_power == nullptr)
        {
            low_tx1_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power>();
        }
        return low_tx1_power;
    }

    if(child_yang_name == "low-tx2-power")
    {
        if(low_tx2_power == nullptr)
        {
            low_tx2_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power>();
        }
        return low_tx2_power;
    }

    if(child_yang_name == "low-tx3-power")
    {
        if(low_tx3_power == nullptr)
        {
            low_tx3_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power>();
        }
        return low_tx3_power;
    }

    if(child_yang_name == "low-tx4-power")
    {
        if(low_tx4_power == nullptr)
        {
            low_tx4_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power>();
        }
        return low_tx4_power;
    }

    if(child_yang_name == "high-tx1lbc")
    {
        if(high_tx1lbc == nullptr)
        {
            high_tx1lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc>();
        }
        return high_tx1lbc;
    }

    if(child_yang_name == "high-tx2lbc")
    {
        if(high_tx2lbc == nullptr)
        {
            high_tx2lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc>();
        }
        return high_tx2lbc;
    }

    if(child_yang_name == "high-tx3lbc")
    {
        if(high_tx3lbc == nullptr)
        {
            high_tx3lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc>();
        }
        return high_tx3lbc;
    }

    if(child_yang_name == "high-tx4lbc")
    {
        if(high_tx4lbc == nullptr)
        {
            high_tx4lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc>();
        }
        return high_tx4lbc;
    }

    if(child_yang_name == "low-tx1lbc")
    {
        if(low_tx1lbc == nullptr)
        {
            low_tx1lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc>();
        }
        return low_tx1lbc;
    }

    if(child_yang_name == "low-tx2lbc")
    {
        if(low_tx2lbc == nullptr)
        {
            low_tx2lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc>();
        }
        return low_tx2lbc;
    }

    if(child_yang_name == "low-tx3lbc")
    {
        if(low_tx3lbc == nullptr)
        {
            low_tx3lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc>();
        }
        return low_tx3lbc;
    }

    if(child_yang_name == "low-tx4lbc")
    {
        if(low_tx4lbc == nullptr)
        {
            low_tx4lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc>();
        }
        return low_tx4lbc;
    }

    if(child_yang_name == "rx-los")
    {
        if(rx_los == nullptr)
        {
            rx_los = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos>();
        }
        return rx_los;
    }

    if(child_yang_name == "tx-los")
    {
        if(tx_los == nullptr)
        {
            tx_los = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos>();
        }
        return tx_los;
    }

    if(child_yang_name == "rx-lol")
    {
        if(rx_lol == nullptr)
        {
            rx_lol = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol>();
        }
        return rx_lol;
    }

    if(child_yang_name == "tx-lol")
    {
        if(tx_lol == nullptr)
        {
            tx_lol = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol>();
        }
        return tx_lol;
    }

    if(child_yang_name == "tx-fault")
    {
        if(tx_fault == nullptr)
        {
            tx_fault = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault>();
        }
        return tx_fault;
    }

    if(child_yang_name == "hidgd")
    {
        if(hidgd == nullptr)
        {
            hidgd = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd>();
        }
        return hidgd;
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

    if(child_yang_name == "wvlool")
    {
        if(wvlool == nullptr)
        {
            wvlool = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool>();
        }
        return wvlool;
    }

    if(child_yang_name == "mea")
    {
        if(mea == nullptr)
        {
            mea = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea>();
        }
        return mea;
    }

    if(child_yang_name == "imp-removal")
    {
        if(imp_removal == nullptr)
        {
            imp_removal = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval>();
        }
        return imp_removal;
    }

    if(child_yang_name == "rx-loc")
    {
        if(rx_loc == nullptr)
        {
            rx_loc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc>();
        }
        return rx_loc;
    }

    if(child_yang_name == "amp-gain-deg-low")
    {
        if(amp_gain_deg_low == nullptr)
        {
            amp_gain_deg_low = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow>();
        }
        return amp_gain_deg_low;
    }

    if(child_yang_name == "amp-gain-deg-high")
    {
        if(amp_gain_deg_high == nullptr)
        {
            amp_gain_deg_high = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh>();
        }
        return amp_gain_deg_high;
    }

    if(child_yang_name == "txpwr-mismatch")
    {
        if(txpwr_mismatch == nullptr)
        {
            txpwr_mismatch = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch>();
        }
        return txpwr_mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high_rx_power != nullptr)
    {
        children["high-rx-power"] = high_rx_power;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(high_tx_power != nullptr)
    {
        children["high-tx-power"] = high_tx_power;
    }

    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
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

    if(high_tx1_power != nullptr)
    {
        children["high-tx1-power"] = high_tx1_power;
    }

    if(high_tx2_power != nullptr)
    {
        children["high-tx2-power"] = high_tx2_power;
    }

    if(high_tx3_power != nullptr)
    {
        children["high-tx3-power"] = high_tx3_power;
    }

    if(high_tx4_power != nullptr)
    {
        children["high-tx4-power"] = high_tx4_power;
    }

    if(low_tx1_power != nullptr)
    {
        children["low-tx1-power"] = low_tx1_power;
    }

    if(low_tx2_power != nullptr)
    {
        children["low-tx2-power"] = low_tx2_power;
    }

    if(low_tx3_power != nullptr)
    {
        children["low-tx3-power"] = low_tx3_power;
    }

    if(low_tx4_power != nullptr)
    {
        children["low-tx4-power"] = low_tx4_power;
    }

    if(high_tx1lbc != nullptr)
    {
        children["high-tx1lbc"] = high_tx1lbc;
    }

    if(high_tx2lbc != nullptr)
    {
        children["high-tx2lbc"] = high_tx2lbc;
    }

    if(high_tx3lbc != nullptr)
    {
        children["high-tx3lbc"] = high_tx3lbc;
    }

    if(high_tx4lbc != nullptr)
    {
        children["high-tx4lbc"] = high_tx4lbc;
    }

    if(low_tx1lbc != nullptr)
    {
        children["low-tx1lbc"] = low_tx1lbc;
    }

    if(low_tx2lbc != nullptr)
    {
        children["low-tx2lbc"] = low_tx2lbc;
    }

    if(low_tx3lbc != nullptr)
    {
        children["low-tx3lbc"] = low_tx3lbc;
    }

    if(low_tx4lbc != nullptr)
    {
        children["low-tx4lbc"] = low_tx4lbc;
    }

    if(rx_los != nullptr)
    {
        children["rx-los"] = rx_los;
    }

    if(tx_los != nullptr)
    {
        children["tx-los"] = tx_los;
    }

    if(rx_lol != nullptr)
    {
        children["rx-lol"] = rx_lol;
    }

    if(tx_lol != nullptr)
    {
        children["tx-lol"] = tx_lol;
    }

    if(tx_fault != nullptr)
    {
        children["tx-fault"] = tx_fault;
    }

    if(hidgd != nullptr)
    {
        children["hidgd"] = hidgd;
    }

    if(oorcd != nullptr)
    {
        children["oorcd"] = oorcd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(wvlool != nullptr)
    {
        children["wvlool"] = wvlool;
    }

    if(mea != nullptr)
    {
        children["mea"] = mea;
    }

    if(imp_removal != nullptr)
    {
        children["imp-removal"] = imp_removal;
    }

    if(rx_loc != nullptr)
    {
        children["rx-loc"] = rx_loc;
    }

    if(amp_gain_deg_low != nullptr)
    {
        children["amp-gain-deg-low"] = amp_gain_deg_low;
    }

    if(amp_gain_deg_high != nullptr)
    {
        children["amp-gain-deg-high"] = amp_gain_deg_high;
    }

    if(txpwr_mismatch != nullptr)
    {
        children["txpwr-mismatch"] = txpwr_mismatch;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-rx-power" || name == "low-rx-power" || name == "high-tx-power" || name == "low-tx-power" || name == "high-lbc" || name == "high-rx1-power" || name == "high-rx2-power" || name == "high-rx3-power" || name == "high-rx4-power" || name == "low-rx1-power" || name == "low-rx2-power" || name == "low-rx3-power" || name == "low-rx4-power" || name == "high-tx1-power" || name == "high-tx2-power" || name == "high-tx3-power" || name == "high-tx4-power" || name == "low-tx1-power" || name == "low-tx2-power" || name == "low-tx3-power" || name == "low-tx4-power" || name == "high-tx1lbc" || name == "high-tx2lbc" || name == "high-tx3lbc" || name == "high-tx4lbc" || name == "low-tx1lbc" || name == "low-tx2lbc" || name == "low-tx3lbc" || name == "low-tx4lbc" || name == "rx-los" || name == "tx-los" || name == "rx-lol" || name == "tx-lol" || name == "tx-fault" || name == "hidgd" || name == "oorcd" || name == "osnr" || name == "wvlool" || name == "mea" || name == "imp-removal" || name == "rx-loc" || name == "amp-gain-deg-low" || name == "amp-gain-deg-high" || name == "txpwr-mismatch")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::HighRxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-rx-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::~HighRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::LowRxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::HighTxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::~HighTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::LowTxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::HighLbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::~HighLbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::HighRx1Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-rx1-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::~HighRx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx1-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::HighRx2Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-rx2-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::~HighRx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx2-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::HighRx3Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-rx3-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::~HighRx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx3-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::HighRx4Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-rx4-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::~HighRx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx4-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::LowRx1Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx1-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::~LowRx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx1-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::LowRx2Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx2-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::~LowRx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx2-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::LowRx3Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx3-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::~LowRx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx3-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::LowRx4Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx4-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::~LowRx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx4-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::HighTx1Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx1-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::~HighTx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx1-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::HighTx2Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx2-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::~HighTx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx2-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::HighTx3Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx3-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::~HighTx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx3-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::HighTx4Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx4-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::~HighTx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx4-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::LowTx1Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx1-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::~LowTx1Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx1-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::LowTx2Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx2-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::~LowTx2Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx2-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::LowTx3Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx3-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::~LowTx3Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx3-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::LowTx4Power()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx4-power"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::~LowTx4Power()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx4-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::HighTx1Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx1lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::~HighTx1Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx1lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::HighTx2Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx2lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::~HighTx2Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx2lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::HighTx3Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx3lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::~HighTx3Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx3lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::HighTx4Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx4lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::~HighTx4Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx4lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::LowTx1Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx1lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::~LowTx1Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx1lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::LowTx2Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx2lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::~LowTx2Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx2lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::LowTx3Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx3lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::~LowTx3Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx3lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::LowTx4Lbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx4lbc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::~LowTx4Lbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx4lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::RxLos()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "rx-los"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::~RxLos()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-los";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::TxLos()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "tx-los"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::~TxLos()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-los";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::RxLol()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "rx-lol"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::~RxLol()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::TxLol()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "tx-lol"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::~TxLol()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-lol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::TxFault()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "tx-fault"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::~TxFault()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::Hidgd()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "hidgd"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::~Hidgd()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hidgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::Oorcd()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "oorcd"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::~Oorcd()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oorcd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::Osnr()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "osnr"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::~Osnr()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::Wvlool()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "wvlool"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::~Wvlool()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wvlool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::Mea()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "mea"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::~Mea()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mea";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::ImpRemoval()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "imp-removal"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::~ImpRemoval()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imp-removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::RxLoc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "rx-loc"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::~RxLoc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::AmpGainDegLow()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "amp-gain-deg-low"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::~AmpGainDegLow()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::AmpGainDegHigh()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "amp-gain-deg-high"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::~AmpGainDegHigh()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::TxpwrMismatch()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "txpwr-mismatch"; yang_parent_name = "optics-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::~TxpwrMismatch()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "txpwr-mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::OtsAlarmInfo()
    :
    low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower>())
	,rx_los_p(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP>())
	,rx_loc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc>())
	,amp_gain_deg_low(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow>())
	,amp_gain_deg_high(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh>())
	,auto_laser_shut(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut>())
	,auto_power_red(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed>())
	,auto_ampli_ctrl_disabled(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled>())
	,auto_ampli_ctrl_config_mismatch(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch>())
	,switch_to_protect(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect>())
	,auto_ampli_ctrl_running(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning>())
{
    low_tx_power->parent = this;
    low_rx_power->parent = this;
    rx_los_p->parent = this;
    rx_loc->parent = this;
    amp_gain_deg_low->parent = this;
    amp_gain_deg_high->parent = this;
    auto_laser_shut->parent = this;
    auto_power_red->parent = this;
    auto_ampli_ctrl_disabled->parent = this;
    auto_ampli_ctrl_config_mismatch->parent = this;
    switch_to_protect->parent = this;
    auto_ampli_ctrl_running->parent = this;

    yang_name = "ots-alarm-info"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::~OtsAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::has_data() const
{
    return (low_tx_power !=  nullptr && low_tx_power->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (rx_los_p !=  nullptr && rx_los_p->has_data())
	|| (rx_loc !=  nullptr && rx_loc->has_data())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_data())
	|| (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_data())
	|| (auto_laser_shut !=  nullptr && auto_laser_shut->has_data())
	|| (auto_power_red !=  nullptr && auto_power_red->has_data())
	|| (auto_ampli_ctrl_disabled !=  nullptr && auto_ampli_ctrl_disabled->has_data())
	|| (auto_ampli_ctrl_config_mismatch !=  nullptr && auto_ampli_ctrl_config_mismatch->has_data())
	|| (switch_to_protect !=  nullptr && switch_to_protect->has_data())
	|| (auto_ampli_ctrl_running !=  nullptr && auto_ampli_ctrl_running->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (rx_los_p !=  nullptr && rx_los_p->has_operation())
	|| (rx_loc !=  nullptr && rx_loc->has_operation())
	|| (amp_gain_deg_low !=  nullptr && amp_gain_deg_low->has_operation())
	|| (amp_gain_deg_high !=  nullptr && amp_gain_deg_high->has_operation())
	|| (auto_laser_shut !=  nullptr && auto_laser_shut->has_operation())
	|| (auto_power_red !=  nullptr && auto_power_red->has_operation())
	|| (auto_ampli_ctrl_disabled !=  nullptr && auto_ampli_ctrl_disabled->has_operation())
	|| (auto_ampli_ctrl_config_mismatch !=  nullptr && auto_ampli_ctrl_config_mismatch->has_operation())
	|| (switch_to_protect !=  nullptr && switch_to_protect->has_operation())
	|| (auto_ampli_ctrl_running !=  nullptr && auto_ampli_ctrl_running->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ots-alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "rx-los-p")
    {
        if(rx_los_p == nullptr)
        {
            rx_los_p = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP>();
        }
        return rx_los_p;
    }

    if(child_yang_name == "rx-loc")
    {
        if(rx_loc == nullptr)
        {
            rx_loc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc>();
        }
        return rx_loc;
    }

    if(child_yang_name == "amp-gain-deg-low")
    {
        if(amp_gain_deg_low == nullptr)
        {
            amp_gain_deg_low = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow>();
        }
        return amp_gain_deg_low;
    }

    if(child_yang_name == "amp-gain-deg-high")
    {
        if(amp_gain_deg_high == nullptr)
        {
            amp_gain_deg_high = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh>();
        }
        return amp_gain_deg_high;
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

    if(child_yang_name == "auto-ampli-ctrl-disabled")
    {
        if(auto_ampli_ctrl_disabled == nullptr)
        {
            auto_ampli_ctrl_disabled = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled>();
        }
        return auto_ampli_ctrl_disabled;
    }

    if(child_yang_name == "auto-ampli-ctrl-config-mismatch")
    {
        if(auto_ampli_ctrl_config_mismatch == nullptr)
        {
            auto_ampli_ctrl_config_mismatch = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch>();
        }
        return auto_ampli_ctrl_config_mismatch;
    }

    if(child_yang_name == "switch-to-protect")
    {
        if(switch_to_protect == nullptr)
        {
            switch_to_protect = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect>();
        }
        return switch_to_protect;
    }

    if(child_yang_name == "auto-ampli-ctrl-running")
    {
        if(auto_ampli_ctrl_running == nullptr)
        {
            auto_ampli_ctrl_running = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning>();
        }
        return auto_ampli_ctrl_running;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(rx_los_p != nullptr)
    {
        children["rx-los-p"] = rx_los_p;
    }

    if(rx_loc != nullptr)
    {
        children["rx-loc"] = rx_loc;
    }

    if(amp_gain_deg_low != nullptr)
    {
        children["amp-gain-deg-low"] = amp_gain_deg_low;
    }

    if(amp_gain_deg_high != nullptr)
    {
        children["amp-gain-deg-high"] = amp_gain_deg_high;
    }

    if(auto_laser_shut != nullptr)
    {
        children["auto-laser-shut"] = auto_laser_shut;
    }

    if(auto_power_red != nullptr)
    {
        children["auto-power-red"] = auto_power_red;
    }

    if(auto_ampli_ctrl_disabled != nullptr)
    {
        children["auto-ampli-ctrl-disabled"] = auto_ampli_ctrl_disabled;
    }

    if(auto_ampli_ctrl_config_mismatch != nullptr)
    {
        children["auto-ampli-ctrl-config-mismatch"] = auto_ampli_ctrl_config_mismatch;
    }

    if(switch_to_protect != nullptr)
    {
        children["switch-to-protect"] = switch_to_protect;
    }

    if(auto_ampli_ctrl_running != nullptr)
    {
        children["auto-ampli-ctrl-running"] = auto_ampli_ctrl_running;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-tx-power" || name == "low-rx-power" || name == "rx-los-p" || name == "rx-loc" || name == "amp-gain-deg-low" || name == "amp-gain-deg-high" || name == "auto-laser-shut" || name == "auto-power-red" || name == "auto-ampli-ctrl-disabled" || name == "auto-ampli-ctrl-config-mismatch" || name == "switch-to-protect" || name == "auto-ampli-ctrl-running")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::LowTxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx-power"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::LowRxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx-power"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::RxLosP()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "rx-los-p"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::~RxLosP()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-los-p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::RxLoc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "rx-loc"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::~RxLoc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::AmpGainDegLow()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "amp-gain-deg-low"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::~AmpGainDegLow()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::AmpGainDegHigh()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "amp-gain-deg-high"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::~AmpGainDegHigh()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amp-gain-deg-high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::AutoLaserShut()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "auto-laser-shut"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::~AutoLaserShut()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-laser-shut";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::AutoPowerRed()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "auto-power-red"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::~AutoPowerRed()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-power-red";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::AutoAmpliCtrlDisabled()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "auto-ampli-ctrl-disabled"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::~AutoAmpliCtrlDisabled()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-ampli-ctrl-disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::AutoAmpliCtrlConfigMismatch()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "auto-ampli-ctrl-config-mismatch"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::~AutoAmpliCtrlConfigMismatch()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-ampli-ctrl-config-mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::SwitchToProtect()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "switch-to-protect"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::~SwitchToProtect()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-to-protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::AutoAmpliCtrlRunning()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "auto-ampli-ctrl-running"; yang_parent_name = "ots-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::~AutoAmpliCtrlRunning()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-ampli-ctrl-running";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::TransceiverInfo()
    :
    vendor_info{YType::str, "vendor-info"},
    adapter_vendor_info{YType::str, "adapter-vendor-info"},
    date{YType::str, "date"},
    optics_vendor_rev{YType::str, "optics-vendor-rev"},
    optics_serial_no{YType::str, "optics-serial-no"},
    optics_vendor_part{YType::str, "optics-vendor-part"},
    optics_type{YType::str, "optics-type"},
    vendor_name{YType::str, "vendor-name"},
    oui_no{YType::str, "oui-no"},
    optics_pid{YType::str, "optics-pid"},
    optics_vid{YType::str, "optics-vid"},
    connector_type{YType::enumeration, "connector-type"},
    otn_application_code{YType::enumeration, "otn-application-code"},
    sonet_application_code{YType::enumeration, "sonet-application-code"},
    ethernet_compliance_code{YType::enumeration, "ethernet-compliance-code"},
    internal_temperature{YType::int32, "internal-temperature"}
{

    yang_name = "transceiver-info"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::~TransceiverInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::has_data() const
{
    return vendor_info.is_set
	|| adapter_vendor_info.is_set
	|| date.is_set
	|| optics_vendor_rev.is_set
	|| optics_serial_no.is_set
	|| optics_vendor_part.is_set
	|| optics_type.is_set
	|| vendor_name.is_set
	|| oui_no.is_set
	|| optics_pid.is_set
	|| optics_vid.is_set
	|| connector_type.is_set
	|| otn_application_code.is_set
	|| sonet_application_code.is_set
	|| ethernet_compliance_code.is_set
	|| internal_temperature.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor_info.yfilter)
	|| ydk::is_set(adapter_vendor_info.yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(optics_vendor_rev.yfilter)
	|| ydk::is_set(optics_serial_no.yfilter)
	|| ydk::is_set(optics_vendor_part.yfilter)
	|| ydk::is_set(optics_type.yfilter)
	|| ydk::is_set(vendor_name.yfilter)
	|| ydk::is_set(oui_no.yfilter)
	|| ydk::is_set(optics_pid.yfilter)
	|| ydk::is_set(optics_vid.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(otn_application_code.yfilter)
	|| ydk::is_set(sonet_application_code.yfilter)
	|| ydk::is_set(ethernet_compliance_code.yfilter)
	|| ydk::is_set(internal_temperature.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor_info.is_set || is_set(vendor_info.yfilter)) leaf_name_data.push_back(vendor_info.get_name_leafdata());
    if (adapter_vendor_info.is_set || is_set(adapter_vendor_info.yfilter)) leaf_name_data.push_back(adapter_vendor_info.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (optics_vendor_rev.is_set || is_set(optics_vendor_rev.yfilter)) leaf_name_data.push_back(optics_vendor_rev.get_name_leafdata());
    if (optics_serial_no.is_set || is_set(optics_serial_no.yfilter)) leaf_name_data.push_back(optics_serial_no.get_name_leafdata());
    if (optics_vendor_part.is_set || is_set(optics_vendor_part.yfilter)) leaf_name_data.push_back(optics_vendor_part.get_name_leafdata());
    if (optics_type.is_set || is_set(optics_type.yfilter)) leaf_name_data.push_back(optics_type.get_name_leafdata());
    if (vendor_name.is_set || is_set(vendor_name.yfilter)) leaf_name_data.push_back(vendor_name.get_name_leafdata());
    if (oui_no.is_set || is_set(oui_no.yfilter)) leaf_name_data.push_back(oui_no.get_name_leafdata());
    if (optics_pid.is_set || is_set(optics_pid.yfilter)) leaf_name_data.push_back(optics_pid.get_name_leafdata());
    if (optics_vid.is_set || is_set(optics_vid.yfilter)) leaf_name_data.push_back(optics_vid.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (otn_application_code.is_set || is_set(otn_application_code.yfilter)) leaf_name_data.push_back(otn_application_code.get_name_leafdata());
    if (sonet_application_code.is_set || is_set(sonet_application_code.yfilter)) leaf_name_data.push_back(sonet_application_code.get_name_leafdata());
    if (ethernet_compliance_code.is_set || is_set(ethernet_compliance_code.yfilter)) leaf_name_data.push_back(ethernet_compliance_code.get_name_leafdata());
    if (internal_temperature.is_set || is_set(internal_temperature.yfilter)) leaf_name_data.push_back(internal_temperature.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor-info")
    {
        vendor_info = value;
        vendor_info.value_namespace = name_space;
        vendor_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adapter-vendor-info")
    {
        adapter_vendor_info = value;
        adapter_vendor_info.value_namespace = name_space;
        adapter_vendor_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-vendor-rev")
    {
        optics_vendor_rev = value;
        optics_vendor_rev.value_namespace = name_space;
        optics_vendor_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-serial-no")
    {
        optics_serial_no = value;
        optics_serial_no.value_namespace = name_space;
        optics_serial_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-vendor-part")
    {
        optics_vendor_part = value;
        optics_vendor_part.value_namespace = name_space;
        optics_vendor_part.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-type")
    {
        optics_type = value;
        optics_type.value_namespace = name_space;
        optics_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-name")
    {
        vendor_name = value;
        vendor_name.value_namespace = name_space;
        vendor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui-no")
    {
        oui_no = value;
        oui_no.value_namespace = name_space;
        oui_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-pid")
    {
        optics_pid = value;
        optics_pid.value_namespace = name_space;
        optics_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-vid")
    {
        optics_vid = value;
        optics_vid.value_namespace = name_space;
        optics_vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-application-code")
    {
        otn_application_code = value;
        otn_application_code.value_namespace = name_space;
        otn_application_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-application-code")
    {
        sonet_application_code = value;
        sonet_application_code.value_namespace = name_space;
        sonet_application_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-compliance-code")
    {
        ethernet_compliance_code = value;
        ethernet_compliance_code.value_namespace = name_space;
        ethernet_compliance_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-temperature")
    {
        internal_temperature = value;
        internal_temperature.value_namespace = name_space;
        internal_temperature.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor-info")
    {
        vendor_info.yfilter = yfilter;
    }
    if(value_path == "adapter-vendor-info")
    {
        adapter_vendor_info.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "optics-vendor-rev")
    {
        optics_vendor_rev.yfilter = yfilter;
    }
    if(value_path == "optics-serial-no")
    {
        optics_serial_no.yfilter = yfilter;
    }
    if(value_path == "optics-vendor-part")
    {
        optics_vendor_part.yfilter = yfilter;
    }
    if(value_path == "optics-type")
    {
        optics_type.yfilter = yfilter;
    }
    if(value_path == "vendor-name")
    {
        vendor_name.yfilter = yfilter;
    }
    if(value_path == "oui-no")
    {
        oui_no.yfilter = yfilter;
    }
    if(value_path == "optics-pid")
    {
        optics_pid.yfilter = yfilter;
    }
    if(value_path == "optics-vid")
    {
        optics_vid.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "otn-application-code")
    {
        otn_application_code.yfilter = yfilter;
    }
    if(value_path == "sonet-application-code")
    {
        sonet_application_code.yfilter = yfilter;
    }
    if(value_path == "ethernet-compliance-code")
    {
        ethernet_compliance_code.yfilter = yfilter;
    }
    if(value_path == "internal-temperature")
    {
        internal_temperature.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor-info" || name == "adapter-vendor-info" || name == "date" || name == "optics-vendor-rev" || name == "optics-serial-no" || name == "optics-vendor-part" || name == "optics-type" || name == "vendor-name" || name == "oui-no" || name == "optics-pid" || name == "optics-vid" || name == "connector-type" || name == "otn-application-code" || name == "sonet-application-code" || name == "ethernet-compliance-code" || name == "internal-temperature")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::ExtParamVal()
    :
    snr_lane1{YType::int32, "snr-lane1"},
    snr_lane2{YType::int32, "snr-lane2"},
    isi_correction_lane1{YType::int32, "isi-correction-lane1"},
    isi_correction_lane2{YType::int32, "isi-correction-lane2"},
    pam_rate_lane1{YType::int32, "pam-rate-lane1"},
    pam_rate_lane2{YType::int32, "pam-rate-lane2"},
    pre_fec_ber{YType::int64, "pre-fec-ber"},
    uncorrected_ber{YType::int64, "uncorrected-ber"},
    tec_current_lane1{YType::int32, "tec-current-lane1"},
    tec_current_lane2{YType::int32, "tec-current-lane2"},
    laser_diff_frequency_lane1{YType::int32, "laser-diff-frequency-lane1"},
    laser_diff_frequency_lane2{YType::int32, "laser-diff-frequency-lane2"},
    laser_diff_temperature_lane1{YType::int32, "laser-diff-temperature-lane1"},
    laser_diff_temperature_lane2{YType::int32, "laser-diff-temperature-lane2"},
    pre_fec_ber_latched_min{YType::int64, "pre-fec-ber-latched-min"},
    pre_fec_ber_latched_max{YType::int64, "pre-fec-ber-latched-max"},
    pre_fec_ber_accumulated{YType::int64, "pre-fec-ber-accumulated"},
    pre_fec_ber_instantaneous{YType::int64, "pre-fec-ber-instantaneous"},
    uncorrected_ber_latched_min{YType::int64, "uncorrected-ber-latched-min"},
    uncorrected_ber_latched_max{YType::int64, "uncorrected-ber-latched-max"},
    uncorrected_ber_accumulated{YType::int64, "uncorrected-ber-accumulated"},
    uncorrected_ber_instantaneous{YType::int64, "uncorrected-ber-instantaneous"}
{

    yang_name = "ext-param-val"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::~ExtParamVal()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::has_data() const
{
    return snr_lane1.is_set
	|| snr_lane2.is_set
	|| isi_correction_lane1.is_set
	|| isi_correction_lane2.is_set
	|| pam_rate_lane1.is_set
	|| pam_rate_lane2.is_set
	|| pre_fec_ber.is_set
	|| uncorrected_ber.is_set
	|| tec_current_lane1.is_set
	|| tec_current_lane2.is_set
	|| laser_diff_frequency_lane1.is_set
	|| laser_diff_frequency_lane2.is_set
	|| laser_diff_temperature_lane1.is_set
	|| laser_diff_temperature_lane2.is_set
	|| pre_fec_ber_latched_min.is_set
	|| pre_fec_ber_latched_max.is_set
	|| pre_fec_ber_accumulated.is_set
	|| pre_fec_ber_instantaneous.is_set
	|| uncorrected_ber_latched_min.is_set
	|| uncorrected_ber_latched_max.is_set
	|| uncorrected_ber_accumulated.is_set
	|| uncorrected_ber_instantaneous.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snr_lane1.yfilter)
	|| ydk::is_set(snr_lane2.yfilter)
	|| ydk::is_set(isi_correction_lane1.yfilter)
	|| ydk::is_set(isi_correction_lane2.yfilter)
	|| ydk::is_set(pam_rate_lane1.yfilter)
	|| ydk::is_set(pam_rate_lane2.yfilter)
	|| ydk::is_set(pre_fec_ber.yfilter)
	|| ydk::is_set(uncorrected_ber.yfilter)
	|| ydk::is_set(tec_current_lane1.yfilter)
	|| ydk::is_set(tec_current_lane2.yfilter)
	|| ydk::is_set(laser_diff_frequency_lane1.yfilter)
	|| ydk::is_set(laser_diff_frequency_lane2.yfilter)
	|| ydk::is_set(laser_diff_temperature_lane1.yfilter)
	|| ydk::is_set(laser_diff_temperature_lane2.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_min.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_max.yfilter)
	|| ydk::is_set(pre_fec_ber_accumulated.yfilter)
	|| ydk::is_set(pre_fec_ber_instantaneous.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_min.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_max.yfilter)
	|| ydk::is_set(uncorrected_ber_accumulated.yfilter)
	|| ydk::is_set(uncorrected_ber_instantaneous.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-param-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snr_lane1.is_set || is_set(snr_lane1.yfilter)) leaf_name_data.push_back(snr_lane1.get_name_leafdata());
    if (snr_lane2.is_set || is_set(snr_lane2.yfilter)) leaf_name_data.push_back(snr_lane2.get_name_leafdata());
    if (isi_correction_lane1.is_set || is_set(isi_correction_lane1.yfilter)) leaf_name_data.push_back(isi_correction_lane1.get_name_leafdata());
    if (isi_correction_lane2.is_set || is_set(isi_correction_lane2.yfilter)) leaf_name_data.push_back(isi_correction_lane2.get_name_leafdata());
    if (pam_rate_lane1.is_set || is_set(pam_rate_lane1.yfilter)) leaf_name_data.push_back(pam_rate_lane1.get_name_leafdata());
    if (pam_rate_lane2.is_set || is_set(pam_rate_lane2.yfilter)) leaf_name_data.push_back(pam_rate_lane2.get_name_leafdata());
    if (pre_fec_ber.is_set || is_set(pre_fec_ber.yfilter)) leaf_name_data.push_back(pre_fec_ber.get_name_leafdata());
    if (uncorrected_ber.is_set || is_set(uncorrected_ber.yfilter)) leaf_name_data.push_back(uncorrected_ber.get_name_leafdata());
    if (tec_current_lane1.is_set || is_set(tec_current_lane1.yfilter)) leaf_name_data.push_back(tec_current_lane1.get_name_leafdata());
    if (tec_current_lane2.is_set || is_set(tec_current_lane2.yfilter)) leaf_name_data.push_back(tec_current_lane2.get_name_leafdata());
    if (laser_diff_frequency_lane1.is_set || is_set(laser_diff_frequency_lane1.yfilter)) leaf_name_data.push_back(laser_diff_frequency_lane1.get_name_leafdata());
    if (laser_diff_frequency_lane2.is_set || is_set(laser_diff_frequency_lane2.yfilter)) leaf_name_data.push_back(laser_diff_frequency_lane2.get_name_leafdata());
    if (laser_diff_temperature_lane1.is_set || is_set(laser_diff_temperature_lane1.yfilter)) leaf_name_data.push_back(laser_diff_temperature_lane1.get_name_leafdata());
    if (laser_diff_temperature_lane2.is_set || is_set(laser_diff_temperature_lane2.yfilter)) leaf_name_data.push_back(laser_diff_temperature_lane2.get_name_leafdata());
    if (pre_fec_ber_latched_min.is_set || is_set(pre_fec_ber_latched_min.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_min.get_name_leafdata());
    if (pre_fec_ber_latched_max.is_set || is_set(pre_fec_ber_latched_max.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_max.get_name_leafdata());
    if (pre_fec_ber_accumulated.is_set || is_set(pre_fec_ber_accumulated.yfilter)) leaf_name_data.push_back(pre_fec_ber_accumulated.get_name_leafdata());
    if (pre_fec_ber_instantaneous.is_set || is_set(pre_fec_ber_instantaneous.yfilter)) leaf_name_data.push_back(pre_fec_ber_instantaneous.get_name_leafdata());
    if (uncorrected_ber_latched_min.is_set || is_set(uncorrected_ber_latched_min.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_min.get_name_leafdata());
    if (uncorrected_ber_latched_max.is_set || is_set(uncorrected_ber_latched_max.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_max.get_name_leafdata());
    if (uncorrected_ber_accumulated.is_set || is_set(uncorrected_ber_accumulated.yfilter)) leaf_name_data.push_back(uncorrected_ber_accumulated.get_name_leafdata());
    if (uncorrected_ber_instantaneous.is_set || is_set(uncorrected_ber_instantaneous.yfilter)) leaf_name_data.push_back(uncorrected_ber_instantaneous.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snr-lane1")
    {
        snr_lane1 = value;
        snr_lane1.value_namespace = name_space;
        snr_lane1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snr-lane2")
    {
        snr_lane2 = value;
        snr_lane2.value_namespace = name_space;
        snr_lane2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isi-correction-lane1")
    {
        isi_correction_lane1 = value;
        isi_correction_lane1.value_namespace = name_space;
        isi_correction_lane1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isi-correction-lane2")
    {
        isi_correction_lane2 = value;
        isi_correction_lane2.value_namespace = name_space;
        isi_correction_lane2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pam-rate-lane1")
    {
        pam_rate_lane1 = value;
        pam_rate_lane1.value_namespace = name_space;
        pam_rate_lane1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pam-rate-lane2")
    {
        pam_rate_lane2 = value;
        pam_rate_lane2.value_namespace = name_space;
        pam_rate_lane2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber")
    {
        pre_fec_ber = value;
        pre_fec_ber.value_namespace = name_space;
        pre_fec_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber")
    {
        uncorrected_ber = value;
        uncorrected_ber.value_namespace = name_space;
        uncorrected_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tec-current-lane1")
    {
        tec_current_lane1 = value;
        tec_current_lane1.value_namespace = name_space;
        tec_current_lane1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tec-current-lane2")
    {
        tec_current_lane2 = value;
        tec_current_lane2.value_namespace = name_space;
        tec_current_lane2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-frequency-lane1")
    {
        laser_diff_frequency_lane1 = value;
        laser_diff_frequency_lane1.value_namespace = name_space;
        laser_diff_frequency_lane1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-frequency-lane2")
    {
        laser_diff_frequency_lane2 = value;
        laser_diff_frequency_lane2.value_namespace = name_space;
        laser_diff_frequency_lane2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-temperature-lane1")
    {
        laser_diff_temperature_lane1 = value;
        laser_diff_temperature_lane1.value_namespace = name_space;
        laser_diff_temperature_lane1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-temperature-lane2")
    {
        laser_diff_temperature_lane2 = value;
        laser_diff_temperature_lane2.value_namespace = name_space;
        laser_diff_temperature_lane2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-min")
    {
        pre_fec_ber_latched_min = value;
        pre_fec_ber_latched_min.value_namespace = name_space;
        pre_fec_ber_latched_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-max")
    {
        pre_fec_ber_latched_max = value;
        pre_fec_ber_latched_max.value_namespace = name_space;
        pre_fec_ber_latched_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-accumulated")
    {
        pre_fec_ber_accumulated = value;
        pre_fec_ber_accumulated.value_namespace = name_space;
        pre_fec_ber_accumulated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-instantaneous")
    {
        pre_fec_ber_instantaneous = value;
        pre_fec_ber_instantaneous.value_namespace = name_space;
        pre_fec_ber_instantaneous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-min")
    {
        uncorrected_ber_latched_min = value;
        uncorrected_ber_latched_min.value_namespace = name_space;
        uncorrected_ber_latched_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-max")
    {
        uncorrected_ber_latched_max = value;
        uncorrected_ber_latched_max.value_namespace = name_space;
        uncorrected_ber_latched_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-accumulated")
    {
        uncorrected_ber_accumulated = value;
        uncorrected_ber_accumulated.value_namespace = name_space;
        uncorrected_ber_accumulated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-instantaneous")
    {
        uncorrected_ber_instantaneous = value;
        uncorrected_ber_instantaneous.value_namespace = name_space;
        uncorrected_ber_instantaneous.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snr-lane1")
    {
        snr_lane1.yfilter = yfilter;
    }
    if(value_path == "snr-lane2")
    {
        snr_lane2.yfilter = yfilter;
    }
    if(value_path == "isi-correction-lane1")
    {
        isi_correction_lane1.yfilter = yfilter;
    }
    if(value_path == "isi-correction-lane2")
    {
        isi_correction_lane2.yfilter = yfilter;
    }
    if(value_path == "pam-rate-lane1")
    {
        pam_rate_lane1.yfilter = yfilter;
    }
    if(value_path == "pam-rate-lane2")
    {
        pam_rate_lane2.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber")
    {
        pre_fec_ber.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber")
    {
        uncorrected_ber.yfilter = yfilter;
    }
    if(value_path == "tec-current-lane1")
    {
        tec_current_lane1.yfilter = yfilter;
    }
    if(value_path == "tec-current-lane2")
    {
        tec_current_lane2.yfilter = yfilter;
    }
    if(value_path == "laser-diff-frequency-lane1")
    {
        laser_diff_frequency_lane1.yfilter = yfilter;
    }
    if(value_path == "laser-diff-frequency-lane2")
    {
        laser_diff_frequency_lane2.yfilter = yfilter;
    }
    if(value_path == "laser-diff-temperature-lane1")
    {
        laser_diff_temperature_lane1.yfilter = yfilter;
    }
    if(value_path == "laser-diff-temperature-lane2")
    {
        laser_diff_temperature_lane2.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-min")
    {
        pre_fec_ber_latched_min.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-max")
    {
        pre_fec_ber_latched_max.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-accumulated")
    {
        pre_fec_ber_accumulated.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-instantaneous")
    {
        pre_fec_ber_instantaneous.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-min")
    {
        uncorrected_ber_latched_min.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-max")
    {
        uncorrected_ber_latched_max.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-accumulated")
    {
        uncorrected_ber_accumulated.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-instantaneous")
    {
        uncorrected_ber_instantaneous.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snr-lane1" || name == "snr-lane2" || name == "isi-correction-lane1" || name == "isi-correction-lane2" || name == "pam-rate-lane1" || name == "pam-rate-lane2" || name == "pre-fec-ber" || name == "uncorrected-ber" || name == "tec-current-lane1" || name == "tec-current-lane2" || name == "laser-diff-frequency-lane1" || name == "laser-diff-frequency-lane2" || name == "laser-diff-temperature-lane1" || name == "laser-diff-temperature-lane2" || name == "pre-fec-ber-latched-min" || name == "pre-fec-ber-latched-max" || name == "pre-fec-ber-accumulated" || name == "pre-fec-ber-instantaneous" || name == "uncorrected-ber-latched-min" || name == "uncorrected-ber-latched-max" || name == "uncorrected-ber-accumulated" || name == "uncorrected-ber-instantaneous")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::ExtParamThresholdVal()
    :
    snr_alarm_high_threshold{YType::int32, "snr-alarm-high-threshold"},
    snr_alarm_low_threshold{YType::int32, "snr-alarm-low-threshold"},
    snr_warn_high_threshold{YType::int32, "snr-warn-high-threshold"},
    snr_warn_low_threshold{YType::int32, "snr-warn-low-threshold"},
    isi_correction_alarm_high_threshold{YType::int32, "isi-correction-alarm-high-threshold"},
    isi_correction_alarm_low_threshold{YType::int32, "isi-correction-alarm-low-threshold"},
    isi_correction_warn_high_threshold{YType::int32, "isi-correction-warn-high-threshold"},
    isi_correction_warn_low_threshold{YType::int32, "isi-correction-warn-low-threshold"},
    pam_rate_alarm_high_threshold{YType::int32, "pam-rate-alarm-high-threshold"},
    pam_rate_alarm_low_threshold{YType::int32, "pam-rate-alarm-low-threshold"},
    pam_rate_warn_high_threshold{YType::int32, "pam-rate-warn-high-threshold"},
    pam_rate_warn_low_threshold{YType::int32, "pam-rate-warn-low-threshold"},
    pre_fec_ber_alarm_high_threshold{YType::int64, "pre-fec-ber-alarm-high-threshold"},
    pre_fec_ber_alarm_low_threshold{YType::int64, "pre-fec-ber-alarm-low-threshold"},
    pre_fec_ber_warn_high_threshold{YType::int64, "pre-fec-ber-warn-high-threshold"},
    pre_fec_ber_warn_low_threshold{YType::int64, "pre-fec-ber-warn-low-threshold"},
    uncorrected_ber_alarm_high_threshold{YType::int64, "uncorrected-ber-alarm-high-threshold"},
    uncorrected_ber_alarm_low_threshold{YType::int64, "uncorrected-ber-alarm-low-threshold"},
    uncorrected_ber_warn_high_threshold{YType::int64, "uncorrected-ber-warn-high-threshold"},
    uncorrected_ber_warn_low_threshold{YType::int64, "uncorrected-ber-warn-low-threshold"},
    tec_current_alarm_high_threshold{YType::int32, "tec-current-alarm-high-threshold"},
    tec_current_alarm_low_threshold{YType::int32, "tec-current-alarm-low-threshold"},
    tec_current_warn_high_threshold{YType::int32, "tec-current-warn-high-threshold"},
    tec_current_warn_low_threshold{YType::int32, "tec-current-warn-low-threshold"},
    laser_diff_frequency_alarm_high_threshold{YType::int32, "laser-diff-frequency-alarm-high-threshold"},
    laser_diff_frequency_alarm_low_threshold{YType::int32, "laser-diff-frequency-alarm-low-threshold"},
    laser_diff_frequency_warn_high_threshold{YType::int32, "laser-diff-frequency-warn-high-threshold"},
    laser_diff_frequency_warn_low_threshold{YType::int32, "laser-diff-frequency-warn-low-threshold"},
    laser_diff_temperature_alarm_high_threshold{YType::int32, "laser-diff-temperature-alarm-high-threshold"},
    laser_diff_temperature_alarm_low_threshold{YType::int32, "laser-diff-temperature-alarm-low-threshold"},
    laser_diff_temperature_warn_high_threshold{YType::int32, "laser-diff-temperature-warn-high-threshold"},
    laser_diff_temperature_warn_low_threshold{YType::int32, "laser-diff-temperature-warn-low-threshold"},
    pre_fec_ber_latched_min_alarm_high_threshold{YType::int64, "pre-fec-ber-latched-min-alarm-high-threshold"},
    pre_fec_ber_latched_min_alarm_low_threshold{YType::int64, "pre-fec-ber-latched-min-alarm-low-threshold"},
    pre_fec_ber_latched_min_warn_high_threshold{YType::int64, "pre-fec-ber-latched-min-warn-high-threshold"},
    pre_fec_ber_latched_min_warn_low_threshold{YType::int64, "pre-fec-ber-latched-min-warn-low-threshold"},
    pre_fec_ber_latched_max_alarm_high_threshold{YType::int64, "pre-fec-ber-latched-max-alarm-high-threshold"},
    pre_fec_ber_latched_max_alarm_low_threshold{YType::int64, "pre-fec-ber-latched-max-alarm-low-threshold"},
    pre_fec_ber_latched_max_warn_high_threshold{YType::int64, "pre-fec-ber-latched-max-warn-high-threshold"},
    pre_fec_ber_latched_max_warn_low_threshold{YType::int64, "pre-fec-ber-latched-max-warn-low-threshold"},
    pre_fec_ber_accumulated_alarm_high_threshold{YType::int64, "pre-fec-ber-accumulated-alarm-high-threshold"},
    pre_fec_ber_accumulated_alarm_low_threshold{YType::int64, "pre-fec-ber-accumulated-alarm-low-threshold"},
    pre_fec_ber_accumulated_warn_high_threshold{YType::int64, "pre-fec-ber-accumulated-warn-high-threshold"},
    pre_fec_ber_accumulated_warn_low_threshold{YType::int64, "pre-fec-ber-accumulated-warn-low-threshold"},
    pre_fec_ber_instantaneous_alarm_high_threshold{YType::int64, "pre-fec-ber-instantaneous-alarm-high-threshold"},
    pre_fec_ber_instantaneous_alarm_low_threshold{YType::int64, "pre-fec-ber-instantaneous-alarm-low-threshold"},
    pre_fec_ber_instantaneous_warn_high_threshold{YType::int64, "pre-fec-ber-instantaneous-warn-high-threshold"},
    pre_fec_ber_instantaneous_warn_low_threshold{YType::int64, "pre-fec-ber-instantaneous-warn-low-threshold"},
    uncorrected_ber_latched_min_alarm_high_threshold{YType::int64, "uncorrected-ber-latched-min-alarm-high-threshold"},
    uncorrected_ber_latched_min_alarm_low_threshold{YType::int64, "uncorrected-ber-latched-min-alarm-low-threshold"},
    uncorrected_ber_latched_min_warn_high_threshold{YType::int64, "uncorrected-ber-latched-min-warn-high-threshold"},
    uncorrected_ber_latched_min_warn_low_threshold{YType::int64, "uncorrected-ber-latched-min-warn-low-threshold"},
    uncorrected_ber_latched_max_alarm_high_threshold{YType::int64, "uncorrected-ber-latched-max-alarm-high-threshold"},
    uncorrected_ber_latched_max_alarm_low_threshold{YType::int64, "uncorrected-ber-latched-max-alarm-low-threshold"},
    uncorrected_ber_latched_max_warn_high_threshold{YType::int64, "uncorrected-ber-latched-max-warn-high-threshold"},
    uncorrected_ber_latched_max_warn_low_threshold{YType::int64, "uncorrected-ber-latched-max-warn-low-threshold"},
    uncorrected_ber_accumulated_alarm_high_threshold{YType::int64, "uncorrected-ber-accumulated-alarm-high-threshold"},
    uncorrected_ber_accumulated_alarm_low_threshold{YType::int64, "uncorrected-ber-accumulated-alarm-low-threshold"},
    uncorrected_ber_accumulated_warn_high_threshold{YType::int64, "uncorrected-ber-accumulated-warn-high-threshold"},
    uncorrected_ber_accumulated_warn_low_threshold{YType::int64, "uncorrected-ber-accumulated-warn-low-threshold"},
    uncorrected_ber_instantaneous_alarm_high_threshold{YType::int64, "uncorrected-ber-instantaneous-alarm-high-threshold"},
    uncorrected_ber_instantaneous_alarm_low_threshold{YType::int64, "uncorrected-ber-instantaneous-alarm-low-threshold"},
    uncorrected_ber_instantaneous_warn_high_threshold{YType::int64, "uncorrected-ber-instantaneous-warn-high-threshold"},
    uncorrected_ber_instantaneous_warn_low_threshold{YType::int64, "uncorrected-ber-instantaneous-warn-low-threshold"}
{

    yang_name = "ext-param-threshold-val"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::~ExtParamThresholdVal()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::has_data() const
{
    return snr_alarm_high_threshold.is_set
	|| snr_alarm_low_threshold.is_set
	|| snr_warn_high_threshold.is_set
	|| snr_warn_low_threshold.is_set
	|| isi_correction_alarm_high_threshold.is_set
	|| isi_correction_alarm_low_threshold.is_set
	|| isi_correction_warn_high_threshold.is_set
	|| isi_correction_warn_low_threshold.is_set
	|| pam_rate_alarm_high_threshold.is_set
	|| pam_rate_alarm_low_threshold.is_set
	|| pam_rate_warn_high_threshold.is_set
	|| pam_rate_warn_low_threshold.is_set
	|| pre_fec_ber_alarm_high_threshold.is_set
	|| pre_fec_ber_alarm_low_threshold.is_set
	|| pre_fec_ber_warn_high_threshold.is_set
	|| pre_fec_ber_warn_low_threshold.is_set
	|| uncorrected_ber_alarm_high_threshold.is_set
	|| uncorrected_ber_alarm_low_threshold.is_set
	|| uncorrected_ber_warn_high_threshold.is_set
	|| uncorrected_ber_warn_low_threshold.is_set
	|| tec_current_alarm_high_threshold.is_set
	|| tec_current_alarm_low_threshold.is_set
	|| tec_current_warn_high_threshold.is_set
	|| tec_current_warn_low_threshold.is_set
	|| laser_diff_frequency_alarm_high_threshold.is_set
	|| laser_diff_frequency_alarm_low_threshold.is_set
	|| laser_diff_frequency_warn_high_threshold.is_set
	|| laser_diff_frequency_warn_low_threshold.is_set
	|| laser_diff_temperature_alarm_high_threshold.is_set
	|| laser_diff_temperature_alarm_low_threshold.is_set
	|| laser_diff_temperature_warn_high_threshold.is_set
	|| laser_diff_temperature_warn_low_threshold.is_set
	|| pre_fec_ber_latched_min_alarm_high_threshold.is_set
	|| pre_fec_ber_latched_min_alarm_low_threshold.is_set
	|| pre_fec_ber_latched_min_warn_high_threshold.is_set
	|| pre_fec_ber_latched_min_warn_low_threshold.is_set
	|| pre_fec_ber_latched_max_alarm_high_threshold.is_set
	|| pre_fec_ber_latched_max_alarm_low_threshold.is_set
	|| pre_fec_ber_latched_max_warn_high_threshold.is_set
	|| pre_fec_ber_latched_max_warn_low_threshold.is_set
	|| pre_fec_ber_accumulated_alarm_high_threshold.is_set
	|| pre_fec_ber_accumulated_alarm_low_threshold.is_set
	|| pre_fec_ber_accumulated_warn_high_threshold.is_set
	|| pre_fec_ber_accumulated_warn_low_threshold.is_set
	|| pre_fec_ber_instantaneous_alarm_high_threshold.is_set
	|| pre_fec_ber_instantaneous_alarm_low_threshold.is_set
	|| pre_fec_ber_instantaneous_warn_high_threshold.is_set
	|| pre_fec_ber_instantaneous_warn_low_threshold.is_set
	|| uncorrected_ber_latched_min_alarm_high_threshold.is_set
	|| uncorrected_ber_latched_min_alarm_low_threshold.is_set
	|| uncorrected_ber_latched_min_warn_high_threshold.is_set
	|| uncorrected_ber_latched_min_warn_low_threshold.is_set
	|| uncorrected_ber_latched_max_alarm_high_threshold.is_set
	|| uncorrected_ber_latched_max_alarm_low_threshold.is_set
	|| uncorrected_ber_latched_max_warn_high_threshold.is_set
	|| uncorrected_ber_latched_max_warn_low_threshold.is_set
	|| uncorrected_ber_accumulated_alarm_high_threshold.is_set
	|| uncorrected_ber_accumulated_alarm_low_threshold.is_set
	|| uncorrected_ber_accumulated_warn_high_threshold.is_set
	|| uncorrected_ber_accumulated_warn_low_threshold.is_set
	|| uncorrected_ber_instantaneous_alarm_high_threshold.is_set
	|| uncorrected_ber_instantaneous_alarm_low_threshold.is_set
	|| uncorrected_ber_instantaneous_warn_high_threshold.is_set
	|| uncorrected_ber_instantaneous_warn_low_threshold.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snr_alarm_high_threshold.yfilter)
	|| ydk::is_set(snr_alarm_low_threshold.yfilter)
	|| ydk::is_set(snr_warn_high_threshold.yfilter)
	|| ydk::is_set(snr_warn_low_threshold.yfilter)
	|| ydk::is_set(isi_correction_alarm_high_threshold.yfilter)
	|| ydk::is_set(isi_correction_alarm_low_threshold.yfilter)
	|| ydk::is_set(isi_correction_warn_high_threshold.yfilter)
	|| ydk::is_set(isi_correction_warn_low_threshold.yfilter)
	|| ydk::is_set(pam_rate_alarm_high_threshold.yfilter)
	|| ydk::is_set(pam_rate_alarm_low_threshold.yfilter)
	|| ydk::is_set(pam_rate_warn_high_threshold.yfilter)
	|| ydk::is_set(pam_rate_warn_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_alarm_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_alarm_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_warn_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_warn_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_alarm_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_alarm_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_warn_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_warn_low_threshold.yfilter)
	|| ydk::is_set(tec_current_alarm_high_threshold.yfilter)
	|| ydk::is_set(tec_current_alarm_low_threshold.yfilter)
	|| ydk::is_set(tec_current_warn_high_threshold.yfilter)
	|| ydk::is_set(tec_current_warn_low_threshold.yfilter)
	|| ydk::is_set(laser_diff_frequency_alarm_high_threshold.yfilter)
	|| ydk::is_set(laser_diff_frequency_alarm_low_threshold.yfilter)
	|| ydk::is_set(laser_diff_frequency_warn_high_threshold.yfilter)
	|| ydk::is_set(laser_diff_frequency_warn_low_threshold.yfilter)
	|| ydk::is_set(laser_diff_temperature_alarm_high_threshold.yfilter)
	|| ydk::is_set(laser_diff_temperature_alarm_low_threshold.yfilter)
	|| ydk::is_set(laser_diff_temperature_warn_high_threshold.yfilter)
	|| ydk::is_set(laser_diff_temperature_warn_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_min_alarm_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_min_alarm_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_min_warn_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_min_warn_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_max_alarm_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_max_alarm_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_max_warn_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_latched_max_warn_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_accumulated_alarm_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_accumulated_alarm_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_accumulated_warn_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_accumulated_warn_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_instantaneous_alarm_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_instantaneous_alarm_low_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_instantaneous_warn_high_threshold.yfilter)
	|| ydk::is_set(pre_fec_ber_instantaneous_warn_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_min_alarm_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_min_alarm_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_min_warn_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_min_warn_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_max_alarm_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_max_alarm_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_max_warn_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_latched_max_warn_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_accumulated_alarm_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_accumulated_alarm_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_accumulated_warn_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_accumulated_warn_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_instantaneous_alarm_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_instantaneous_alarm_low_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_instantaneous_warn_high_threshold.yfilter)
	|| ydk::is_set(uncorrected_ber_instantaneous_warn_low_threshold.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-param-threshold-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snr_alarm_high_threshold.is_set || is_set(snr_alarm_high_threshold.yfilter)) leaf_name_data.push_back(snr_alarm_high_threshold.get_name_leafdata());
    if (snr_alarm_low_threshold.is_set || is_set(snr_alarm_low_threshold.yfilter)) leaf_name_data.push_back(snr_alarm_low_threshold.get_name_leafdata());
    if (snr_warn_high_threshold.is_set || is_set(snr_warn_high_threshold.yfilter)) leaf_name_data.push_back(snr_warn_high_threshold.get_name_leafdata());
    if (snr_warn_low_threshold.is_set || is_set(snr_warn_low_threshold.yfilter)) leaf_name_data.push_back(snr_warn_low_threshold.get_name_leafdata());
    if (isi_correction_alarm_high_threshold.is_set || is_set(isi_correction_alarm_high_threshold.yfilter)) leaf_name_data.push_back(isi_correction_alarm_high_threshold.get_name_leafdata());
    if (isi_correction_alarm_low_threshold.is_set || is_set(isi_correction_alarm_low_threshold.yfilter)) leaf_name_data.push_back(isi_correction_alarm_low_threshold.get_name_leafdata());
    if (isi_correction_warn_high_threshold.is_set || is_set(isi_correction_warn_high_threshold.yfilter)) leaf_name_data.push_back(isi_correction_warn_high_threshold.get_name_leafdata());
    if (isi_correction_warn_low_threshold.is_set || is_set(isi_correction_warn_low_threshold.yfilter)) leaf_name_data.push_back(isi_correction_warn_low_threshold.get_name_leafdata());
    if (pam_rate_alarm_high_threshold.is_set || is_set(pam_rate_alarm_high_threshold.yfilter)) leaf_name_data.push_back(pam_rate_alarm_high_threshold.get_name_leafdata());
    if (pam_rate_alarm_low_threshold.is_set || is_set(pam_rate_alarm_low_threshold.yfilter)) leaf_name_data.push_back(pam_rate_alarm_low_threshold.get_name_leafdata());
    if (pam_rate_warn_high_threshold.is_set || is_set(pam_rate_warn_high_threshold.yfilter)) leaf_name_data.push_back(pam_rate_warn_high_threshold.get_name_leafdata());
    if (pam_rate_warn_low_threshold.is_set || is_set(pam_rate_warn_low_threshold.yfilter)) leaf_name_data.push_back(pam_rate_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_alarm_high_threshold.is_set || is_set(pre_fec_ber_alarm_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_alarm_low_threshold.is_set || is_set(pre_fec_ber_alarm_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_warn_high_threshold.is_set || is_set(pre_fec_ber_warn_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_warn_low_threshold.is_set || is_set(pre_fec_ber_warn_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_alarm_high_threshold.is_set || is_set(uncorrected_ber_alarm_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_alarm_low_threshold.is_set || is_set(uncorrected_ber_alarm_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_warn_high_threshold.is_set || is_set(uncorrected_ber_warn_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_warn_low_threshold.is_set || is_set(uncorrected_ber_warn_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_warn_low_threshold.get_name_leafdata());
    if (tec_current_alarm_high_threshold.is_set || is_set(tec_current_alarm_high_threshold.yfilter)) leaf_name_data.push_back(tec_current_alarm_high_threshold.get_name_leafdata());
    if (tec_current_alarm_low_threshold.is_set || is_set(tec_current_alarm_low_threshold.yfilter)) leaf_name_data.push_back(tec_current_alarm_low_threshold.get_name_leafdata());
    if (tec_current_warn_high_threshold.is_set || is_set(tec_current_warn_high_threshold.yfilter)) leaf_name_data.push_back(tec_current_warn_high_threshold.get_name_leafdata());
    if (tec_current_warn_low_threshold.is_set || is_set(tec_current_warn_low_threshold.yfilter)) leaf_name_data.push_back(tec_current_warn_low_threshold.get_name_leafdata());
    if (laser_diff_frequency_alarm_high_threshold.is_set || is_set(laser_diff_frequency_alarm_high_threshold.yfilter)) leaf_name_data.push_back(laser_diff_frequency_alarm_high_threshold.get_name_leafdata());
    if (laser_diff_frequency_alarm_low_threshold.is_set || is_set(laser_diff_frequency_alarm_low_threshold.yfilter)) leaf_name_data.push_back(laser_diff_frequency_alarm_low_threshold.get_name_leafdata());
    if (laser_diff_frequency_warn_high_threshold.is_set || is_set(laser_diff_frequency_warn_high_threshold.yfilter)) leaf_name_data.push_back(laser_diff_frequency_warn_high_threshold.get_name_leafdata());
    if (laser_diff_frequency_warn_low_threshold.is_set || is_set(laser_diff_frequency_warn_low_threshold.yfilter)) leaf_name_data.push_back(laser_diff_frequency_warn_low_threshold.get_name_leafdata());
    if (laser_diff_temperature_alarm_high_threshold.is_set || is_set(laser_diff_temperature_alarm_high_threshold.yfilter)) leaf_name_data.push_back(laser_diff_temperature_alarm_high_threshold.get_name_leafdata());
    if (laser_diff_temperature_alarm_low_threshold.is_set || is_set(laser_diff_temperature_alarm_low_threshold.yfilter)) leaf_name_data.push_back(laser_diff_temperature_alarm_low_threshold.get_name_leafdata());
    if (laser_diff_temperature_warn_high_threshold.is_set || is_set(laser_diff_temperature_warn_high_threshold.yfilter)) leaf_name_data.push_back(laser_diff_temperature_warn_high_threshold.get_name_leafdata());
    if (laser_diff_temperature_warn_low_threshold.is_set || is_set(laser_diff_temperature_warn_low_threshold.yfilter)) leaf_name_data.push_back(laser_diff_temperature_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_alarm_high_threshold.is_set || is_set(pre_fec_ber_latched_min_alarm_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_min_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_alarm_low_threshold.is_set || is_set(pre_fec_ber_latched_min_alarm_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_min_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_warn_high_threshold.is_set || is_set(pre_fec_ber_latched_min_warn_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_min_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_min_warn_low_threshold.is_set || is_set(pre_fec_ber_latched_min_warn_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_min_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_alarm_high_threshold.is_set || is_set(pre_fec_ber_latched_max_alarm_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_max_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_alarm_low_threshold.is_set || is_set(pre_fec_ber_latched_max_alarm_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_max_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_warn_high_threshold.is_set || is_set(pre_fec_ber_latched_max_warn_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_max_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_latched_max_warn_low_threshold.is_set || is_set(pre_fec_ber_latched_max_warn_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_latched_max_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_alarm_high_threshold.is_set || is_set(pre_fec_ber_accumulated_alarm_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_accumulated_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_alarm_low_threshold.is_set || is_set(pre_fec_ber_accumulated_alarm_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_accumulated_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_warn_high_threshold.is_set || is_set(pre_fec_ber_accumulated_warn_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_accumulated_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_accumulated_warn_low_threshold.is_set || is_set(pre_fec_ber_accumulated_warn_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_accumulated_warn_low_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_alarm_high_threshold.is_set || is_set(pre_fec_ber_instantaneous_alarm_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_instantaneous_alarm_high_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_alarm_low_threshold.is_set || is_set(pre_fec_ber_instantaneous_alarm_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_instantaneous_alarm_low_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_warn_high_threshold.is_set || is_set(pre_fec_ber_instantaneous_warn_high_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_instantaneous_warn_high_threshold.get_name_leafdata());
    if (pre_fec_ber_instantaneous_warn_low_threshold.is_set || is_set(pre_fec_ber_instantaneous_warn_low_threshold.yfilter)) leaf_name_data.push_back(pre_fec_ber_instantaneous_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_alarm_high_threshold.is_set || is_set(uncorrected_ber_latched_min_alarm_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_min_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_alarm_low_threshold.is_set || is_set(uncorrected_ber_latched_min_alarm_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_min_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_warn_high_threshold.is_set || is_set(uncorrected_ber_latched_min_warn_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_min_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_min_warn_low_threshold.is_set || is_set(uncorrected_ber_latched_min_warn_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_min_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_alarm_high_threshold.is_set || is_set(uncorrected_ber_latched_max_alarm_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_max_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_alarm_low_threshold.is_set || is_set(uncorrected_ber_latched_max_alarm_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_max_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_warn_high_threshold.is_set || is_set(uncorrected_ber_latched_max_warn_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_max_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_latched_max_warn_low_threshold.is_set || is_set(uncorrected_ber_latched_max_warn_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_latched_max_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_alarm_high_threshold.is_set || is_set(uncorrected_ber_accumulated_alarm_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_accumulated_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_alarm_low_threshold.is_set || is_set(uncorrected_ber_accumulated_alarm_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_accumulated_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_warn_high_threshold.is_set || is_set(uncorrected_ber_accumulated_warn_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_accumulated_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_accumulated_warn_low_threshold.is_set || is_set(uncorrected_ber_accumulated_warn_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_accumulated_warn_low_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_alarm_high_threshold.is_set || is_set(uncorrected_ber_instantaneous_alarm_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_instantaneous_alarm_high_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_alarm_low_threshold.is_set || is_set(uncorrected_ber_instantaneous_alarm_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_instantaneous_alarm_low_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_warn_high_threshold.is_set || is_set(uncorrected_ber_instantaneous_warn_high_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_instantaneous_warn_high_threshold.get_name_leafdata());
    if (uncorrected_ber_instantaneous_warn_low_threshold.is_set || is_set(uncorrected_ber_instantaneous_warn_low_threshold.yfilter)) leaf_name_data.push_back(uncorrected_ber_instantaneous_warn_low_threshold.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snr-alarm-high-threshold")
    {
        snr_alarm_high_threshold = value;
        snr_alarm_high_threshold.value_namespace = name_space;
        snr_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snr-alarm-low-threshold")
    {
        snr_alarm_low_threshold = value;
        snr_alarm_low_threshold.value_namespace = name_space;
        snr_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snr-warn-high-threshold")
    {
        snr_warn_high_threshold = value;
        snr_warn_high_threshold.value_namespace = name_space;
        snr_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snr-warn-low-threshold")
    {
        snr_warn_low_threshold = value;
        snr_warn_low_threshold.value_namespace = name_space;
        snr_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isi-correction-alarm-high-threshold")
    {
        isi_correction_alarm_high_threshold = value;
        isi_correction_alarm_high_threshold.value_namespace = name_space;
        isi_correction_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isi-correction-alarm-low-threshold")
    {
        isi_correction_alarm_low_threshold = value;
        isi_correction_alarm_low_threshold.value_namespace = name_space;
        isi_correction_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isi-correction-warn-high-threshold")
    {
        isi_correction_warn_high_threshold = value;
        isi_correction_warn_high_threshold.value_namespace = name_space;
        isi_correction_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isi-correction-warn-low-threshold")
    {
        isi_correction_warn_low_threshold = value;
        isi_correction_warn_low_threshold.value_namespace = name_space;
        isi_correction_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pam-rate-alarm-high-threshold")
    {
        pam_rate_alarm_high_threshold = value;
        pam_rate_alarm_high_threshold.value_namespace = name_space;
        pam_rate_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pam-rate-alarm-low-threshold")
    {
        pam_rate_alarm_low_threshold = value;
        pam_rate_alarm_low_threshold.value_namespace = name_space;
        pam_rate_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pam-rate-warn-high-threshold")
    {
        pam_rate_warn_high_threshold = value;
        pam_rate_warn_high_threshold.value_namespace = name_space;
        pam_rate_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pam-rate-warn-low-threshold")
    {
        pam_rate_warn_low_threshold = value;
        pam_rate_warn_low_threshold.value_namespace = name_space;
        pam_rate_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-alarm-high-threshold")
    {
        pre_fec_ber_alarm_high_threshold = value;
        pre_fec_ber_alarm_high_threshold.value_namespace = name_space;
        pre_fec_ber_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-alarm-low-threshold")
    {
        pre_fec_ber_alarm_low_threshold = value;
        pre_fec_ber_alarm_low_threshold.value_namespace = name_space;
        pre_fec_ber_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-warn-high-threshold")
    {
        pre_fec_ber_warn_high_threshold = value;
        pre_fec_ber_warn_high_threshold.value_namespace = name_space;
        pre_fec_ber_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-warn-low-threshold")
    {
        pre_fec_ber_warn_low_threshold = value;
        pre_fec_ber_warn_low_threshold.value_namespace = name_space;
        pre_fec_ber_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-alarm-high-threshold")
    {
        uncorrected_ber_alarm_high_threshold = value;
        uncorrected_ber_alarm_high_threshold.value_namespace = name_space;
        uncorrected_ber_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-alarm-low-threshold")
    {
        uncorrected_ber_alarm_low_threshold = value;
        uncorrected_ber_alarm_low_threshold.value_namespace = name_space;
        uncorrected_ber_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-warn-high-threshold")
    {
        uncorrected_ber_warn_high_threshold = value;
        uncorrected_ber_warn_high_threshold.value_namespace = name_space;
        uncorrected_ber_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-warn-low-threshold")
    {
        uncorrected_ber_warn_low_threshold = value;
        uncorrected_ber_warn_low_threshold.value_namespace = name_space;
        uncorrected_ber_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tec-current-alarm-high-threshold")
    {
        tec_current_alarm_high_threshold = value;
        tec_current_alarm_high_threshold.value_namespace = name_space;
        tec_current_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tec-current-alarm-low-threshold")
    {
        tec_current_alarm_low_threshold = value;
        tec_current_alarm_low_threshold.value_namespace = name_space;
        tec_current_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tec-current-warn-high-threshold")
    {
        tec_current_warn_high_threshold = value;
        tec_current_warn_high_threshold.value_namespace = name_space;
        tec_current_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tec-current-warn-low-threshold")
    {
        tec_current_warn_low_threshold = value;
        tec_current_warn_low_threshold.value_namespace = name_space;
        tec_current_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-frequency-alarm-high-threshold")
    {
        laser_diff_frequency_alarm_high_threshold = value;
        laser_diff_frequency_alarm_high_threshold.value_namespace = name_space;
        laser_diff_frequency_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-frequency-alarm-low-threshold")
    {
        laser_diff_frequency_alarm_low_threshold = value;
        laser_diff_frequency_alarm_low_threshold.value_namespace = name_space;
        laser_diff_frequency_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-frequency-warn-high-threshold")
    {
        laser_diff_frequency_warn_high_threshold = value;
        laser_diff_frequency_warn_high_threshold.value_namespace = name_space;
        laser_diff_frequency_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-frequency-warn-low-threshold")
    {
        laser_diff_frequency_warn_low_threshold = value;
        laser_diff_frequency_warn_low_threshold.value_namespace = name_space;
        laser_diff_frequency_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-temperature-alarm-high-threshold")
    {
        laser_diff_temperature_alarm_high_threshold = value;
        laser_diff_temperature_alarm_high_threshold.value_namespace = name_space;
        laser_diff_temperature_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-temperature-alarm-low-threshold")
    {
        laser_diff_temperature_alarm_low_threshold = value;
        laser_diff_temperature_alarm_low_threshold.value_namespace = name_space;
        laser_diff_temperature_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-temperature-warn-high-threshold")
    {
        laser_diff_temperature_warn_high_threshold = value;
        laser_diff_temperature_warn_high_threshold.value_namespace = name_space;
        laser_diff_temperature_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-diff-temperature-warn-low-threshold")
    {
        laser_diff_temperature_warn_low_threshold = value;
        laser_diff_temperature_warn_low_threshold.value_namespace = name_space;
        laser_diff_temperature_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-min-alarm-high-threshold")
    {
        pre_fec_ber_latched_min_alarm_high_threshold = value;
        pre_fec_ber_latched_min_alarm_high_threshold.value_namespace = name_space;
        pre_fec_ber_latched_min_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-min-alarm-low-threshold")
    {
        pre_fec_ber_latched_min_alarm_low_threshold = value;
        pre_fec_ber_latched_min_alarm_low_threshold.value_namespace = name_space;
        pre_fec_ber_latched_min_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-min-warn-high-threshold")
    {
        pre_fec_ber_latched_min_warn_high_threshold = value;
        pre_fec_ber_latched_min_warn_high_threshold.value_namespace = name_space;
        pre_fec_ber_latched_min_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-min-warn-low-threshold")
    {
        pre_fec_ber_latched_min_warn_low_threshold = value;
        pre_fec_ber_latched_min_warn_low_threshold.value_namespace = name_space;
        pre_fec_ber_latched_min_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-max-alarm-high-threshold")
    {
        pre_fec_ber_latched_max_alarm_high_threshold = value;
        pre_fec_ber_latched_max_alarm_high_threshold.value_namespace = name_space;
        pre_fec_ber_latched_max_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-max-alarm-low-threshold")
    {
        pre_fec_ber_latched_max_alarm_low_threshold = value;
        pre_fec_ber_latched_max_alarm_low_threshold.value_namespace = name_space;
        pre_fec_ber_latched_max_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-max-warn-high-threshold")
    {
        pre_fec_ber_latched_max_warn_high_threshold = value;
        pre_fec_ber_latched_max_warn_high_threshold.value_namespace = name_space;
        pre_fec_ber_latched_max_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-latched-max-warn-low-threshold")
    {
        pre_fec_ber_latched_max_warn_low_threshold = value;
        pre_fec_ber_latched_max_warn_low_threshold.value_namespace = name_space;
        pre_fec_ber_latched_max_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-accumulated-alarm-high-threshold")
    {
        pre_fec_ber_accumulated_alarm_high_threshold = value;
        pre_fec_ber_accumulated_alarm_high_threshold.value_namespace = name_space;
        pre_fec_ber_accumulated_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-accumulated-alarm-low-threshold")
    {
        pre_fec_ber_accumulated_alarm_low_threshold = value;
        pre_fec_ber_accumulated_alarm_low_threshold.value_namespace = name_space;
        pre_fec_ber_accumulated_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-accumulated-warn-high-threshold")
    {
        pre_fec_ber_accumulated_warn_high_threshold = value;
        pre_fec_ber_accumulated_warn_high_threshold.value_namespace = name_space;
        pre_fec_ber_accumulated_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-accumulated-warn-low-threshold")
    {
        pre_fec_ber_accumulated_warn_low_threshold = value;
        pre_fec_ber_accumulated_warn_low_threshold.value_namespace = name_space;
        pre_fec_ber_accumulated_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-instantaneous-alarm-high-threshold")
    {
        pre_fec_ber_instantaneous_alarm_high_threshold = value;
        pre_fec_ber_instantaneous_alarm_high_threshold.value_namespace = name_space;
        pre_fec_ber_instantaneous_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-instantaneous-alarm-low-threshold")
    {
        pre_fec_ber_instantaneous_alarm_low_threshold = value;
        pre_fec_ber_instantaneous_alarm_low_threshold.value_namespace = name_space;
        pre_fec_ber_instantaneous_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-instantaneous-warn-high-threshold")
    {
        pre_fec_ber_instantaneous_warn_high_threshold = value;
        pre_fec_ber_instantaneous_warn_high_threshold.value_namespace = name_space;
        pre_fec_ber_instantaneous_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-instantaneous-warn-low-threshold")
    {
        pre_fec_ber_instantaneous_warn_low_threshold = value;
        pre_fec_ber_instantaneous_warn_low_threshold.value_namespace = name_space;
        pre_fec_ber_instantaneous_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-min-alarm-high-threshold")
    {
        uncorrected_ber_latched_min_alarm_high_threshold = value;
        uncorrected_ber_latched_min_alarm_high_threshold.value_namespace = name_space;
        uncorrected_ber_latched_min_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-min-alarm-low-threshold")
    {
        uncorrected_ber_latched_min_alarm_low_threshold = value;
        uncorrected_ber_latched_min_alarm_low_threshold.value_namespace = name_space;
        uncorrected_ber_latched_min_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-min-warn-high-threshold")
    {
        uncorrected_ber_latched_min_warn_high_threshold = value;
        uncorrected_ber_latched_min_warn_high_threshold.value_namespace = name_space;
        uncorrected_ber_latched_min_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-min-warn-low-threshold")
    {
        uncorrected_ber_latched_min_warn_low_threshold = value;
        uncorrected_ber_latched_min_warn_low_threshold.value_namespace = name_space;
        uncorrected_ber_latched_min_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-max-alarm-high-threshold")
    {
        uncorrected_ber_latched_max_alarm_high_threshold = value;
        uncorrected_ber_latched_max_alarm_high_threshold.value_namespace = name_space;
        uncorrected_ber_latched_max_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-max-alarm-low-threshold")
    {
        uncorrected_ber_latched_max_alarm_low_threshold = value;
        uncorrected_ber_latched_max_alarm_low_threshold.value_namespace = name_space;
        uncorrected_ber_latched_max_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-max-warn-high-threshold")
    {
        uncorrected_ber_latched_max_warn_high_threshold = value;
        uncorrected_ber_latched_max_warn_high_threshold.value_namespace = name_space;
        uncorrected_ber_latched_max_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-latched-max-warn-low-threshold")
    {
        uncorrected_ber_latched_max_warn_low_threshold = value;
        uncorrected_ber_latched_max_warn_low_threshold.value_namespace = name_space;
        uncorrected_ber_latched_max_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-accumulated-alarm-high-threshold")
    {
        uncorrected_ber_accumulated_alarm_high_threshold = value;
        uncorrected_ber_accumulated_alarm_high_threshold.value_namespace = name_space;
        uncorrected_ber_accumulated_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-accumulated-alarm-low-threshold")
    {
        uncorrected_ber_accumulated_alarm_low_threshold = value;
        uncorrected_ber_accumulated_alarm_low_threshold.value_namespace = name_space;
        uncorrected_ber_accumulated_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-accumulated-warn-high-threshold")
    {
        uncorrected_ber_accumulated_warn_high_threshold = value;
        uncorrected_ber_accumulated_warn_high_threshold.value_namespace = name_space;
        uncorrected_ber_accumulated_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-accumulated-warn-low-threshold")
    {
        uncorrected_ber_accumulated_warn_low_threshold = value;
        uncorrected_ber_accumulated_warn_low_threshold.value_namespace = name_space;
        uncorrected_ber_accumulated_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-instantaneous-alarm-high-threshold")
    {
        uncorrected_ber_instantaneous_alarm_high_threshold = value;
        uncorrected_ber_instantaneous_alarm_high_threshold.value_namespace = name_space;
        uncorrected_ber_instantaneous_alarm_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-instantaneous-alarm-low-threshold")
    {
        uncorrected_ber_instantaneous_alarm_low_threshold = value;
        uncorrected_ber_instantaneous_alarm_low_threshold.value_namespace = name_space;
        uncorrected_ber_instantaneous_alarm_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-instantaneous-warn-high-threshold")
    {
        uncorrected_ber_instantaneous_warn_high_threshold = value;
        uncorrected_ber_instantaneous_warn_high_threshold.value_namespace = name_space;
        uncorrected_ber_instantaneous_warn_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-ber-instantaneous-warn-low-threshold")
    {
        uncorrected_ber_instantaneous_warn_low_threshold = value;
        uncorrected_ber_instantaneous_warn_low_threshold.value_namespace = name_space;
        uncorrected_ber_instantaneous_warn_low_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snr-alarm-high-threshold")
    {
        snr_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "snr-alarm-low-threshold")
    {
        snr_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "snr-warn-high-threshold")
    {
        snr_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "snr-warn-low-threshold")
    {
        snr_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "isi-correction-alarm-high-threshold")
    {
        isi_correction_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "isi-correction-alarm-low-threshold")
    {
        isi_correction_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "isi-correction-warn-high-threshold")
    {
        isi_correction_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "isi-correction-warn-low-threshold")
    {
        isi_correction_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pam-rate-alarm-high-threshold")
    {
        pam_rate_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pam-rate-alarm-low-threshold")
    {
        pam_rate_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pam-rate-warn-high-threshold")
    {
        pam_rate_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pam-rate-warn-low-threshold")
    {
        pam_rate_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-alarm-high-threshold")
    {
        pre_fec_ber_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-alarm-low-threshold")
    {
        pre_fec_ber_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-warn-high-threshold")
    {
        pre_fec_ber_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-warn-low-threshold")
    {
        pre_fec_ber_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-alarm-high-threshold")
    {
        uncorrected_ber_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-alarm-low-threshold")
    {
        uncorrected_ber_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-warn-high-threshold")
    {
        uncorrected_ber_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-warn-low-threshold")
    {
        uncorrected_ber_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "tec-current-alarm-high-threshold")
    {
        tec_current_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "tec-current-alarm-low-threshold")
    {
        tec_current_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "tec-current-warn-high-threshold")
    {
        tec_current_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "tec-current-warn-low-threshold")
    {
        tec_current_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-frequency-alarm-high-threshold")
    {
        laser_diff_frequency_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-frequency-alarm-low-threshold")
    {
        laser_diff_frequency_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-frequency-warn-high-threshold")
    {
        laser_diff_frequency_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-frequency-warn-low-threshold")
    {
        laser_diff_frequency_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-temperature-alarm-high-threshold")
    {
        laser_diff_temperature_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-temperature-alarm-low-threshold")
    {
        laser_diff_temperature_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-temperature-warn-high-threshold")
    {
        laser_diff_temperature_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "laser-diff-temperature-warn-low-threshold")
    {
        laser_diff_temperature_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-min-alarm-high-threshold")
    {
        pre_fec_ber_latched_min_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-min-alarm-low-threshold")
    {
        pre_fec_ber_latched_min_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-min-warn-high-threshold")
    {
        pre_fec_ber_latched_min_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-min-warn-low-threshold")
    {
        pre_fec_ber_latched_min_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-max-alarm-high-threshold")
    {
        pre_fec_ber_latched_max_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-max-alarm-low-threshold")
    {
        pre_fec_ber_latched_max_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-max-warn-high-threshold")
    {
        pre_fec_ber_latched_max_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-latched-max-warn-low-threshold")
    {
        pre_fec_ber_latched_max_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-accumulated-alarm-high-threshold")
    {
        pre_fec_ber_accumulated_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-accumulated-alarm-low-threshold")
    {
        pre_fec_ber_accumulated_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-accumulated-warn-high-threshold")
    {
        pre_fec_ber_accumulated_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-accumulated-warn-low-threshold")
    {
        pre_fec_ber_accumulated_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-instantaneous-alarm-high-threshold")
    {
        pre_fec_ber_instantaneous_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-instantaneous-alarm-low-threshold")
    {
        pre_fec_ber_instantaneous_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-instantaneous-warn-high-threshold")
    {
        pre_fec_ber_instantaneous_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-instantaneous-warn-low-threshold")
    {
        pre_fec_ber_instantaneous_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-min-alarm-high-threshold")
    {
        uncorrected_ber_latched_min_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-min-alarm-low-threshold")
    {
        uncorrected_ber_latched_min_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-min-warn-high-threshold")
    {
        uncorrected_ber_latched_min_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-min-warn-low-threshold")
    {
        uncorrected_ber_latched_min_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-max-alarm-high-threshold")
    {
        uncorrected_ber_latched_max_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-max-alarm-low-threshold")
    {
        uncorrected_ber_latched_max_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-max-warn-high-threshold")
    {
        uncorrected_ber_latched_max_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-latched-max-warn-low-threshold")
    {
        uncorrected_ber_latched_max_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-accumulated-alarm-high-threshold")
    {
        uncorrected_ber_accumulated_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-accumulated-alarm-low-threshold")
    {
        uncorrected_ber_accumulated_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-accumulated-warn-high-threshold")
    {
        uncorrected_ber_accumulated_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-accumulated-warn-low-threshold")
    {
        uncorrected_ber_accumulated_warn_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-instantaneous-alarm-high-threshold")
    {
        uncorrected_ber_instantaneous_alarm_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-instantaneous-alarm-low-threshold")
    {
        uncorrected_ber_instantaneous_alarm_low_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-instantaneous-warn-high-threshold")
    {
        uncorrected_ber_instantaneous_warn_high_threshold.yfilter = yfilter;
    }
    if(value_path == "uncorrected-ber-instantaneous-warn-low-threshold")
    {
        uncorrected_ber_instantaneous_warn_low_threshold.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snr-alarm-high-threshold" || name == "snr-alarm-low-threshold" || name == "snr-warn-high-threshold" || name == "snr-warn-low-threshold" || name == "isi-correction-alarm-high-threshold" || name == "isi-correction-alarm-low-threshold" || name == "isi-correction-warn-high-threshold" || name == "isi-correction-warn-low-threshold" || name == "pam-rate-alarm-high-threshold" || name == "pam-rate-alarm-low-threshold" || name == "pam-rate-warn-high-threshold" || name == "pam-rate-warn-low-threshold" || name == "pre-fec-ber-alarm-high-threshold" || name == "pre-fec-ber-alarm-low-threshold" || name == "pre-fec-ber-warn-high-threshold" || name == "pre-fec-ber-warn-low-threshold" || name == "uncorrected-ber-alarm-high-threshold" || name == "uncorrected-ber-alarm-low-threshold" || name == "uncorrected-ber-warn-high-threshold" || name == "uncorrected-ber-warn-low-threshold" || name == "tec-current-alarm-high-threshold" || name == "tec-current-alarm-low-threshold" || name == "tec-current-warn-high-threshold" || name == "tec-current-warn-low-threshold" || name == "laser-diff-frequency-alarm-high-threshold" || name == "laser-diff-frequency-alarm-low-threshold" || name == "laser-diff-frequency-warn-high-threshold" || name == "laser-diff-frequency-warn-low-threshold" || name == "laser-diff-temperature-alarm-high-threshold" || name == "laser-diff-temperature-alarm-low-threshold" || name == "laser-diff-temperature-warn-high-threshold" || name == "laser-diff-temperature-warn-low-threshold" || name == "pre-fec-ber-latched-min-alarm-high-threshold" || name == "pre-fec-ber-latched-min-alarm-low-threshold" || name == "pre-fec-ber-latched-min-warn-high-threshold" || name == "pre-fec-ber-latched-min-warn-low-threshold" || name == "pre-fec-ber-latched-max-alarm-high-threshold" || name == "pre-fec-ber-latched-max-alarm-low-threshold" || name == "pre-fec-ber-latched-max-warn-high-threshold" || name == "pre-fec-ber-latched-max-warn-low-threshold" || name == "pre-fec-ber-accumulated-alarm-high-threshold" || name == "pre-fec-ber-accumulated-alarm-low-threshold" || name == "pre-fec-ber-accumulated-warn-high-threshold" || name == "pre-fec-ber-accumulated-warn-low-threshold" || name == "pre-fec-ber-instantaneous-alarm-high-threshold" || name == "pre-fec-ber-instantaneous-alarm-low-threshold" || name == "pre-fec-ber-instantaneous-warn-high-threshold" || name == "pre-fec-ber-instantaneous-warn-low-threshold" || name == "uncorrected-ber-latched-min-alarm-high-threshold" || name == "uncorrected-ber-latched-min-alarm-low-threshold" || name == "uncorrected-ber-latched-min-warn-high-threshold" || name == "uncorrected-ber-latched-min-warn-low-threshold" || name == "uncorrected-ber-latched-max-alarm-high-threshold" || name == "uncorrected-ber-latched-max-alarm-low-threshold" || name == "uncorrected-ber-latched-max-warn-high-threshold" || name == "uncorrected-ber-latched-max-warn-low-threshold" || name == "uncorrected-ber-accumulated-alarm-high-threshold" || name == "uncorrected-ber-accumulated-alarm-low-threshold" || name == "uncorrected-ber-accumulated-warn-high-threshold" || name == "uncorrected-ber-accumulated-warn-low-threshold" || name == "uncorrected-ber-instantaneous-alarm-high-threshold" || name == "uncorrected-ber-instantaneous-alarm-low-threshold" || name == "uncorrected-ber-instantaneous-warn-high-threshold" || name == "uncorrected-ber-instantaneous-warn-low-threshold")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumInfo()
    :
    total_spectrum_slice_count{YType::uint32, "total-spectrum-slice-count"},
    spectrum_slice_spacing{YType::uint32, "spectrum-slice-spacing"},
    first_slice_wavelength{YType::str, "first-slice-wavelength"}
{

    yang_name = "spectrum-info"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::~SpectrumInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::has_data() const
{
    for (std::size_t index=0; index<spectrum_slice_power_info.size(); index++)
    {
        if(spectrum_slice_power_info[index]->has_data())
            return true;
    }
    return total_spectrum_slice_count.is_set
	|| spectrum_slice_spacing.is_set
	|| first_slice_wavelength.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::has_operation() const
{
    for (std::size_t index=0; index<spectrum_slice_power_info.size(); index++)
    {
        if(spectrum_slice_power_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_spectrum_slice_count.yfilter)
	|| ydk::is_set(spectrum_slice_spacing.yfilter)
	|| ydk::is_set(first_slice_wavelength.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spectrum-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_spectrum_slice_count.is_set || is_set(total_spectrum_slice_count.yfilter)) leaf_name_data.push_back(total_spectrum_slice_count.get_name_leafdata());
    if (spectrum_slice_spacing.is_set || is_set(spectrum_slice_spacing.yfilter)) leaf_name_data.push_back(spectrum_slice_spacing.get_name_leafdata());
    if (first_slice_wavelength.is_set || is_set(first_slice_wavelength.yfilter)) leaf_name_data.push_back(first_slice_wavelength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spectrum-slice-power-info")
    {
        for(auto const & c : spectrum_slice_power_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo>();
        c->parent = this;
        spectrum_slice_power_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : spectrum_slice_power_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-spectrum-slice-count")
    {
        total_spectrum_slice_count = value;
        total_spectrum_slice_count.value_namespace = name_space;
        total_spectrum_slice_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spectrum-slice-spacing")
    {
        spectrum_slice_spacing = value;
        spectrum_slice_spacing.value_namespace = name_space;
        spectrum_slice_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-slice-wavelength")
    {
        first_slice_wavelength = value;
        first_slice_wavelength.value_namespace = name_space;
        first_slice_wavelength.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-spectrum-slice-count")
    {
        total_spectrum_slice_count.yfilter = yfilter;
    }
    if(value_path == "spectrum-slice-spacing")
    {
        spectrum_slice_spacing.yfilter = yfilter;
    }
    if(value_path == "first-slice-wavelength")
    {
        first_slice_wavelength.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spectrum-slice-power-info" || name == "total-spectrum-slice-count" || name == "spectrum-slice-spacing" || name == "first-slice-wavelength")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::SpectrumSlicePowerInfo()
    :
    slice_num{YType::uint32, "slice-num"},
    lower_frequency{YType::uint64, "lower-frequency"},
    upper_frequency{YType::uint64, "upper-frequency"},
    rx_power{YType::str, "rx-power"},
    tx_power{YType::str, "tx-power"},
    rx_psd{YType::str, "rx-psd"},
    tx_psd{YType::str, "tx-psd"}
{

    yang_name = "spectrum-slice-power-info"; yang_parent_name = "spectrum-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::~SpectrumSlicePowerInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::has_data() const
{
    return slice_num.is_set
	|| lower_frequency.is_set
	|| upper_frequency.is_set
	|| rx_power.is_set
	|| tx_power.is_set
	|| rx_psd.is_set
	|| tx_psd.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice_num.yfilter)
	|| ydk::is_set(lower_frequency.yfilter)
	|| ydk::is_set(upper_frequency.yfilter)
	|| ydk::is_set(rx_power.yfilter)
	|| ydk::is_set(tx_power.yfilter)
	|| ydk::is_set(rx_psd.yfilter)
	|| ydk::is_set(tx_psd.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spectrum-slice-power-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_num.is_set || is_set(slice_num.yfilter)) leaf_name_data.push_back(slice_num.get_name_leafdata());
    if (lower_frequency.is_set || is_set(lower_frequency.yfilter)) leaf_name_data.push_back(lower_frequency.get_name_leafdata());
    if (upper_frequency.is_set || is_set(upper_frequency.yfilter)) leaf_name_data.push_back(upper_frequency.get_name_leafdata());
    if (rx_power.is_set || is_set(rx_power.yfilter)) leaf_name_data.push_back(rx_power.get_name_leafdata());
    if (tx_power.is_set || is_set(tx_power.yfilter)) leaf_name_data.push_back(tx_power.get_name_leafdata());
    if (rx_psd.is_set || is_set(rx_psd.yfilter)) leaf_name_data.push_back(rx_psd.get_name_leafdata());
    if (tx_psd.is_set || is_set(tx_psd.yfilter)) leaf_name_data.push_back(tx_psd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice-num")
    {
        slice_num = value;
        slice_num.value_namespace = name_space;
        slice_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-frequency")
    {
        lower_frequency = value;
        lower_frequency.value_namespace = name_space;
        lower_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-frequency")
    {
        upper_frequency = value;
        upper_frequency.value_namespace = name_space;
        upper_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-power")
    {
        rx_power = value;
        rx_power.value_namespace = name_space;
        rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-power")
    {
        tx_power = value;
        tx_power.value_namespace = name_space;
        tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-psd")
    {
        rx_psd = value;
        rx_psd.value_namespace = name_space;
        rx_psd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-psd")
    {
        tx_psd = value;
        tx_psd.value_namespace = name_space;
        tx_psd.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice-num")
    {
        slice_num.yfilter = yfilter;
    }
    if(value_path == "lower-frequency")
    {
        lower_frequency.yfilter = yfilter;
    }
    if(value_path == "upper-frequency")
    {
        upper_frequency.yfilter = yfilter;
    }
    if(value_path == "rx-power")
    {
        rx_power.yfilter = yfilter;
    }
    if(value_path == "tx-power")
    {
        tx_power.yfilter = yfilter;
    }
    if(value_path == "rx-psd")
    {
        rx_psd.yfilter = yfilter;
    }
    if(value_path == "tx-psd")
    {
        tx_psd.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-num" || name == "lower-frequency" || name == "upper-frequency" || name == "rx-power" || name == "tx-power" || name == "rx-psd" || name == "tx-psd")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneData()
    :
    lane_index{YType::uint32, "lane-index"},
    laser_bias_current_percent{YType::uint32, "laser-bias-current-percent"},
    laser_bias_current_milli_amps{YType::uint32, "laser-bias-current-milli-amps"},
    transmit_power{YType::int32, "transmit-power"},
    receive_power{YType::int32, "receive-power"},
    receive_signal_power{YType::int32, "receive-signal-power"},
    transmit_signal_power{YType::int32, "transmit-signal-power"},
    output_frequency{YType::int32, "output-frequency"},
    frequency_offset{YType::int32, "frequency-offset"}
    	,
    lane_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo>())
{
    lane_alarm_info->parent = this;

    yang_name = "lane-data"; yang_parent_name = "optics-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::~LaneData()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::has_data() const
{
    return lane_index.is_set
	|| laser_bias_current_percent.is_set
	|| laser_bias_current_milli_amps.is_set
	|| transmit_power.is_set
	|| receive_power.is_set
	|| receive_signal_power.is_set
	|| transmit_signal_power.is_set
	|| output_frequency.is_set
	|| frequency_offset.is_set
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lane_index.yfilter)
	|| ydk::is_set(laser_bias_current_percent.yfilter)
	|| ydk::is_set(laser_bias_current_milli_amps.yfilter)
	|| ydk::is_set(transmit_power.yfilter)
	|| ydk::is_set(receive_power.yfilter)
	|| ydk::is_set(receive_signal_power.yfilter)
	|| ydk::is_set(transmit_signal_power.yfilter)
	|| ydk::is_set(output_frequency.yfilter)
	|| ydk::is_set(frequency_offset.yfilter)
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lane_index.is_set || is_set(lane_index.yfilter)) leaf_name_data.push_back(lane_index.get_name_leafdata());
    if (laser_bias_current_percent.is_set || is_set(laser_bias_current_percent.yfilter)) leaf_name_data.push_back(laser_bias_current_percent.get_name_leafdata());
    if (laser_bias_current_milli_amps.is_set || is_set(laser_bias_current_milli_amps.yfilter)) leaf_name_data.push_back(laser_bias_current_milli_amps.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.yfilter)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (receive_power.is_set || is_set(receive_power.yfilter)) leaf_name_data.push_back(receive_power.get_name_leafdata());
    if (receive_signal_power.is_set || is_set(receive_signal_power.yfilter)) leaf_name_data.push_back(receive_signal_power.get_name_leafdata());
    if (transmit_signal_power.is_set || is_set(transmit_signal_power.yfilter)) leaf_name_data.push_back(transmit_signal_power.get_name_leafdata());
    if (output_frequency.is_set || is_set(output_frequency.yfilter)) leaf_name_data.push_back(output_frequency.get_name_leafdata());
    if (frequency_offset.is_set || is_set(frequency_offset.yfilter)) leaf_name_data.push_back(frequency_offset.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lane-index")
    {
        lane_index = value;
        lane_index.value_namespace = name_space;
        lane_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current-percent")
    {
        laser_bias_current_percent = value;
        laser_bias_current_percent.value_namespace = name_space;
        laser_bias_current_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current-milli-amps")
    {
        laser_bias_current_milli_amps = value;
        laser_bias_current_milli_amps.value_namespace = name_space;
        laser_bias_current_milli_amps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
        transmit_power.value_namespace = name_space;
        transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power")
    {
        receive_power = value;
        receive_power.value_namespace = name_space;
        receive_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-signal-power")
    {
        receive_signal_power = value;
        receive_signal_power.value_namespace = name_space;
        receive_signal_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-signal-power")
    {
        transmit_signal_power = value;
        transmit_signal_power.value_namespace = name_space;
        transmit_signal_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-frequency")
    {
        output_frequency = value;
        output_frequency.value_namespace = name_space;
        output_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-offset")
    {
        frequency_offset = value;
        frequency_offset.value_namespace = name_space;
        frequency_offset.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lane-index")
    {
        lane_index.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current-percent")
    {
        laser_bias_current_percent.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current-milli-amps")
    {
        laser_bias_current_milli_amps.yfilter = yfilter;
    }
    if(value_path == "transmit-power")
    {
        transmit_power.yfilter = yfilter;
    }
    if(value_path == "receive-power")
    {
        receive_power.yfilter = yfilter;
    }
    if(value_path == "receive-signal-power")
    {
        receive_signal_power.yfilter = yfilter;
    }
    if(value_path == "transmit-signal-power")
    {
        transmit_signal_power.yfilter = yfilter;
    }
    if(value_path == "output-frequency")
    {
        output_frequency.yfilter = yfilter;
    }
    if(value_path == "frequency-offset")
    {
        frequency_offset.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lane-alarm-info" || name == "lane-index" || name == "laser-bias-current-percent" || name == "laser-bias-current-milli-amps" || name == "transmit-power" || name == "receive-power" || name == "receive-signal-power" || name == "transmit-signal-power" || name == "output-frequency" || name == "frequency-offset")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LaneAlarmInfo()
    :
    high_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower>())
	,high_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower>())
	,low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower>())
	,high_lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc>())
{
    high_rx_power->parent = this;
    low_rx_power->parent = this;
    high_tx_power->parent = this;
    low_tx_power->parent = this;
    high_lbc->parent = this;

    yang_name = "lane-alarm-info"; yang_parent_name = "lane-data"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::~LaneAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::has_data() const
{
    return (high_rx_power !=  nullptr && high_rx_power->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (high_tx_power !=  nullptr && high_tx_power->has_data())
	|| (low_tx_power !=  nullptr && low_tx_power->has_data())
	|| (high_lbc !=  nullptr && high_lbc->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| (high_rx_power !=  nullptr && high_rx_power->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (high_tx_power !=  nullptr && high_tx_power->has_operation())
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation())
	|| (high_lbc !=  nullptr && high_lbc->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high-rx-power")
    {
        if(high_rx_power == nullptr)
        {
            high_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower>();
        }
        return high_rx_power;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "high-tx-power")
    {
        if(high_tx_power == nullptr)
        {
            high_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower>();
        }
        return high_tx_power;
    }

    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
    }

    if(child_yang_name == "high-lbc")
    {
        if(high_lbc == nullptr)
        {
            high_lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc>();
        }
        return high_lbc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high_rx_power != nullptr)
    {
        children["high-rx-power"] = high_rx_power;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(high_tx_power != nullptr)
    {
        children["high-tx-power"] = high_tx_power;
    }

    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
    }

    if(high_lbc != nullptr)
    {
        children["high-lbc"] = high_lbc;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-rx-power" || name == "low-rx-power" || name == "high-tx-power" || name == "low-tx-power" || name == "high-lbc")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::HighRxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-rx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::~HighRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::LowRxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::HighTxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::~HighTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::LowTxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::HighLbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-lbc"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::~HighLbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLanes()
{

    yang_name = "optics-lanes"; yang_parent_name = "optics-port"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lanes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-lane")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::OpticsLane()
    :
    number{YType::int32, "number"},
    lane_index{YType::uint32, "lane-index"},
    laser_bias_current_percent{YType::uint32, "laser-bias-current-percent"},
    laser_bias_current_milli_amps{YType::uint32, "laser-bias-current-milli-amps"},
    transmit_power{YType::int32, "transmit-power"},
    receive_power{YType::int32, "receive-power"},
    receive_signal_power{YType::int32, "receive-signal-power"},
    transmit_signal_power{YType::int32, "transmit-signal-power"},
    output_frequency{YType::int32, "output-frequency"},
    frequency_offset{YType::int32, "frequency-offset"}
    	,
    lane_alarm_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo>())
{
    lane_alarm_info->parent = this;

    yang_name = "optics-lane"; yang_parent_name = "optics-lanes"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::~OpticsLane()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::has_data() const
{
    return number.is_set
	|| lane_index.is_set
	|| laser_bias_current_percent.is_set
	|| laser_bias_current_milli_amps.is_set
	|| transmit_power.is_set
	|| receive_power.is_set
	|| receive_signal_power.is_set
	|| transmit_signal_power.is_set
	|| output_frequency.is_set
	|| frequency_offset.is_set
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(lane_index.yfilter)
	|| ydk::is_set(laser_bias_current_percent.yfilter)
	|| ydk::is_set(laser_bias_current_milli_amps.yfilter)
	|| ydk::is_set(transmit_power.yfilter)
	|| ydk::is_set(receive_power.yfilter)
	|| ydk::is_set(receive_signal_power.yfilter)
	|| ydk::is_set(transmit_signal_power.yfilter)
	|| ydk::is_set(output_frequency.yfilter)
	|| ydk::is_set(frequency_offset.yfilter)
	|| (lane_alarm_info !=  nullptr && lane_alarm_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lane" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (lane_index.is_set || is_set(lane_index.yfilter)) leaf_name_data.push_back(lane_index.get_name_leafdata());
    if (laser_bias_current_percent.is_set || is_set(laser_bias_current_percent.yfilter)) leaf_name_data.push_back(laser_bias_current_percent.get_name_leafdata());
    if (laser_bias_current_milli_amps.is_set || is_set(laser_bias_current_milli_amps.yfilter)) leaf_name_data.push_back(laser_bias_current_milli_amps.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.yfilter)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (receive_power.is_set || is_set(receive_power.yfilter)) leaf_name_data.push_back(receive_power.get_name_leafdata());
    if (receive_signal_power.is_set || is_set(receive_signal_power.yfilter)) leaf_name_data.push_back(receive_signal_power.get_name_leafdata());
    if (transmit_signal_power.is_set || is_set(transmit_signal_power.yfilter)) leaf_name_data.push_back(transmit_signal_power.get_name_leafdata());
    if (output_frequency.is_set || is_set(output_frequency.yfilter)) leaf_name_data.push_back(output_frequency.get_name_leafdata());
    if (frequency_offset.is_set || is_set(frequency_offset.yfilter)) leaf_name_data.push_back(frequency_offset.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lane-index")
    {
        lane_index = value;
        lane_index.value_namespace = name_space;
        lane_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current-percent")
    {
        laser_bias_current_percent = value;
        laser_bias_current_percent.value_namespace = name_space;
        laser_bias_current_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current-milli-amps")
    {
        laser_bias_current_milli_amps = value;
        laser_bias_current_milli_amps.value_namespace = name_space;
        laser_bias_current_milli_amps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
        transmit_power.value_namespace = name_space;
        transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power")
    {
        receive_power = value;
        receive_power.value_namespace = name_space;
        receive_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-signal-power")
    {
        receive_signal_power = value;
        receive_signal_power.value_namespace = name_space;
        receive_signal_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-signal-power")
    {
        transmit_signal_power = value;
        transmit_signal_power.value_namespace = name_space;
        transmit_signal_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-frequency")
    {
        output_frequency = value;
        output_frequency.value_namespace = name_space;
        output_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-offset")
    {
        frequency_offset = value;
        frequency_offset.value_namespace = name_space;
        frequency_offset.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "lane-index")
    {
        lane_index.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current-percent")
    {
        laser_bias_current_percent.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current-milli-amps")
    {
        laser_bias_current_milli_amps.yfilter = yfilter;
    }
    if(value_path == "transmit-power")
    {
        transmit_power.yfilter = yfilter;
    }
    if(value_path == "receive-power")
    {
        receive_power.yfilter = yfilter;
    }
    if(value_path == "receive-signal-power")
    {
        receive_signal_power.yfilter = yfilter;
    }
    if(value_path == "transmit-signal-power")
    {
        transmit_signal_power.yfilter = yfilter;
    }
    if(value_path == "output-frequency")
    {
        output_frequency.yfilter = yfilter;
    }
    if(value_path == "frequency-offset")
    {
        frequency_offset.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lane-alarm-info" || name == "number" || name == "lane-index" || name == "laser-bias-current-percent" || name == "laser-bias-current-milli-amps" || name == "transmit-power" || name == "receive-power" || name == "receive-signal-power" || name == "transmit-signal-power" || name == "output-frequency" || name == "frequency-offset")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LaneAlarmInfo()
    :
    high_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower>())
	,low_rx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower>())
	,high_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower>())
	,low_tx_power(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower>())
	,high_lbc(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc>())
{
    high_rx_power->parent = this;
    low_rx_power->parent = this;
    high_tx_power->parent = this;
    low_tx_power->parent = this;
    high_lbc->parent = this;

    yang_name = "lane-alarm-info"; yang_parent_name = "optics-lane"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::~LaneAlarmInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::has_data() const
{
    return (high_rx_power !=  nullptr && high_rx_power->has_data())
	|| (low_rx_power !=  nullptr && low_rx_power->has_data())
	|| (high_tx_power !=  nullptr && high_tx_power->has_data())
	|| (low_tx_power !=  nullptr && low_tx_power->has_data())
	|| (high_lbc !=  nullptr && high_lbc->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| (high_rx_power !=  nullptr && high_rx_power->has_operation())
	|| (low_rx_power !=  nullptr && low_rx_power->has_operation())
	|| (high_tx_power !=  nullptr && high_tx_power->has_operation())
	|| (low_tx_power !=  nullptr && low_tx_power->has_operation())
	|| (high_lbc !=  nullptr && high_lbc->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high-rx-power")
    {
        if(high_rx_power == nullptr)
        {
            high_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower>();
        }
        return high_rx_power;
    }

    if(child_yang_name == "low-rx-power")
    {
        if(low_rx_power == nullptr)
        {
            low_rx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower>();
        }
        return low_rx_power;
    }

    if(child_yang_name == "high-tx-power")
    {
        if(high_tx_power == nullptr)
        {
            high_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower>();
        }
        return high_tx_power;
    }

    if(child_yang_name == "low-tx-power")
    {
        if(low_tx_power == nullptr)
        {
            low_tx_power = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower>();
        }
        return low_tx_power;
    }

    if(child_yang_name == "high-lbc")
    {
        if(high_lbc == nullptr)
        {
            high_lbc = std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc>();
        }
        return high_lbc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high_rx_power != nullptr)
    {
        children["high-rx-power"] = high_rx_power;
    }

    if(low_rx_power != nullptr)
    {
        children["low-rx-power"] = low_rx_power;
    }

    if(high_tx_power != nullptr)
    {
        children["high-tx-power"] = high_tx_power;
    }

    if(low_tx_power != nullptr)
    {
        children["low-tx-power"] = low_tx_power;
    }

    if(high_lbc != nullptr)
    {
        children["high-lbc"] = high_lbc;
    }

    return children;
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-rx-power" || name == "low-rx-power" || name == "high-tx-power" || name == "low-tx-power" || name == "high-lbc")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::HighRxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-rx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::~HighRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::LowRxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-rx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::~LowRxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::HighTxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-tx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::~HighTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::LowTxPower()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "low-tx-power"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::~LowTxPower()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::HighLbc()
    :
    is_detected{YType::boolean, "is-detected"},
    counter{YType::uint32, "counter"}
{

    yang_name = "high-lbc"; yang_parent_name = "lane-alarm-info"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::~HighLbc()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::has_data() const
{
    return is_detected.is_set
	|| counter.is_set;
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-detected" || name == "counter")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::OpticsDbInfo()
    :
    transport_admin_state{YType::enumeration, "transport-admin-state"},
    controller_state{YType::enumeration, "controller-state"}
    	,
    network_srlg_info(std::make_shared<OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo>())
{
    network_srlg_info->parent = this;

    yang_name = "optics-db-info"; yang_parent_name = "optics-port"; is_top_level_class = false; has_list_ancestor = true;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::~OpticsDbInfo()
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::has_data() const
{
    return transport_admin_state.is_set
	|| controller_state.is_set
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_data());
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_admin_state.yfilter)
	|| ydk::is_set(controller_state.yfilter)
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_operation());
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-db-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_admin_state.is_set || is_set(transport_admin_state.yfilter)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());
    if (controller_state.is_set || is_set(controller_state.yfilter)) leaf_name_data.push_back(controller_state.get_name_leafdata());

    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
        transport_admin_state.value_namespace = name_space;
        transport_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-state")
    {
        controller_state = value;
        controller_state.value_namespace = name_space;
        controller_state.value_namespace_prefix = name_space_prefix;
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-admin-state")
    {
        transport_admin_state.yfilter = yfilter;
    }
    if(value_path == "controller-state")
    {
        controller_state.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg-info" || name == "transport-admin-state" || name == "controller-state")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgInfo()
{

    yang_name = "network-srlg-info"; yang_parent_name = "optics-db-info"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg-array")
        return true;
    return false;
}

OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::NetworkSrlgArray()
    :
    set_number{YType::uint32, "set-number"},
    network_srlg{YType::uint32, "network-srlg"}
{

    yang_name = "network-srlg-array"; yang_parent_name = "network-srlg-info"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(set_number.yfilter)
	|| ydk::is_set(network_srlg.yfilter);
}

std::string OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_number.is_set || is_set(set_number.yfilter)) leaf_name_data.push_back(set_number.get_name_leafdata());

    auto network_srlg_name_datas = network_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_srlg_name_datas.begin(), network_srlg_name_datas.end());
    return leaf_name_data;

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

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-number")
    {
        set_number = value;
        set_number.value_namespace = name_space;
        set_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-srlg")
    {
        network_srlg.append(value);
    }
}

void OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-number")
    {
        set_number.yfilter = yfilter;
    }
    if(value_path == "network-srlg")
    {
        network_srlg.yfilter = yfilter;
    }
}

bool OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-number" || name == "network-srlg")
        return true;
    return false;
}

const Enum::YLeaf EthernetPmd::optics_eth_not_set {0, "optics-eth-not-set"};
const Enum::YLeaf EthernetPmd::optics_eth_10gbase_lrm {1, "optics-eth-10gbase-lrm"};
const Enum::YLeaf EthernetPmd::optics_eth_10gbase_lr {2, "optics-eth-10gbase-lr"};
const Enum::YLeaf EthernetPmd::optics_eth_10gbase_zr {3, "optics-eth-10gbase-zr"};
const Enum::YLeaf EthernetPmd::optics_eth_10gbase_er {4, "optics-eth-10gbase-er"};
const Enum::YLeaf EthernetPmd::optics_eth_10gbase_sr {5, "optics-eth-10gbase-sr"};
const Enum::YLeaf EthernetPmd::optics_eth_10gbase {6, "optics-eth-10gbase"};
const Enum::YLeaf EthernetPmd::optics_eth_40gbase_cr4 {7, "optics-eth-40gbase-cr4"};
const Enum::YLeaf EthernetPmd::optics_eth_40gbase_sr4 {8, "optics-eth-40gbase-sr4"};
const Enum::YLeaf EthernetPmd::optics_eth_40gbase_lr4 {9, "optics-eth-40gbase-lr4"};
const Enum::YLeaf EthernetPmd::optics_eth_40gbase_er4 {10, "optics-eth-40gbase-er4"};
const Enum::YLeaf EthernetPmd::optics_eth_40gbase_psm4 {11, "optics-eth-40gbase-psm4"};
const Enum::YLeaf EthernetPmd::optics_eth_40gbase_csr4 {12, "optics-eth-40gbase-csr4"};
const Enum::YLeaf EthernetPmd::optics_eth_40gbase_sr_bd {13, "optics-eth-40gbase-sr-bd"};
const Enum::YLeaf EthernetPmd::optics_eth_40g_aoc {14, "optics-eth-40g-aoc"};
const Enum::YLeaf EthernetPmd::optics_eth_4x10gbase_lr {15, "optics-eth-4x10gbase-lr"};
const Enum::YLeaf EthernetPmd::optics_eth_4x10gbase_sr {16, "optics-eth-4x10gbase-sr"};
const Enum::YLeaf EthernetPmd::optics_eth_100g_aoc {17, "optics-eth-100g-aoc"};
const Enum::YLeaf EthernetPmd::optics_eth_100g_acc {18, "optics-eth-100g-acc"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_sr10 {19, "optics-eth-100gbase-sr10"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_sr4 {20, "optics-eth-100gbase-sr4"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_lr4 {21, "optics-eth-100gbase-lr4"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_er4 {22, "optics-eth-100gbase-er4"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_cwdm4 {23, "optics-eth-100gbase-cwdm4"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_clr4 {24, "optics-eth-100gbase-clr4"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_psm4 {25, "optics-eth-100gbase-psm4"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_cr4 {26, "optics-eth-100gbase-cr4"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_al {27, "optics-eth-100gbase-al"};
const Enum::YLeaf EthernetPmd::optics_eth_100gbase_pl {28, "optics-eth-100gbase-pl"};
const Enum::YLeaf EthernetPmd::optics_eth_undefined {29, "optics-eth-undefined"};

const Enum::YLeaf SonetApplicationCode::optics_sonet_not_set {0, "optics-sonet-not-set"};
const Enum::YLeaf SonetApplicationCode::optics_vsr2000_3r2 {1, "optics-vsr2000-3r2"};
const Enum::YLeaf SonetApplicationCode::optics_vsr2000_3r3 {2, "optics-vsr2000-3r3"};
const Enum::YLeaf SonetApplicationCode::optics_vsr2000_3r5 {3, "optics-vsr2000-3r5"};
const Enum::YLeaf SonetApplicationCode::optics_sonet_undefined {4, "optics-sonet-undefined"};

const Enum::YLeaf OtnApplicationCode::optics_not_set {0, "optics-not-set"};
const Enum::YLeaf OtnApplicationCode::optics_p1l1_2d1 {1, "optics-p1l1-2d1"};
const Enum::YLeaf OtnApplicationCode::optics_p1s1_2d2 {2, "optics-p1s1-2d2"};
const Enum::YLeaf OtnApplicationCode::optics_p1l1_2d2 {3, "optics-p1l1-2d2"};
const Enum::YLeaf OtnApplicationCode::optics_undefined {4, "optics-undefined"};

const Enum::YLeaf FiberConnector::optics_connect_or_not_set {0, "optics-connect-or-not-set"};
const Enum::YLeaf FiberConnector::optics_sc_connect_or {1, "optics-sc-connect-or"};
const Enum::YLeaf FiberConnector::optics_lc_connect_or {2, "optics-lc-connect-or"};
const Enum::YLeaf FiberConnector::optics_mpo_connect_or {3, "optics-mpo-connect-or"};
const Enum::YLeaf FiberConnector::optics_undefined_connect_or {4, "optics-undefined-connect-or"};

const Enum::YLeaf OpticsAmplifierSafetyControlMode::optics_amplifier_safety_mode_invalid {0, "optics-amplifier-safety-mode-invalid"};
const Enum::YLeaf OpticsAmplifierSafetyControlMode::optics_amplifier_safety_mode_auto {1, "optics-amplifier-safety-mode-auto"};
const Enum::YLeaf OpticsAmplifierSafetyControlMode::optics_amplifier_safety_mode_disabled {2, "optics-amplifier-safety-mode-disabled"};

const Enum::YLeaf OpticsAmplifierGainRange::optics_amplifier_gain_range_invalid {0, "optics-amplifier-gain-range-invalid"};
const Enum::YLeaf OpticsAmplifierGainRange::optics_amplifier_gain_range_normal {1, "optics-amplifier-gain-range-normal"};
const Enum::YLeaf OpticsAmplifierGainRange::optics_amplifier_gain_range_ext_end_ed {2, "optics-amplifier-gain-range-ext-end-ed"};

const Enum::YLeaf OpticsAmplifierControlMode::automatic {1, "automatic"};
const Enum::YLeaf OpticsAmplifierControlMode::manual {2, "manual"};

const Enum::YLeaf OpticsPortStatus::active {0, "active"};
const Enum::YLeaf OpticsPortStatus::standby {1, "standby"};

const Enum::YLeaf OpticsPort::com {0, "com"};
const Enum::YLeaf OpticsPort::line {1, "line"};
const Enum::YLeaf OpticsPort::osc {2, "osc"};
const Enum::YLeaf OpticsPort::com_check {3, "com-check"};
const Enum::YLeaf OpticsPort::work {4, "work"};
const Enum::YLeaf OpticsPort::prot {5, "prot"};

const Enum::YLeaf OpticsFec::fec_none {0, "fec-none"};
const Enum::YLeaf OpticsFec::fec_hg15 {1, "fec-hg15"};
const Enum::YLeaf OpticsFec::fec_hg25 {2, "fec-hg25"};
const Enum::YLeaf OpticsFec::fec_hg15_de {4, "fec-hg15-de"};
const Enum::YLeaf OpticsFec::fec_hg25_de {8, "fec-hg25-de"};
const Enum::YLeaf OpticsFec::fec_enabled {16, "fec-enabled"};

const Enum::YLeaf OpticsPhy::not_set {0, "not-set"};
const Enum::YLeaf OpticsPhy::invalid {1, "invalid"};
const Enum::YLeaf OpticsPhy::long_reach_four_lanes {2, "long-reach-four-lanes"};
const Enum::YLeaf OpticsPhy::short_reach_ten_lanes {3, "short-reach-ten-lanes"};
const Enum::YLeaf OpticsPhy::short_reach_one_lane {4, "short-reach-one-lane"};
const Enum::YLeaf OpticsPhy::long_reach_one_lane {5, "long-reach-one-lane"};
const Enum::YLeaf OpticsPhy::short_reach_four_lanes {6, "short-reach-four-lanes"};
const Enum::YLeaf OpticsPhy::copper_four_lanes {7, "copper-four-lanes"};
const Enum::YLeaf OpticsPhy::active_optical_cable {8, "active-optical-cable"};
const Enum::YLeaf OpticsPhy::fourty_gig_e_long_reach_four_lanes {9, "fourty-gig-e-long-reach-four-lanes"};
const Enum::YLeaf OpticsPhy::fourty_gig_e_short_reach_four_lanes {10, "fourty-gig-e-short-reach-four-lanes"};
const Enum::YLeaf OpticsPhy::cwdm_four_lanes {11, "cwdm-four-lanes"};
const Enum::YLeaf OpticsPhy::extended_reach_four_lanes {12, "extended-reach-four-lanes"};
const Enum::YLeaf OpticsPhy::psm_four_lanes {13, "psm-four-lanes"};
const Enum::YLeaf OpticsPhy::active_copper_cable {14, "active-copper-cable"};
const Enum::YLeaf OpticsPhy::fourty_gig_e_extended_reach_four_lanes {15, "fourty-gig-e-extended-reach-four-lanes"};
const Enum::YLeaf OpticsPhy::four_x_ten_gig_e_short_reach_one_lane {16, "four-x-ten-gig-e-short-reach-one-lane"};
const Enum::YLeaf OpticsPhy::fourty_gig_epsm_four_lanes {17, "fourty-gig-epsm-four-lanes"};
const Enum::YLeaf OpticsPhy::fourty_gig_e_copper_four_lanes {18, "fourty-gig-e-copper-four-lanes"};
const Enum::YLeaf OpticsPhy::long_reach_mm_one_lane {19, "long-reach-mm-one-lane"};
const Enum::YLeaf OpticsPhy::copper_short_reach {20, "copper-short-reach"};
const Enum::YLeaf OpticsPhy::short_reach_srbd {21, "short-reach-srbd"};
const Enum::YLeaf OpticsPhy::copper_one_lane {22, "copper-one-lane"};
const Enum::YLeaf OpticsPhy::four_x_ten_gig_e_long_reach_one_lane {23, "four-x-ten-gig-e-long-reach-one-lane"};
const Enum::YLeaf OpticsPhy::fourty_gig_eaoc_four_lanes {24, "fourty-gig-eaoc-four-lanes"};
const Enum::YLeaf OpticsPhy::extended_one_lane {25, "extended-one-lane"};
const Enum::YLeaf OpticsPhy::zr_one_lane {26, "zr-one-lane"};
const Enum::YLeaf OpticsPhy::dwdm_one_lane {27, "dwdm-one-lane"};
const Enum::YLeaf OpticsPhy::sx_one_lane {28, "sx-one-lane"};
const Enum::YLeaf OpticsPhy::lx_one_lane {29, "lx-one-lane"};
const Enum::YLeaf OpticsPhy::ex_one_lane {30, "ex-one-lane"};
const Enum::YLeaf OpticsPhy::zx_one_lane {31, "zx-one-lane"};
const Enum::YLeaf OpticsPhy::ba_set_one_lane {32, "ba-set-one-lane"};
const Enum::YLeaf OpticsPhy::aoc_one_lane {33, "aoc-one-lane"};
const Enum::YLeaf OpticsPhy::active_copper_one_lane {34, "active-copper-one-lane"};
const Enum::YLeaf OpticsPhy::fourty_gig_eacu_four_lanes {35, "fourty-gig-eacu-four-lanes"};
const Enum::YLeaf OpticsPhy::four_x_ten_gig_eacu_one_lanes {36, "four-x-ten-gig-eacu-one-lanes"};
const Enum::YLeaf OpticsPhy::four_x_ten_gig_ecu_one_lanes {37, "four-x-ten-gig-ecu-one-lanes"};
const Enum::YLeaf OpticsPhy::four_x_ten_gig_eaoc_one_lanes {38, "four-x-ten-gig-eaoc-one-lanes"};
const Enum::YLeaf OpticsPhy::twenty_five_gig_short_reach_one_lane {39, "twenty-five-gig-short-reach-one-lane"};
const Enum::YLeaf OpticsPhy::twenty_five_gig_long_reach_one_lane {40, "twenty-five-gig-long-reach-one-lane"};
const Enum::YLeaf OpticsPhy::twenty_five_gig_extended_reach_one_lane {41, "twenty-five-gig-extended-reach-one-lane"};
const Enum::YLeaf OpticsPhy::twenty_five_gig_copper_one_lane {42, "twenty-five-gig-copper-one-lane"};
const Enum::YLeaf OpticsPhy::twenty_five_gig_active_optical_one_lane {43, "twenty-five-gig-active-optical-one-lane"};
const Enum::YLeaf OpticsPhy::hundred_gig_edwdm_two {44, "hundred-gig-edwdm-two"};
const Enum::YLeaf OpticsPhy::fourty_gig_plr4_four_lanes {45, "fourty-gig-plr4-four-lanes"};
const Enum::YLeaf OpticsPhy::fourty_gig_esr4_four_lanes {46, "fourty-gig-esr4-four-lanes"};
const Enum::YLeaf OpticsPhy::smsr_four_lanes {47, "smsr-four-lanes"};
const Enum::YLeaf OpticsPhy::cazadero_rqsa {48, "cazadero-rqsa"};
const Enum::YLeaf OpticsPhy::trunk_port_cfp2 {49, "trunk-port-cfp2"};
const Enum::YLeaf OpticsPhy::short_reach1_lane {50, "short-reach1-lane"};
const Enum::YLeaf OpticsPhy::inmd_reach1lane {51, "inmd-reach1lane"};
const Enum::YLeaf OpticsPhy::long_reach1_lane {52, "long-reach1-lane"};
const Enum::YLeaf OpticsPhy::twenty_five_gig_ecu_one_lanes {53, "twenty-five-gig-ecu-one-lanes"};
const Enum::YLeaf OpticsPhy::hundred_gig_e {54, "hundred-gig-e"};
const Enum::YLeaf OpticsPhy::ten_gig_bx {55, "ten-gig-bx"};
const Enum::YLeaf OpticsPhy::one_geige {56, "one-geige"};

const Enum::YLeaf OpticsFormFactor::not_set {0, "not-set"};
const Enum::YLeaf OpticsFormFactor::invalid {1, "invalid"};
const Enum::YLeaf OpticsFormFactor::cpak {2, "cpak"};
const Enum::YLeaf OpticsFormFactor::cxp {3, "cxp"};
const Enum::YLeaf OpticsFormFactor::sfp_plus {4, "sfp-plus"};
const Enum::YLeaf OpticsFormFactor::qsfp {5, "qsfp"};
const Enum::YLeaf OpticsFormFactor::qsfp_plus {6, "qsfp-plus"};
const Enum::YLeaf OpticsFormFactor::qsfp28 {7, "qsfp28"};
const Enum::YLeaf OpticsFormFactor::sfp {8, "sfp"};
const Enum::YLeaf OpticsFormFactor::cfp {9, "cfp"};
const Enum::YLeaf OpticsFormFactor::cfp2 {10, "cfp2"};
const Enum::YLeaf OpticsFormFactor::cfp4 {11, "cfp4"};
const Enum::YLeaf OpticsFormFactor::xfp {12, "xfp"};
const Enum::YLeaf OpticsFormFactor::x2 {13, "x2"};
const Enum::YLeaf OpticsFormFactor::non_pluggable {14, "non-pluggable"};
const Enum::YLeaf OpticsFormFactor::other {15, "other"};

const Enum::YLeaf OpticsControllerState::optics_state_up {0, "optics-state-up"};
const Enum::YLeaf OpticsControllerState::optics_state_down {1, "optics-state-down"};
const Enum::YLeaf OpticsControllerState::optics_state_admin_down {2, "optics-state-admin-down"};

const Enum::YLeaf OpticsLedState::off {0, "off"};
const Enum::YLeaf OpticsLedState::green_on {1, "green-on"};
const Enum::YLeaf OpticsLedState::green_flashing {2, "green-flashing"};
const Enum::YLeaf OpticsLedState::yellow_on {3, "yellow-on"};
const Enum::YLeaf OpticsLedState::yellow_flashing {4, "yellow-flashing"};
const Enum::YLeaf OpticsLedState::red_on {5, "red-on"};
const Enum::YLeaf OpticsLedState::red_flashing {6, "red-flashing"};

const Enum::YLeaf OpticsLaserState::on {0, "on"};
const Enum::YLeaf OpticsLaserState::off {1, "off"};
const Enum::YLeaf OpticsLaserState::unknown {2, "unknown"};
const Enum::YLeaf OpticsLaserState::apr {3, "apr"};

const Enum::YLeaf Optics::optics_unknown {0, "optics-unknown"};
const Enum::YLeaf Optics::optics_grey {1, "optics-grey"};
const Enum::YLeaf Optics::optics_dwdm {2, "optics-dwdm"};
const Enum::YLeaf Optics::optics_cwdm {3, "optics-cwdm"};

const Enum::YLeaf OpticsTas::tas_ui_oos {0, "tas-ui-oos"};
const Enum::YLeaf OpticsTas::tas_ui_main {1, "tas-ui-main"};
const Enum::YLeaf OpticsTas::tas_ui_is {2, "tas-ui-is"};
const Enum::YLeaf OpticsTas::tas_ui_ains {3, "tas-ui-ains"};

const Enum::YLeaf OpticsWaveBand::c_band {0, "c-band"};
const Enum::YLeaf OpticsWaveBand::l_band {1, "l-band"};
const Enum::YLeaf OpticsWaveBand::c_band_odd {2, "c-band-odd"};
const Enum::YLeaf OpticsWaveBand::c_band_even {3, "c-band-even"};
const Enum::YLeaf OpticsWaveBand::invalid_band {4, "invalid-band"};


}
}

