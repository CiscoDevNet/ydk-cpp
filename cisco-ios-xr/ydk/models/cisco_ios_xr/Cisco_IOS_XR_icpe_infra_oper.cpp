
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_icpe_infra_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_icpe_infra_oper {

NvSatellite::NvSatellite()
    :
    icpe_dpms(std::make_shared<NvSatellite::IcpeDpms>())
	,install(std::make_shared<NvSatellite::Install>())
	,install_op_statuses(std::make_shared<NvSatellite::InstallOpStatuses>())
	,install_progresses(std::make_shared<NvSatellite::InstallProgresses>())
	,install_shows(std::make_shared<NvSatellite::InstallShows>())
	,install_statuses(std::make_shared<NvSatellite::InstallStatuses>())
	,reload_op_statuses(std::make_shared<NvSatellite::ReloadOpStatuses>())
	,reload_statuses(std::make_shared<NvSatellite::ReloadStatuses>())
	,satellite_priorities(std::make_shared<NvSatellite::SatellitePriorities>())
	,satellite_properties(std::make_shared<NvSatellite::SatelliteProperties>())
	,satellite_statuses(std::make_shared<NvSatellite::SatelliteStatuses>())
	,satellite_topologies(std::make_shared<NvSatellite::SatelliteTopologies>())
	,satellite_versions(std::make_shared<NvSatellite::SatelliteVersions>())
	,sdacp_controls(std::make_shared<NvSatellite::SdacpControls>())
	,sdacp_discovery2s(std::make_shared<NvSatellite::SdacpDiscovery2S>())
	,sdacp_redundancies(std::make_shared<NvSatellite::SdacpRedundancies>())
{
    icpe_dpms->parent = this;

    install->parent = this;

    install_op_statuses->parent = this;

    install_progresses->parent = this;

    install_shows->parent = this;

    install_statuses->parent = this;

    reload_op_statuses->parent = this;

    reload_statuses->parent = this;

    satellite_priorities->parent = this;

    satellite_properties->parent = this;

    satellite_statuses->parent = this;

    satellite_topologies->parent = this;

    satellite_versions->parent = this;

    sdacp_controls->parent = this;

    sdacp_discovery2s->parent = this;

    sdacp_redundancies->parent = this;

    yang_name = "nv-satellite"; yang_parent_name = "Cisco-IOS-XR-icpe-infra-oper";
}

NvSatellite::~NvSatellite()
{
}

bool NvSatellite::has_data() const
{
    return (icpe_dpms !=  nullptr && icpe_dpms->has_data())
	|| (install !=  nullptr && install->has_data())
	|| (install_op_statuses !=  nullptr && install_op_statuses->has_data())
	|| (install_progresses !=  nullptr && install_progresses->has_data())
	|| (install_shows !=  nullptr && install_shows->has_data())
	|| (install_statuses !=  nullptr && install_statuses->has_data())
	|| (reload_op_statuses !=  nullptr && reload_op_statuses->has_data())
	|| (reload_statuses !=  nullptr && reload_statuses->has_data())
	|| (satellite_priorities !=  nullptr && satellite_priorities->has_data())
	|| (satellite_properties !=  nullptr && satellite_properties->has_data())
	|| (satellite_statuses !=  nullptr && satellite_statuses->has_data())
	|| (satellite_topologies !=  nullptr && satellite_topologies->has_data())
	|| (satellite_versions !=  nullptr && satellite_versions->has_data())
	|| (sdacp_controls !=  nullptr && sdacp_controls->has_data())
	|| (sdacp_discovery2s !=  nullptr && sdacp_discovery2s->has_data())
	|| (sdacp_redundancies !=  nullptr && sdacp_redundancies->has_data());
}

bool NvSatellite::has_operation() const
{
    return is_set(operation)
	|| (icpe_dpms !=  nullptr && icpe_dpms->has_operation())
	|| (install !=  nullptr && install->has_operation())
	|| (install_op_statuses !=  nullptr && install_op_statuses->has_operation())
	|| (install_progresses !=  nullptr && install_progresses->has_operation())
	|| (install_shows !=  nullptr && install_shows->has_operation())
	|| (install_statuses !=  nullptr && install_statuses->has_operation())
	|| (reload_op_statuses !=  nullptr && reload_op_statuses->has_operation())
	|| (reload_statuses !=  nullptr && reload_statuses->has_operation())
	|| (satellite_priorities !=  nullptr && satellite_priorities->has_operation())
	|| (satellite_properties !=  nullptr && satellite_properties->has_operation())
	|| (satellite_statuses !=  nullptr && satellite_statuses->has_operation())
	|| (satellite_topologies !=  nullptr && satellite_topologies->has_operation())
	|| (satellite_versions !=  nullptr && satellite_versions->has_operation())
	|| (sdacp_controls !=  nullptr && sdacp_controls->has_operation())
	|| (sdacp_discovery2s !=  nullptr && sdacp_discovery2s->has_operation())
	|| (sdacp_redundancies !=  nullptr && sdacp_redundancies->has_operation());
}

std::string NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite";

    return path_buffer.str();

}

const EntityPath NvSatellite::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icpe-dpms")
    {
        if(icpe_dpms == nullptr)
        {
            icpe_dpms = std::make_shared<NvSatellite::IcpeDpms>();
        }
        return icpe_dpms;
    }

    if(child_yang_name == "install")
    {
        if(install == nullptr)
        {
            install = std::make_shared<NvSatellite::Install>();
        }
        return install;
    }

    if(child_yang_name == "install-op-statuses")
    {
        if(install_op_statuses == nullptr)
        {
            install_op_statuses = std::make_shared<NvSatellite::InstallOpStatuses>();
        }
        return install_op_statuses;
    }

    if(child_yang_name == "install-progresses")
    {
        if(install_progresses == nullptr)
        {
            install_progresses = std::make_shared<NvSatellite::InstallProgresses>();
        }
        return install_progresses;
    }

    if(child_yang_name == "install-shows")
    {
        if(install_shows == nullptr)
        {
            install_shows = std::make_shared<NvSatellite::InstallShows>();
        }
        return install_shows;
    }

    if(child_yang_name == "install-statuses")
    {
        if(install_statuses == nullptr)
        {
            install_statuses = std::make_shared<NvSatellite::InstallStatuses>();
        }
        return install_statuses;
    }

    if(child_yang_name == "reload-op-statuses")
    {
        if(reload_op_statuses == nullptr)
        {
            reload_op_statuses = std::make_shared<NvSatellite::ReloadOpStatuses>();
        }
        return reload_op_statuses;
    }

    if(child_yang_name == "reload-statuses")
    {
        if(reload_statuses == nullptr)
        {
            reload_statuses = std::make_shared<NvSatellite::ReloadStatuses>();
        }
        return reload_statuses;
    }

    if(child_yang_name == "satellite-priorities")
    {
        if(satellite_priorities == nullptr)
        {
            satellite_priorities = std::make_shared<NvSatellite::SatellitePriorities>();
        }
        return satellite_priorities;
    }

    if(child_yang_name == "satellite-properties")
    {
        if(satellite_properties == nullptr)
        {
            satellite_properties = std::make_shared<NvSatellite::SatelliteProperties>();
        }
        return satellite_properties;
    }

    if(child_yang_name == "satellite-statuses")
    {
        if(satellite_statuses == nullptr)
        {
            satellite_statuses = std::make_shared<NvSatellite::SatelliteStatuses>();
        }
        return satellite_statuses;
    }

    if(child_yang_name == "satellite-topologies")
    {
        if(satellite_topologies == nullptr)
        {
            satellite_topologies = std::make_shared<NvSatellite::SatelliteTopologies>();
        }
        return satellite_topologies;
    }

    if(child_yang_name == "satellite-versions")
    {
        if(satellite_versions == nullptr)
        {
            satellite_versions = std::make_shared<NvSatellite::SatelliteVersions>();
        }
        return satellite_versions;
    }

    if(child_yang_name == "sdacp-controls")
    {
        if(sdacp_controls == nullptr)
        {
            sdacp_controls = std::make_shared<NvSatellite::SdacpControls>();
        }
        return sdacp_controls;
    }

    if(child_yang_name == "sdacp-discovery2s")
    {
        if(sdacp_discovery2s == nullptr)
        {
            sdacp_discovery2s = std::make_shared<NvSatellite::SdacpDiscovery2S>();
        }
        return sdacp_discovery2s;
    }

    if(child_yang_name == "sdacp-redundancies")
    {
        if(sdacp_redundancies == nullptr)
        {
            sdacp_redundancies = std::make_shared<NvSatellite::SdacpRedundancies>();
        }
        return sdacp_redundancies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icpe_dpms != nullptr)
    {
        children["icpe-dpms"] = icpe_dpms;
    }

    if(install != nullptr)
    {
        children["install"] = install;
    }

    if(install_op_statuses != nullptr)
    {
        children["install-op-statuses"] = install_op_statuses;
    }

    if(install_progresses != nullptr)
    {
        children["install-progresses"] = install_progresses;
    }

    if(install_shows != nullptr)
    {
        children["install-shows"] = install_shows;
    }

    if(install_statuses != nullptr)
    {
        children["install-statuses"] = install_statuses;
    }

    if(reload_op_statuses != nullptr)
    {
        children["reload-op-statuses"] = reload_op_statuses;
    }

    if(reload_statuses != nullptr)
    {
        children["reload-statuses"] = reload_statuses;
    }

    if(satellite_priorities != nullptr)
    {
        children["satellite-priorities"] = satellite_priorities;
    }

    if(satellite_properties != nullptr)
    {
        children["satellite-properties"] = satellite_properties;
    }

    if(satellite_statuses != nullptr)
    {
        children["satellite-statuses"] = satellite_statuses;
    }

    if(satellite_topologies != nullptr)
    {
        children["satellite-topologies"] = satellite_topologies;
    }

    if(satellite_versions != nullptr)
    {
        children["satellite-versions"] = satellite_versions;
    }

    if(sdacp_controls != nullptr)
    {
        children["sdacp-controls"] = sdacp_controls;
    }

    if(sdacp_discovery2s != nullptr)
    {
        children["sdacp-discovery2s"] = sdacp_discovery2s;
    }

    if(sdacp_redundancies != nullptr)
    {
        children["sdacp-redundancies"] = sdacp_redundancies;
    }

    return children;
}

void NvSatellite::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> NvSatellite::clone_ptr() const
{
    return std::make_shared<NvSatellite>();
}

std::string NvSatellite::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NvSatellite::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NvSatellite::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

NvSatellite::ReloadOpStatuses::ReloadOpStatuses()
{
    yang_name = "reload-op-statuses"; yang_parent_name = "nv-satellite";
}

NvSatellite::ReloadOpStatuses::~ReloadOpStatuses()
{
}

bool NvSatellite::ReloadOpStatuses::has_data() const
{
    for (std::size_t index=0; index<reload_op_status.size(); index++)
    {
        if(reload_op_status[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::ReloadOpStatuses::has_operation() const
{
    for (std::size_t index=0; index<reload_op_status.size(); index++)
    {
        if(reload_op_status[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::ReloadOpStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-op-statuses";

    return path_buffer.str();

}

const EntityPath NvSatellite::ReloadOpStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::ReloadOpStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reload-op-status")
    {
        for(auto const & c : reload_op_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::ReloadOpStatuses::ReloadOpStatus>();
        c->parent = this;
        reload_op_status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::ReloadOpStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reload_op_status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::ReloadOpStatuses::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::ReloadOpStatuses::ReloadOpStatus::ReloadOpStatus()
    :
    operation_id{YType::uint32, "operation-id"},
    operation_id_xr{YType::uint32, "operation-id-xr"},
    satellite_range{YType::str, "satellite-range"},
    sats_not_initiated{YType::uint16, "sats-not-initiated"},
    sats_reload_failed{YType::uint16, "sats-reload-failed"},
    sats_reloaded{YType::uint16, "sats-reloaded"},
    sats_reloading{YType::uint16, "sats-reloading"}
{
    yang_name = "reload-op-status"; yang_parent_name = "reload-op-statuses";
}

NvSatellite::ReloadOpStatuses::ReloadOpStatus::~ReloadOpStatus()
{
}

bool NvSatellite::ReloadOpStatuses::ReloadOpStatus::has_data() const
{
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_reload_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_reloaded.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_reloading.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return operation_id.is_set
	|| operation_id_xr.is_set
	|| satellite_range.is_set;
}

bool NvSatellite::ReloadOpStatuses::ReloadOpStatus::has_operation() const
{
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_reload_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_reloaded.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_reloading.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(operation_id.operation)
	|| is_set(operation_id_xr.operation)
	|| is_set(satellite_range.operation)
	|| is_set(sats_not_initiated.operation)
	|| is_set(sats_reload_failed.operation)
	|| is_set(sats_reloaded.operation)
	|| is_set(sats_reloading.operation);
}

std::string NvSatellite::ReloadOpStatuses::ReloadOpStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-op-status" <<"[operation-id='" <<operation_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::ReloadOpStatuses::ReloadOpStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/reload-op-statuses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.operation)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (operation_id_xr.is_set || is_set(operation_id_xr.operation)) leaf_name_data.push_back(operation_id_xr.get_name_leafdata());
    if (satellite_range.is_set || is_set(satellite_range.operation)) leaf_name_data.push_back(satellite_range.get_name_leafdata());

    auto sats_not_initiated_name_datas = sats_not_initiated.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_not_initiated_name_datas.begin(), sats_not_initiated_name_datas.end());
    auto sats_reload_failed_name_datas = sats_reload_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_reload_failed_name_datas.begin(), sats_reload_failed_name_datas.end());
    auto sats_reloaded_name_datas = sats_reloaded.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_reloaded_name_datas.begin(), sats_reloaded_name_datas.end());
    auto sats_reloading_name_datas = sats_reloading.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_reloading_name_datas.begin(), sats_reloading_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::ReloadOpStatuses::ReloadOpStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::ReloadOpStatuses::ReloadOpStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::ReloadOpStatuses::ReloadOpStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr = value;
    }
    if(value_path == "satellite-range")
    {
        satellite_range = value;
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.append(value);
    }
    if(value_path == "sats-reload-failed")
    {
        sats_reload_failed.append(value);
    }
    if(value_path == "sats-reloaded")
    {
        sats_reloaded.append(value);
    }
    if(value_path == "sats-reloading")
    {
        sats_reloading.append(value);
    }
}

NvSatellite::InstallStatuses::InstallStatuses()
{
    yang_name = "install-statuses"; yang_parent_name = "nv-satellite";
}

NvSatellite::InstallStatuses::~InstallStatuses()
{
}

bool NvSatellite::InstallStatuses::has_data() const
{
    for (std::size_t index=0; index<install_status.size(); index++)
    {
        if(install_status[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::InstallStatuses::has_operation() const
{
    for (std::size_t index=0; index<install_status.size(); index++)
    {
        if(install_status[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::InstallStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-statuses";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install-status")
    {
        for(auto const & c : install_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::InstallStatuses::InstallStatus>();
        c->parent = this;
        install_status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : install_status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::InstallStatuses::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::InstallStatuses::InstallStatus::InstallStatus()
    :
    satellite_range{YType::str, "satellite-range"},
    operation_id{YType::uint32, "operation-id"},
    satellite_range_xr{YType::str, "satellite-range-xr"},
    sats_activate_aborted{YType::uint16, "sats-activate-aborted"},
    sats_activate_failed{YType::uint16, "sats-activate-failed"},
    sats_activating{YType::uint16, "sats-activating"},
    sats_completed{YType::uint16, "sats-completed"},
    sats_deactivate_aborted{YType::uint16, "sats-deactivate-aborted"},
    sats_deactivate_failed{YType::uint16, "sats-deactivate-failed"},
    sats_deactivating{YType::uint16, "sats-deactivating"},
    sats_no_operation{YType::uint16, "sats-no-operation"},
    sats_not_initiated{YType::uint16, "sats-not-initiated"},
    sats_remove_aborted{YType::uint16, "sats-remove-aborted"},
    sats_remove_failed{YType::uint16, "sats-remove-failed"},
    sats_removing{YType::uint16, "sats-removing"},
    sats_transfer_aborted{YType::uint16, "sats-transfer-aborted"},
    sats_transfer_failed{YType::uint16, "sats-transfer-failed"},
    sats_transferring{YType::uint16, "sats-transferring"},
    sats_update_aborted{YType::uint16, "sats-update-aborted"},
    sats_update_failed{YType::uint16, "sats-update-failed"},
    sats_updating{YType::uint16, "sats-updating"}
{
    yang_name = "install-status"; yang_parent_name = "install-statuses";
}

NvSatellite::InstallStatuses::InstallStatus::~InstallStatus()
{
}

bool NvSatellite::InstallStatuses::InstallStatus::has_data() const
{
    for (auto const & leaf : sats_activate_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return satellite_range.is_set
	|| operation_id.is_set
	|| satellite_range_xr.is_set;
}

bool NvSatellite::InstallStatuses::InstallStatus::has_operation() const
{
    for (auto const & leaf : sats_activate_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(satellite_range.operation)
	|| is_set(operation_id.operation)
	|| is_set(satellite_range_xr.operation)
	|| is_set(sats_activate_aborted.operation)
	|| is_set(sats_activate_failed.operation)
	|| is_set(sats_activating.operation)
	|| is_set(sats_completed.operation)
	|| is_set(sats_deactivate_aborted.operation)
	|| is_set(sats_deactivate_failed.operation)
	|| is_set(sats_deactivating.operation)
	|| is_set(sats_no_operation.operation)
	|| is_set(sats_not_initiated.operation)
	|| is_set(sats_remove_aborted.operation)
	|| is_set(sats_remove_failed.operation)
	|| is_set(sats_removing.operation)
	|| is_set(sats_transfer_aborted.operation)
	|| is_set(sats_transfer_failed.operation)
	|| is_set(sats_transferring.operation)
	|| is_set(sats_update_aborted.operation)
	|| is_set(sats_update_failed.operation)
	|| is_set(sats_updating.operation);
}

std::string NvSatellite::InstallStatuses::InstallStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-status" <<"[satellite-range='" <<satellite_range <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallStatuses::InstallStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install-statuses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_range.is_set || is_set(satellite_range.operation)) leaf_name_data.push_back(satellite_range.get_name_leafdata());
    if (operation_id.is_set || is_set(operation_id.operation)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (satellite_range_xr.is_set || is_set(satellite_range_xr.operation)) leaf_name_data.push_back(satellite_range_xr.get_name_leafdata());

    auto sats_activate_aborted_name_datas = sats_activate_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activate_aborted_name_datas.begin(), sats_activate_aborted_name_datas.end());
    auto sats_activate_failed_name_datas = sats_activate_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activate_failed_name_datas.begin(), sats_activate_failed_name_datas.end());
    auto sats_activating_name_datas = sats_activating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activating_name_datas.begin(), sats_activating_name_datas.end());
    auto sats_completed_name_datas = sats_completed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_completed_name_datas.begin(), sats_completed_name_datas.end());
    auto sats_deactivate_aborted_name_datas = sats_deactivate_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivate_aborted_name_datas.begin(), sats_deactivate_aborted_name_datas.end());
    auto sats_deactivate_failed_name_datas = sats_deactivate_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivate_failed_name_datas.begin(), sats_deactivate_failed_name_datas.end());
    auto sats_deactivating_name_datas = sats_deactivating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivating_name_datas.begin(), sats_deactivating_name_datas.end());
    auto sats_no_operation_name_datas = sats_no_operation.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_no_operation_name_datas.begin(), sats_no_operation_name_datas.end());
    auto sats_not_initiated_name_datas = sats_not_initiated.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_not_initiated_name_datas.begin(), sats_not_initiated_name_datas.end());
    auto sats_remove_aborted_name_datas = sats_remove_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_remove_aborted_name_datas.begin(), sats_remove_aborted_name_datas.end());
    auto sats_remove_failed_name_datas = sats_remove_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_remove_failed_name_datas.begin(), sats_remove_failed_name_datas.end());
    auto sats_removing_name_datas = sats_removing.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_removing_name_datas.begin(), sats_removing_name_datas.end());
    auto sats_transfer_aborted_name_datas = sats_transfer_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transfer_aborted_name_datas.begin(), sats_transfer_aborted_name_datas.end());
    auto sats_transfer_failed_name_datas = sats_transfer_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transfer_failed_name_datas.begin(), sats_transfer_failed_name_datas.end());
    auto sats_transferring_name_datas = sats_transferring.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transferring_name_datas.begin(), sats_transferring_name_datas.end());
    auto sats_update_aborted_name_datas = sats_update_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_update_aborted_name_datas.begin(), sats_update_aborted_name_datas.end());
    auto sats_update_failed_name_datas = sats_update_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_update_failed_name_datas.begin(), sats_update_failed_name_datas.end());
    auto sats_updating_name_datas = sats_updating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_updating_name_datas.begin(), sats_updating_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallStatuses::InstallStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallStatuses::InstallStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::InstallStatuses::InstallStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-range")
    {
        satellite_range = value;
    }
    if(value_path == "operation-id")
    {
        operation_id = value;
    }
    if(value_path == "satellite-range-xr")
    {
        satellite_range_xr = value;
    }
    if(value_path == "sats-activate-aborted")
    {
        sats_activate_aborted.append(value);
    }
    if(value_path == "sats-activate-failed")
    {
        sats_activate_failed.append(value);
    }
    if(value_path == "sats-activating")
    {
        sats_activating.append(value);
    }
    if(value_path == "sats-completed")
    {
        sats_completed.append(value);
    }
    if(value_path == "sats-deactivate-aborted")
    {
        sats_deactivate_aborted.append(value);
    }
    if(value_path == "sats-deactivate-failed")
    {
        sats_deactivate_failed.append(value);
    }
    if(value_path == "sats-deactivating")
    {
        sats_deactivating.append(value);
    }
    if(value_path == "sats-no-operation")
    {
        sats_no_operation.append(value);
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.append(value);
    }
    if(value_path == "sats-remove-aborted")
    {
        sats_remove_aborted.append(value);
    }
    if(value_path == "sats-remove-failed")
    {
        sats_remove_failed.append(value);
    }
    if(value_path == "sats-removing")
    {
        sats_removing.append(value);
    }
    if(value_path == "sats-transfer-aborted")
    {
        sats_transfer_aborted.append(value);
    }
    if(value_path == "sats-transfer-failed")
    {
        sats_transfer_failed.append(value);
    }
    if(value_path == "sats-transferring")
    {
        sats_transferring.append(value);
    }
    if(value_path == "sats-update-aborted")
    {
        sats_update_aborted.append(value);
    }
    if(value_path == "sats-update-failed")
    {
        sats_update_failed.append(value);
    }
    if(value_path == "sats-updating")
    {
        sats_updating.append(value);
    }
}

NvSatellite::SdacpRedundancies::SdacpRedundancies()
{
    yang_name = "sdacp-redundancies"; yang_parent_name = "nv-satellite";
}

NvSatellite::SdacpRedundancies::~SdacpRedundancies()
{
}

bool NvSatellite::SdacpRedundancies::has_data() const
{
    for (std::size_t index=0; index<sdacp_redundancy.size(); index++)
    {
        if(sdacp_redundancy[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SdacpRedundancies::has_operation() const
{
    for (std::size_t index=0; index<sdacp_redundancy.size(); index++)
    {
        if(sdacp_redundancy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SdacpRedundancies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdacp-redundancies";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpRedundancies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpRedundancies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdacp-redundancy")
    {
        for(auto const & c : sdacp_redundancy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy>();
        c->parent = this;
        sdacp_redundancy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpRedundancies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sdacp_redundancy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SdacpRedundancies::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::SdacpRedundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    arbitration_state{YType::enumeration, "arbitration-state"},
    authentication_state{YType::enumeration, "authentication-state"},
    iccp_group_xr{YType::uint32, "iccp-group-xr"},
    isolated{YType::boolean, "isolated"},
    primacy{YType::enumeration, "primacy"},
    protocol_state{YType::enumeration, "protocol-state"},
    synchronization_state{YType::enumeration, "synchronization-state"},
    system_mac{YType::str, "system-mac"},
    transport_state{YType::enumeration, "transport-state"}
    	,
    protocol_state_timestamp(std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp>())
{
    protocol_state_timestamp->parent = this;

    yang_name = "sdacp-redundancy"; yang_parent_name = "sdacp-redundancies";
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::~SdacpRedundancy()
{
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::has_data() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return iccp_group.is_set
	|| arbitration_state.is_set
	|| authentication_state.is_set
	|| iccp_group_xr.is_set
	|| isolated.is_set
	|| primacy.is_set
	|| protocol_state.is_set
	|| synchronization_state.is_set
	|| system_mac.is_set
	|| transport_state.is_set
	|| (protocol_state_timestamp !=  nullptr && protocol_state_timestamp->has_data());
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::has_operation() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| is_set(arbitration_state.operation)
	|| is_set(authentication_state.operation)
	|| is_set(iccp_group_xr.operation)
	|| is_set(isolated.operation)
	|| is_set(primacy.operation)
	|| is_set(protocol_state.operation)
	|| is_set(synchronization_state.operation)
	|| is_set(system_mac.operation)
	|| is_set(transport_state.operation)
	|| (protocol_state_timestamp !=  nullptr && protocol_state_timestamp->has_operation());
}

std::string NvSatellite::SdacpRedundancies::SdacpRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdacp-redundancy" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/sdacp-redundancies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (arbitration_state.is_set || is_set(arbitration_state.operation)) leaf_name_data.push_back(arbitration_state.get_name_leafdata());
    if (authentication_state.is_set || is_set(authentication_state.operation)) leaf_name_data.push_back(authentication_state.get_name_leafdata());
    if (iccp_group_xr.is_set || is_set(iccp_group_xr.operation)) leaf_name_data.push_back(iccp_group_xr.get_name_leafdata());
    if (isolated.is_set || is_set(isolated.operation)) leaf_name_data.push_back(isolated.get_name_leafdata());
    if (primacy.is_set || is_set(primacy.operation)) leaf_name_data.push_back(primacy.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.operation)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (synchronization_state.is_set || is_set(synchronization_state.operation)) leaf_name_data.push_back(synchronization_state.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.operation)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (transport_state.is_set || is_set(transport_state.operation)) leaf_name_data.push_back(transport_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpRedundancies::SdacpRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel")
    {
        for(auto const & c : channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel>();
        c->parent = this;
        channel.push_back(c);
        return c;
    }

    if(child_yang_name == "protocol-state-timestamp")
    {
        if(protocol_state_timestamp == nullptr)
        {
            protocol_state_timestamp = std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp>();
        }
        return protocol_state_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpRedundancies::SdacpRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : channel)
    {
        children[c->get_segment_path()] = c;
    }

    if(protocol_state_timestamp != nullptr)
    {
        children["protocol-state-timestamp"] = protocol_state_timestamp;
    }

    return children;
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
    if(value_path == "arbitration-state")
    {
        arbitration_state = value;
    }
    if(value_path == "authentication-state")
    {
        authentication_state = value;
    }
    if(value_path == "iccp-group-xr")
    {
        iccp_group_xr = value;
    }
    if(value_path == "isolated")
    {
        isolated = value;
    }
    if(value_path == "primacy")
    {
        primacy = value;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
    }
    if(value_path == "synchronization-state")
    {
        synchronization_state = value;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
    }
    if(value_path == "transport-state")
    {
        transport_state = value;
    }
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::ProtocolStateTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "protocol-state-timestamp"; yang_parent_name = "sdacp-redundancy";
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::~ProtocolStateTimestamp()
{
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-state-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStateTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::Channel()
    :
    chan_state{YType::enumeration, "chan-state"},
    channel_id{YType::uint32, "channel-id"},
    control_messages_received{YType::uint64, "control-messages-received"},
    control_messages_sent{YType::uint64, "control-messages-sent"},
    normal_messages_received{YType::uint64, "normal-messages-received"},
    normal_messages_sent{YType::uint64, "normal-messages-sent"},
    resync_state{YType::enumeration, "resync-state"}
    	,
    channel_state_timestamp(std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp>())
	,resync_state_timestamp(std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp>())
{
    channel_state_timestamp->parent = this;

    resync_state_timestamp->parent = this;

    yang_name = "channel"; yang_parent_name = "sdacp-redundancy";
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::~Channel()
{
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::has_data() const
{
    return chan_state.is_set
	|| channel_id.is_set
	|| control_messages_received.is_set
	|| control_messages_sent.is_set
	|| normal_messages_received.is_set
	|| normal_messages_sent.is_set
	|| resync_state.is_set
	|| (channel_state_timestamp !=  nullptr && channel_state_timestamp->has_data())
	|| (resync_state_timestamp !=  nullptr && resync_state_timestamp->has_data());
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::has_operation() const
{
    return is_set(operation)
	|| is_set(chan_state.operation)
	|| is_set(channel_id.operation)
	|| is_set(control_messages_received.operation)
	|| is_set(control_messages_sent.operation)
	|| is_set(normal_messages_received.operation)
	|| is_set(normal_messages_sent.operation)
	|| is_set(resync_state.operation)
	|| (channel_state_timestamp !=  nullptr && channel_state_timestamp->has_operation())
	|| (resync_state_timestamp !=  nullptr && resync_state_timestamp->has_operation());
}

std::string NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Channel' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chan_state.is_set || is_set(chan_state.operation)) leaf_name_data.push_back(chan_state.get_name_leafdata());
    if (channel_id.is_set || is_set(channel_id.operation)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (control_messages_received.is_set || is_set(control_messages_received.operation)) leaf_name_data.push_back(control_messages_received.get_name_leafdata());
    if (control_messages_sent.is_set || is_set(control_messages_sent.operation)) leaf_name_data.push_back(control_messages_sent.get_name_leafdata());
    if (normal_messages_received.is_set || is_set(normal_messages_received.operation)) leaf_name_data.push_back(normal_messages_received.get_name_leafdata());
    if (normal_messages_sent.is_set || is_set(normal_messages_sent.operation)) leaf_name_data.push_back(normal_messages_sent.get_name_leafdata());
    if (resync_state.is_set || is_set(resync_state.operation)) leaf_name_data.push_back(resync_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel-state-timestamp")
    {
        if(channel_state_timestamp == nullptr)
        {
            channel_state_timestamp = std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp>();
        }
        return channel_state_timestamp;
    }

    if(child_yang_name == "resync-state-timestamp")
    {
        if(resync_state_timestamp == nullptr)
        {
            resync_state_timestamp = std::make_shared<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp>();
        }
        return resync_state_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(channel_state_timestamp != nullptr)
    {
        children["channel-state-timestamp"] = channel_state_timestamp;
    }

    if(resync_state_timestamp != nullptr)
    {
        children["resync-state-timestamp"] = resync_state_timestamp;
    }

    return children;
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chan-state")
    {
        chan_state = value;
    }
    if(value_path == "channel-id")
    {
        channel_id = value;
    }
    if(value_path == "control-messages-received")
    {
        control_messages_received = value;
    }
    if(value_path == "control-messages-sent")
    {
        control_messages_sent = value;
    }
    if(value_path == "normal-messages-received")
    {
        normal_messages_received = value;
    }
    if(value_path == "normal-messages-sent")
    {
        normal_messages_sent = value;
    }
    if(value_path == "resync-state")
    {
        resync_state = value;
    }
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::ChannelStateTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "channel-state-timestamp"; yang_parent_name = "channel";
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::~ChannelStateTimestamp()
{
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-state-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChannelStateTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::ResyncStateTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "resync-state-timestamp"; yang_parent_name = "channel";
}

NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::~ResyncStateTimestamp()
{
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resync-state-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResyncStateTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

NvSatellite::InstallShows::InstallShows()
{
    yang_name = "install-shows"; yang_parent_name = "nv-satellite";
}

NvSatellite::InstallShows::~InstallShows()
{
}

bool NvSatellite::InstallShows::has_data() const
{
    for (std::size_t index=0; index<install_show.size(); index++)
    {
        if(install_show[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::InstallShows::has_operation() const
{
    for (std::size_t index=0; index<install_show.size(); index++)
    {
        if(install_show[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::InstallShows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-shows";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallShows::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallShows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install-show")
    {
        for(auto const & c : install_show)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::InstallShows::InstallShow>();
        c->parent = this;
        install_show.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallShows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : install_show)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::InstallShows::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::InstallShows::InstallShow::InstallShow()
    :
    operation_id{YType::uint32, "operation-id"},
    end_time{YType::uint32, "end-time"},
    name_string{YType::str, "name-string"},
    operation_id_xr{YType::uint32, "operation-id-xr"},
    operation_type{YType::uint16, "operation-type"},
    progress_percentage{YType::uint16, "progress-percentage"},
    ref_state{YType::enumeration, "ref-state"},
    satellite_range{YType::str, "satellite-range"},
    sats_activate_aborted{YType::uint16, "sats-activate-aborted"},
    sats_activate_failed{YType::uint16, "sats-activate-failed"},
    sats_activating{YType::uint16, "sats-activating"},
    sats_completed{YType::uint16, "sats-completed"},
    sats_deactivate_aborted{YType::uint16, "sats-deactivate-aborted"},
    sats_deactivate_failed{YType::uint16, "sats-deactivate-failed"},
    sats_deactivating{YType::uint16, "sats-deactivating"},
    sats_no_operation{YType::uint16, "sats-no-operation"},
    sats_not_initiated{YType::uint16, "sats-not-initiated"},
    sats_remove_aborted{YType::uint16, "sats-remove-aborted"},
    sats_remove_failed{YType::uint16, "sats-remove-failed"},
    sats_removing{YType::uint16, "sats-removing"},
    sats_transfer_aborted{YType::uint16, "sats-transfer-aborted"},
    sats_transfer_failed{YType::uint16, "sats-transfer-failed"},
    sats_transferring{YType::uint16, "sats-transferring"},
    sats_update_aborted{YType::uint16, "sats-update-aborted"},
    sats_update_failed{YType::uint16, "sats-update-failed"},
    sats_updating{YType::uint16, "sats-updating"},
    start_time{YType::uint32, "start-time"}
{
    yang_name = "install-show"; yang_parent_name = "install-shows";
}

NvSatellite::InstallShows::InstallShow::~InstallShow()
{
}

bool NvSatellite::InstallShows::InstallShow::has_data() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    for (auto const & leaf : name_string.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_activate_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return operation_id.is_set
	|| end_time.is_set
	|| operation_id_xr.is_set
	|| operation_type.is_set
	|| progress_percentage.is_set
	|| ref_state.is_set
	|| satellite_range.is_set
	|| start_time.is_set;
}

bool NvSatellite::InstallShows::InstallShow::has_operation() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    for (auto const & leaf : name_string.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_activate_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(operation_id.operation)
	|| is_set(end_time.operation)
	|| is_set(name_string.operation)
	|| is_set(operation_id_xr.operation)
	|| is_set(operation_type.operation)
	|| is_set(progress_percentage.operation)
	|| is_set(ref_state.operation)
	|| is_set(satellite_range.operation)
	|| is_set(sats_activate_aborted.operation)
	|| is_set(sats_activate_failed.operation)
	|| is_set(sats_activating.operation)
	|| is_set(sats_completed.operation)
	|| is_set(sats_deactivate_aborted.operation)
	|| is_set(sats_deactivate_failed.operation)
	|| is_set(sats_deactivating.operation)
	|| is_set(sats_no_operation.operation)
	|| is_set(sats_not_initiated.operation)
	|| is_set(sats_remove_aborted.operation)
	|| is_set(sats_remove_failed.operation)
	|| is_set(sats_removing.operation)
	|| is_set(sats_transfer_aborted.operation)
	|| is_set(sats_transfer_failed.operation)
	|| is_set(sats_transferring.operation)
	|| is_set(sats_update_aborted.operation)
	|| is_set(sats_update_failed.operation)
	|| is_set(sats_updating.operation)
	|| is_set(start_time.operation);
}

std::string NvSatellite::InstallShows::InstallShow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-show" <<"[operation-id='" <<operation_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallShows::InstallShow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install-shows/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.operation)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.operation)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (operation_id_xr.is_set || is_set(operation_id_xr.operation)) leaf_name_data.push_back(operation_id_xr.get_name_leafdata());
    if (operation_type.is_set || is_set(operation_type.operation)) leaf_name_data.push_back(operation_type.get_name_leafdata());
    if (progress_percentage.is_set || is_set(progress_percentage.operation)) leaf_name_data.push_back(progress_percentage.get_name_leafdata());
    if (ref_state.is_set || is_set(ref_state.operation)) leaf_name_data.push_back(ref_state.get_name_leafdata());
    if (satellite_range.is_set || is_set(satellite_range.operation)) leaf_name_data.push_back(satellite_range.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());

    auto name_string_name_datas = name_string.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_string_name_datas.begin(), name_string_name_datas.end());
    auto sats_activate_aborted_name_datas = sats_activate_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activate_aborted_name_datas.begin(), sats_activate_aborted_name_datas.end());
    auto sats_activate_failed_name_datas = sats_activate_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activate_failed_name_datas.begin(), sats_activate_failed_name_datas.end());
    auto sats_activating_name_datas = sats_activating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activating_name_datas.begin(), sats_activating_name_datas.end());
    auto sats_completed_name_datas = sats_completed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_completed_name_datas.begin(), sats_completed_name_datas.end());
    auto sats_deactivate_aborted_name_datas = sats_deactivate_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivate_aborted_name_datas.begin(), sats_deactivate_aborted_name_datas.end());
    auto sats_deactivate_failed_name_datas = sats_deactivate_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivate_failed_name_datas.begin(), sats_deactivate_failed_name_datas.end());
    auto sats_deactivating_name_datas = sats_deactivating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivating_name_datas.begin(), sats_deactivating_name_datas.end());
    auto sats_no_operation_name_datas = sats_no_operation.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_no_operation_name_datas.begin(), sats_no_operation_name_datas.end());
    auto sats_not_initiated_name_datas = sats_not_initiated.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_not_initiated_name_datas.begin(), sats_not_initiated_name_datas.end());
    auto sats_remove_aborted_name_datas = sats_remove_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_remove_aborted_name_datas.begin(), sats_remove_aborted_name_datas.end());
    auto sats_remove_failed_name_datas = sats_remove_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_remove_failed_name_datas.begin(), sats_remove_failed_name_datas.end());
    auto sats_removing_name_datas = sats_removing.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_removing_name_datas.begin(), sats_removing_name_datas.end());
    auto sats_transfer_aborted_name_datas = sats_transfer_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transfer_aborted_name_datas.begin(), sats_transfer_aborted_name_datas.end());
    auto sats_transfer_failed_name_datas = sats_transfer_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transfer_failed_name_datas.begin(), sats_transfer_failed_name_datas.end());
    auto sats_transferring_name_datas = sats_transferring.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transferring_name_datas.begin(), sats_transferring_name_datas.end());
    auto sats_update_aborted_name_datas = sats_update_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_update_aborted_name_datas.begin(), sats_update_aborted_name_datas.end());
    auto sats_update_failed_name_datas = sats_update_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_update_failed_name_datas.begin(), sats_update_failed_name_datas.end());
    auto sats_updating_name_datas = sats_updating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_updating_name_datas.begin(), sats_updating_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallShows::InstallShow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::InstallShows::InstallShow::Satellite>();
        c->parent = this;
        satellite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallShows::InstallShow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : satellite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::InstallShows::InstallShow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
    }
    if(value_path == "end-time")
    {
        end_time = value;
    }
    if(value_path == "name-string")
    {
        name_string.append(value);
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr = value;
    }
    if(value_path == "operation-type")
    {
        operation_type = value;
    }
    if(value_path == "progress-percentage")
    {
        progress_percentage = value;
    }
    if(value_path == "ref-state")
    {
        ref_state = value;
    }
    if(value_path == "satellite-range")
    {
        satellite_range = value;
    }
    if(value_path == "sats-activate-aborted")
    {
        sats_activate_aborted.append(value);
    }
    if(value_path == "sats-activate-failed")
    {
        sats_activate_failed.append(value);
    }
    if(value_path == "sats-activating")
    {
        sats_activating.append(value);
    }
    if(value_path == "sats-completed")
    {
        sats_completed.append(value);
    }
    if(value_path == "sats-deactivate-aborted")
    {
        sats_deactivate_aborted.append(value);
    }
    if(value_path == "sats-deactivate-failed")
    {
        sats_deactivate_failed.append(value);
    }
    if(value_path == "sats-deactivating")
    {
        sats_deactivating.append(value);
    }
    if(value_path == "sats-no-operation")
    {
        sats_no_operation.append(value);
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.append(value);
    }
    if(value_path == "sats-remove-aborted")
    {
        sats_remove_aborted.append(value);
    }
    if(value_path == "sats-remove-failed")
    {
        sats_remove_failed.append(value);
    }
    if(value_path == "sats-removing")
    {
        sats_removing.append(value);
    }
    if(value_path == "sats-transfer-aborted")
    {
        sats_transfer_aborted.append(value);
    }
    if(value_path == "sats-transfer-failed")
    {
        sats_transfer_failed.append(value);
    }
    if(value_path == "sats-transferring")
    {
        sats_transferring.append(value);
    }
    if(value_path == "sats-update-aborted")
    {
        sats_update_aborted.append(value);
    }
    if(value_path == "sats-update-failed")
    {
        sats_update_failed.append(value);
    }
    if(value_path == "sats-updating")
    {
        sats_updating.append(value);
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
}

NvSatellite::InstallShows::InstallShow::Satellite::Satellite()
    :
    end_time{YType::uint32, "end-time"},
    info{YType::str, "info"},
    percentage{YType::uint16, "percentage"},
    retries{YType::uint16, "retries"},
    satellite_id{YType::uint16, "satellite-id"},
    start_time{YType::uint32, "start-time"},
    state{YType::enumeration, "state"}
{
    yang_name = "satellite"; yang_parent_name = "install-show";
}

NvSatellite::InstallShows::InstallShow::Satellite::~Satellite()
{
}

bool NvSatellite::InstallShows::InstallShow::Satellite::has_data() const
{
    return end_time.is_set
	|| info.is_set
	|| percentage.is_set
	|| retries.is_set
	|| satellite_id.is_set
	|| start_time.is_set
	|| state.is_set;
}

bool NvSatellite::InstallShows::InstallShow::Satellite::has_operation() const
{
    return is_set(operation)
	|| is_set(end_time.operation)
	|| is_set(info.operation)
	|| is_set(percentage.operation)
	|| is_set(retries.operation)
	|| is_set(satellite_id.operation)
	|| is_set(start_time.operation)
	|| is_set(state.operation);
}

std::string NvSatellite::InstallShows::InstallShow::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallShows::InstallShow::Satellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellite' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_time.is_set || is_set(end_time.operation)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (info.is_set || is_set(info.operation)) leaf_name_data.push_back(info.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.operation)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallShows::InstallShow::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallShows::InstallShow::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::InstallShows::InstallShow::Satellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-time")
    {
        end_time = value;
    }
    if(value_path == "info")
    {
        info = value;
    }
    if(value_path == "percentage")
    {
        percentage = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatuses()
{
    yang_name = "satellite-statuses"; yang_parent_name = "nv-satellite";
}

NvSatellite::SatelliteStatuses::~SatelliteStatuses()
{
}

bool NvSatellite::SatelliteStatuses::has_data() const
{
    for (std::size_t index=0; index<satellite_status.size(); index++)
    {
        if(satellite_status[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SatelliteStatuses::has_operation() const
{
    for (std::size_t index=0; index<satellite_status.size(); index++)
    {
        if(satellite_status[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SatelliteStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-statuses";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite-status")
    {
        for(auto const & c : satellite_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus>();
        c->parent = this;
        satellite_status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : satellite_status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteStatuses::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SatelliteStatuses::SatelliteStatus::SatelliteStatus()
    :
    satellite_id{YType::uint32, "satellite-id"},
    cfgd_timeout{YType::uint32, "cfgd-timeout"},
    configured_serial_number{YType::str, "configured-serial-number"},
    configured_serial_number_present{YType::boolean, "configured-serial-number-present"},
    conflict_context{YType::str, "conflict-context"},
    conflict_reason{YType::enumeration, "conflict-reason"},
    description{YType::str, "description"},
    description_present{YType::boolean, "description-present"},
    ethernet_fabric_supported{YType::boolean, "ethernet-fabric-supported"},
    host_treating_as_active{YType::boolean, "host-treating-as-active"},
    install_state{YType::enumeration, "install-state"},
    ip_address{YType::str, "ip-address"},
    ip_address_auto{YType::boolean, "ip-address-auto"},
    ip_address_present{YType::boolean, "ip-address-present"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_address_present{YType::boolean, "ipv6-address-present"},
    mac_address{YType::str, "mac-address"},
    mac_address_present{YType::boolean, "mac-address-present"},
    optical_supported{YType::boolean, "optical-supported"},
    password{YType::str, "password"},
    password_error{YType::str, "password-error"},
    received_host_name{YType::str, "received-host-name"},
    received_serial_number{YType::str, "received-serial-number"},
    received_serial_number_present{YType::boolean, "received-serial-number-present"},
    recovery_delay_time_left{YType::uint16, "recovery-delay-time-left"},
    redundancy_iccp_group{YType::uint32, "redundancy-iccp-group"},
    remote_version{YType::str, "remote-version"},
    remote_version_present{YType::boolean, "remote-version-present"},
    satellite_id_xr{YType::uint32, "satellite-id-xr"},
    satellite_treating_as_active{YType::boolean, "satellite-treating-as-active"},
    sdacp_session_failure_reason{YType::enumeration, "sdacp-session-failure-reason"},
    sdacp_session_state{YType::enumeration, "sdacp-session-state"},
    timeout_warning{YType::uint32, "timeout-warning"},
    type{YType::str, "type"},
    version_check_state{YType::enumeration, "version-check-state"},
    vrf_name{YType::str, "vrf-name"},
    vrfid{YType::uint32, "vrfid"}
    	,
    candidate_fabric_ports(std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts>())
	,optical_status(std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus>())
	,redundancy_out_of_sync_timestamp(std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp>())
{
    candidate_fabric_ports->parent = this;

    optical_status->parent = this;

    redundancy_out_of_sync_timestamp->parent = this;

    yang_name = "satellite-status"; yang_parent_name = "satellite-statuses";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::~SatelliteStatus()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::has_data() const
{
    for (std::size_t index=0; index<configured_link.size(); index++)
    {
        if(configured_link[index]->has_data())
            return true;
    }
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return satellite_id.is_set
	|| cfgd_timeout.is_set
	|| configured_serial_number.is_set
	|| configured_serial_number_present.is_set
	|| conflict_context.is_set
	|| conflict_reason.is_set
	|| description.is_set
	|| description_present.is_set
	|| ethernet_fabric_supported.is_set
	|| host_treating_as_active.is_set
	|| install_state.is_set
	|| ip_address.is_set
	|| ip_address_auto.is_set
	|| ip_address_present.is_set
	|| ipv6_address.is_set
	|| ipv6_address_present.is_set
	|| mac_address.is_set
	|| mac_address_present.is_set
	|| optical_supported.is_set
	|| password.is_set
	|| password_error.is_set
	|| received_host_name.is_set
	|| received_serial_number.is_set
	|| received_serial_number_present.is_set
	|| recovery_delay_time_left.is_set
	|| redundancy_iccp_group.is_set
	|| remote_version_present.is_set
	|| satellite_id_xr.is_set
	|| satellite_treating_as_active.is_set
	|| sdacp_session_failure_reason.is_set
	|| sdacp_session_state.is_set
	|| timeout_warning.is_set
	|| type.is_set
	|| version_check_state.is_set
	|| vrf_name.is_set
	|| vrfid.is_set
	|| (candidate_fabric_ports !=  nullptr && candidate_fabric_ports->has_data())
	|| (optical_status !=  nullptr && optical_status->has_data())
	|| (redundancy_out_of_sync_timestamp !=  nullptr && redundancy_out_of_sync_timestamp->has_data());
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::has_operation() const
{
    for (std::size_t index=0; index<configured_link.size(); index++)
    {
        if(configured_link[index]->has_operation())
            return true;
    }
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(cfgd_timeout.operation)
	|| is_set(configured_serial_number.operation)
	|| is_set(configured_serial_number_present.operation)
	|| is_set(conflict_context.operation)
	|| is_set(conflict_reason.operation)
	|| is_set(description.operation)
	|| is_set(description_present.operation)
	|| is_set(ethernet_fabric_supported.operation)
	|| is_set(host_treating_as_active.operation)
	|| is_set(install_state.operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_auto.operation)
	|| is_set(ip_address_present.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_address_present.operation)
	|| is_set(mac_address.operation)
	|| is_set(mac_address_present.operation)
	|| is_set(optical_supported.operation)
	|| is_set(password.operation)
	|| is_set(password_error.operation)
	|| is_set(received_host_name.operation)
	|| is_set(received_serial_number.operation)
	|| is_set(received_serial_number_present.operation)
	|| is_set(recovery_delay_time_left.operation)
	|| is_set(redundancy_iccp_group.operation)
	|| is_set(remote_version.operation)
	|| is_set(remote_version_present.operation)
	|| is_set(satellite_id_xr.operation)
	|| is_set(satellite_treating_as_active.operation)
	|| is_set(sdacp_session_failure_reason.operation)
	|| is_set(sdacp_session_state.operation)
	|| is_set(timeout_warning.operation)
	|| is_set(type.operation)
	|| is_set(version_check_state.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrfid.operation)
	|| (candidate_fabric_ports !=  nullptr && candidate_fabric_ports->has_operation())
	|| (optical_status !=  nullptr && optical_status->has_operation())
	|| (redundancy_out_of_sync_timestamp !=  nullptr && redundancy_out_of_sync_timestamp->has_operation());
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-status" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-statuses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (cfgd_timeout.is_set || is_set(cfgd_timeout.operation)) leaf_name_data.push_back(cfgd_timeout.get_name_leafdata());
    if (configured_serial_number.is_set || is_set(configured_serial_number.operation)) leaf_name_data.push_back(configured_serial_number.get_name_leafdata());
    if (configured_serial_number_present.is_set || is_set(configured_serial_number_present.operation)) leaf_name_data.push_back(configured_serial_number_present.get_name_leafdata());
    if (conflict_context.is_set || is_set(conflict_context.operation)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (description_present.is_set || is_set(description_present.operation)) leaf_name_data.push_back(description_present.get_name_leafdata());
    if (ethernet_fabric_supported.is_set || is_set(ethernet_fabric_supported.operation)) leaf_name_data.push_back(ethernet_fabric_supported.get_name_leafdata());
    if (host_treating_as_active.is_set || is_set(host_treating_as_active.operation)) leaf_name_data.push_back(host_treating_as_active.get_name_leafdata());
    if (install_state.is_set || is_set(install_state.operation)) leaf_name_data.push_back(install_state.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_auto.is_set || is_set(ip_address_auto.operation)) leaf_name_data.push_back(ip_address_auto.get_name_leafdata());
    if (ip_address_present.is_set || is_set(ip_address_present.operation)) leaf_name_data.push_back(ip_address_present.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_address_present.is_set || is_set(ipv6_address_present.operation)) leaf_name_data.push_back(ipv6_address_present.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_present.is_set || is_set(mac_address_present.operation)) leaf_name_data.push_back(mac_address_present.get_name_leafdata());
    if (optical_supported.is_set || is_set(optical_supported.operation)) leaf_name_data.push_back(optical_supported.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_error.is_set || is_set(password_error.operation)) leaf_name_data.push_back(password_error.get_name_leafdata());
    if (received_host_name.is_set || is_set(received_host_name.operation)) leaf_name_data.push_back(received_host_name.get_name_leafdata());
    if (received_serial_number.is_set || is_set(received_serial_number.operation)) leaf_name_data.push_back(received_serial_number.get_name_leafdata());
    if (received_serial_number_present.is_set || is_set(received_serial_number_present.operation)) leaf_name_data.push_back(received_serial_number_present.get_name_leafdata());
    if (recovery_delay_time_left.is_set || is_set(recovery_delay_time_left.operation)) leaf_name_data.push_back(recovery_delay_time_left.get_name_leafdata());
    if (redundancy_iccp_group.is_set || is_set(redundancy_iccp_group.operation)) leaf_name_data.push_back(redundancy_iccp_group.get_name_leafdata());
    if (remote_version_present.is_set || is_set(remote_version_present.operation)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.operation)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());
    if (satellite_treating_as_active.is_set || is_set(satellite_treating_as_active.operation)) leaf_name_data.push_back(satellite_treating_as_active.get_name_leafdata());
    if (sdacp_session_failure_reason.is_set || is_set(sdacp_session_failure_reason.operation)) leaf_name_data.push_back(sdacp_session_failure_reason.get_name_leafdata());
    if (sdacp_session_state.is_set || is_set(sdacp_session_state.operation)) leaf_name_data.push_back(sdacp_session_state.get_name_leafdata());
    if (timeout_warning.is_set || is_set(timeout_warning.operation)) leaf_name_data.push_back(timeout_warning.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.operation)) leaf_name_data.push_back(version_check_state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    auto remote_version_name_datas = remote_version.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_version_name_datas.begin(), remote_version_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-fabric-ports")
    {
        if(candidate_fabric_ports == nullptr)
        {
            candidate_fabric_ports = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts>();
        }
        return candidate_fabric_ports;
    }

    if(child_yang_name == "configured-link")
    {
        for(auto const & c : configured_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink>();
        c->parent = this;
        configured_link.push_back(c);
        return c;
    }

    if(child_yang_name == "optical-status")
    {
        if(optical_status == nullptr)
        {
            optical_status = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus>();
        }
        return optical_status;
    }

    if(child_yang_name == "redundancy-out-of-sync-timestamp")
    {
        if(redundancy_out_of_sync_timestamp == nullptr)
        {
            redundancy_out_of_sync_timestamp = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp>();
        }
        return redundancy_out_of_sync_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_fabric_ports != nullptr)
    {
        children["candidate-fabric-ports"] = candidate_fabric_ports;
    }

    for (auto const & c : configured_link)
    {
        children[c->get_segment_path()] = c;
    }

    if(optical_status != nullptr)
    {
        children["optical-status"] = optical_status;
    }

    if(redundancy_out_of_sync_timestamp != nullptr)
    {
        children["redundancy-out-of-sync-timestamp"] = redundancy_out_of_sync_timestamp;
    }

    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "cfgd-timeout")
    {
        cfgd_timeout = value;
    }
    if(value_path == "configured-serial-number")
    {
        configured_serial_number = value;
    }
    if(value_path == "configured-serial-number-present")
    {
        configured_serial_number_present = value;
    }
    if(value_path == "conflict-context")
    {
        conflict_context = value;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "description-present")
    {
        description_present = value;
    }
    if(value_path == "ethernet-fabric-supported")
    {
        ethernet_fabric_supported = value;
    }
    if(value_path == "host-treating-as-active")
    {
        host_treating_as_active = value;
    }
    if(value_path == "install-state")
    {
        install_state = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto = value;
    }
    if(value_path == "ip-address-present")
    {
        ip_address_present = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-address-present")
    {
        ipv6_address_present = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mac-address-present")
    {
        mac_address_present = value;
    }
    if(value_path == "optical-supported")
    {
        optical_supported = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "password-error")
    {
        password_error = value;
    }
    if(value_path == "received-host-name")
    {
        received_host_name = value;
    }
    if(value_path == "received-serial-number")
    {
        received_serial_number = value;
    }
    if(value_path == "received-serial-number-present")
    {
        received_serial_number_present = value;
    }
    if(value_path == "recovery-delay-time-left")
    {
        recovery_delay_time_left = value;
    }
    if(value_path == "redundancy-iccp-group")
    {
        redundancy_iccp_group = value;
    }
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
    }
    if(value_path == "satellite-treating-as-active")
    {
        satellite_treating_as_active = value;
    }
    if(value_path == "sdacp-session-failure-reason")
    {
        sdacp_session_failure_reason = value;
    }
    if(value_path == "sdacp-session-state")
    {
        sdacp_session_state = value;
    }
    if(value_path == "timeout-warning")
    {
        timeout_warning = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CandidateFabricPorts()
    :
    channel_up{YType::boolean, "channel-up"},
    error_string{YType::str, "error-string"},
    out_of_sync{YType::boolean, "out-of-sync"}
{
    yang_name = "candidate-fabric-ports"; yang_parent_name = "satellite-status";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::~CandidateFabricPorts()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::has_data() const
{
    for (std::size_t index=0; index<configured_port.size(); index++)
    {
        if(configured_port[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<current_port.size(); index++)
    {
        if(current_port[index]->has_data())
            return true;
    }
    return channel_up.is_set
	|| error_string.is_set
	|| out_of_sync.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::has_operation() const
{
    for (std::size_t index=0; index<configured_port.size(); index++)
    {
        if(configured_port[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<current_port.size(); index++)
    {
        if(current_port[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(channel_up.operation)
	|| is_set(error_string.operation)
	|| is_set(out_of_sync.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-fabric-ports";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateFabricPorts' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_up.is_set || is_set(channel_up.operation)) leaf_name_data.push_back(channel_up.get_name_leafdata());
    if (error_string.is_set || is_set(error_string.operation)) leaf_name_data.push_back(error_string.get_name_leafdata());
    if (out_of_sync.is_set || is_set(out_of_sync.operation)) leaf_name_data.push_back(out_of_sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-port")
    {
        for(auto const & c : configured_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort>();
        c->parent = this;
        configured_port.push_back(c);
        return c;
    }

    if(child_yang_name == "current-port")
    {
        for(auto const & c : current_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort>();
        c->parent = this;
        current_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : configured_port)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : current_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel-up")
    {
        channel_up = value;
    }
    if(value_path == "error-string")
    {
        error_string = value;
    }
    if(value_path == "out-of-sync")
    {
        out_of_sync = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::ConfiguredPort()
    :
    port{YType::uint16, "port"},
    port_type{YType::enumeration, "port-type"},
    slot{YType::uint16, "slot"},
    subslot{YType::uint16, "subslot"},
    valid{YType::boolean, "valid"}
{
    yang_name = "configured-port"; yang_parent_name = "candidate-fabric-ports";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::~ConfiguredPort()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::has_data() const
{
    return port.is_set
	|| port_type.is_set
	|| slot.is_set
	|| subslot.is_set
	|| valid.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation)
	|| is_set(port_type.operation)
	|| is_set(slot.operation)
	|| is_set(subslot.operation)
	|| is_set(valid.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-port";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfiguredPort' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (subslot.is_set || is_set(subslot.operation)) leaf_name_data.push_back(subslot.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "subslot")
    {
        subslot = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::CurrentPort()
    :
    permanent{YType::boolean, "permanent"},
    port{YType::uint16, "port"},
    port_type{YType::enumeration, "port-type"},
    requested{YType::boolean, "requested"},
    slot{YType::uint16, "slot"},
    subslot{YType::uint16, "subslot"}
{
    yang_name = "current-port"; yang_parent_name = "candidate-fabric-ports";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::~CurrentPort()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::has_data() const
{
    return permanent.is_set
	|| port.is_set
	|| port_type.is_set
	|| requested.is_set
	|| slot.is_set
	|| subslot.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::has_operation() const
{
    return is_set(operation)
	|| is_set(permanent.operation)
	|| is_set(port.operation)
	|| is_set(port_type.operation)
	|| is_set(requested.operation)
	|| is_set(slot.operation)
	|| is_set(subslot.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-port";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentPort' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (requested.is_set || is_set(requested.operation)) leaf_name_data.push_back(requested.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (subslot.is_set || is_set(subslot.operation)) leaf_name_data.push_back(subslot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "requested")
    {
        requested = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "subslot")
    {
        subslot = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::OpticalStatus()
    :
    chassis_sync_state{YType::enumeration, "chassis-sync-state"}
{
    yang_name = "optical-status"; yang_parent_name = "satellite-status";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::~OpticalStatus()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return chassis_sync_state.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(chassis_sync_state.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-status";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticalStatus' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_sync_state.is_set || is_set(chassis_sync_state.operation)) leaf_name_data.push_back(chassis_sync_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-sync-state")
    {
        chassis_sync_state = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::Application()
    :
    name{YType::str, "name"},
    sync_state{YType::enumeration, "sync-state"}
{
    yang_name = "application"; yang_parent_name = "optical-status";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::~Application()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::has_data() const
{
    return name.is_set
	|| sync_state.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(sync_state.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sync_state.is_set || is_set(sync_state.operation)) leaf_name_data.push_back(sync_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "sync-state")
    {
        sync_state = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::RedundancyOutOfSyncTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "redundancy-out-of-sync-timestamp"; yang_parent_name = "satellite-status";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::~RedundancyOutOfSyncTimestamp()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy-out-of-sync-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedundancyOutOfSyncTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::ConfiguredLink()
    :
    conflict_context{YType::str, "conflict-context"},
    conflict_reason{YType::enumeration, "conflict-reason"},
    interface_handle{YType::str, "interface-handle"},
    ip_address{YType::str, "ip-address"},
    ip_address_auto{YType::boolean, "ip-address-auto"},
    min_links_satisfied{YType::boolean, "min-links-satisfied"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"},
    minimum_required_links{YType::uint32, "minimum-required-links"},
    number_active_links{YType::uint32, "number-active-links"},
    required_min_links_satisfied{YType::boolean, "required-min-links-satisfied"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_id_present{YType::boolean, "vrf-id-present"}
{
    yang_name = "configured-link"; yang_parent_name = "satellite-status";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::~ConfiguredLink()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::has_data() const
{
    for (std::size_t index=0; index<discovered_link.size(); index++)
    {
        if(discovered_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_range.size(); index++)
    {
        if(port_range[index]->has_data())
            return true;
    }
    return conflict_context.is_set
	|| conflict_reason.is_set
	|| interface_handle.is_set
	|| ip_address.is_set
	|| ip_address_auto.is_set
	|| min_links_satisfied.is_set
	|| minimum_preferred_links.is_set
	|| minimum_required_links.is_set
	|| number_active_links.is_set
	|| required_min_links_satisfied.is_set
	|| vrf_id.is_set
	|| vrf_id_present.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::has_operation() const
{
    for (std::size_t index=0; index<discovered_link.size(); index++)
    {
        if(discovered_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_range.size(); index++)
    {
        if(port_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(conflict_context.operation)
	|| is_set(conflict_reason.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_auto.operation)
	|| is_set(min_links_satisfied.operation)
	|| is_set(minimum_preferred_links.operation)
	|| is_set(minimum_required_links.operation)
	|| is_set(number_active_links.operation)
	|| is_set(required_min_links_satisfied.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_id_present.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-link";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfiguredLink' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_context.is_set || is_set(conflict_context.operation)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_auto.is_set || is_set(ip_address_auto.operation)) leaf_name_data.push_back(ip_address_auto.get_name_leafdata());
    if (min_links_satisfied.is_set || is_set(min_links_satisfied.operation)) leaf_name_data.push_back(min_links_satisfied.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.operation)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());
    if (minimum_required_links.is_set || is_set(minimum_required_links.operation)) leaf_name_data.push_back(minimum_required_links.get_name_leafdata());
    if (number_active_links.is_set || is_set(number_active_links.operation)) leaf_name_data.push_back(number_active_links.get_name_leafdata());
    if (required_min_links_satisfied.is_set || is_set(required_min_links_satisfied.operation)) leaf_name_data.push_back(required_min_links_satisfied.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_id_present.is_set || is_set(vrf_id_present.operation)) leaf_name_data.push_back(vrf_id_present.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovered-link")
    {
        for(auto const & c : discovered_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink>();
        c->parent = this;
        discovered_link.push_back(c);
        return c;
    }

    if(child_yang_name == "port-range")
    {
        for(auto const & c : port_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange>();
        c->parent = this;
        port_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovered_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conflict-context")
    {
        conflict_context = value;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto = value;
    }
    if(value_path == "min-links-satisfied")
    {
        min_links_satisfied = value;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
    }
    if(value_path == "minimum-required-links")
    {
        minimum_required_links = value;
    }
    if(value_path == "number-active-links")
    {
        number_active_links = value;
    }
    if(value_path == "required-min-links-satisfied")
    {
        required_min_links_satisfied = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-id-present")
    {
        vrf_id_present = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::PortRange()
    :
    conflict_context{YType::str, "conflict-context"},
    conflict_reason{YType::enumeration, "conflict-reason"},
    high_port{YType::uint32, "high-port"},
    low_port{YType::uint32, "low-port"},
    port_type{YType::enumeration, "port-type"},
    slot{YType::uint32, "slot"},
    subslot{YType::uint32, "subslot"}
{
    yang_name = "port-range"; yang_parent_name = "configured-link";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::~PortRange()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::has_data() const
{
    return conflict_context.is_set
	|| conflict_reason.is_set
	|| high_port.is_set
	|| low_port.is_set
	|| port_type.is_set
	|| slot.is_set
	|| subslot.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::has_operation() const
{
    return is_set(operation)
	|| is_set(conflict_context.operation)
	|| is_set(conflict_reason.operation)
	|| is_set(high_port.operation)
	|| is_set(low_port.operation)
	|| is_set(port_type.operation)
	|| is_set(slot.operation)
	|| is_set(subslot.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-range";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortRange' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_context.is_set || is_set(conflict_context.operation)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (high_port.is_set || is_set(high_port.operation)) leaf_name_data.push_back(high_port.get_name_leafdata());
    if (low_port.is_set || is_set(low_port.operation)) leaf_name_data.push_back(low_port.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (subslot.is_set || is_set(subslot.operation)) leaf_name_data.push_back(subslot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conflict-context")
    {
        conflict_context = value;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "high-port")
    {
        high_port = value;
    }
    if(value_path == "low-port")
    {
        low_port = value;
    }
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "subslot")
    {
        subslot = value;
    }
}

NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::DiscoveredLink()
    :
    conflict_context{YType::str, "conflict-context"},
    conflict_reason{YType::enumeration, "conflict-reason"},
    interface_handle{YType::str, "interface-handle"},
    state{YType::enumeration, "state"}
{
    yang_name = "discovered-link"; yang_parent_name = "configured-link";
}

NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::~DiscoveredLink()
{
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::has_data() const
{
    return conflict_context.is_set
	|| conflict_reason.is_set
	|| interface_handle.is_set
	|| state.is_set;
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::has_operation() const
{
    return is_set(operation)
	|| is_set(conflict_context.operation)
	|| is_set(conflict_reason.operation)
	|| is_set(interface_handle.operation)
	|| is_set(state.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-link";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscoveredLink' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_context.is_set || is_set(conflict_context.operation)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conflict-context")
    {
        conflict_context = value;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

NvSatellite::SatellitePriorities::SatellitePriorities()
{
    yang_name = "satellite-priorities"; yang_parent_name = "nv-satellite";
}

NvSatellite::SatellitePriorities::~SatellitePriorities()
{
}

bool NvSatellite::SatellitePriorities::has_data() const
{
    for (std::size_t index=0; index<satellite_priority.size(); index++)
    {
        if(satellite_priority[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SatellitePriorities::has_operation() const
{
    for (std::size_t index=0; index<satellite_priority.size(); index++)
    {
        if(satellite_priority[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SatellitePriorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-priorities";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatellitePriorities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatellitePriorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite-priority")
    {
        for(auto const & c : satellite_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatellitePriorities::SatellitePriority>();
        c->parent = this;
        satellite_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatellitePriorities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : satellite_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatellitePriorities::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SatellitePriorities::SatellitePriority::SatellitePriority()
    :
    satellite_id{YType::uint32, "satellite-id"},
    best_path_hops{YType::uint32, "best-path-hops"},
    configured_priority{YType::uint8, "configured-priority"},
    host_priority{YType::uint64, "host-priority"},
    multichassis_redundancy{YType::enumeration, "multichassis-redundancy"},
    partner_priority{YType::uint64, "partner-priority"},
    rgid{YType::uint32, "rgid"},
    satellite_id_xr{YType::uint32, "satellite-id-xr"}
{
    yang_name = "satellite-priority"; yang_parent_name = "satellite-priorities";
}

NvSatellite::SatellitePriorities::SatellitePriority::~SatellitePriority()
{
}

bool NvSatellite::SatellitePriorities::SatellitePriority::has_data() const
{
    return satellite_id.is_set
	|| best_path_hops.is_set
	|| configured_priority.is_set
	|| host_priority.is_set
	|| multichassis_redundancy.is_set
	|| partner_priority.is_set
	|| rgid.is_set
	|| satellite_id_xr.is_set;
}

bool NvSatellite::SatellitePriorities::SatellitePriority::has_operation() const
{
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(best_path_hops.operation)
	|| is_set(configured_priority.operation)
	|| is_set(host_priority.operation)
	|| is_set(multichassis_redundancy.operation)
	|| is_set(partner_priority.operation)
	|| is_set(rgid.operation)
	|| is_set(satellite_id_xr.operation);
}

std::string NvSatellite::SatellitePriorities::SatellitePriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-priority" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatellitePriorities::SatellitePriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-priorities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (best_path_hops.is_set || is_set(best_path_hops.operation)) leaf_name_data.push_back(best_path_hops.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (host_priority.is_set || is_set(host_priority.operation)) leaf_name_data.push_back(host_priority.get_name_leafdata());
    if (multichassis_redundancy.is_set || is_set(multichassis_redundancy.operation)) leaf_name_data.push_back(multichassis_redundancy.get_name_leafdata());
    if (partner_priority.is_set || is_set(partner_priority.operation)) leaf_name_data.push_back(partner_priority.get_name_leafdata());
    if (rgid.is_set || is_set(rgid.operation)) leaf_name_data.push_back(rgid.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.operation)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatellitePriorities::SatellitePriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatellitePriorities::SatellitePriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatellitePriorities::SatellitePriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "best-path-hops")
    {
        best_path_hops = value;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "host-priority")
    {
        host_priority = value;
    }
    if(value_path == "multichassis-redundancy")
    {
        multichassis_redundancy = value;
    }
    if(value_path == "partner-priority")
    {
        partner_priority = value;
    }
    if(value_path == "rgid")
    {
        rgid = value;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
    }
}

NvSatellite::SatelliteVersions::SatelliteVersions()
{
    yang_name = "satellite-versions"; yang_parent_name = "nv-satellite";
}

NvSatellite::SatelliteVersions::~SatelliteVersions()
{
}

bool NvSatellite::SatelliteVersions::has_data() const
{
    for (std::size_t index=0; index<satellite_version.size(); index++)
    {
        if(satellite_version[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SatelliteVersions::has_operation() const
{
    for (std::size_t index=0; index<satellite_version.size(); index++)
    {
        if(satellite_version[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SatelliteVersions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-versions";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteVersions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteVersions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite-version")
    {
        for(auto const & c : satellite_version)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteVersions::SatelliteVersion>();
        c->parent = this;
        satellite_version.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteVersions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : satellite_version)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteVersions::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SatelliteVersions::SatelliteVersion::SatelliteVersion()
    :
    satellite_id{YType::uint32, "satellite-id"},
    remote_version{YType::str, "remote-version"},
    remote_version_present{YType::boolean, "remote-version-present"},
    satellite_id_xr{YType::uint32, "satellite-id-xr"},
    version_check_state{YType::enumeration, "version-check-state"}
    	,
    active_version(std::make_shared<NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion>())
	,committed_version(std::make_shared<NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion>())
	,transferred_version(std::make_shared<NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion>())
{
    active_version->parent = this;

    committed_version->parent = this;

    transferred_version->parent = this;

    yang_name = "satellite-version"; yang_parent_name = "satellite-versions";
}

NvSatellite::SatelliteVersions::SatelliteVersion::~SatelliteVersion()
{
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::has_data() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return satellite_id.is_set
	|| remote_version_present.is_set
	|| satellite_id_xr.is_set
	|| version_check_state.is_set
	|| (active_version !=  nullptr && active_version->has_data())
	|| (committed_version !=  nullptr && committed_version->has_data())
	|| (transferred_version !=  nullptr && transferred_version->has_data());
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::has_operation() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(remote_version.operation)
	|| is_set(remote_version_present.operation)
	|| is_set(satellite_id_xr.operation)
	|| is_set(version_check_state.operation)
	|| (active_version !=  nullptr && active_version->has_operation())
	|| (committed_version !=  nullptr && committed_version->has_operation())
	|| (transferred_version !=  nullptr && transferred_version->has_operation());
}

std::string NvSatellite::SatelliteVersions::SatelliteVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-version" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteVersions::SatelliteVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-versions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (remote_version_present.is_set || is_set(remote_version_present.operation)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.operation)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.operation)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

    auto remote_version_name_datas = remote_version.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_version_name_datas.begin(), remote_version_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteVersions::SatelliteVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-version")
    {
        if(active_version == nullptr)
        {
            active_version = std::make_shared<NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion>();
        }
        return active_version;
    }

    if(child_yang_name == "committed-version")
    {
        if(committed_version == nullptr)
        {
            committed_version = std::make_shared<NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion>();
        }
        return committed_version;
    }

    if(child_yang_name == "transferred-version")
    {
        if(transferred_version == nullptr)
        {
            transferred_version = std::make_shared<NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion>();
        }
        return transferred_version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteVersions::SatelliteVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_version != nullptr)
    {
        children["active-version"] = active_version;
    }

    if(committed_version != nullptr)
    {
        children["committed-version"] = committed_version;
    }

    if(transferred_version != nullptr)
    {
        children["transferred-version"] = transferred_version;
    }

    return children;
}

void NvSatellite::SatelliteVersions::SatelliteVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
    }
}

NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::ActiveVersion()
    :
    remote_version{YType::str, "remote-version"},
    remote_version_present{YType::boolean, "remote-version-present"},
    version_check_state{YType::enumeration, "version-check-state"}
{
    yang_name = "active-version"; yang_parent_name = "satellite-version";
}

NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::~ActiveVersion()
{
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::has_data() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return remote_version_present.is_set
	|| version_check_state.is_set;
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::has_operation() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(remote_version.operation)
	|| is_set(remote_version_present.operation)
	|| is_set(version_check_state.operation);
}

std::string NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-version";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveVersion' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_version_present.is_set || is_set(remote_version_present.operation)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.operation)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

    auto remote_version_name_datas = remote_version.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_version_name_datas.begin(), remote_version_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
    }
}

NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::TransferredVersion()
    :
    remote_version{YType::str, "remote-version"},
    remote_version_present{YType::boolean, "remote-version-present"},
    version_check_state{YType::enumeration, "version-check-state"}
{
    yang_name = "transferred-version"; yang_parent_name = "satellite-version";
}

NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::~TransferredVersion()
{
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::has_data() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return remote_version_present.is_set
	|| version_check_state.is_set;
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::has_operation() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(remote_version.operation)
	|| is_set(remote_version_present.operation)
	|| is_set(version_check_state.operation);
}

std::string NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transferred-version";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransferredVersion' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_version_present.is_set || is_set(remote_version_present.operation)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.operation)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

    auto remote_version_name_datas = remote_version.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_version_name_datas.begin(), remote_version_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
    }
}

NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::CommittedVersion()
    :
    remote_version{YType::str, "remote-version"},
    remote_version_present{YType::boolean, "remote-version-present"},
    version_check_state{YType::enumeration, "version-check-state"}
{
    yang_name = "committed-version"; yang_parent_name = "satellite-version";
}

NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::~CommittedVersion()
{
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::has_data() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return remote_version_present.is_set
	|| version_check_state.is_set;
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::has_operation() const
{
    for (auto const & leaf : remote_version.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(remote_version.operation)
	|| is_set(remote_version_present.operation)
	|| is_set(version_check_state.operation);
}

std::string NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-version";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommittedVersion' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_version_present.is_set || is_set(remote_version_present.operation)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.operation)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

    auto remote_version_name_datas = remote_version.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_version_name_datas.begin(), remote_version_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
    }
}

NvSatellite::SatelliteTopologies::SatelliteTopologies()
{
    yang_name = "satellite-topologies"; yang_parent_name = "nv-satellite";
}

NvSatellite::SatelliteTopologies::~SatelliteTopologies()
{
}

bool NvSatellite::SatelliteTopologies::has_data() const
{
    for (std::size_t index=0; index<satellite_topology.size(); index++)
    {
        if(satellite_topology[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SatelliteTopologies::has_operation() const
{
    for (std::size_t index=0; index<satellite_topology.size(); index++)
    {
        if(satellite_topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SatelliteTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-topologies";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite-topology")
    {
        for(auto const & c : satellite_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteTopologies::SatelliteTopology>();
        c->parent = this;
        satellite_topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteTopologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : satellite_topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteTopologies::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SatelliteTopologies::SatelliteTopology::SatelliteTopology()
    :
    interface_name{YType::str, "interface-name"},
    interface_handle{YType::str, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_physical{YType::boolean, "is-physical"},
    redundancy_iccp_group{YType::uint32, "redundancy-iccp-group"},
    ring_whole{YType::boolean, "ring-whole"}
{
    yang_name = "satellite-topology"; yang_parent_name = "satellite-topologies";
}

NvSatellite::SatelliteTopologies::SatelliteTopology::~SatelliteTopology()
{
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::has_data() const
{
    for (std::size_t index=0; index<discovered_link.size(); index++)
    {
        if(discovered_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_handle.is_set
	|| interface_name_xr.is_set
	|| is_physical.is_set
	|| redundancy_iccp_group.is_set
	|| ring_whole.is_set;
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::has_operation() const
{
    for (std::size_t index=0; index<discovered_link.size(); index++)
    {
        if(discovered_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_physical.operation)
	|| is_set(redundancy_iccp_group.operation)
	|| is_set(ring_whole.operation);
}

std::string NvSatellite::SatelliteTopologies::SatelliteTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-topology" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-topologies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_physical.is_set || is_set(is_physical.operation)) leaf_name_data.push_back(is_physical.get_name_leafdata());
    if (redundancy_iccp_group.is_set || is_set(redundancy_iccp_group.operation)) leaf_name_data.push_back(redundancy_iccp_group.get_name_leafdata());
    if (ring_whole.is_set || is_set(ring_whole.operation)) leaf_name_data.push_back(ring_whole.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteTopologies::SatelliteTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovered-link")
    {
        for(auto const & c : discovered_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink>();
        c->parent = this;
        discovered_link.push_back(c);
        return c;
    }

    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite>();
        c->parent = this;
        satellite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteTopologies::SatelliteTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovered_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : satellite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-physical")
    {
        is_physical = value;
    }
    if(value_path == "redundancy-iccp-group")
    {
        redundancy_iccp_group = value;
    }
    if(value_path == "ring-whole")
    {
        ring_whole = value;
    }
}

NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::DiscoveredLink()
    :
    discovery_running{YType::boolean, "discovery-running"},
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "discovered-link"; yang_parent_name = "satellite-topology";
}

NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::~DiscoveredLink()
{
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::has_data() const
{
    return discovery_running.is_set
	|| interface_handle.is_set
	|| interface_name.is_set;
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::has_operation() const
{
    return is_set(operation)
	|| is_set(discovery_running.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name.operation);
}

std::string NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-link";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscoveredLink' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discovery_running.is_set || is_set(discovery_running.operation)) leaf_name_data.push_back(discovery_running.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discovery-running")
    {
        discovery_running = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::Satellite()
    :
    configured{YType::boolean, "configured"},
    conflict_context{YType::str, "conflict-context"},
    conflict_reason{YType::enumeration, "conflict-reason"},
    display_name{YType::str, "display-name"},
    mac_address{YType::str, "mac-address"},
    num_hops{YType::uint16, "num-hops"},
    received_serial_number{YType::str, "received-serial-number"},
    received_serial_number_present{YType::boolean, "received-serial-number-present"},
    satellite_id{YType::uint32, "satellite-id"},
    type{YType::str, "type"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "satellite"; yang_parent_name = "satellite-topology";
}

NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::~Satellite()
{
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::has_data() const
{
    for (std::size_t index=0; index<fabric_link.size(); index++)
    {
        if(fabric_link[index]->has_data())
            return true;
    }
    return configured.is_set
	|| conflict_context.is_set
	|| conflict_reason.is_set
	|| display_name.is_set
	|| mac_address.is_set
	|| num_hops.is_set
	|| received_serial_number.is_set
	|| received_serial_number_present.is_set
	|| satellite_id.is_set
	|| type.is_set
	|| vlan_id.is_set;
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::has_operation() const
{
    for (std::size_t index=0; index<fabric_link.size(); index++)
    {
        if(fabric_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(configured.operation)
	|| is_set(conflict_context.operation)
	|| is_set(conflict_reason.operation)
	|| is_set(display_name.operation)
	|| is_set(mac_address.operation)
	|| is_set(num_hops.operation)
	|| is_set(received_serial_number.operation)
	|| is_set(received_serial_number_present.operation)
	|| is_set(satellite_id.operation)
	|| is_set(type.operation)
	|| is_set(vlan_id.operation);
}

std::string NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellite' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (conflict_context.is_set || is_set(conflict_context.operation)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (display_name.is_set || is_set(display_name.operation)) leaf_name_data.push_back(display_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (num_hops.is_set || is_set(num_hops.operation)) leaf_name_data.push_back(num_hops.get_name_leafdata());
    if (received_serial_number.is_set || is_set(received_serial_number.operation)) leaf_name_data.push_back(received_serial_number.get_name_leafdata());
    if (received_serial_number_present.is_set || is_set(received_serial_number_present.operation)) leaf_name_data.push_back(received_serial_number_present.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric-link")
    {
        for(auto const & c : fabric_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink>();
        c->parent = this;
        fabric_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fabric_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "conflict-context")
    {
        conflict_context = value;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "display-name")
    {
        display_name = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "num-hops")
    {
        num_hops = value;
    }
    if(value_path == "received-serial-number")
    {
        received_serial_number = value;
    }
    if(value_path == "received-serial-number-present")
    {
        received_serial_number_present = value;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::FabricLink()
    :
    active{YType::boolean, "active"},
    display_name{YType::str, "display-name"},
    icl_id{YType::uint32, "icl-id"},
    interface_name{YType::str, "interface-name"},
    obsolete{YType::boolean, "obsolete"},
    redundant{YType::boolean, "redundant"}
{
    yang_name = "fabric-link"; yang_parent_name = "satellite";
}

NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::~FabricLink()
{
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::has_data() const
{
    for (std::size_t index=0; index<remote_device.size(); index++)
    {
        if(remote_device[index]->has_data())
            return true;
    }
    return active.is_set
	|| display_name.is_set
	|| icl_id.is_set
	|| interface_name.is_set
	|| obsolete.is_set
	|| redundant.is_set;
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::has_operation() const
{
    for (std::size_t index=0; index<remote_device.size(); index++)
    {
        if(remote_device[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(display_name.operation)
	|| is_set(icl_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(obsolete.operation)
	|| is_set(redundant.operation);
}

std::string NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric-link";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FabricLink' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (display_name.is_set || is_set(display_name.operation)) leaf_name_data.push_back(display_name.get_name_leafdata());
    if (icl_id.is_set || is_set(icl_id.operation)) leaf_name_data.push_back(icl_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (obsolete.is_set || is_set(obsolete.operation)) leaf_name_data.push_back(obsolete.get_name_leafdata());
    if (redundant.is_set || is_set(redundant.operation)) leaf_name_data.push_back(redundant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-device")
    {
        for(auto const & c : remote_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice>();
        c->parent = this;
        remote_device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "display-name")
    {
        display_name = value;
    }
    if(value_path == "icl-id")
    {
        icl_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "obsolete")
    {
        obsolete = value;
    }
    if(value_path == "redundant")
    {
        redundant = value;
    }
}

NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::RemoteDevice()
    :
    icl_id{YType::uint32, "icl-id"},
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    remote_is_local_host{YType::boolean, "remote-is-local-host"},
    remote_is_satellite{YType::boolean, "remote-is-satellite"},
    source{YType::enumeration, "source"}
{
    yang_name = "remote-device"; yang_parent_name = "fabric-link";
}

NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::~RemoteDevice()
{
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::has_data() const
{
    return icl_id.is_set
	|| interface_handle.is_set
	|| interface_name.is_set
	|| mac_address.is_set
	|| remote_is_local_host.is_set
	|| remote_is_satellite.is_set
	|| source.is_set;
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::has_operation() const
{
    return is_set(operation)
	|| is_set(icl_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_address.operation)
	|| is_set(remote_is_local_host.operation)
	|| is_set(remote_is_satellite.operation)
	|| is_set(source.operation);
}

std::string NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-device";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteDevice' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icl_id.is_set || is_set(icl_id.operation)) leaf_name_data.push_back(icl_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (remote_is_local_host.is_set || is_set(remote_is_local_host.operation)) leaf_name_data.push_back(remote_is_local_host.get_name_leafdata());
    if (remote_is_satellite.is_set || is_set(remote_is_satellite.operation)) leaf_name_data.push_back(remote_is_satellite.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icl-id")
    {
        icl_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "remote-is-local-host")
    {
        remote_is_local_host = value;
    }
    if(value_path == "remote-is-satellite")
    {
        remote_is_satellite = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

NvSatellite::InstallProgresses::InstallProgresses()
{
    yang_name = "install-progresses"; yang_parent_name = "nv-satellite";
}

NvSatellite::InstallProgresses::~InstallProgresses()
{
}

bool NvSatellite::InstallProgresses::has_data() const
{
    for (std::size_t index=0; index<install_progress.size(); index++)
    {
        if(install_progress[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::InstallProgresses::has_operation() const
{
    for (std::size_t index=0; index<install_progress.size(); index++)
    {
        if(install_progress[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::InstallProgresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-progresses";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallProgresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallProgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install-progress")
    {
        for(auto const & c : install_progress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::InstallProgresses::InstallProgress>();
        c->parent = this;
        install_progress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallProgresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : install_progress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::InstallProgresses::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::InstallProgresses::InstallProgress::InstallProgress()
    :
    progress_percentage{YType::uint32, "progress-percentage"},
    progress_percentage_xr{YType::uint16, "progress-percentage-xr"},
    satellite_count{YType::uint32, "satellite-count"}
{
    yang_name = "install-progress"; yang_parent_name = "install-progresses";
}

NvSatellite::InstallProgresses::InstallProgress::~InstallProgress()
{
}

bool NvSatellite::InstallProgresses::InstallProgress::has_data() const
{
    return progress_percentage.is_set
	|| progress_percentage_xr.is_set
	|| satellite_count.is_set;
}

bool NvSatellite::InstallProgresses::InstallProgress::has_operation() const
{
    return is_set(operation)
	|| is_set(progress_percentage.operation)
	|| is_set(progress_percentage_xr.operation)
	|| is_set(satellite_count.operation);
}

std::string NvSatellite::InstallProgresses::InstallProgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-progress" <<"[progress-percentage='" <<progress_percentage <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallProgresses::InstallProgress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install-progresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (progress_percentage.is_set || is_set(progress_percentage.operation)) leaf_name_data.push_back(progress_percentage.get_name_leafdata());
    if (progress_percentage_xr.is_set || is_set(progress_percentage_xr.operation)) leaf_name_data.push_back(progress_percentage_xr.get_name_leafdata());
    if (satellite_count.is_set || is_set(satellite_count.operation)) leaf_name_data.push_back(satellite_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallProgresses::InstallProgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallProgresses::InstallProgress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::InstallProgresses::InstallProgress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "progress-percentage")
    {
        progress_percentage = value;
    }
    if(value_path == "progress-percentage-xr")
    {
        progress_percentage_xr = value;
    }
    if(value_path == "satellite-count")
    {
        satellite_count = value;
    }
}

NvSatellite::ReloadStatuses::ReloadStatuses()
{
    yang_name = "reload-statuses"; yang_parent_name = "nv-satellite";
}

NvSatellite::ReloadStatuses::~ReloadStatuses()
{
}

bool NvSatellite::ReloadStatuses::has_data() const
{
    for (std::size_t index=0; index<reload_status.size(); index++)
    {
        if(reload_status[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::ReloadStatuses::has_operation() const
{
    for (std::size_t index=0; index<reload_status.size(); index++)
    {
        if(reload_status[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::ReloadStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-statuses";

    return path_buffer.str();

}

const EntityPath NvSatellite::ReloadStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::ReloadStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reload-status")
    {
        for(auto const & c : reload_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::ReloadStatuses::ReloadStatus>();
        c->parent = this;
        reload_status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::ReloadStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reload_status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::ReloadStatuses::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::ReloadStatuses::ReloadStatus::ReloadStatus()
    :
    satellite_range{YType::str, "satellite-range"},
    satellite_range_xr{YType::str, "satellite-range-xr"},
    sats_not_initiated{YType::uint16, "sats-not-initiated"},
    sats_reload_failed{YType::uint16, "sats-reload-failed"},
    sats_reloaded{YType::uint16, "sats-reloaded"},
    sats_reloading{YType::uint16, "sats-reloading"}
{
    yang_name = "reload-status"; yang_parent_name = "reload-statuses";
}

NvSatellite::ReloadStatuses::ReloadStatus::~ReloadStatus()
{
}

bool NvSatellite::ReloadStatuses::ReloadStatus::has_data() const
{
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_reload_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_reloaded.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_reloading.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return satellite_range.is_set
	|| satellite_range_xr.is_set;
}

bool NvSatellite::ReloadStatuses::ReloadStatus::has_operation() const
{
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_reload_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_reloaded.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_reloading.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(satellite_range.operation)
	|| is_set(satellite_range_xr.operation)
	|| is_set(sats_not_initiated.operation)
	|| is_set(sats_reload_failed.operation)
	|| is_set(sats_reloaded.operation)
	|| is_set(sats_reloading.operation);
}

std::string NvSatellite::ReloadStatuses::ReloadStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-status" <<"[satellite-range='" <<satellite_range <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::ReloadStatuses::ReloadStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/reload-statuses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_range.is_set || is_set(satellite_range.operation)) leaf_name_data.push_back(satellite_range.get_name_leafdata());
    if (satellite_range_xr.is_set || is_set(satellite_range_xr.operation)) leaf_name_data.push_back(satellite_range_xr.get_name_leafdata());

    auto sats_not_initiated_name_datas = sats_not_initiated.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_not_initiated_name_datas.begin(), sats_not_initiated_name_datas.end());
    auto sats_reload_failed_name_datas = sats_reload_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_reload_failed_name_datas.begin(), sats_reload_failed_name_datas.end());
    auto sats_reloaded_name_datas = sats_reloaded.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_reloaded_name_datas.begin(), sats_reloaded_name_datas.end());
    auto sats_reloading_name_datas = sats_reloading.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_reloading_name_datas.begin(), sats_reloading_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::ReloadStatuses::ReloadStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::ReloadStatuses::ReloadStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::ReloadStatuses::ReloadStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-range")
    {
        satellite_range = value;
    }
    if(value_path == "satellite-range-xr")
    {
        satellite_range_xr = value;
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.append(value);
    }
    if(value_path == "sats-reload-failed")
    {
        sats_reload_failed.append(value);
    }
    if(value_path == "sats-reloaded")
    {
        sats_reloaded.append(value);
    }
    if(value_path == "sats-reloading")
    {
        sats_reloading.append(value);
    }
}

NvSatellite::Install::Install()
    :
    satellite_software_versions(std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions>())
{
    satellite_software_versions->parent = this;

    yang_name = "install"; yang_parent_name = "nv-satellite";
}

NvSatellite::Install::~Install()
{
}

bool NvSatellite::Install::has_data() const
{
    return (satellite_software_versions !=  nullptr && satellite_software_versions->has_data());
}

bool NvSatellite::Install::has_operation() const
{
    return is_set(operation)
	|| (satellite_software_versions !=  nullptr && satellite_software_versions->has_operation());
}

std::string NvSatellite::Install::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite-software-versions")
    {
        if(satellite_software_versions == nullptr)
        {
            satellite_software_versions = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions>();
        }
        return satellite_software_versions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(satellite_software_versions != nullptr)
    {
        children["satellite-software-versions"] = satellite_software_versions;
    }

    return children;
}

void NvSatellite::Install::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersions()
{
    yang_name = "satellite-software-versions"; yang_parent_name = "install";
}

NvSatellite::Install::SatelliteSoftwareVersions::~SatelliteSoftwareVersions()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::has_data() const
{
    for (std::size_t index=0; index<satellite_software_version.size(); index++)
    {
        if(satellite_software_version[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::Install::SatelliteSoftwareVersions::has_operation() const
{
    for (std::size_t index=0; index<satellite_software_version.size(); index++)
    {
        if(satellite_software_version[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-software-versions";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite-software-version")
    {
        for(auto const & c : satellite_software_version)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion>();
        c->parent = this;
        satellite_software_version.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : satellite_software_version)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::SatelliteSoftwareVersion()
    :
    satellite_id{YType::uint32, "satellite-id"},
    package_support{YType::enumeration, "package-support"},
    satellite_id_xr{YType::uint32, "satellite-id-xr"}
    	,
    install_package_info(std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo>())
{
    install_package_info->parent = this;

    yang_name = "satellite-software-version"; yang_parent_name = "satellite-software-versions";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::~SatelliteSoftwareVersion()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::has_data() const
{
    return satellite_id.is_set
	|| package_support.is_set
	|| satellite_id_xr.is_set
	|| (install_package_info !=  nullptr && install_package_info->has_data());
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::has_operation() const
{
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(package_support.operation)
	|| is_set(satellite_id_xr.operation)
	|| (install_package_info !=  nullptr && install_package_info->has_operation());
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-software-version" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install/satellite-software-versions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (package_support.is_set || is_set(package_support.operation)) leaf_name_data.push_back(package_support.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.operation)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install-package-info")
    {
        if(install_package_info == nullptr)
        {
            install_package_info = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo>();
        }
        return install_package_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(install_package_info != nullptr)
    {
        children["install-package-info"] = install_package_info;
    }

    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "package-support")
    {
        package_support = value;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
    }
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InstallPackageInfo()
    :
    active_packages(std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages>())
	,committed_packages(std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages>())
	,inactive_packages(std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages>())
{
    active_packages->parent = this;

    committed_packages->parent = this;

    inactive_packages->parent = this;

    yang_name = "install-package-info"; yang_parent_name = "satellite-software-version";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::~InstallPackageInfo()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::has_data() const
{
    return (active_packages !=  nullptr && active_packages->has_data())
	|| (committed_packages !=  nullptr && committed_packages->has_data())
	|| (inactive_packages !=  nullptr && inactive_packages->has_data());
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::has_operation() const
{
    return is_set(operation)
	|| (active_packages !=  nullptr && active_packages->has_operation())
	|| (committed_packages !=  nullptr && committed_packages->has_operation())
	|| (inactive_packages !=  nullptr && inactive_packages->has_operation());
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-package-info";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InstallPackageInfo' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-packages")
    {
        if(active_packages == nullptr)
        {
            active_packages = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages>();
        }
        return active_packages;
    }

    if(child_yang_name == "committed-packages")
    {
        if(committed_packages == nullptr)
        {
            committed_packages = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages>();
        }
        return committed_packages;
    }

    if(child_yang_name == "inactive-packages")
    {
        if(inactive_packages == nullptr)
        {
            inactive_packages = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages>();
        }
        return inactive_packages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_packages != nullptr)
    {
        children["active-packages"] = active_packages;
    }

    if(committed_packages != nullptr)
    {
        children["committed-packages"] = committed_packages;
    }

    if(inactive_packages != nullptr)
    {
        children["inactive-packages"] = inactive_packages;
    }

    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::ActivePackages()
{
    yang_name = "active-packages"; yang_parent_name = "install-package-info";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::~ActivePackages()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-packages";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActivePackages' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package>();
        c->parent = this;
        package.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : package)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::Package()
    :
    is_base_image{YType::boolean, "is-base-image"},
    name{YType::str, "name"},
    version{YType::str, "version"}
{
    yang_name = "package"; yang_parent_name = "active-packages";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::~Package()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::has_data() const
{
    return is_base_image.is_set
	|| name.is_set
	|| version.is_set;
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(is_base_image.operation)
	|| is_set(name.operation)
	|| is_set(version.operation);
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Package' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_base_image.is_set || is_set(is_base_image.operation)) leaf_name_data.push_back(is_base_image.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-base-image")
    {
        is_base_image = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::InactivePackages()
{
    yang_name = "inactive-packages"; yang_parent_name = "install-package-info";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::~InactivePackages()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive-packages";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InactivePackages' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package>();
        c->parent = this;
        package.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : package)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::Package()
    :
    is_base_image{YType::boolean, "is-base-image"},
    name{YType::str, "name"},
    version{YType::str, "version"}
{
    yang_name = "package"; yang_parent_name = "inactive-packages";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::~Package()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::has_data() const
{
    return is_base_image.is_set
	|| name.is_set
	|| version.is_set;
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(is_base_image.operation)
	|| is_set(name.operation)
	|| is_set(version.operation);
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Package' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_base_image.is_set || is_set(is_base_image.operation)) leaf_name_data.push_back(is_base_image.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-base-image")
    {
        is_base_image = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::CommittedPackages()
{
    yang_name = "committed-packages"; yang_parent_name = "install-package-info";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::~CommittedPackages()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-packages";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommittedPackages' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package>();
        c->parent = this;
        package.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : package)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::Package()
    :
    is_base_image{YType::boolean, "is-base-image"},
    name{YType::str, "name"},
    version{YType::str, "version"}
{
    yang_name = "package"; yang_parent_name = "committed-packages";
}

NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::~Package()
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::has_data() const
{
    return is_base_image.is_set
	|| name.is_set
	|| version.is_set;
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(is_base_image.operation)
	|| is_set(name.operation)
	|| is_set(version.operation);
}

std::string NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

const EntityPath NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Package' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_base_image.is_set || is_set(is_base_image.operation)) leaf_name_data.push_back(is_base_image.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-base-image")
    {
        is_base_image = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

NvSatellite::InstallOpStatuses::InstallOpStatuses()
{
    yang_name = "install-op-statuses"; yang_parent_name = "nv-satellite";
}

NvSatellite::InstallOpStatuses::~InstallOpStatuses()
{
}

bool NvSatellite::InstallOpStatuses::has_data() const
{
    for (std::size_t index=0; index<install_op_status.size(); index++)
    {
        if(install_op_status[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::InstallOpStatuses::has_operation() const
{
    for (std::size_t index=0; index<install_op_status.size(); index++)
    {
        if(install_op_status[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::InstallOpStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-op-statuses";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallOpStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallOpStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install-op-status")
    {
        for(auto const & c : install_op_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::InstallOpStatuses::InstallOpStatus>();
        c->parent = this;
        install_op_status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallOpStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : install_op_status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::InstallOpStatuses::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::InstallOpStatuses::InstallOpStatus::InstallOpStatus()
    :
    operation_id{YType::uint32, "operation-id"},
    operation_id_xr{YType::uint32, "operation-id-xr"},
    satellite_range{YType::str, "satellite-range"},
    sats_activate_aborted{YType::uint16, "sats-activate-aborted"},
    sats_activate_failed{YType::uint16, "sats-activate-failed"},
    sats_activating{YType::uint16, "sats-activating"},
    sats_completed{YType::uint16, "sats-completed"},
    sats_deactivate_aborted{YType::uint16, "sats-deactivate-aborted"},
    sats_deactivate_failed{YType::uint16, "sats-deactivate-failed"},
    sats_deactivating{YType::uint16, "sats-deactivating"},
    sats_no_operation{YType::uint16, "sats-no-operation"},
    sats_not_initiated{YType::uint16, "sats-not-initiated"},
    sats_remove_aborted{YType::uint16, "sats-remove-aborted"},
    sats_remove_failed{YType::uint16, "sats-remove-failed"},
    sats_removing{YType::uint16, "sats-removing"},
    sats_transfer_aborted{YType::uint16, "sats-transfer-aborted"},
    sats_transfer_failed{YType::uint16, "sats-transfer-failed"},
    sats_transferring{YType::uint16, "sats-transferring"},
    sats_update_aborted{YType::uint16, "sats-update-aborted"},
    sats_update_failed{YType::uint16, "sats-update-failed"},
    sats_updating{YType::uint16, "sats-updating"}
{
    yang_name = "install-op-status"; yang_parent_name = "install-op-statuses";
}

NvSatellite::InstallOpStatuses::InstallOpStatus::~InstallOpStatus()
{
}

bool NvSatellite::InstallOpStatuses::InstallOpStatus::has_data() const
{
    for (auto const & leaf : sats_activate_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return operation_id.is_set
	|| operation_id_xr.is_set
	|| satellite_range.is_set;
}

bool NvSatellite::InstallOpStatuses::InstallOpStatus::has_operation() const
{
    for (auto const & leaf : sats_activate_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(operation_id.operation)
	|| is_set(operation_id_xr.operation)
	|| is_set(satellite_range.operation)
	|| is_set(sats_activate_aborted.operation)
	|| is_set(sats_activate_failed.operation)
	|| is_set(sats_activating.operation)
	|| is_set(sats_completed.operation)
	|| is_set(sats_deactivate_aborted.operation)
	|| is_set(sats_deactivate_failed.operation)
	|| is_set(sats_deactivating.operation)
	|| is_set(sats_no_operation.operation)
	|| is_set(sats_not_initiated.operation)
	|| is_set(sats_remove_aborted.operation)
	|| is_set(sats_remove_failed.operation)
	|| is_set(sats_removing.operation)
	|| is_set(sats_transfer_aborted.operation)
	|| is_set(sats_transfer_failed.operation)
	|| is_set(sats_transferring.operation)
	|| is_set(sats_update_aborted.operation)
	|| is_set(sats_update_failed.operation)
	|| is_set(sats_updating.operation);
}

std::string NvSatellite::InstallOpStatuses::InstallOpStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-op-status" <<"[operation-id='" <<operation_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::InstallOpStatuses::InstallOpStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install-op-statuses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.operation)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (operation_id_xr.is_set || is_set(operation_id_xr.operation)) leaf_name_data.push_back(operation_id_xr.get_name_leafdata());
    if (satellite_range.is_set || is_set(satellite_range.operation)) leaf_name_data.push_back(satellite_range.get_name_leafdata());

    auto sats_activate_aborted_name_datas = sats_activate_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activate_aborted_name_datas.begin(), sats_activate_aborted_name_datas.end());
    auto sats_activate_failed_name_datas = sats_activate_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activate_failed_name_datas.begin(), sats_activate_failed_name_datas.end());
    auto sats_activating_name_datas = sats_activating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_activating_name_datas.begin(), sats_activating_name_datas.end());
    auto sats_completed_name_datas = sats_completed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_completed_name_datas.begin(), sats_completed_name_datas.end());
    auto sats_deactivate_aborted_name_datas = sats_deactivate_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivate_aborted_name_datas.begin(), sats_deactivate_aborted_name_datas.end());
    auto sats_deactivate_failed_name_datas = sats_deactivate_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivate_failed_name_datas.begin(), sats_deactivate_failed_name_datas.end());
    auto sats_deactivating_name_datas = sats_deactivating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_deactivating_name_datas.begin(), sats_deactivating_name_datas.end());
    auto sats_no_operation_name_datas = sats_no_operation.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_no_operation_name_datas.begin(), sats_no_operation_name_datas.end());
    auto sats_not_initiated_name_datas = sats_not_initiated.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_not_initiated_name_datas.begin(), sats_not_initiated_name_datas.end());
    auto sats_remove_aborted_name_datas = sats_remove_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_remove_aborted_name_datas.begin(), sats_remove_aborted_name_datas.end());
    auto sats_remove_failed_name_datas = sats_remove_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_remove_failed_name_datas.begin(), sats_remove_failed_name_datas.end());
    auto sats_removing_name_datas = sats_removing.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_removing_name_datas.begin(), sats_removing_name_datas.end());
    auto sats_transfer_aborted_name_datas = sats_transfer_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transfer_aborted_name_datas.begin(), sats_transfer_aborted_name_datas.end());
    auto sats_transfer_failed_name_datas = sats_transfer_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transfer_failed_name_datas.begin(), sats_transfer_failed_name_datas.end());
    auto sats_transferring_name_datas = sats_transferring.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_transferring_name_datas.begin(), sats_transferring_name_datas.end());
    auto sats_update_aborted_name_datas = sats_update_aborted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_update_aborted_name_datas.begin(), sats_update_aborted_name_datas.end());
    auto sats_update_failed_name_datas = sats_update_failed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_update_failed_name_datas.begin(), sats_update_failed_name_datas.end());
    auto sats_updating_name_datas = sats_updating.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sats_updating_name_datas.begin(), sats_updating_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::InstallOpStatuses::InstallOpStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::InstallOpStatuses::InstallOpStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::InstallOpStatuses::InstallOpStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr = value;
    }
    if(value_path == "satellite-range")
    {
        satellite_range = value;
    }
    if(value_path == "sats-activate-aborted")
    {
        sats_activate_aborted.append(value);
    }
    if(value_path == "sats-activate-failed")
    {
        sats_activate_failed.append(value);
    }
    if(value_path == "sats-activating")
    {
        sats_activating.append(value);
    }
    if(value_path == "sats-completed")
    {
        sats_completed.append(value);
    }
    if(value_path == "sats-deactivate-aborted")
    {
        sats_deactivate_aborted.append(value);
    }
    if(value_path == "sats-deactivate-failed")
    {
        sats_deactivate_failed.append(value);
    }
    if(value_path == "sats-deactivating")
    {
        sats_deactivating.append(value);
    }
    if(value_path == "sats-no-operation")
    {
        sats_no_operation.append(value);
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.append(value);
    }
    if(value_path == "sats-remove-aborted")
    {
        sats_remove_aborted.append(value);
    }
    if(value_path == "sats-remove-failed")
    {
        sats_remove_failed.append(value);
    }
    if(value_path == "sats-removing")
    {
        sats_removing.append(value);
    }
    if(value_path == "sats-transfer-aborted")
    {
        sats_transfer_aborted.append(value);
    }
    if(value_path == "sats-transfer-failed")
    {
        sats_transfer_failed.append(value);
    }
    if(value_path == "sats-transferring")
    {
        sats_transferring.append(value);
    }
    if(value_path == "sats-update-aborted")
    {
        sats_update_aborted.append(value);
    }
    if(value_path == "sats-update-failed")
    {
        sats_update_failed.append(value);
    }
    if(value_path == "sats-updating")
    {
        sats_updating.append(value);
    }
}

NvSatellite::SatelliteProperties::SatelliteProperties()
    :
    id_ranges(std::make_shared<NvSatellite::SatelliteProperties::IdRanges>())
{
    id_ranges->parent = this;

    yang_name = "satellite-properties"; yang_parent_name = "nv-satellite";
}

NvSatellite::SatelliteProperties::~SatelliteProperties()
{
}

bool NvSatellite::SatelliteProperties::has_data() const
{
    return (id_ranges !=  nullptr && id_ranges->has_data());
}

bool NvSatellite::SatelliteProperties::has_operation() const
{
    return is_set(operation)
	|| (id_ranges !=  nullptr && id_ranges->has_operation());
}

std::string NvSatellite::SatelliteProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-properties";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteProperties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id-ranges")
    {
        if(id_ranges == nullptr)
        {
            id_ranges = std::make_shared<NvSatellite::SatelliteProperties::IdRanges>();
        }
        return id_ranges;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id_ranges != nullptr)
    {
        children["id-ranges"] = id_ranges;
    }

    return children;
}

void NvSatellite::SatelliteProperties::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SatelliteProperties::IdRanges::IdRanges()
{
    yang_name = "id-ranges"; yang_parent_name = "satellite-properties";
}

NvSatellite::SatelliteProperties::IdRanges::~IdRanges()
{
}

bool NvSatellite::SatelliteProperties::IdRanges::has_data() const
{
    for (std::size_t index=0; index<id_range.size(); index++)
    {
        if(id_range[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SatelliteProperties::IdRanges::has_operation() const
{
    for (std::size_t index=0; index<id_range.size(); index++)
    {
        if(id_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SatelliteProperties::IdRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-ranges";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteProperties::IdRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-properties/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteProperties::IdRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id-range")
    {
        for(auto const & c : id_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SatelliteProperties::IdRanges::IdRange>();
        c->parent = this;
        id_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteProperties::IdRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SatelliteProperties::IdRanges::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SatelliteProperties::IdRanges::IdRange::IdRange()
    :
    sat_id_range{YType::str, "sat-id-range"},
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "id-range"; yang_parent_name = "id-ranges";
}

NvSatellite::SatelliteProperties::IdRanges::IdRange::~IdRange()
{
}

bool NvSatellite::SatelliteProperties::IdRanges::IdRange::has_data() const
{
    return sat_id_range.is_set
	|| max.is_set
	|| min.is_set;
}

bool NvSatellite::SatelliteProperties::IdRanges::IdRange::has_operation() const
{
    return is_set(operation)
	|| is_set(sat_id_range.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string NvSatellite::SatelliteProperties::IdRanges::IdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-range" <<"[sat-id-range='" <<sat_id_range <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SatelliteProperties::IdRanges::IdRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-properties/id-ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sat_id_range.is_set || is_set(sat_id_range.operation)) leaf_name_data.push_back(sat_id_range.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SatelliteProperties::IdRanges::IdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SatelliteProperties::IdRanges::IdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SatelliteProperties::IdRanges::IdRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sat-id-range")
    {
        sat_id_range = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2S()
{
    yang_name = "sdacp-discovery2s"; yang_parent_name = "nv-satellite";
}

NvSatellite::SdacpDiscovery2S::~SdacpDiscovery2S()
{
}

bool NvSatellite::SdacpDiscovery2S::has_data() const
{
    for (std::size_t index=0; index<sdacp_discovery2.size(); index++)
    {
        if(sdacp_discovery2[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SdacpDiscovery2S::has_operation() const
{
    for (std::size_t index=0; index<sdacp_discovery2.size(); index++)
    {
        if(sdacp_discovery2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SdacpDiscovery2S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-sdacp-oper:sdacp-discovery2s";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpDiscovery2S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpDiscovery2S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdacp-discovery2")
    {
        for(auto const & c : sdacp_discovery2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SdacpDiscovery2S::SdacpDiscovery2>();
        c->parent = this;
        sdacp_discovery2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpDiscovery2S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sdacp_discovery2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SdacpDiscovery2S::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::SdacpDiscovery2()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
{
    yang_name = "sdacp-discovery2"; yang_parent_name = "sdacp-discovery2s";
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::~SdacpDiscovery2()
{
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set;
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation);
}

std::string NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdacp-discovery2" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/Cisco-IOS-XR-icpe-sdacp-oper:sdacp-discovery2s/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite>();
        c->parent = this;
        satellite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : satellite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_status{YType::enumeration, "interface-status"}
{
    yang_name = "interface"; yang_parent_name = "sdacp-discovery2";
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::~Interface()
{
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_status.is_set;
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_status.operation);
}

std::string NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Satellite()
    :
    conflict_reason{YType::uint32, "conflict-reason"},
    host_ip_address{YType::str, "host-ip-address"},
    satellite_id{YType::uint32, "satellite-id"},
    satellite_ip_address{YType::str, "satellite-ip-address"},
    satellite_status{YType::enumeration, "satellite-status"}
{
    yang_name = "satellite"; yang_parent_name = "sdacp-discovery2";
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::~Satellite()
{
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return conflict_reason.is_set
	|| host_ip_address.is_set
	|| satellite_id.is_set
	|| satellite_ip_address.is_set
	|| satellite_status.is_set;
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(conflict_reason.operation)
	|| is_set(host_ip_address.operation)
	|| is_set(satellite_id.operation)
	|| is_set(satellite_ip_address.operation)
	|| is_set(satellite_status.operation);
}

std::string NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellite' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (host_ip_address.is_set || is_set(host_ip_address.operation)) leaf_name_data.push_back(host_ip_address.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (satellite_ip_address.is_set || is_set(satellite_ip_address.operation)) leaf_name_data.push_back(satellite_ip_address.get_name_leafdata());
    if (satellite_status.is_set || is_set(satellite_status.operation)) leaf_name_data.push_back(satellite_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "host-ip-address")
    {
        host_ip_address = value;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address = value;
    }
    if(value_path == "satellite-status")
    {
        satellite_status = value;
    }
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::Interface()
    :
    conflict_reason{YType::uint32, "conflict-reason"},
    interface_handle{YType::str, "interface-handle"},
    satellite_chassis_mac{YType::str, "satellite-chassis-mac"},
    satellite_chassis_vendor{YType::str, "satellite-chassis-vendor"},
    satellite_interface_id{YType::uint32, "satellite-interface-id"},
    satellite_interface_mac{YType::str, "satellite-interface-mac"},
    satellite_module_vendor{YType::str, "satellite-module-vendor"},
    satellite_serial_id{YType::str, "satellite-serial-id"},
    satellite_status{YType::enumeration, "satellite-status"}
{
    yang_name = "interface"; yang_parent_name = "satellite";
}

NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::~Interface()
{
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::has_data() const
{
    return conflict_reason.is_set
	|| interface_handle.is_set
	|| satellite_chassis_mac.is_set
	|| satellite_chassis_vendor.is_set
	|| satellite_interface_id.is_set
	|| satellite_interface_mac.is_set
	|| satellite_module_vendor.is_set
	|| satellite_serial_id.is_set
	|| satellite_status.is_set;
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(conflict_reason.operation)
	|| is_set(interface_handle.operation)
	|| is_set(satellite_chassis_mac.operation)
	|| is_set(satellite_chassis_vendor.operation)
	|| is_set(satellite_interface_id.operation)
	|| is_set(satellite_interface_mac.operation)
	|| is_set(satellite_module_vendor.operation)
	|| is_set(satellite_serial_id.operation)
	|| is_set(satellite_status.operation);
}

std::string NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (satellite_chassis_mac.is_set || is_set(satellite_chassis_mac.operation)) leaf_name_data.push_back(satellite_chassis_mac.get_name_leafdata());
    if (satellite_chassis_vendor.is_set || is_set(satellite_chassis_vendor.operation)) leaf_name_data.push_back(satellite_chassis_vendor.get_name_leafdata());
    if (satellite_interface_id.is_set || is_set(satellite_interface_id.operation)) leaf_name_data.push_back(satellite_interface_id.get_name_leafdata());
    if (satellite_interface_mac.is_set || is_set(satellite_interface_mac.operation)) leaf_name_data.push_back(satellite_interface_mac.get_name_leafdata());
    if (satellite_module_vendor.is_set || is_set(satellite_module_vendor.operation)) leaf_name_data.push_back(satellite_module_vendor.get_name_leafdata());
    if (satellite_serial_id.is_set || is_set(satellite_serial_id.operation)) leaf_name_data.push_back(satellite_serial_id.get_name_leafdata());
    if (satellite_status.is_set || is_set(satellite_status.operation)) leaf_name_data.push_back(satellite_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "satellite-chassis-mac")
    {
        satellite_chassis_mac = value;
    }
    if(value_path == "satellite-chassis-vendor")
    {
        satellite_chassis_vendor = value;
    }
    if(value_path == "satellite-interface-id")
    {
        satellite_interface_id = value;
    }
    if(value_path == "satellite-interface-mac")
    {
        satellite_interface_mac = value;
    }
    if(value_path == "satellite-module-vendor")
    {
        satellite_module_vendor = value;
    }
    if(value_path == "satellite-serial-id")
    {
        satellite_serial_id = value;
    }
    if(value_path == "satellite-status")
    {
        satellite_status = value;
    }
}

NvSatellite::IcpeDpms::IcpeDpms()
{
    yang_name = "icpe-dpms"; yang_parent_name = "nv-satellite";
}

NvSatellite::IcpeDpms::~IcpeDpms()
{
}

bool NvSatellite::IcpeDpms::has_data() const
{
    for (std::size_t index=0; index<icpe_dpm.size(); index++)
    {
        if(icpe_dpm[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::IcpeDpms::has_operation() const
{
    for (std::size_t index=0; index<icpe_dpm.size(); index++)
    {
        if(icpe_dpm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::IcpeDpms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-sdacp-oper:icpe-dpms";

    return path_buffer.str();

}

const EntityPath NvSatellite::IcpeDpms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::IcpeDpms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icpe-dpm")
    {
        for(auto const & c : icpe_dpm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::IcpeDpms::IcpeDpm>();
        c->parent = this;
        icpe_dpm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::IcpeDpms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : icpe_dpm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::IcpeDpms::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::IcpeDpms::IcpeDpm::IcpeDpm()
    :
    discovery_interface{YType::str, "discovery-interface"},
    ack_packets_sent{YType::uint64, "ack-packets-sent"},
    configuration_packets_sent{YType::uint64, "configuration-packets-sent"},
    discovery_interface_handle{YType::str, "discovery-interface-handle"},
    discovery_interface_status{YType::enumeration, "discovery-interface-status"},
    discovery_interface_xr{YType::str, "discovery-interface-xr"},
    host_ack_packets_received{YType::uint64, "host-ack-packets-received"},
    host_ack_packets_sent{YType::uint64, "host-ack-packets-sent"},
    ident_packets_received{YType::uint64, "ident-packets-received"},
    invalid_packets_received{YType::uint64, "invalid-packets-received"},
    los_packets_received{YType::uint64, "los-packets-received"},
    probe_packets_sent{YType::uint64, "probe-packets-sent"},
    ready_packets_received{YType::uint64, "ready-packets-received"},
    reject_packets_sent{YType::uint64, "reject-packets-sent"},
    secs_since_pkts_cleaned{YType::uint64, "secs-since-pkts-cleaned"}
{
    yang_name = "icpe-dpm"; yang_parent_name = "icpe-dpms";
}

NvSatellite::IcpeDpms::IcpeDpm::~IcpeDpm()
{
}

bool NvSatellite::IcpeDpms::IcpeDpm::has_data() const
{
    for (std::size_t index=0; index<remote_host.size(); index++)
    {
        if(remote_host[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return discovery_interface.is_set
	|| ack_packets_sent.is_set
	|| configuration_packets_sent.is_set
	|| discovery_interface_handle.is_set
	|| discovery_interface_status.is_set
	|| discovery_interface_xr.is_set
	|| host_ack_packets_received.is_set
	|| host_ack_packets_sent.is_set
	|| ident_packets_received.is_set
	|| invalid_packets_received.is_set
	|| los_packets_received.is_set
	|| probe_packets_sent.is_set
	|| ready_packets_received.is_set
	|| reject_packets_sent.is_set
	|| secs_since_pkts_cleaned.is_set;
}

bool NvSatellite::IcpeDpms::IcpeDpm::has_operation() const
{
    for (std::size_t index=0; index<remote_host.size(); index++)
    {
        if(remote_host[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(discovery_interface.operation)
	|| is_set(ack_packets_sent.operation)
	|| is_set(configuration_packets_sent.operation)
	|| is_set(discovery_interface_handle.operation)
	|| is_set(discovery_interface_status.operation)
	|| is_set(discovery_interface_xr.operation)
	|| is_set(host_ack_packets_received.operation)
	|| is_set(host_ack_packets_sent.operation)
	|| is_set(ident_packets_received.operation)
	|| is_set(invalid_packets_received.operation)
	|| is_set(los_packets_received.operation)
	|| is_set(probe_packets_sent.operation)
	|| is_set(ready_packets_received.operation)
	|| is_set(reject_packets_sent.operation)
	|| is_set(secs_since_pkts_cleaned.operation);
}

std::string NvSatellite::IcpeDpms::IcpeDpm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpe-dpm" <<"[discovery-interface='" <<discovery_interface <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::IcpeDpms::IcpeDpm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/Cisco-IOS-XR-icpe-sdacp-oper:icpe-dpms/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discovery_interface.is_set || is_set(discovery_interface.operation)) leaf_name_data.push_back(discovery_interface.get_name_leafdata());
    if (ack_packets_sent.is_set || is_set(ack_packets_sent.operation)) leaf_name_data.push_back(ack_packets_sent.get_name_leafdata());
    if (configuration_packets_sent.is_set || is_set(configuration_packets_sent.operation)) leaf_name_data.push_back(configuration_packets_sent.get_name_leafdata());
    if (discovery_interface_handle.is_set || is_set(discovery_interface_handle.operation)) leaf_name_data.push_back(discovery_interface_handle.get_name_leafdata());
    if (discovery_interface_status.is_set || is_set(discovery_interface_status.operation)) leaf_name_data.push_back(discovery_interface_status.get_name_leafdata());
    if (discovery_interface_xr.is_set || is_set(discovery_interface_xr.operation)) leaf_name_data.push_back(discovery_interface_xr.get_name_leafdata());
    if (host_ack_packets_received.is_set || is_set(host_ack_packets_received.operation)) leaf_name_data.push_back(host_ack_packets_received.get_name_leafdata());
    if (host_ack_packets_sent.is_set || is_set(host_ack_packets_sent.operation)) leaf_name_data.push_back(host_ack_packets_sent.get_name_leafdata());
    if (ident_packets_received.is_set || is_set(ident_packets_received.operation)) leaf_name_data.push_back(ident_packets_received.get_name_leafdata());
    if (invalid_packets_received.is_set || is_set(invalid_packets_received.operation)) leaf_name_data.push_back(invalid_packets_received.get_name_leafdata());
    if (los_packets_received.is_set || is_set(los_packets_received.operation)) leaf_name_data.push_back(los_packets_received.get_name_leafdata());
    if (probe_packets_sent.is_set || is_set(probe_packets_sent.operation)) leaf_name_data.push_back(probe_packets_sent.get_name_leafdata());
    if (ready_packets_received.is_set || is_set(ready_packets_received.operation)) leaf_name_data.push_back(ready_packets_received.get_name_leafdata());
    if (reject_packets_sent.is_set || is_set(reject_packets_sent.operation)) leaf_name_data.push_back(reject_packets_sent.get_name_leafdata());
    if (secs_since_pkts_cleaned.is_set || is_set(secs_since_pkts_cleaned.operation)) leaf_name_data.push_back(secs_since_pkts_cleaned.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::IcpeDpms::IcpeDpm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-host")
    {
        for(auto const & c : remote_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::IcpeDpms::IcpeDpm::RemoteHost>();
        c->parent = this;
        remote_host.push_back(c);
        return c;
    }

    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::IcpeDpms::IcpeDpm::Satellite>();
        c->parent = this;
        satellite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::IcpeDpms::IcpeDpm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_host)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : satellite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::IcpeDpms::IcpeDpm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discovery-interface")
    {
        discovery_interface = value;
    }
    if(value_path == "ack-packets-sent")
    {
        ack_packets_sent = value;
    }
    if(value_path == "configuration-packets-sent")
    {
        configuration_packets_sent = value;
    }
    if(value_path == "discovery-interface-handle")
    {
        discovery_interface_handle = value;
    }
    if(value_path == "discovery-interface-status")
    {
        discovery_interface_status = value;
    }
    if(value_path == "discovery-interface-xr")
    {
        discovery_interface_xr = value;
    }
    if(value_path == "host-ack-packets-received")
    {
        host_ack_packets_received = value;
    }
    if(value_path == "host-ack-packets-sent")
    {
        host_ack_packets_sent = value;
    }
    if(value_path == "ident-packets-received")
    {
        ident_packets_received = value;
    }
    if(value_path == "invalid-packets-received")
    {
        invalid_packets_received = value;
    }
    if(value_path == "los-packets-received")
    {
        los_packets_received = value;
    }
    if(value_path == "probe-packets-sent")
    {
        probe_packets_sent = value;
    }
    if(value_path == "ready-packets-received")
    {
        ready_packets_received = value;
    }
    if(value_path == "reject-packets-sent")
    {
        reject_packets_sent = value;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned = value;
    }
}

NvSatellite::IcpeDpms::IcpeDpm::Satellite::Satellite()
    :
    ack_packets_sent{YType::uint64, "ack-packets-sent"},
    configuration_packets_sent{YType::uint64, "configuration-packets-sent"},
    conflict_reason{YType::uint32, "conflict-reason"},
    current_timeout{YType::uint32, "current-timeout"},
    deleting{YType::boolean, "deleting"},
    discovery_protocol_state{YType::enumeration, "discovery-protocol-state"},
    host_chassis_mac{YType::str, "host-chassis-mac"},
    host_chassis_type{YType::str, "host-chassis-type"},
    host_chassis_vendor{YType::str, "host-chassis-vendor"},
    host_ip_address{YType::str, "host-ip-address"},
    ident_packets_received{YType::uint64, "ident-packets-received"},
    ifmgr_state{YType::boolean, "ifmgr-state"},
    invalid_packets_received{YType::uint64, "invalid-packets-received"},
    is_queued_for_efd{YType::boolean, "is-queued-for-efd"},
    is_queued_for_oc{YType::boolean, "is-queued-for-oc"},
    last_imdr_state{YType::uint32, "last-imdr-state"},
    legacy{YType::boolean, "legacy"},
    los_packets_received{YType::uint64, "los-packets-received"},
    ready_packets_received{YType::uint64, "ready-packets-received"},
    received_sys_mac{YType::str, "received-sys-mac"},
    reject_packets_sent{YType::uint64, "reject-packets-sent"},
    satellite_chassis_mac{YType::str, "satellite-chassis-mac"},
    satellite_chassis_type{YType::str, "satellite-chassis-type"},
    satellite_chassis_vendor{YType::str, "satellite-chassis-vendor"},
    satellite_id{YType::uint32, "satellite-id"},
    satellite_interface_id{YType::uint32, "satellite-interface-id"},
    satellite_interface_mac{YType::str, "satellite-interface-mac"},
    satellite_ip_address{YType::str, "satellite-ip-address"},
    satellite_module_mac{YType::str, "satellite-module-mac"},
    satellite_module_type{YType::str, "satellite-module-type"},
    satellite_module_vendor{YType::str, "satellite-module-vendor"},
    satellite_serial_id{YType::str, "satellite-serial-id"},
    secs_since_pkts_cleaned{YType::uint64, "secs-since-pkts-cleaned"}
{
    yang_name = "satellite"; yang_parent_name = "icpe-dpm";
}

NvSatellite::IcpeDpms::IcpeDpm::Satellite::~Satellite()
{
}

bool NvSatellite::IcpeDpms::IcpeDpm::Satellite::has_data() const
{
    return ack_packets_sent.is_set
	|| configuration_packets_sent.is_set
	|| conflict_reason.is_set
	|| current_timeout.is_set
	|| deleting.is_set
	|| discovery_protocol_state.is_set
	|| host_chassis_mac.is_set
	|| host_chassis_type.is_set
	|| host_chassis_vendor.is_set
	|| host_ip_address.is_set
	|| ident_packets_received.is_set
	|| ifmgr_state.is_set
	|| invalid_packets_received.is_set
	|| is_queued_for_efd.is_set
	|| is_queued_for_oc.is_set
	|| last_imdr_state.is_set
	|| legacy.is_set
	|| los_packets_received.is_set
	|| ready_packets_received.is_set
	|| received_sys_mac.is_set
	|| reject_packets_sent.is_set
	|| satellite_chassis_mac.is_set
	|| satellite_chassis_type.is_set
	|| satellite_chassis_vendor.is_set
	|| satellite_id.is_set
	|| satellite_interface_id.is_set
	|| satellite_interface_mac.is_set
	|| satellite_ip_address.is_set
	|| satellite_module_mac.is_set
	|| satellite_module_type.is_set
	|| satellite_module_vendor.is_set
	|| satellite_serial_id.is_set
	|| secs_since_pkts_cleaned.is_set;
}

bool NvSatellite::IcpeDpms::IcpeDpm::Satellite::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_packets_sent.operation)
	|| is_set(configuration_packets_sent.operation)
	|| is_set(conflict_reason.operation)
	|| is_set(current_timeout.operation)
	|| is_set(deleting.operation)
	|| is_set(discovery_protocol_state.operation)
	|| is_set(host_chassis_mac.operation)
	|| is_set(host_chassis_type.operation)
	|| is_set(host_chassis_vendor.operation)
	|| is_set(host_ip_address.operation)
	|| is_set(ident_packets_received.operation)
	|| is_set(ifmgr_state.operation)
	|| is_set(invalid_packets_received.operation)
	|| is_set(is_queued_for_efd.operation)
	|| is_set(is_queued_for_oc.operation)
	|| is_set(last_imdr_state.operation)
	|| is_set(legacy.operation)
	|| is_set(los_packets_received.operation)
	|| is_set(ready_packets_received.operation)
	|| is_set(received_sys_mac.operation)
	|| is_set(reject_packets_sent.operation)
	|| is_set(satellite_chassis_mac.operation)
	|| is_set(satellite_chassis_type.operation)
	|| is_set(satellite_chassis_vendor.operation)
	|| is_set(satellite_id.operation)
	|| is_set(satellite_interface_id.operation)
	|| is_set(satellite_interface_mac.operation)
	|| is_set(satellite_ip_address.operation)
	|| is_set(satellite_module_mac.operation)
	|| is_set(satellite_module_type.operation)
	|| is_set(satellite_module_vendor.operation)
	|| is_set(satellite_serial_id.operation)
	|| is_set(secs_since_pkts_cleaned.operation);
}

std::string NvSatellite::IcpeDpms::IcpeDpm::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite";

    return path_buffer.str();

}

const EntityPath NvSatellite::IcpeDpms::IcpeDpm::Satellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellite' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_packets_sent.is_set || is_set(ack_packets_sent.operation)) leaf_name_data.push_back(ack_packets_sent.get_name_leafdata());
    if (configuration_packets_sent.is_set || is_set(configuration_packets_sent.operation)) leaf_name_data.push_back(configuration_packets_sent.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (current_timeout.is_set || is_set(current_timeout.operation)) leaf_name_data.push_back(current_timeout.get_name_leafdata());
    if (deleting.is_set || is_set(deleting.operation)) leaf_name_data.push_back(deleting.get_name_leafdata());
    if (discovery_protocol_state.is_set || is_set(discovery_protocol_state.operation)) leaf_name_data.push_back(discovery_protocol_state.get_name_leafdata());
    if (host_chassis_mac.is_set || is_set(host_chassis_mac.operation)) leaf_name_data.push_back(host_chassis_mac.get_name_leafdata());
    if (host_chassis_type.is_set || is_set(host_chassis_type.operation)) leaf_name_data.push_back(host_chassis_type.get_name_leafdata());
    if (host_chassis_vendor.is_set || is_set(host_chassis_vendor.operation)) leaf_name_data.push_back(host_chassis_vendor.get_name_leafdata());
    if (host_ip_address.is_set || is_set(host_ip_address.operation)) leaf_name_data.push_back(host_ip_address.get_name_leafdata());
    if (ident_packets_received.is_set || is_set(ident_packets_received.operation)) leaf_name_data.push_back(ident_packets_received.get_name_leafdata());
    if (ifmgr_state.is_set || is_set(ifmgr_state.operation)) leaf_name_data.push_back(ifmgr_state.get_name_leafdata());
    if (invalid_packets_received.is_set || is_set(invalid_packets_received.operation)) leaf_name_data.push_back(invalid_packets_received.get_name_leafdata());
    if (is_queued_for_efd.is_set || is_set(is_queued_for_efd.operation)) leaf_name_data.push_back(is_queued_for_efd.get_name_leafdata());
    if (is_queued_for_oc.is_set || is_set(is_queued_for_oc.operation)) leaf_name_data.push_back(is_queued_for_oc.get_name_leafdata());
    if (last_imdr_state.is_set || is_set(last_imdr_state.operation)) leaf_name_data.push_back(last_imdr_state.get_name_leafdata());
    if (legacy.is_set || is_set(legacy.operation)) leaf_name_data.push_back(legacy.get_name_leafdata());
    if (los_packets_received.is_set || is_set(los_packets_received.operation)) leaf_name_data.push_back(los_packets_received.get_name_leafdata());
    if (ready_packets_received.is_set || is_set(ready_packets_received.operation)) leaf_name_data.push_back(ready_packets_received.get_name_leafdata());
    if (received_sys_mac.is_set || is_set(received_sys_mac.operation)) leaf_name_data.push_back(received_sys_mac.get_name_leafdata());
    if (reject_packets_sent.is_set || is_set(reject_packets_sent.operation)) leaf_name_data.push_back(reject_packets_sent.get_name_leafdata());
    if (satellite_chassis_mac.is_set || is_set(satellite_chassis_mac.operation)) leaf_name_data.push_back(satellite_chassis_mac.get_name_leafdata());
    if (satellite_chassis_type.is_set || is_set(satellite_chassis_type.operation)) leaf_name_data.push_back(satellite_chassis_type.get_name_leafdata());
    if (satellite_chassis_vendor.is_set || is_set(satellite_chassis_vendor.operation)) leaf_name_data.push_back(satellite_chassis_vendor.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (satellite_interface_id.is_set || is_set(satellite_interface_id.operation)) leaf_name_data.push_back(satellite_interface_id.get_name_leafdata());
    if (satellite_interface_mac.is_set || is_set(satellite_interface_mac.operation)) leaf_name_data.push_back(satellite_interface_mac.get_name_leafdata());
    if (satellite_ip_address.is_set || is_set(satellite_ip_address.operation)) leaf_name_data.push_back(satellite_ip_address.get_name_leafdata());
    if (satellite_module_mac.is_set || is_set(satellite_module_mac.operation)) leaf_name_data.push_back(satellite_module_mac.get_name_leafdata());
    if (satellite_module_type.is_set || is_set(satellite_module_type.operation)) leaf_name_data.push_back(satellite_module_type.get_name_leafdata());
    if (satellite_module_vendor.is_set || is_set(satellite_module_vendor.operation)) leaf_name_data.push_back(satellite_module_vendor.get_name_leafdata());
    if (satellite_serial_id.is_set || is_set(satellite_serial_id.operation)) leaf_name_data.push_back(satellite_serial_id.get_name_leafdata());
    if (secs_since_pkts_cleaned.is_set || is_set(secs_since_pkts_cleaned.operation)) leaf_name_data.push_back(secs_since_pkts_cleaned.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::IcpeDpms::IcpeDpm::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::IcpeDpms::IcpeDpm::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::IcpeDpms::IcpeDpm::Satellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-packets-sent")
    {
        ack_packets_sent = value;
    }
    if(value_path == "configuration-packets-sent")
    {
        configuration_packets_sent = value;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
    }
    if(value_path == "current-timeout")
    {
        current_timeout = value;
    }
    if(value_path == "deleting")
    {
        deleting = value;
    }
    if(value_path == "discovery-protocol-state")
    {
        discovery_protocol_state = value;
    }
    if(value_path == "host-chassis-mac")
    {
        host_chassis_mac = value;
    }
    if(value_path == "host-chassis-type")
    {
        host_chassis_type = value;
    }
    if(value_path == "host-chassis-vendor")
    {
        host_chassis_vendor = value;
    }
    if(value_path == "host-ip-address")
    {
        host_ip_address = value;
    }
    if(value_path == "ident-packets-received")
    {
        ident_packets_received = value;
    }
    if(value_path == "ifmgr-state")
    {
        ifmgr_state = value;
    }
    if(value_path == "invalid-packets-received")
    {
        invalid_packets_received = value;
    }
    if(value_path == "is-queued-for-efd")
    {
        is_queued_for_efd = value;
    }
    if(value_path == "is-queued-for-oc")
    {
        is_queued_for_oc = value;
    }
    if(value_path == "last-imdr-state")
    {
        last_imdr_state = value;
    }
    if(value_path == "legacy")
    {
        legacy = value;
    }
    if(value_path == "los-packets-received")
    {
        los_packets_received = value;
    }
    if(value_path == "ready-packets-received")
    {
        ready_packets_received = value;
    }
    if(value_path == "received-sys-mac")
    {
        received_sys_mac = value;
    }
    if(value_path == "reject-packets-sent")
    {
        reject_packets_sent = value;
    }
    if(value_path == "satellite-chassis-mac")
    {
        satellite_chassis_mac = value;
    }
    if(value_path == "satellite-chassis-type")
    {
        satellite_chassis_type = value;
    }
    if(value_path == "satellite-chassis-vendor")
    {
        satellite_chassis_vendor = value;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "satellite-interface-id")
    {
        satellite_interface_id = value;
    }
    if(value_path == "satellite-interface-mac")
    {
        satellite_interface_mac = value;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address = value;
    }
    if(value_path == "satellite-module-mac")
    {
        satellite_module_mac = value;
    }
    if(value_path == "satellite-module-type")
    {
        satellite_module_type = value;
    }
    if(value_path == "satellite-module-vendor")
    {
        satellite_module_vendor = value;
    }
    if(value_path == "satellite-serial-id")
    {
        satellite_serial_id = value;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned = value;
    }
}

NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::RemoteHost()
    :
    current_timeout{YType::uint32, "current-timeout"},
    discovery_protocol_state{YType::enumeration, "discovery-protocol-state"},
    host_ack_packets_received{YType::uint64, "host-ack-packets-received"},
    host_ack_packets_sent{YType::uint64, "host-ack-packets-sent"},
    host_chassis_mac{YType::str, "host-chassis-mac"},
    host_interface_mac{YType::str, "host-interface-mac"},
    route_length{YType::uint32, "route-length"},
    secs_since_pkts_cleaned{YType::uint64, "secs-since-pkts-cleaned"}
{
    yang_name = "remote-host"; yang_parent_name = "icpe-dpm";
}

NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::~RemoteHost()
{
}

bool NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::has_data() const
{
    return current_timeout.is_set
	|| discovery_protocol_state.is_set
	|| host_ack_packets_received.is_set
	|| host_ack_packets_sent.is_set
	|| host_chassis_mac.is_set
	|| host_interface_mac.is_set
	|| route_length.is_set
	|| secs_since_pkts_cleaned.is_set;
}

bool NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::has_operation() const
{
    return is_set(operation)
	|| is_set(current_timeout.operation)
	|| is_set(discovery_protocol_state.operation)
	|| is_set(host_ack_packets_received.operation)
	|| is_set(host_ack_packets_sent.operation)
	|| is_set(host_chassis_mac.operation)
	|| is_set(host_interface_mac.operation)
	|| is_set(route_length.operation)
	|| is_set(secs_since_pkts_cleaned.operation);
}

std::string NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-host";

    return path_buffer.str();

}

const EntityPath NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteHost' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_timeout.is_set || is_set(current_timeout.operation)) leaf_name_data.push_back(current_timeout.get_name_leafdata());
    if (discovery_protocol_state.is_set || is_set(discovery_protocol_state.operation)) leaf_name_data.push_back(discovery_protocol_state.get_name_leafdata());
    if (host_ack_packets_received.is_set || is_set(host_ack_packets_received.operation)) leaf_name_data.push_back(host_ack_packets_received.get_name_leafdata());
    if (host_ack_packets_sent.is_set || is_set(host_ack_packets_sent.operation)) leaf_name_data.push_back(host_ack_packets_sent.get_name_leafdata());
    if (host_chassis_mac.is_set || is_set(host_chassis_mac.operation)) leaf_name_data.push_back(host_chassis_mac.get_name_leafdata());
    if (host_interface_mac.is_set || is_set(host_interface_mac.operation)) leaf_name_data.push_back(host_interface_mac.get_name_leafdata());
    if (route_length.is_set || is_set(route_length.operation)) leaf_name_data.push_back(route_length.get_name_leafdata());
    if (secs_since_pkts_cleaned.is_set || is_set(secs_since_pkts_cleaned.operation)) leaf_name_data.push_back(secs_since_pkts_cleaned.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-timeout")
    {
        current_timeout = value;
    }
    if(value_path == "discovery-protocol-state")
    {
        discovery_protocol_state = value;
    }
    if(value_path == "host-ack-packets-received")
    {
        host_ack_packets_received = value;
    }
    if(value_path == "host-ack-packets-sent")
    {
        host_ack_packets_sent = value;
    }
    if(value_path == "host-chassis-mac")
    {
        host_chassis_mac = value;
    }
    if(value_path == "host-interface-mac")
    {
        host_interface_mac = value;
    }
    if(value_path == "route-length")
    {
        route_length = value;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned = value;
    }
}

NvSatellite::SdacpControls::SdacpControls()
{
    yang_name = "sdacp-controls"; yang_parent_name = "nv-satellite";
}

NvSatellite::SdacpControls::~SdacpControls()
{
}

bool NvSatellite::SdacpControls::has_data() const
{
    for (std::size_t index=0; index<sdacp_control.size(); index++)
    {
        if(sdacp_control[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SdacpControls::has_operation() const
{
    for (std::size_t index=0; index<sdacp_control.size(); index++)
    {
        if(sdacp_control[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SdacpControls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-sdacp-oper:sdacp-controls";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdacp-control")
    {
        for(auto const & c : sdacp_control)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SdacpControls::SdacpControl>();
        c->parent = this;
        sdacp_control.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sdacp_control)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SdacpControls::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SdacpControls::SdacpControl::SdacpControl()
    :
    satellite_id{YType::uint32, "satellite-id"},
    control_protocol_state{YType::enumeration, "control-protocol-state"},
    ip_address_auto{YType::boolean, "ip-address-auto"},
    satellite_id_xr{YType::uint32, "satellite-id-xr"},
    satellite_ip_address{YType::str, "satellite-ip-address"},
    transport_error{YType::uint32, "transport-error"},
    vrf_name{YType::str, "vrf-name"}
    	,
    protocol_state_timestamp(std::make_shared<NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp>())
	,transport_error_timestamp(std::make_shared<NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp>())
{
    protocol_state_timestamp->parent = this;

    transport_error_timestamp->parent = this;

    yang_name = "sdacp-control"; yang_parent_name = "sdacp-controls";
}

NvSatellite::SdacpControls::SdacpControl::~SdacpControl()
{
}

bool NvSatellite::SdacpControls::SdacpControl::has_data() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return satellite_id.is_set
	|| control_protocol_state.is_set
	|| ip_address_auto.is_set
	|| satellite_id_xr.is_set
	|| satellite_ip_address.is_set
	|| transport_error.is_set
	|| vrf_name.is_set
	|| (protocol_state_timestamp !=  nullptr && protocol_state_timestamp->has_data())
	|| (transport_error_timestamp !=  nullptr && transport_error_timestamp->has_data());
}

bool NvSatellite::SdacpControls::SdacpControl::has_operation() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(control_protocol_state.operation)
	|| is_set(ip_address_auto.operation)
	|| is_set(satellite_id_xr.operation)
	|| is_set(satellite_ip_address.operation)
	|| is_set(transport_error.operation)
	|| is_set(vrf_name.operation)
	|| (protocol_state_timestamp !=  nullptr && protocol_state_timestamp->has_operation())
	|| (transport_error_timestamp !=  nullptr && transport_error_timestamp->has_operation());
}

std::string NvSatellite::SdacpControls::SdacpControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdacp-control" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/Cisco-IOS-XR-icpe-sdacp-oper:sdacp-controls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (control_protocol_state.is_set || is_set(control_protocol_state.operation)) leaf_name_data.push_back(control_protocol_state.get_name_leafdata());
    if (ip_address_auto.is_set || is_set(ip_address_auto.operation)) leaf_name_data.push_back(ip_address_auto.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.operation)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());
    if (satellite_ip_address.is_set || is_set(satellite_ip_address.operation)) leaf_name_data.push_back(satellite_ip_address.get_name_leafdata());
    if (transport_error.is_set || is_set(transport_error.operation)) leaf_name_data.push_back(transport_error.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel")
    {
        for(auto const & c : channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel>();
        c->parent = this;
        channel.push_back(c);
        return c;
    }

    if(child_yang_name == "protocol-state-timestamp")
    {
        if(protocol_state_timestamp == nullptr)
        {
            protocol_state_timestamp = std::make_shared<NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp>();
        }
        return protocol_state_timestamp;
    }

    if(child_yang_name == "transport-error-timestamp")
    {
        if(transport_error_timestamp == nullptr)
        {
            transport_error_timestamp = std::make_shared<NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp>();
        }
        return transport_error_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : channel)
    {
        children[c->get_segment_path()] = c;
    }

    if(protocol_state_timestamp != nullptr)
    {
        children["protocol-state-timestamp"] = protocol_state_timestamp;
    }

    if(transport_error_timestamp != nullptr)
    {
        children["transport-error-timestamp"] = transport_error_timestamp;
    }

    return children;
}

void NvSatellite::SdacpControls::SdacpControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "control-protocol-state")
    {
        control_protocol_state = value;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto = value;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address = value;
    }
    if(value_path == "transport-error")
    {
        transport_error = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::ProtocolStateTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "protocol-state-timestamp"; yang_parent_name = "sdacp-control";
}

NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::~ProtocolStateTimestamp()
{
}

bool NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-state-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStateTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::TransportErrorTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "transport-error-timestamp"; yang_parent_name = "sdacp-control";
}

NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::~TransportErrorTimestamp()
{
}

bool NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-error-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportErrorTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

NvSatellite::SdacpControls::SdacpControl::Channel::Channel()
    :
    channel_id{YType::uint16, "channel-id"},
    channel_state{YType::enumeration, "channel-state"},
    control_messages_dropped{YType::uint64, "control-messages-dropped"},
    control_messages_received{YType::uint64, "control-messages-received"},
    control_messages_sent{YType::uint64, "control-messages-sent"},
    normal_messages_dropped{YType::uint64, "normal-messages-dropped"},
    normal_messages_received{YType::uint64, "normal-messages-received"},
    normal_messages_sent{YType::uint64, "normal-messages-sent"},
    resync_state{YType::enumeration, "resync-state"},
    secs_since_last_cleared{YType::uint64, "secs-since-last-cleared"},
    version{YType::uint16, "version"}
    	,
    capabilities(std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities>())
	,channel_state_timestamp(std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp>())
	,resync_state_timestamp(std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp>())
{
    capabilities->parent = this;

    channel_state_timestamp->parent = this;

    resync_state_timestamp->parent = this;

    yang_name = "channel"; yang_parent_name = "sdacp-control";
}

NvSatellite::SdacpControls::SdacpControl::Channel::~Channel()
{
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::has_data() const
{
    return channel_id.is_set
	|| channel_state.is_set
	|| control_messages_dropped.is_set
	|| control_messages_received.is_set
	|| control_messages_sent.is_set
	|| normal_messages_dropped.is_set
	|| normal_messages_received.is_set
	|| normal_messages_sent.is_set
	|| resync_state.is_set
	|| secs_since_last_cleared.is_set
	|| version.is_set
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (channel_state_timestamp !=  nullptr && channel_state_timestamp->has_data())
	|| (resync_state_timestamp !=  nullptr && resync_state_timestamp->has_data());
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::has_operation() const
{
    return is_set(operation)
	|| is_set(channel_id.operation)
	|| is_set(channel_state.operation)
	|| is_set(control_messages_dropped.operation)
	|| is_set(control_messages_received.operation)
	|| is_set(control_messages_sent.operation)
	|| is_set(normal_messages_dropped.operation)
	|| is_set(normal_messages_received.operation)
	|| is_set(normal_messages_sent.operation)
	|| is_set(resync_state.operation)
	|| is_set(secs_since_last_cleared.operation)
	|| is_set(version.operation)
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (channel_state_timestamp !=  nullptr && channel_state_timestamp->has_operation())
	|| (resync_state_timestamp !=  nullptr && resync_state_timestamp->has_operation());
}

std::string NvSatellite::SdacpControls::SdacpControl::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::Channel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Channel' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_id.is_set || is_set(channel_id.operation)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (channel_state.is_set || is_set(channel_state.operation)) leaf_name_data.push_back(channel_state.get_name_leafdata());
    if (control_messages_dropped.is_set || is_set(control_messages_dropped.operation)) leaf_name_data.push_back(control_messages_dropped.get_name_leafdata());
    if (control_messages_received.is_set || is_set(control_messages_received.operation)) leaf_name_data.push_back(control_messages_received.get_name_leafdata());
    if (control_messages_sent.is_set || is_set(control_messages_sent.operation)) leaf_name_data.push_back(control_messages_sent.get_name_leafdata());
    if (normal_messages_dropped.is_set || is_set(normal_messages_dropped.operation)) leaf_name_data.push_back(normal_messages_dropped.get_name_leafdata());
    if (normal_messages_received.is_set || is_set(normal_messages_received.operation)) leaf_name_data.push_back(normal_messages_received.get_name_leafdata());
    if (normal_messages_sent.is_set || is_set(normal_messages_sent.operation)) leaf_name_data.push_back(normal_messages_sent.get_name_leafdata());
    if (resync_state.is_set || is_set(resync_state.operation)) leaf_name_data.push_back(resync_state.get_name_leafdata());
    if (secs_since_last_cleared.is_set || is_set(secs_since_last_cleared.operation)) leaf_name_data.push_back(secs_since_last_cleared.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "channel-state-timestamp")
    {
        if(channel_state_timestamp == nullptr)
        {
            channel_state_timestamp = std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp>();
        }
        return channel_state_timestamp;
    }

    if(child_yang_name == "resync-state-timestamp")
    {
        if(resync_state_timestamp == nullptr)
        {
            resync_state_timestamp = std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp>();
        }
        return resync_state_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::Channel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(channel_state_timestamp != nullptr)
    {
        children["channel-state-timestamp"] = channel_state_timestamp;
    }

    if(resync_state_timestamp != nullptr)
    {
        children["resync-state-timestamp"] = resync_state_timestamp;
    }

    return children;
}

void NvSatellite::SdacpControls::SdacpControl::Channel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel-id")
    {
        channel_id = value;
    }
    if(value_path == "channel-state")
    {
        channel_state = value;
    }
    if(value_path == "control-messages-dropped")
    {
        control_messages_dropped = value;
    }
    if(value_path == "control-messages-received")
    {
        control_messages_received = value;
    }
    if(value_path == "control-messages-sent")
    {
        control_messages_sent = value;
    }
    if(value_path == "normal-messages-dropped")
    {
        normal_messages_dropped = value;
    }
    if(value_path == "normal-messages-received")
    {
        normal_messages_received = value;
    }
    if(value_path == "normal-messages-sent")
    {
        normal_messages_sent = value;
    }
    if(value_path == "resync-state")
    {
        resync_state = value;
    }
    if(value_path == "secs-since-last-cleared")
    {
        secs_since_last_cleared = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "channel";
}

NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::~Capabilities()
{
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::has_data() const
{
    for (std::size_t index=0; index<tl_vs.size(); index++)
    {
        if(tl_vs[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<tl_vs.size(); index++)
    {
        if(tl_vs[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capabilities' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tl-vs")
    {
        for(auto const & c : tl_vs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs>();
        c->parent = this;
        tl_vs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tl_vs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::TlVs()
    :
    debug{YType::str, "debug"},
    type{YType::uint32, "type"},
    value_{YType::uint8, "value"}
{
    yang_name = "tl-vs"; yang_parent_name = "capabilities";
}

NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::~TlVs()
{
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return debug.is_set
	|| type.is_set;
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(debug.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlVs' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::ResyncStateTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "resync-state-timestamp"; yang_parent_name = "channel";
}

NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::~ResyncStateTimestamp()
{
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resync-state-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResyncStateTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::ChannelStateTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "channel-state-timestamp"; yang_parent_name = "channel";
}

NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::~ChannelStateTimestamp()
{
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-state-timestamp";

    return path_buffer.str();

}

const EntityPath NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChannelStateTimestamp' in Cisco_IOS_XR_icpe_infra_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

const Enum::YLeaf IcpeOpmSyncFsmStateEnum::icpe_opm_sync_fsm_state_split_brain {0, "icpe-opm-sync-fsm-state-split-brain"};
const Enum::YLeaf IcpeOpmSyncFsmStateEnum::icpe_opm_sync_fsm_state_waiting {1, "icpe-opm-sync-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmSyncFsmStateEnum::icpe_opm_sync_fsm_state_whole_brain {2, "icpe-opm-sync-fsm-state-whole-brain"};

const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_not_created {0, "icpe-oper-sdacp-sess-state-not-created"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_created {1, "icpe-oper-sdacp-sess-state-created"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_authentication_not_ok {2, "icpe-oper-sdacp-sess-state-authentication-not-ok"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_authentication_ok {3, "icpe-oper-sdacp-sess-state-authentication-ok"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_version_not_ok {4, "icpe-oper-sdacp-sess-state-version-not-ok"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_up {5, "icpe-oper-sdacp-sess-state-up"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_issu {6, "icpe-oper-sdacp-sess-state-issu"};

const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_disconnected {0, "icpe-opm-transport-state-disconnected"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_iccp_unavailable {1, "icpe-opm-transport-state-iccp-unavailable"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_no_member_present {2, "icpe-opm-transport-state-no-member-present"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_member_down {3, "icpe-opm-transport-state-member-down"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_member_not_reachable {4, "icpe-opm-transport-state-member-not-reachable"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_waiting_for_app_connect {5, "icpe-opm-transport-state-waiting-for-app-connect"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_waiting_for_app_connect_response {6, "icpe-opm-transport-state-waiting-for-app-connect-response"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_connected {7, "icpe-opm-transport-state-connected"};

const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_unauth {0, "icpe-opm-auth-fsm-state-unauth"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_waiting {1, "icpe-opm-auth-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_waiting_for_auth {2, "icpe-opm-auth-fsm-state-waiting-for-auth"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_waiting_for_reply {3, "icpe-opm-auth-fsm-state-waiting-for-reply"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_authed {4, "icpe-opm-auth-fsm-state-authed"};

const Enum::YLeaf IcpeOpmControllerEnum::icpe_opm_controller_unknown {0, "icpe-opm-controller-unknown"};
const Enum::YLeaf IcpeOpmControllerEnum::icpe_opm_controller_primary {1, "icpe-opm-controller-primary"};
const Enum::YLeaf IcpeOpmControllerEnum::icpe_opm_controller_secondary {2, "icpe-opm-controller-secondary"};

const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_not_open {0, "icpe-opm-resync-fsm-state-not-open"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_stable {1, "icpe-opm-resync-fsm-state-stable"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_in_resync {2, "icpe-opm-resync-fsm-state-in-resync"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_queued {3, "icpe-opm-resync-fsm-state-queued"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_resync_req {4, "icpe-opm-resync-fsm-state-resync-req"};

const Enum::YLeaf IcpeOpmChanFsmStateEnum::icpe_opm_chan_fsm_state_down {0, "icpe-opm-chan-fsm-state-down"};
const Enum::YLeaf IcpeOpmChanFsmStateEnum::icpe_opm_chan_fsm_state_closed {1, "icpe-opm-chan-fsm-state-closed"};
const Enum::YLeaf IcpeOpmChanFsmStateEnum::icpe_opm_chan_fsm_state_opening {2, "icpe-opm-chan-fsm-state-opening"};
const Enum::YLeaf IcpeOpmChanFsmStateEnum::icpe_opm_chan_fsm_state_opened {3, "icpe-opm-chan-fsm-state-opened"};
const Enum::YLeaf IcpeOpmChanFsmStateEnum::icpe_opm_chan_fsm_state_open {4, "icpe-opm-chan-fsm-state-open"};

const Enum::YLeaf IcpeOpmSessStateEnum::icpe_opm_sess_state_disconnected {0, "icpe-opm-sess-state-disconnected"};
const Enum::YLeaf IcpeOpmSessStateEnum::icpe_opm_sess_state_connecting {1, "icpe-opm-sess-state-connecting"};
const Enum::YLeaf IcpeOpmSessStateEnum::icpe_opm_sess_state_authenticating {2, "icpe-opm-sess-state-authenticating"};
const Enum::YLeaf IcpeOpmSessStateEnum::icpe_opm_sess_state_arbitrating {3, "icpe-opm-sess-state-arbitrating"};
const Enum::YLeaf IcpeOpmSessStateEnum::icpe_opm_sess_state_waiting_for_resyncs {4, "icpe-opm-sess-state-waiting-for-resyncs"};
const Enum::YLeaf IcpeOpmSessStateEnum::icpe_opm_sess_state_connected {5, "icpe-opm-sess-state-connected"};

const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_stable {0, "icpe-oper-install-state-stable"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_transferring {1, "icpe-oper-install-state-transferring"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_transferred {2, "icpe-oper-install-state-transferred"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_installing {3, "icpe-oper-install-state-installing"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_in_progress {4, "icpe-oper-install-state-in-progress"};

const Enum::YLeaf IcpeOperPortEnum::icpe_oper_port_unknown {0, "icpe-oper-port-unknown"};
const Enum::YLeaf IcpeOperPortEnum::icpe_oper_port_gigabit_ethernet {1, "icpe-oper-port-gigabit-ethernet"};
const Enum::YLeaf IcpeOperPortEnum::icpe_oper_port_ten_gig_e {2, "icpe-oper-port-ten-gig-e"};

const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_unknown {0, "icpe-oper-fabric-port-unknown"};
const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_n_v_fabric_gig_e {1, "icpe-oper-fabric-port-n-v-fabric-gig-e"};
const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_n_v_fabric_ten_gig_e {2, "icpe-oper-fabric-port-n-v-fabric-ten-gig-e"};
const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_n_v_fabric_hundred_gig_e {3, "icpe-oper-fabric-port-n-v-fabric-hundred-gig-e"};

const Enum::YLeaf IcpeInstallPkgSuppEnum::icpe_install_pkg_supp_unknown {0, "icpe-install-pkg-supp-unknown"};
const Enum::YLeaf IcpeInstallPkgSuppEnum::icpe_install_pkg_supp_not_supported {1, "icpe-install-pkg-supp-not-supported"};
const Enum::YLeaf IcpeInstallPkgSuppEnum::icpe_install_pkg_supp_supported {2, "icpe-install-pkg-supp-supported"};

const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_unknown_error {0, "icpe-gco-oper-control-reason-unknown-error"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_wrong_chassis_type {1, "icpe-gco-oper-control-reason-wrong-chassis-type"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_wrong_chassis_serial {2, "icpe-gco-oper-control-reason-wrong-chassis-serial"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_needs_to_upgrade {3, "icpe-gco-oper-control-reason-needs-to-upgrade"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_none {4, "icpe-gco-oper-control-reason-none"};

const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_unknown {0, "icpe-install-sat-state-unknown"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_not_initiat_ed {1, "icpe-install-sat-state-not-initiat-ed"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_transferring {2, "icpe-install-sat-state-transferring"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_activating {3, "icpe-install-sat-state-activating"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_updating {4, "icpe-install-sat-state-updating"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_deactivating {5, "icpe-install-sat-state-deactivating"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_removing {6, "icpe-install-sat-state-removing"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_success {7, "icpe-install-sat-state-success"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_failure {8, "icpe-install-sat-state-failure"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_multiple_ops {9, "icpe-install-sat-state-multiple-ops"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_aborted {10, "icpe-install-sat-state-aborted"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_protocol_version {11, "icpe-install-sat-state-protocol-version"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_pkg_not_present {12, "icpe-install-sat-state-pkg-not-present"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_no_image {13, "icpe-install-sat-state-no-image"};
const Enum::YLeaf IcpeInstallSatStateEnum::icpe_install_sat_state_no_such_file {14, "icpe-install-sat-state-no-such-file"};

const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_unarbitrated {0, "icpe-opm-arbitration-fsm-state-unarbitrated"};
const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_waiting {1, "icpe-opm-arbitration-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_arbitrating {2, "icpe-opm-arbitration-fsm-state-arbitrating"};
const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_arbitrated {3, "icpe-opm-arbitration-fsm-state-arbitrated"};

const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_not_calculated {0, "icpe-oper-conflict-not-calculated"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_no_conflict {1, "icpe-oper-conflict-no-conflict"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_not_configured {2, "icpe-oper-conflict-satellite-not-configured"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_no_type {3, "icpe-oper-conflict-satellite-no-type"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_id_invalid {4, "icpe-oper-conflict-satellite-id-invalid"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_no_ipv4_addr {5, "icpe-oper-conflict-satellite-no-ipv4-addr"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_conflicting_ipv4_addr {6, "icpe-oper-conflict-satellite-conflicting-ipv4-addr"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_no_configured_links {7, "icpe-oper-conflict-no-configured-links"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_no_discovered_links {8, "icpe-oper-conflict-no-discovered-links"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_invalid_ports {9, "icpe-oper-conflict-invalid-ports"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_ports_overlap {10, "icpe-oper-conflict-ports-overlap"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_waiting_for_ipv4_addr {11, "icpe-oper-conflict-waiting-for-ipv4-addr"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_waiting_for_vrf {12, "icpe-oper-conflict-waiting-for-vrf"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_different_ipv4_addr {13, "icpe-oper-conflict-different-ipv4-addr"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_different_vrf {14, "icpe-oper-conflict-different-vrf"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_link_ipv4_overlap {15, "icpe-oper-conflict-satellite-link-ipv4-overlap"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_waiting_for_ident {16, "icpe-oper-conflict-waiting-for-ident"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_multiple_ids {17, "icpe-oper-conflict-multiple-ids"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_multiple_satellites {18, "icpe-oper-conflict-multiple-satellites"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_ident_rejected {19, "icpe-oper-conflict-ident-rejected"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_interface_down {20, "icpe-oper-conflict-interface-down"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_auto_ip_unavailable {21, "icpe-oper-conflict-auto-ip-unavailable"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_auto_ip_link_manual_ip {22, "icpe-oper-conflict-satellite-auto-ip-link-manual-ip"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_link_auto_ip_satellite_manual_ip {23, "icpe-oper-conflict-link-auto-ip-satellite-manual-ip"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_serial_num_mismatch {24, "icpe-oper-conflict-serial-num-mismatch"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_not_identified {25, "icpe-oper-conflict-satellite-not-identified"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_unsupported_type {26, "icpe-oper-conflict-satellite-unsupported-type"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_partition_unsupported {27, "icpe-oper-conflict-satellite-partition-unsupported"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_no_serial_number {28, "icpe-oper-conflict-satellite-no-serial-number"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_conflicting_serial_number {29, "icpe-oper-conflict-satellite-conflicting-serial-number"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_link_waiting_for_arp {30, "icpe-oper-conflict-satellite-link-waiting-for-arp"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_host_pe_isolated_split_brain {31, "icpe-oper-conflict-host-pe-isolated-split-brain"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_fabric_iccp_group_inconsistent {32, "icpe-oper-conflict-fabric-iccp-group-inconsistent"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_invalid_iccp_group {33, "icpe-oper-conflict-invalid-iccp-group"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_port_rejected {34, "icpe-oper-conflict-port-rejected"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_satellite_icl_not_supported {35, "icpe-oper-conflict-satellite-icl-not-supported"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_multiple_serial_number {36, "icpe-oper-conflict-multiple-serial-number"};
const Enum::YLeaf IcpeOperConflictEnum::icpe_oper_conflict_multiple_mac_address {37, "icpe-oper-conflict-multiple-mac-address"};

const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_unknown {0, "icpe-oper-ver-check-state-unknown"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_not_compatible {1, "icpe-oper-ver-check-state-not-compatible"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_current_version {2, "icpe-oper-ver-check-state-current-version"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_compatible_older {3, "icpe-oper-ver-check-state-compatible-older"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_compatible_newer {4, "icpe-oper-ver-check-state-compatible-newer"};

const Enum::YLeaf IcpeOperMultichassisRedundancyEnum::icpe_oper_multi_chassis_redundancy_not_redundant {0, "icpe-oper-multi-chassis-redundancy-not-redundant"};
const Enum::YLeaf IcpeOperMultichassisRedundancyEnum::icpe_oper_multi_chassis_redundancy_active {1, "icpe-oper-multi-chassis-redundancy-active"};
const Enum::YLeaf IcpeOperMultichassisRedundancyEnum::icpe_oper_multi_chassis_redundancy_standby {2, "icpe-oper-multi-chassis-redundancy-standby"};

const Enum::YLeaf IcpeOperDiscdLinkStateEnum::icpe_oper_discd_link_state_stopped {0, "icpe-oper-discd-link-state-stopped"};
const Enum::YLeaf IcpeOperDiscdLinkStateEnum::icpe_oper_discd_link_state_probing {1, "icpe-oper-discd-link-state-probing"};
const Enum::YLeaf IcpeOperDiscdLinkStateEnum::icpe_oper_discd_link_state_configuring {2, "icpe-oper-discd-link-state-configuring"};
const Enum::YLeaf IcpeOperDiscdLinkStateEnum::icpe_oper_discd_link_state_ready {3, "icpe-oper-discd-link-state-ready"};

const Enum::YLeaf IcpeOperTopoRemoteSourceEnum::icpe_oper_topo_remote_source_unknown {0, "icpe-oper-topo-remote-source-unknown"};
const Enum::YLeaf IcpeOperTopoRemoteSourceEnum::icpe_oper_topo_remote_source_remote_icl_id {1, "icpe-oper-topo-remote-source-remote-icl-id"};
const Enum::YLeaf IcpeOperTopoRemoteSourceEnum::icpe_oper_topo_remote_source_remote_satellite_mac {2, "icpe-oper-topo-remote-source-remote-satellite-mac"};
const Enum::YLeaf IcpeOperTopoRemoteSourceEnum::icpe_oper_topo_remote_source_remote_host_mac {3, "icpe-oper-topo-remote-source-remote-host-mac"};
const Enum::YLeaf IcpeOperTopoRemoteSourceEnum::icpe_oper_topo_remote_source_direct_satellite {4, "icpe-oper-topo-remote-source-direct-satellite"};
const Enum::YLeaf IcpeOperTopoRemoteSourceEnum::icpe_oper_topo_remote_source_direct_host {5, "icpe-oper-topo-remote-source-direct-host"};

const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_unknown {0, "icpe-optical-sync-state-unknown"};
const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_syncing {1, "icpe-optical-sync-state-syncing"};
const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_synced {2, "icpe-optical-sync-state-synced"};
const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_not_connected {3, "icpe-optical-sync-state-not-connected"};


}
}

