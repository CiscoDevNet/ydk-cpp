
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_icpe_infra_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
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
    return is_set(yfilter)
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

void NvSatellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> NvSatellite::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NvSatellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icpe-dpms" || name == "install" || name == "install-op-statuses" || name == "install-progresses" || name == "install-shows" || name == "install-statuses" || name == "reload-op-statuses" || name == "reload-statuses" || name == "satellite-priorities" || name == "satellite-properties" || name == "satellite-statuses" || name == "satellite-topologies" || name == "satellite-versions" || name == "sdacp-controls" || name == "sdacp-discovery2s" || name == "sdacp-redundancies")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::ReloadOpStatuses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::ReloadOpStatuses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::ReloadOpStatuses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload-op-status")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_reload_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_reloaded.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_reloading.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(operation_id_xr.yfilter)
	|| ydk::is_set(satellite_range.yfilter)
	|| ydk::is_set(sats_not_initiated.yfilter)
	|| ydk::is_set(sats_reload_failed.yfilter)
	|| ydk::is_set(sats_reloaded.yfilter)
	|| ydk::is_set(sats_reloading.yfilter);
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

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (operation_id_xr.is_set || is_set(operation_id_xr.yfilter)) leaf_name_data.push_back(operation_id_xr.get_name_leafdata());
    if (satellite_range.is_set || is_set(satellite_range.yfilter)) leaf_name_data.push_back(satellite_range.get_name_leafdata());

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

void NvSatellite::ReloadOpStatuses::ReloadOpStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr = value;
        operation_id_xr.value_namespace = name_space;
        operation_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-range")
    {
        satellite_range = value;
        satellite_range.value_namespace = name_space;
        satellite_range.value_namespace_prefix = name_space_prefix;
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

void NvSatellite::ReloadOpStatuses::ReloadOpStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr.yfilter = yfilter;
    }
    if(value_path == "satellite-range")
    {
        satellite_range.yfilter = yfilter;
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.yfilter = yfilter;
    }
    if(value_path == "sats-reload-failed")
    {
        sats_reload_failed.yfilter = yfilter;
    }
    if(value_path == "sats-reloaded")
    {
        sats_reloaded.yfilter = yfilter;
    }
    if(value_path == "sats-reloading")
    {
        sats_reloading.yfilter = yfilter;
    }
}

bool NvSatellite::ReloadOpStatuses::ReloadOpStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-id" || name == "operation-id-xr" || name == "satellite-range" || name == "sats-not-initiated" || name == "sats-reload-failed" || name == "sats-reloaded" || name == "sats-reloading")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::InstallStatuses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::InstallStatuses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::InstallStatuses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-status")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(satellite_range.yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(satellite_range_xr.yfilter)
	|| ydk::is_set(sats_activate_aborted.yfilter)
	|| ydk::is_set(sats_activate_failed.yfilter)
	|| ydk::is_set(sats_activating.yfilter)
	|| ydk::is_set(sats_completed.yfilter)
	|| ydk::is_set(sats_deactivate_aborted.yfilter)
	|| ydk::is_set(sats_deactivate_failed.yfilter)
	|| ydk::is_set(sats_deactivating.yfilter)
	|| ydk::is_set(sats_no_operation.yfilter)
	|| ydk::is_set(sats_not_initiated.yfilter)
	|| ydk::is_set(sats_remove_aborted.yfilter)
	|| ydk::is_set(sats_remove_failed.yfilter)
	|| ydk::is_set(sats_removing.yfilter)
	|| ydk::is_set(sats_transfer_aborted.yfilter)
	|| ydk::is_set(sats_transfer_failed.yfilter)
	|| ydk::is_set(sats_transferring.yfilter)
	|| ydk::is_set(sats_update_aborted.yfilter)
	|| ydk::is_set(sats_update_failed.yfilter)
	|| ydk::is_set(sats_updating.yfilter);
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

    if (satellite_range.is_set || is_set(satellite_range.yfilter)) leaf_name_data.push_back(satellite_range.get_name_leafdata());
    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (satellite_range_xr.is_set || is_set(satellite_range_xr.yfilter)) leaf_name_data.push_back(satellite_range_xr.get_name_leafdata());

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

void NvSatellite::InstallStatuses::InstallStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-range")
    {
        satellite_range = value;
        satellite_range.value_namespace = name_space;
        satellite_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-range-xr")
    {
        satellite_range_xr = value;
        satellite_range_xr.value_namespace = name_space;
        satellite_range_xr.value_namespace_prefix = name_space_prefix;
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

void NvSatellite::InstallStatuses::InstallStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-range")
    {
        satellite_range.yfilter = yfilter;
    }
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "satellite-range-xr")
    {
        satellite_range_xr.yfilter = yfilter;
    }
    if(value_path == "sats-activate-aborted")
    {
        sats_activate_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-activate-failed")
    {
        sats_activate_failed.yfilter = yfilter;
    }
    if(value_path == "sats-activating")
    {
        sats_activating.yfilter = yfilter;
    }
    if(value_path == "sats-completed")
    {
        sats_completed.yfilter = yfilter;
    }
    if(value_path == "sats-deactivate-aborted")
    {
        sats_deactivate_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-deactivate-failed")
    {
        sats_deactivate_failed.yfilter = yfilter;
    }
    if(value_path == "sats-deactivating")
    {
        sats_deactivating.yfilter = yfilter;
    }
    if(value_path == "sats-no-operation")
    {
        sats_no_operation.yfilter = yfilter;
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.yfilter = yfilter;
    }
    if(value_path == "sats-remove-aborted")
    {
        sats_remove_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-remove-failed")
    {
        sats_remove_failed.yfilter = yfilter;
    }
    if(value_path == "sats-removing")
    {
        sats_removing.yfilter = yfilter;
    }
    if(value_path == "sats-transfer-aborted")
    {
        sats_transfer_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-transfer-failed")
    {
        sats_transfer_failed.yfilter = yfilter;
    }
    if(value_path == "sats-transferring")
    {
        sats_transferring.yfilter = yfilter;
    }
    if(value_path == "sats-update-aborted")
    {
        sats_update_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-update-failed")
    {
        sats_update_failed.yfilter = yfilter;
    }
    if(value_path == "sats-updating")
    {
        sats_updating.yfilter = yfilter;
    }
}

bool NvSatellite::InstallStatuses::InstallStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-range" || name == "operation-id" || name == "satellite-range-xr" || name == "sats-activate-aborted" || name == "sats-activate-failed" || name == "sats-activating" || name == "sats-completed" || name == "sats-deactivate-aborted" || name == "sats-deactivate-failed" || name == "sats-deactivating" || name == "sats-no-operation" || name == "sats-not-initiated" || name == "sats-remove-aborted" || name == "sats-remove-failed" || name == "sats-removing" || name == "sats-transfer-aborted" || name == "sats-transfer-failed" || name == "sats-transferring" || name == "sats-update-aborted" || name == "sats-update-failed" || name == "sats-updating")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SdacpRedundancies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SdacpRedundancies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SdacpRedundancies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdacp-redundancy")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(arbitration_state.yfilter)
	|| ydk::is_set(authentication_state.yfilter)
	|| ydk::is_set(iccp_group_xr.yfilter)
	|| ydk::is_set(isolated.yfilter)
	|| ydk::is_set(primacy.yfilter)
	|| ydk::is_set(protocol_state.yfilter)
	|| ydk::is_set(synchronization_state.yfilter)
	|| ydk::is_set(system_mac.yfilter)
	|| ydk::is_set(transport_state.yfilter)
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

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (arbitration_state.is_set || is_set(arbitration_state.yfilter)) leaf_name_data.push_back(arbitration_state.get_name_leafdata());
    if (authentication_state.is_set || is_set(authentication_state.yfilter)) leaf_name_data.push_back(authentication_state.get_name_leafdata());
    if (iccp_group_xr.is_set || is_set(iccp_group_xr.yfilter)) leaf_name_data.push_back(iccp_group_xr.get_name_leafdata());
    if (isolated.is_set || is_set(isolated.yfilter)) leaf_name_data.push_back(isolated.get_name_leafdata());
    if (primacy.is_set || is_set(primacy.yfilter)) leaf_name_data.push_back(primacy.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.yfilter)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (synchronization_state.is_set || is_set(synchronization_state.yfilter)) leaf_name_data.push_back(synchronization_state.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.yfilter)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (transport_state.is_set || is_set(transport_state.yfilter)) leaf_name_data.push_back(transport_state.get_name_leafdata());


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

void NvSatellite::SdacpRedundancies::SdacpRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arbitration-state")
    {
        arbitration_state = value;
        arbitration_state.value_namespace = name_space;
        arbitration_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-state")
    {
        authentication_state = value;
        authentication_state.value_namespace = name_space;
        authentication_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-xr")
    {
        iccp_group_xr = value;
        iccp_group_xr.value_namespace = name_space;
        iccp_group_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolated")
    {
        isolated = value;
        isolated.value_namespace = name_space;
        isolated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primacy")
    {
        primacy = value;
        primacy.value_namespace = name_space;
        primacy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
        protocol_state.value_namespace = name_space;
        protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization-state")
    {
        synchronization_state = value;
        synchronization_state.value_namespace = name_space;
        synchronization_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
        system_mac.value_namespace = name_space;
        system_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-state")
    {
        transport_state = value;
        transport_state.value_namespace = name_space;
        transport_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "arbitration-state")
    {
        arbitration_state.yfilter = yfilter;
    }
    if(value_path == "authentication-state")
    {
        authentication_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-xr")
    {
        iccp_group_xr.yfilter = yfilter;
    }
    if(value_path == "isolated")
    {
        isolated.yfilter = yfilter;
    }
    if(value_path == "primacy")
    {
        primacy.yfilter = yfilter;
    }
    if(value_path == "protocol-state")
    {
        protocol_state.yfilter = yfilter;
    }
    if(value_path == "synchronization-state")
    {
        synchronization_state.yfilter = yfilter;
    }
    if(value_path == "system-mac")
    {
        system_mac.yfilter = yfilter;
    }
    if(value_path == "transport-state")
    {
        transport_state.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel" || name == "protocol-state-timestamp" || name == "iccp-group" || name == "arbitration-state" || name == "authentication-state" || name == "iccp-group-xr" || name == "isolated" || name == "primacy" || name == "protocol-state" || name == "synchronization-state" || name == "system-mac" || name == "transport-state")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(chan_state.yfilter)
	|| ydk::is_set(channel_id.yfilter)
	|| ydk::is_set(control_messages_received.yfilter)
	|| ydk::is_set(control_messages_sent.yfilter)
	|| ydk::is_set(normal_messages_received.yfilter)
	|| ydk::is_set(normal_messages_sent.yfilter)
	|| ydk::is_set(resync_state.yfilter)
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

    if (chan_state.is_set || is_set(chan_state.yfilter)) leaf_name_data.push_back(chan_state.get_name_leafdata());
    if (channel_id.is_set || is_set(channel_id.yfilter)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (control_messages_received.is_set || is_set(control_messages_received.yfilter)) leaf_name_data.push_back(control_messages_received.get_name_leafdata());
    if (control_messages_sent.is_set || is_set(control_messages_sent.yfilter)) leaf_name_data.push_back(control_messages_sent.get_name_leafdata());
    if (normal_messages_received.is_set || is_set(normal_messages_received.yfilter)) leaf_name_data.push_back(normal_messages_received.get_name_leafdata());
    if (normal_messages_sent.is_set || is_set(normal_messages_sent.yfilter)) leaf_name_data.push_back(normal_messages_sent.get_name_leafdata());
    if (resync_state.is_set || is_set(resync_state.yfilter)) leaf_name_data.push_back(resync_state.get_name_leafdata());


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

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chan-state")
    {
        chan_state = value;
        chan_state.value_namespace = name_space;
        chan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-id")
    {
        channel_id = value;
        channel_id.value_namespace = name_space;
        channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-messages-received")
    {
        control_messages_received = value;
        control_messages_received.value_namespace = name_space;
        control_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-messages-sent")
    {
        control_messages_sent = value;
        control_messages_sent.value_namespace = name_space;
        control_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-messages-received")
    {
        normal_messages_received = value;
        normal_messages_received.value_namespace = name_space;
        normal_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-messages-sent")
    {
        normal_messages_sent = value;
        normal_messages_sent.value_namespace = name_space;
        normal_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-state")
    {
        resync_state = value;
        resync_state.value_namespace = name_space;
        resync_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chan-state")
    {
        chan_state.yfilter = yfilter;
    }
    if(value_path == "channel-id")
    {
        channel_id.yfilter = yfilter;
    }
    if(value_path == "control-messages-received")
    {
        control_messages_received.yfilter = yfilter;
    }
    if(value_path == "control-messages-sent")
    {
        control_messages_sent.yfilter = yfilter;
    }
    if(value_path == "normal-messages-received")
    {
        normal_messages_received.yfilter = yfilter;
    }
    if(value_path == "normal-messages-sent")
    {
        normal_messages_sent.yfilter = yfilter;
    }
    if(value_path == "resync-state")
    {
        resync_state.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-state-timestamp" || name == "resync-state-timestamp" || name == "chan-state" || name == "channel-id" || name == "control-messages-received" || name == "control-messages-sent" || name == "normal-messages-received" || name == "normal-messages-sent" || name == "resync-state")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::InstallShows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::InstallShows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::InstallShows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-show")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_activate_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(name_string.yfilter)
	|| ydk::is_set(operation_id_xr.yfilter)
	|| ydk::is_set(operation_type.yfilter)
	|| ydk::is_set(progress_percentage.yfilter)
	|| ydk::is_set(ref_state.yfilter)
	|| ydk::is_set(satellite_range.yfilter)
	|| ydk::is_set(sats_activate_aborted.yfilter)
	|| ydk::is_set(sats_activate_failed.yfilter)
	|| ydk::is_set(sats_activating.yfilter)
	|| ydk::is_set(sats_completed.yfilter)
	|| ydk::is_set(sats_deactivate_aborted.yfilter)
	|| ydk::is_set(sats_deactivate_failed.yfilter)
	|| ydk::is_set(sats_deactivating.yfilter)
	|| ydk::is_set(sats_no_operation.yfilter)
	|| ydk::is_set(sats_not_initiated.yfilter)
	|| ydk::is_set(sats_remove_aborted.yfilter)
	|| ydk::is_set(sats_remove_failed.yfilter)
	|| ydk::is_set(sats_removing.yfilter)
	|| ydk::is_set(sats_transfer_aborted.yfilter)
	|| ydk::is_set(sats_transfer_failed.yfilter)
	|| ydk::is_set(sats_transferring.yfilter)
	|| ydk::is_set(sats_update_aborted.yfilter)
	|| ydk::is_set(sats_update_failed.yfilter)
	|| ydk::is_set(sats_updating.yfilter)
	|| ydk::is_set(start_time.yfilter);
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

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (operation_id_xr.is_set || is_set(operation_id_xr.yfilter)) leaf_name_data.push_back(operation_id_xr.get_name_leafdata());
    if (operation_type.is_set || is_set(operation_type.yfilter)) leaf_name_data.push_back(operation_type.get_name_leafdata());
    if (progress_percentage.is_set || is_set(progress_percentage.yfilter)) leaf_name_data.push_back(progress_percentage.get_name_leafdata());
    if (ref_state.is_set || is_set(ref_state.yfilter)) leaf_name_data.push_back(ref_state.get_name_leafdata());
    if (satellite_range.is_set || is_set(satellite_range.yfilter)) leaf_name_data.push_back(satellite_range.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());

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

void NvSatellite::InstallShows::InstallShow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-string")
    {
        name_string.append(value);
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr = value;
        operation_id_xr.value_namespace = name_space;
        operation_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-type")
    {
        operation_type = value;
        operation_type.value_namespace = name_space;
        operation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "progress-percentage")
    {
        progress_percentage = value;
        progress_percentage.value_namespace = name_space;
        progress_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-state")
    {
        ref_state = value;
        ref_state.value_namespace = name_space;
        ref_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-range")
    {
        satellite_range = value;
        satellite_range.value_namespace = name_space;
        satellite_range.value_namespace_prefix = name_space_prefix;
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
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::InstallShows::InstallShow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "name-string")
    {
        name_string.yfilter = yfilter;
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr.yfilter = yfilter;
    }
    if(value_path == "operation-type")
    {
        operation_type.yfilter = yfilter;
    }
    if(value_path == "progress-percentage")
    {
        progress_percentage.yfilter = yfilter;
    }
    if(value_path == "ref-state")
    {
        ref_state.yfilter = yfilter;
    }
    if(value_path == "satellite-range")
    {
        satellite_range.yfilter = yfilter;
    }
    if(value_path == "sats-activate-aborted")
    {
        sats_activate_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-activate-failed")
    {
        sats_activate_failed.yfilter = yfilter;
    }
    if(value_path == "sats-activating")
    {
        sats_activating.yfilter = yfilter;
    }
    if(value_path == "sats-completed")
    {
        sats_completed.yfilter = yfilter;
    }
    if(value_path == "sats-deactivate-aborted")
    {
        sats_deactivate_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-deactivate-failed")
    {
        sats_deactivate_failed.yfilter = yfilter;
    }
    if(value_path == "sats-deactivating")
    {
        sats_deactivating.yfilter = yfilter;
    }
    if(value_path == "sats-no-operation")
    {
        sats_no_operation.yfilter = yfilter;
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.yfilter = yfilter;
    }
    if(value_path == "sats-remove-aborted")
    {
        sats_remove_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-remove-failed")
    {
        sats_remove_failed.yfilter = yfilter;
    }
    if(value_path == "sats-removing")
    {
        sats_removing.yfilter = yfilter;
    }
    if(value_path == "sats-transfer-aborted")
    {
        sats_transfer_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-transfer-failed")
    {
        sats_transfer_failed.yfilter = yfilter;
    }
    if(value_path == "sats-transferring")
    {
        sats_transferring.yfilter = yfilter;
    }
    if(value_path == "sats-update-aborted")
    {
        sats_update_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-update-failed")
    {
        sats_update_failed.yfilter = yfilter;
    }
    if(value_path == "sats-updating")
    {
        sats_updating.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool NvSatellite::InstallShows::InstallShow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite" || name == "operation-id" || name == "end-time" || name == "name-string" || name == "operation-id-xr" || name == "operation-type" || name == "progress-percentage" || name == "ref-state" || name == "satellite-range" || name == "sats-activate-aborted" || name == "sats-activate-failed" || name == "sats-activating" || name == "sats-completed" || name == "sats-deactivate-aborted" || name == "sats-deactivate-failed" || name == "sats-deactivating" || name == "sats-no-operation" || name == "sats-not-initiated" || name == "sats-remove-aborted" || name == "sats-remove-failed" || name == "sats-removing" || name == "sats-transfer-aborted" || name == "sats-transfer-failed" || name == "sats-transferring" || name == "sats-update-aborted" || name == "sats-update-failed" || name == "sats-updating" || name == "start-time")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(info.yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(state.yfilter);
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

    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (info.is_set || is_set(info.yfilter)) leaf_name_data.push_back(info.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


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

void NvSatellite::InstallShows::InstallShow::Satellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "info")
    {
        info = value;
        info.value_namespace = name_space;
        info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::InstallShows::InstallShow::Satellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "info")
    {
        info.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool NvSatellite::InstallShows::InstallShow::Satellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-time" || name == "info" || name == "percentage" || name == "retries" || name == "satellite-id" || name == "start-time" || name == "state")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SatelliteStatuses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SatelliteStatuses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SatelliteStatuses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-status")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(cfgd_timeout.yfilter)
	|| ydk::is_set(configured_serial_number.yfilter)
	|| ydk::is_set(configured_serial_number_present.yfilter)
	|| ydk::is_set(conflict_context.yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(description_present.yfilter)
	|| ydk::is_set(ethernet_fabric_supported.yfilter)
	|| ydk::is_set(host_treating_as_active.yfilter)
	|| ydk::is_set(install_state.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_auto.yfilter)
	|| ydk::is_set(ip_address_present.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_address_present.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_present.yfilter)
	|| ydk::is_set(optical_supported.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(password_error.yfilter)
	|| ydk::is_set(received_host_name.yfilter)
	|| ydk::is_set(received_serial_number.yfilter)
	|| ydk::is_set(received_serial_number_present.yfilter)
	|| ydk::is_set(recovery_delay_time_left.yfilter)
	|| ydk::is_set(redundancy_iccp_group.yfilter)
	|| ydk::is_set(remote_version.yfilter)
	|| ydk::is_set(remote_version_present.yfilter)
	|| ydk::is_set(satellite_id_xr.yfilter)
	|| ydk::is_set(satellite_treating_as_active.yfilter)
	|| ydk::is_set(sdacp_session_failure_reason.yfilter)
	|| ydk::is_set(sdacp_session_state.yfilter)
	|| ydk::is_set(timeout_warning.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(version_check_state.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrfid.yfilter)
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

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (cfgd_timeout.is_set || is_set(cfgd_timeout.yfilter)) leaf_name_data.push_back(cfgd_timeout.get_name_leafdata());
    if (configured_serial_number.is_set || is_set(configured_serial_number.yfilter)) leaf_name_data.push_back(configured_serial_number.get_name_leafdata());
    if (configured_serial_number_present.is_set || is_set(configured_serial_number_present.yfilter)) leaf_name_data.push_back(configured_serial_number_present.get_name_leafdata());
    if (conflict_context.is_set || is_set(conflict_context.yfilter)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (description_present.is_set || is_set(description_present.yfilter)) leaf_name_data.push_back(description_present.get_name_leafdata());
    if (ethernet_fabric_supported.is_set || is_set(ethernet_fabric_supported.yfilter)) leaf_name_data.push_back(ethernet_fabric_supported.get_name_leafdata());
    if (host_treating_as_active.is_set || is_set(host_treating_as_active.yfilter)) leaf_name_data.push_back(host_treating_as_active.get_name_leafdata());
    if (install_state.is_set || is_set(install_state.yfilter)) leaf_name_data.push_back(install_state.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_auto.is_set || is_set(ip_address_auto.yfilter)) leaf_name_data.push_back(ip_address_auto.get_name_leafdata());
    if (ip_address_present.is_set || is_set(ip_address_present.yfilter)) leaf_name_data.push_back(ip_address_present.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_address_present.is_set || is_set(ipv6_address_present.yfilter)) leaf_name_data.push_back(ipv6_address_present.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_present.is_set || is_set(mac_address_present.yfilter)) leaf_name_data.push_back(mac_address_present.get_name_leafdata());
    if (optical_supported.is_set || is_set(optical_supported.yfilter)) leaf_name_data.push_back(optical_supported.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_error.is_set || is_set(password_error.yfilter)) leaf_name_data.push_back(password_error.get_name_leafdata());
    if (received_host_name.is_set || is_set(received_host_name.yfilter)) leaf_name_data.push_back(received_host_name.get_name_leafdata());
    if (received_serial_number.is_set || is_set(received_serial_number.yfilter)) leaf_name_data.push_back(received_serial_number.get_name_leafdata());
    if (received_serial_number_present.is_set || is_set(received_serial_number_present.yfilter)) leaf_name_data.push_back(received_serial_number_present.get_name_leafdata());
    if (recovery_delay_time_left.is_set || is_set(recovery_delay_time_left.yfilter)) leaf_name_data.push_back(recovery_delay_time_left.get_name_leafdata());
    if (redundancy_iccp_group.is_set || is_set(redundancy_iccp_group.yfilter)) leaf_name_data.push_back(redundancy_iccp_group.get_name_leafdata());
    if (remote_version_present.is_set || is_set(remote_version_present.yfilter)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.yfilter)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());
    if (satellite_treating_as_active.is_set || is_set(satellite_treating_as_active.yfilter)) leaf_name_data.push_back(satellite_treating_as_active.get_name_leafdata());
    if (sdacp_session_failure_reason.is_set || is_set(sdacp_session_failure_reason.yfilter)) leaf_name_data.push_back(sdacp_session_failure_reason.get_name_leafdata());
    if (sdacp_session_state.is_set || is_set(sdacp_session_state.yfilter)) leaf_name_data.push_back(sdacp_session_state.get_name_leafdata());
    if (timeout_warning.is_set || is_set(timeout_warning.yfilter)) leaf_name_data.push_back(timeout_warning.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.yfilter)) leaf_name_data.push_back(version_check_state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

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

void NvSatellite::SatelliteStatuses::SatelliteStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgd-timeout")
    {
        cfgd_timeout = value;
        cfgd_timeout.value_namespace = name_space;
        cfgd_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-serial-number")
    {
        configured_serial_number = value;
        configured_serial_number.value_namespace = name_space;
        configured_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-serial-number-present")
    {
        configured_serial_number_present = value;
        configured_serial_number_present.value_namespace = name_space;
        configured_serial_number_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-context")
    {
        conflict_context = value;
        conflict_context.value_namespace = name_space;
        conflict_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description-present")
    {
        description_present = value;
        description_present.value_namespace = name_space;
        description_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-fabric-supported")
    {
        ethernet_fabric_supported = value;
        ethernet_fabric_supported.value_namespace = name_space;
        ethernet_fabric_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-treating-as-active")
    {
        host_treating_as_active = value;
        host_treating_as_active.value_namespace = name_space;
        host_treating_as_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-state")
    {
        install_state = value;
        install_state.value_namespace = name_space;
        install_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto = value;
        ip_address_auto.value_namespace = name_space;
        ip_address_auto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-present")
    {
        ip_address_present = value;
        ip_address_present.value_namespace = name_space;
        ip_address_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address-present")
    {
        ipv6_address_present = value;
        ipv6_address_present.value_namespace = name_space;
        ipv6_address_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-present")
    {
        mac_address_present = value;
        mac_address_present.value_namespace = name_space;
        mac_address_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-supported")
    {
        optical_supported = value;
        optical_supported.value_namespace = name_space;
        optical_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-error")
    {
        password_error = value;
        password_error.value_namespace = name_space;
        password_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-host-name")
    {
        received_host_name = value;
        received_host_name.value_namespace = name_space;
        received_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-serial-number")
    {
        received_serial_number = value;
        received_serial_number.value_namespace = name_space;
        received_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-serial-number-present")
    {
        received_serial_number_present = value;
        received_serial_number_present.value_namespace = name_space;
        received_serial_number_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay-time-left")
    {
        recovery_delay_time_left = value;
        recovery_delay_time_left.value_namespace = name_space;
        recovery_delay_time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-iccp-group")
    {
        redundancy_iccp_group = value;
        redundancy_iccp_group.value_namespace = name_space;
        redundancy_iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
        remote_version_present.value_namespace = name_space;
        remote_version_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
        satellite_id_xr.value_namespace = name_space;
        satellite_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-treating-as-active")
    {
        satellite_treating_as_active = value;
        satellite_treating_as_active.value_namespace = name_space;
        satellite_treating_as_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdacp-session-failure-reason")
    {
        sdacp_session_failure_reason = value;
        sdacp_session_failure_reason.value_namespace = name_space;
        sdacp_session_failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdacp-session-state")
    {
        sdacp_session_state = value;
        sdacp_session_state.value_namespace = name_space;
        sdacp_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-warning")
    {
        timeout_warning = value;
        timeout_warning.value_namespace = name_space;
        timeout_warning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
        version_check_state.value_namespace = name_space;
        version_check_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "cfgd-timeout")
    {
        cfgd_timeout.yfilter = yfilter;
    }
    if(value_path == "configured-serial-number")
    {
        configured_serial_number.yfilter = yfilter;
    }
    if(value_path == "configured-serial-number-present")
    {
        configured_serial_number_present.yfilter = yfilter;
    }
    if(value_path == "conflict-context")
    {
        conflict_context.yfilter = yfilter;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "description-present")
    {
        description_present.yfilter = yfilter;
    }
    if(value_path == "ethernet-fabric-supported")
    {
        ethernet_fabric_supported.yfilter = yfilter;
    }
    if(value_path == "host-treating-as-active")
    {
        host_treating_as_active.yfilter = yfilter;
    }
    if(value_path == "install-state")
    {
        install_state.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto.yfilter = yfilter;
    }
    if(value_path == "ip-address-present")
    {
        ip_address_present.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address-present")
    {
        ipv6_address_present.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-present")
    {
        mac_address_present.yfilter = yfilter;
    }
    if(value_path == "optical-supported")
    {
        optical_supported.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "password-error")
    {
        password_error.yfilter = yfilter;
    }
    if(value_path == "received-host-name")
    {
        received_host_name.yfilter = yfilter;
    }
    if(value_path == "received-serial-number")
    {
        received_serial_number.yfilter = yfilter;
    }
    if(value_path == "received-serial-number-present")
    {
        received_serial_number_present.yfilter = yfilter;
    }
    if(value_path == "recovery-delay-time-left")
    {
        recovery_delay_time_left.yfilter = yfilter;
    }
    if(value_path == "redundancy-iccp-group")
    {
        redundancy_iccp_group.yfilter = yfilter;
    }
    if(value_path == "remote-version")
    {
        remote_version.yfilter = yfilter;
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present.yfilter = yfilter;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr.yfilter = yfilter;
    }
    if(value_path == "satellite-treating-as-active")
    {
        satellite_treating_as_active.yfilter = yfilter;
    }
    if(value_path == "sdacp-session-failure-reason")
    {
        sdacp_session_failure_reason.yfilter = yfilter;
    }
    if(value_path == "sdacp-session-state")
    {
        sdacp_session_state.yfilter = yfilter;
    }
    if(value_path == "timeout-warning")
    {
        timeout_warning.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "version-check-state")
    {
        version_check_state.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-fabric-ports" || name == "configured-link" || name == "optical-status" || name == "redundancy-out-of-sync-timestamp" || name == "satellite-id" || name == "cfgd-timeout" || name == "configured-serial-number" || name == "configured-serial-number-present" || name == "conflict-context" || name == "conflict-reason" || name == "description" || name == "description-present" || name == "ethernet-fabric-supported" || name == "host-treating-as-active" || name == "install-state" || name == "ip-address" || name == "ip-address-auto" || name == "ip-address-present" || name == "ipv6-address" || name == "ipv6-address-present" || name == "mac-address" || name == "mac-address-present" || name == "optical-supported" || name == "password" || name == "password-error" || name == "received-host-name" || name == "received-serial-number" || name == "received-serial-number-present" || name == "recovery-delay-time-left" || name == "redundancy-iccp-group" || name == "remote-version" || name == "remote-version-present" || name == "satellite-id-xr" || name == "satellite-treating-as-active" || name == "sdacp-session-failure-reason" || name == "sdacp-session-state" || name == "timeout-warning" || name == "type" || name == "version-check-state" || name == "vrf-name" || name == "vrfid")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(channel_up.yfilter)
	|| ydk::is_set(error_string.yfilter)
	|| ydk::is_set(out_of_sync.yfilter);
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

    if (channel_up.is_set || is_set(channel_up.yfilter)) leaf_name_data.push_back(channel_up.get_name_leafdata());
    if (error_string.is_set || is_set(error_string.yfilter)) leaf_name_data.push_back(error_string.get_name_leafdata());
    if (out_of_sync.is_set || is_set(out_of_sync.yfilter)) leaf_name_data.push_back(out_of_sync.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-up")
    {
        channel_up = value;
        channel_up.value_namespace = name_space;
        channel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-string")
    {
        error_string = value;
        error_string.value_namespace = name_space;
        error_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sync")
    {
        out_of_sync = value;
        out_of_sync.value_namespace = name_space;
        out_of_sync.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-up")
    {
        channel_up.yfilter = yfilter;
    }
    if(value_path == "error-string")
    {
        error_string.yfilter = yfilter;
    }
    if(value_path == "out-of-sync")
    {
        out_of_sync.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-port" || name == "current-port" || name == "channel-up" || name == "error-string" || name == "out-of-sync")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(subslot.yfilter)
	|| ydk::is_set(valid.yfilter);
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

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (subslot.is_set || is_set(subslot.yfilter)) leaf_name_data.push_back(subslot.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "subslot")
    {
        subslot = value;
        subslot.value_namespace = name_space;
        subslot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "subslot")
    {
        subslot.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "port-type" || name == "slot" || name == "subslot" || name == "valid")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(requested.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(subslot.yfilter);
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

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (requested.is_set || is_set(requested.yfilter)) leaf_name_data.push_back(requested.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (subslot.is_set || is_set(subslot.yfilter)) leaf_name_data.push_back(subslot.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested")
    {
        requested = value;
        requested.value_namespace = name_space;
        requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subslot")
    {
        subslot = value;
        subslot.value_namespace = name_space;
        subslot.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "requested")
    {
        requested.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "subslot")
    {
        subslot.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent" || name == "port" || name == "port-type" || name == "requested" || name == "slot" || name == "subslot")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(chassis_sync_state.yfilter);
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

    if (chassis_sync_state.is_set || is_set(chassis_sync_state.yfilter)) leaf_name_data.push_back(chassis_sync_state.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-sync-state")
    {
        chassis_sync_state = value;
        chassis_sync_state.value_namespace = name_space;
        chassis_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-sync-state")
    {
        chassis_sync_state.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "chassis-sync-state")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sync_state.yfilter);
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sync_state.is_set || is_set(sync_state.yfilter)) leaf_name_data.push_back(sync_state.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-state")
    {
        sync_state = value;
        sync_state.value_namespace = name_space;
        sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sync-state")
    {
        sync_state.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "sync-state")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(conflict_context.yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_auto.yfilter)
	|| ydk::is_set(min_links_satisfied.yfilter)
	|| ydk::is_set(minimum_preferred_links.yfilter)
	|| ydk::is_set(minimum_required_links.yfilter)
	|| ydk::is_set(number_active_links.yfilter)
	|| ydk::is_set(required_min_links_satisfied.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_id_present.yfilter);
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

    if (conflict_context.is_set || is_set(conflict_context.yfilter)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_auto.is_set || is_set(ip_address_auto.yfilter)) leaf_name_data.push_back(ip_address_auto.get_name_leafdata());
    if (min_links_satisfied.is_set || is_set(min_links_satisfied.yfilter)) leaf_name_data.push_back(min_links_satisfied.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.yfilter)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());
    if (minimum_required_links.is_set || is_set(minimum_required_links.yfilter)) leaf_name_data.push_back(minimum_required_links.get_name_leafdata());
    if (number_active_links.is_set || is_set(number_active_links.yfilter)) leaf_name_data.push_back(number_active_links.get_name_leafdata());
    if (required_min_links_satisfied.is_set || is_set(required_min_links_satisfied.yfilter)) leaf_name_data.push_back(required_min_links_satisfied.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_id_present.is_set || is_set(vrf_id_present.yfilter)) leaf_name_data.push_back(vrf_id_present.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conflict-context")
    {
        conflict_context = value;
        conflict_context.value_namespace = name_space;
        conflict_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto = value;
        ip_address_auto.value_namespace = name_space;
        ip_address_auto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-links-satisfied")
    {
        min_links_satisfied = value;
        min_links_satisfied.value_namespace = name_space;
        min_links_satisfied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
        minimum_preferred_links.value_namespace = name_space;
        minimum_preferred_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-required-links")
    {
        minimum_required_links = value;
        minimum_required_links.value_namespace = name_space;
        minimum_required_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-active-links")
    {
        number_active_links = value;
        number_active_links.value_namespace = name_space;
        number_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-min-links-satisfied")
    {
        required_min_links_satisfied = value;
        required_min_links_satisfied.value_namespace = name_space;
        required_min_links_satisfied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id-present")
    {
        vrf_id_present = value;
        vrf_id_present.value_namespace = name_space;
        vrf_id_present.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conflict-context")
    {
        conflict_context.yfilter = yfilter;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto.yfilter = yfilter;
    }
    if(value_path == "min-links-satisfied")
    {
        min_links_satisfied.yfilter = yfilter;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links.yfilter = yfilter;
    }
    if(value_path == "minimum-required-links")
    {
        minimum_required_links.yfilter = yfilter;
    }
    if(value_path == "number-active-links")
    {
        number_active_links.yfilter = yfilter;
    }
    if(value_path == "required-min-links-satisfied")
    {
        required_min_links_satisfied.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-id-present")
    {
        vrf_id_present.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-link" || name == "port-range" || name == "conflict-context" || name == "conflict-reason" || name == "interface-handle" || name == "ip-address" || name == "ip-address-auto" || name == "min-links-satisfied" || name == "minimum-preferred-links" || name == "minimum-required-links" || name == "number-active-links" || name == "required-min-links-satisfied" || name == "vrf-id" || name == "vrf-id-present")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(conflict_context.yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(high_port.yfilter)
	|| ydk::is_set(low_port.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(subslot.yfilter);
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

    if (conflict_context.is_set || is_set(conflict_context.yfilter)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (high_port.is_set || is_set(high_port.yfilter)) leaf_name_data.push_back(high_port.get_name_leafdata());
    if (low_port.is_set || is_set(low_port.yfilter)) leaf_name_data.push_back(low_port.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (subslot.is_set || is_set(subslot.yfilter)) leaf_name_data.push_back(subslot.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conflict-context")
    {
        conflict_context = value;
        conflict_context.value_namespace = name_space;
        conflict_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-port")
    {
        high_port = value;
        high_port.value_namespace = name_space;
        high_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-port")
    {
        low_port = value;
        low_port.value_namespace = name_space;
        low_port.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "subslot")
    {
        subslot = value;
        subslot.value_namespace = name_space;
        subslot.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conflict-context")
    {
        conflict_context.yfilter = yfilter;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "high-port")
    {
        high_port.yfilter = yfilter;
    }
    if(value_path == "low-port")
    {
        low_port.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "subslot")
    {
        subslot.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict-context" || name == "conflict-reason" || name == "high-port" || name == "low-port" || name == "port-type" || name == "slot" || name == "subslot")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(conflict_context.yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(state.yfilter);
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

    if (conflict_context.is_set || is_set(conflict_context.yfilter)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


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

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conflict-context")
    {
        conflict_context = value;
        conflict_context.value_namespace = name_space;
        conflict_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conflict-context")
    {
        conflict_context.yfilter = yfilter;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict-context" || name == "conflict-reason" || name == "interface-handle" || name == "state")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SatellitePriorities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SatellitePriorities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SatellitePriorities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-priority")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(best_path_hops.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(host_priority.yfilter)
	|| ydk::is_set(multichassis_redundancy.yfilter)
	|| ydk::is_set(partner_priority.yfilter)
	|| ydk::is_set(rgid.yfilter)
	|| ydk::is_set(satellite_id_xr.yfilter);
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

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (best_path_hops.is_set || is_set(best_path_hops.yfilter)) leaf_name_data.push_back(best_path_hops.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (host_priority.is_set || is_set(host_priority.yfilter)) leaf_name_data.push_back(host_priority.get_name_leafdata());
    if (multichassis_redundancy.is_set || is_set(multichassis_redundancy.yfilter)) leaf_name_data.push_back(multichassis_redundancy.get_name_leafdata());
    if (partner_priority.is_set || is_set(partner_priority.yfilter)) leaf_name_data.push_back(partner_priority.get_name_leafdata());
    if (rgid.is_set || is_set(rgid.yfilter)) leaf_name_data.push_back(rgid.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.yfilter)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());


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

void NvSatellite::SatellitePriorities::SatellitePriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-hops")
    {
        best_path_hops = value;
        best_path_hops.value_namespace = name_space;
        best_path_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-priority")
    {
        host_priority = value;
        host_priority.value_namespace = name_space;
        host_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multichassis-redundancy")
    {
        multichassis_redundancy = value;
        multichassis_redundancy.value_namespace = name_space;
        multichassis_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-priority")
    {
        partner_priority = value;
        partner_priority.value_namespace = name_space;
        partner_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rgid")
    {
        rgid = value;
        rgid.value_namespace = name_space;
        rgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
        satellite_id_xr.value_namespace = name_space;
        satellite_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatellitePriorities::SatellitePriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "best-path-hops")
    {
        best_path_hops.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "host-priority")
    {
        host_priority.yfilter = yfilter;
    }
    if(value_path == "multichassis-redundancy")
    {
        multichassis_redundancy.yfilter = yfilter;
    }
    if(value_path == "partner-priority")
    {
        partner_priority.yfilter = yfilter;
    }
    if(value_path == "rgid")
    {
        rgid.yfilter = yfilter;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr.yfilter = yfilter;
    }
}

bool NvSatellite::SatellitePriorities::SatellitePriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-id" || name == "best-path-hops" || name == "configured-priority" || name == "host-priority" || name == "multichassis-redundancy" || name == "partner-priority" || name == "rgid" || name == "satellite-id-xr")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SatelliteVersions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SatelliteVersions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SatelliteVersions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-version")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(remote_version.yfilter)
	|| ydk::is_set(remote_version_present.yfilter)
	|| ydk::is_set(satellite_id_xr.yfilter)
	|| ydk::is_set(version_check_state.yfilter)
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

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (remote_version_present.is_set || is_set(remote_version_present.yfilter)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.yfilter)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.yfilter)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

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

void NvSatellite::SatelliteVersions::SatelliteVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
        remote_version_present.value_namespace = name_space;
        remote_version_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
        satellite_id_xr.value_namespace = name_space;
        satellite_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
        version_check_state.value_namespace = name_space;
        version_check_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteVersions::SatelliteVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "remote-version")
    {
        remote_version.yfilter = yfilter;
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present.yfilter = yfilter;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr.yfilter = yfilter;
    }
    if(value_path == "version-check-state")
    {
        version_check_state.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-version" || name == "committed-version" || name == "transferred-version" || name == "satellite-id" || name == "remote-version" || name == "remote-version-present" || name == "satellite-id-xr" || name == "version-check-state")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(remote_version.yfilter)
	|| ydk::is_set(remote_version_present.yfilter)
	|| ydk::is_set(version_check_state.yfilter);
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

    if (remote_version_present.is_set || is_set(remote_version_present.yfilter)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.yfilter)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

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

void NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
        remote_version_present.value_namespace = name_space;
        remote_version_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
        version_check_state.value_namespace = name_space;
        version_check_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-version")
    {
        remote_version.yfilter = yfilter;
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present.yfilter = yfilter;
    }
    if(value_path == "version-check-state")
    {
        version_check_state.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::ActiveVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-version" || name == "remote-version-present" || name == "version-check-state")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(remote_version.yfilter)
	|| ydk::is_set(remote_version_present.yfilter)
	|| ydk::is_set(version_check_state.yfilter);
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

    if (remote_version_present.is_set || is_set(remote_version_present.yfilter)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.yfilter)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

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

void NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
        remote_version_present.value_namespace = name_space;
        remote_version_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
        version_check_state.value_namespace = name_space;
        version_check_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-version")
    {
        remote_version.yfilter = yfilter;
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present.yfilter = yfilter;
    }
    if(value_path == "version-check-state")
    {
        version_check_state.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::TransferredVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-version" || name == "remote-version-present" || name == "version-check-state")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(remote_version.yfilter)
	|| ydk::is_set(remote_version_present.yfilter)
	|| ydk::is_set(version_check_state.yfilter);
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

    if (remote_version_present.is_set || is_set(remote_version_present.yfilter)) leaf_name_data.push_back(remote_version_present.get_name_leafdata());
    if (version_check_state.is_set || is_set(version_check_state.yfilter)) leaf_name_data.push_back(version_check_state.get_name_leafdata());

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

void NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-version")
    {
        remote_version.append(value);
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present = value;
        remote_version_present.value_namespace = name_space;
        remote_version_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-check-state")
    {
        version_check_state = value;
        version_check_state.value_namespace = name_space;
        version_check_state.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-version")
    {
        remote_version.yfilter = yfilter;
    }
    if(value_path == "remote-version-present")
    {
        remote_version_present.yfilter = yfilter;
    }
    if(value_path == "version-check-state")
    {
        version_check_state.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteVersions::SatelliteVersion::CommittedVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-version" || name == "remote-version-present" || name == "version-check-state")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SatelliteTopologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SatelliteTopologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SatelliteTopologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-topology")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_physical.yfilter)
	|| ydk::is_set(redundancy_iccp_group.yfilter)
	|| ydk::is_set(ring_whole.yfilter);
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

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_physical.is_set || is_set(is_physical.yfilter)) leaf_name_data.push_back(is_physical.get_name_leafdata());
    if (redundancy_iccp_group.is_set || is_set(redundancy_iccp_group.yfilter)) leaf_name_data.push_back(redundancy_iccp_group.get_name_leafdata());
    if (ring_whole.is_set || is_set(ring_whole.yfilter)) leaf_name_data.push_back(ring_whole.get_name_leafdata());


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

void NvSatellite::SatelliteTopologies::SatelliteTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-physical")
    {
        is_physical = value;
        is_physical.value_namespace = name_space;
        is_physical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-iccp-group")
    {
        redundancy_iccp_group = value;
        redundancy_iccp_group.value_namespace = name_space;
        redundancy_iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-whole")
    {
        ring_whole = value;
        ring_whole.value_namespace = name_space;
        ring_whole.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-physical")
    {
        is_physical.yfilter = yfilter;
    }
    if(value_path == "redundancy-iccp-group")
    {
        redundancy_iccp_group.yfilter = yfilter;
    }
    if(value_path == "ring-whole")
    {
        ring_whole.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-link" || name == "satellite" || name == "interface-name" || name == "interface-handle" || name == "interface-name-xr" || name == "is-physical" || name == "redundancy-iccp-group" || name == "ring-whole")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(discovery_running.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
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

    if (discovery_running.is_set || is_set(discovery_running.yfilter)) leaf_name_data.push_back(discovery_running.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


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

void NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discovery-running")
    {
        discovery_running = value;
        discovery_running.value_namespace = name_space;
        discovery_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discovery-running")
    {
        discovery_running.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-running" || name == "interface-handle" || name == "interface-name")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(conflict_context.yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(display_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(num_hops.yfilter)
	|| ydk::is_set(received_serial_number.yfilter)
	|| ydk::is_set(received_serial_number_present.yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
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

    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (conflict_context.is_set || is_set(conflict_context.yfilter)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (display_name.is_set || is_set(display_name.yfilter)) leaf_name_data.push_back(display_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (num_hops.is_set || is_set(num_hops.yfilter)) leaf_name_data.push_back(num_hops.get_name_leafdata());
    if (received_serial_number.is_set || is_set(received_serial_number.yfilter)) leaf_name_data.push_back(received_serial_number.get_name_leafdata());
    if (received_serial_number_present.is_set || is_set(received_serial_number_present.yfilter)) leaf_name_data.push_back(received_serial_number_present.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


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

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-context")
    {
        conflict_context = value;
        conflict_context.value_namespace = name_space;
        conflict_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-name")
    {
        display_name = value;
        display_name.value_namespace = name_space;
        display_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-hops")
    {
        num_hops = value;
        num_hops.value_namespace = name_space;
        num_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-serial-number")
    {
        received_serial_number = value;
        received_serial_number.value_namespace = name_space;
        received_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-serial-number-present")
    {
        received_serial_number_present = value;
        received_serial_number_present.value_namespace = name_space;
        received_serial_number_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "conflict-context")
    {
        conflict_context.yfilter = yfilter;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "display-name")
    {
        display_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "num-hops")
    {
        num_hops.yfilter = yfilter;
    }
    if(value_path == "received-serial-number")
    {
        received_serial_number.yfilter = yfilter;
    }
    if(value_path == "received-serial-number-present")
    {
        received_serial_number_present.yfilter = yfilter;
    }
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric-link" || name == "configured" || name == "conflict-context" || name == "conflict-reason" || name == "display-name" || name == "mac-address" || name == "num-hops" || name == "received-serial-number" || name == "received-serial-number-present" || name == "satellite-id" || name == "type" || name == "vlan-id")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(display_name.yfilter)
	|| ydk::is_set(icl_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(obsolete.yfilter)
	|| ydk::is_set(redundant.yfilter);
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

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (display_name.is_set || is_set(display_name.yfilter)) leaf_name_data.push_back(display_name.get_name_leafdata());
    if (icl_id.is_set || is_set(icl_id.yfilter)) leaf_name_data.push_back(icl_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (obsolete.is_set || is_set(obsolete.yfilter)) leaf_name_data.push_back(obsolete.get_name_leafdata());
    if (redundant.is_set || is_set(redundant.yfilter)) leaf_name_data.push_back(redundant.get_name_leafdata());


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

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-name")
    {
        display_name = value;
        display_name.value_namespace = name_space;
        display_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icl-id")
    {
        icl_id = value;
        icl_id.value_namespace = name_space;
        icl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "obsolete")
    {
        obsolete = value;
        obsolete.value_namespace = name_space;
        obsolete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundant")
    {
        redundant = value;
        redundant.value_namespace = name_space;
        redundant.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "display-name")
    {
        display_name.yfilter = yfilter;
    }
    if(value_path == "icl-id")
    {
        icl_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "obsolete")
    {
        obsolete.yfilter = yfilter;
    }
    if(value_path == "redundant")
    {
        redundant.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-device" || name == "active" || name == "display-name" || name == "icl-id" || name == "interface-name" || name == "obsolete" || name == "redundant")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(icl_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(remote_is_local_host.yfilter)
	|| ydk::is_set(remote_is_satellite.yfilter)
	|| ydk::is_set(source.yfilter);
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

    if (icl_id.is_set || is_set(icl_id.yfilter)) leaf_name_data.push_back(icl_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (remote_is_local_host.is_set || is_set(remote_is_local_host.yfilter)) leaf_name_data.push_back(remote_is_local_host.get_name_leafdata());
    if (remote_is_satellite.is_set || is_set(remote_is_satellite.yfilter)) leaf_name_data.push_back(remote_is_satellite.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());


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

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icl-id")
    {
        icl_id = value;
        icl_id.value_namespace = name_space;
        icl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-is-local-host")
    {
        remote_is_local_host = value;
        remote_is_local_host.value_namespace = name_space;
        remote_is_local_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-is-satellite")
    {
        remote_is_satellite = value;
        remote_is_satellite.value_namespace = name_space;
        remote_is_satellite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icl-id")
    {
        icl_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "remote-is-local-host")
    {
        remote_is_local_host.yfilter = yfilter;
    }
    if(value_path == "remote-is-satellite")
    {
        remote_is_satellite.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icl-id" || name == "interface-handle" || name == "interface-name" || name == "mac-address" || name == "remote-is-local-host" || name == "remote-is-satellite" || name == "source")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::InstallProgresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::InstallProgresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::InstallProgresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-progress")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(progress_percentage.yfilter)
	|| ydk::is_set(progress_percentage_xr.yfilter)
	|| ydk::is_set(satellite_count.yfilter);
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

    if (progress_percentage.is_set || is_set(progress_percentage.yfilter)) leaf_name_data.push_back(progress_percentage.get_name_leafdata());
    if (progress_percentage_xr.is_set || is_set(progress_percentage_xr.yfilter)) leaf_name_data.push_back(progress_percentage_xr.get_name_leafdata());
    if (satellite_count.is_set || is_set(satellite_count.yfilter)) leaf_name_data.push_back(satellite_count.get_name_leafdata());


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

void NvSatellite::InstallProgresses::InstallProgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "progress-percentage")
    {
        progress_percentage = value;
        progress_percentage.value_namespace = name_space;
        progress_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "progress-percentage-xr")
    {
        progress_percentage_xr = value;
        progress_percentage_xr.value_namespace = name_space;
        progress_percentage_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-count")
    {
        satellite_count = value;
        satellite_count.value_namespace = name_space;
        satellite_count.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::InstallProgresses::InstallProgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "progress-percentage")
    {
        progress_percentage.yfilter = yfilter;
    }
    if(value_path == "progress-percentage-xr")
    {
        progress_percentage_xr.yfilter = yfilter;
    }
    if(value_path == "satellite-count")
    {
        satellite_count.yfilter = yfilter;
    }
}

bool NvSatellite::InstallProgresses::InstallProgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "progress-percentage" || name == "progress-percentage-xr" || name == "satellite-count")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::ReloadStatuses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::ReloadStatuses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::ReloadStatuses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload-status")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_reload_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_reloaded.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_reloading.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(satellite_range.yfilter)
	|| ydk::is_set(satellite_range_xr.yfilter)
	|| ydk::is_set(sats_not_initiated.yfilter)
	|| ydk::is_set(sats_reload_failed.yfilter)
	|| ydk::is_set(sats_reloaded.yfilter)
	|| ydk::is_set(sats_reloading.yfilter);
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

    if (satellite_range.is_set || is_set(satellite_range.yfilter)) leaf_name_data.push_back(satellite_range.get_name_leafdata());
    if (satellite_range_xr.is_set || is_set(satellite_range_xr.yfilter)) leaf_name_data.push_back(satellite_range_xr.get_name_leafdata());

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

void NvSatellite::ReloadStatuses::ReloadStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-range")
    {
        satellite_range = value;
        satellite_range.value_namespace = name_space;
        satellite_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-range-xr")
    {
        satellite_range_xr = value;
        satellite_range_xr.value_namespace = name_space;
        satellite_range_xr.value_namespace_prefix = name_space_prefix;
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

void NvSatellite::ReloadStatuses::ReloadStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-range")
    {
        satellite_range.yfilter = yfilter;
    }
    if(value_path == "satellite-range-xr")
    {
        satellite_range_xr.yfilter = yfilter;
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.yfilter = yfilter;
    }
    if(value_path == "sats-reload-failed")
    {
        sats_reload_failed.yfilter = yfilter;
    }
    if(value_path == "sats-reloaded")
    {
        sats_reloaded.yfilter = yfilter;
    }
    if(value_path == "sats-reloading")
    {
        sats_reloading.yfilter = yfilter;
    }
}

bool NvSatellite::ReloadStatuses::ReloadStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-range" || name == "satellite-range-xr" || name == "sats-not-initiated" || name == "sats-reload-failed" || name == "sats-reloaded" || name == "sats-reloading")
        return true;
    return false;
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
    return is_set(yfilter)
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

void NvSatellite::Install::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::Install::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::Install::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-software-versions")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::Install::SatelliteSoftwareVersions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::Install::SatelliteSoftwareVersions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite-software-version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(package_support.yfilter)
	|| ydk::is_set(satellite_id_xr.yfilter)
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

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (package_support.is_set || is_set(package_support.yfilter)) leaf_name_data.push_back(package_support.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.yfilter)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());


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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-support")
    {
        package_support = value;
        package_support.value_namespace = name_space;
        package_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
        satellite_id_xr.value_namespace = name_space;
        satellite_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "package-support")
    {
        package_support.yfilter = yfilter;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr.yfilter = yfilter;
    }
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-package-info" || name == "satellite-id" || name == "package-support" || name == "satellite-id-xr")
        return true;
    return false;
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
    return is_set(yfilter)
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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-packages" || name == "committed-packages" || name == "inactive-packages")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(is_base_image.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (is_base_image.is_set || is_set(is_base_image.yfilter)) leaf_name_data.push_back(is_base_image.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-base-image")
    {
        is_base_image = value;
        is_base_image.value_namespace = name_space;
        is_base_image.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-base-image")
    {
        is_base_image.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::ActivePackages::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-base-image" || name == "name" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(is_base_image.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (is_base_image.is_set || is_set(is_base_image.yfilter)) leaf_name_data.push_back(is_base_image.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-base-image")
    {
        is_base_image = value;
        is_base_image.value_namespace = name_space;
        is_base_image.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-base-image")
    {
        is_base_image.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::InactivePackages::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-base-image" || name == "name" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(is_base_image.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (is_base_image.is_set || is_set(is_base_image.yfilter)) leaf_name_data.push_back(is_base_image.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-base-image")
    {
        is_base_image = value;
        is_base_image.value_namespace = name_space;
        is_base_image.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-base-image")
    {
        is_base_image.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool NvSatellite::Install::SatelliteSoftwareVersions::SatelliteSoftwareVersion::InstallPackageInfo::CommittedPackages::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-base-image" || name == "name" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::InstallOpStatuses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::InstallOpStatuses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::InstallOpStatuses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-op-status")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_activate_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_activating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_completed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivate_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivate_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_deactivating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_no_operation.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_not_initiated.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_remove_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_remove_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_removing.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transfer_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transfer_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_transferring.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_update_aborted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_update_failed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : sats_updating.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(operation_id_xr.yfilter)
	|| ydk::is_set(satellite_range.yfilter)
	|| ydk::is_set(sats_activate_aborted.yfilter)
	|| ydk::is_set(sats_activate_failed.yfilter)
	|| ydk::is_set(sats_activating.yfilter)
	|| ydk::is_set(sats_completed.yfilter)
	|| ydk::is_set(sats_deactivate_aborted.yfilter)
	|| ydk::is_set(sats_deactivate_failed.yfilter)
	|| ydk::is_set(sats_deactivating.yfilter)
	|| ydk::is_set(sats_no_operation.yfilter)
	|| ydk::is_set(sats_not_initiated.yfilter)
	|| ydk::is_set(sats_remove_aborted.yfilter)
	|| ydk::is_set(sats_remove_failed.yfilter)
	|| ydk::is_set(sats_removing.yfilter)
	|| ydk::is_set(sats_transfer_aborted.yfilter)
	|| ydk::is_set(sats_transfer_failed.yfilter)
	|| ydk::is_set(sats_transferring.yfilter)
	|| ydk::is_set(sats_update_aborted.yfilter)
	|| ydk::is_set(sats_update_failed.yfilter)
	|| ydk::is_set(sats_updating.yfilter);
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

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (operation_id_xr.is_set || is_set(operation_id_xr.yfilter)) leaf_name_data.push_back(operation_id_xr.get_name_leafdata());
    if (satellite_range.is_set || is_set(satellite_range.yfilter)) leaf_name_data.push_back(satellite_range.get_name_leafdata());

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

void NvSatellite::InstallOpStatuses::InstallOpStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr = value;
        operation_id_xr.value_namespace = name_space;
        operation_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-range")
    {
        satellite_range = value;
        satellite_range.value_namespace = name_space;
        satellite_range.value_namespace_prefix = name_space_prefix;
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

void NvSatellite::InstallOpStatuses::InstallOpStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "operation-id-xr")
    {
        operation_id_xr.yfilter = yfilter;
    }
    if(value_path == "satellite-range")
    {
        satellite_range.yfilter = yfilter;
    }
    if(value_path == "sats-activate-aborted")
    {
        sats_activate_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-activate-failed")
    {
        sats_activate_failed.yfilter = yfilter;
    }
    if(value_path == "sats-activating")
    {
        sats_activating.yfilter = yfilter;
    }
    if(value_path == "sats-completed")
    {
        sats_completed.yfilter = yfilter;
    }
    if(value_path == "sats-deactivate-aborted")
    {
        sats_deactivate_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-deactivate-failed")
    {
        sats_deactivate_failed.yfilter = yfilter;
    }
    if(value_path == "sats-deactivating")
    {
        sats_deactivating.yfilter = yfilter;
    }
    if(value_path == "sats-no-operation")
    {
        sats_no_operation.yfilter = yfilter;
    }
    if(value_path == "sats-not-initiated")
    {
        sats_not_initiated.yfilter = yfilter;
    }
    if(value_path == "sats-remove-aborted")
    {
        sats_remove_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-remove-failed")
    {
        sats_remove_failed.yfilter = yfilter;
    }
    if(value_path == "sats-removing")
    {
        sats_removing.yfilter = yfilter;
    }
    if(value_path == "sats-transfer-aborted")
    {
        sats_transfer_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-transfer-failed")
    {
        sats_transfer_failed.yfilter = yfilter;
    }
    if(value_path == "sats-transferring")
    {
        sats_transferring.yfilter = yfilter;
    }
    if(value_path == "sats-update-aborted")
    {
        sats_update_aborted.yfilter = yfilter;
    }
    if(value_path == "sats-update-failed")
    {
        sats_update_failed.yfilter = yfilter;
    }
    if(value_path == "sats-updating")
    {
        sats_updating.yfilter = yfilter;
    }
}

bool NvSatellite::InstallOpStatuses::InstallOpStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-id" || name == "operation-id-xr" || name == "satellite-range" || name == "sats-activate-aborted" || name == "sats-activate-failed" || name == "sats-activating" || name == "sats-completed" || name == "sats-deactivate-aborted" || name == "sats-deactivate-failed" || name == "sats-deactivating" || name == "sats-no-operation" || name == "sats-not-initiated" || name == "sats-remove-aborted" || name == "sats-remove-failed" || name == "sats-removing" || name == "sats-transfer-aborted" || name == "sats-transfer-failed" || name == "sats-transferring" || name == "sats-update-aborted" || name == "sats-update-failed" || name == "sats-updating")
        return true;
    return false;
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
    return is_set(yfilter)
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

void NvSatellite::SatelliteProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SatelliteProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SatelliteProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-ranges")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SatelliteProperties::IdRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SatelliteProperties::IdRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SatelliteProperties::IdRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-range")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(sat_id_range.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
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

    if (sat_id_range.is_set || is_set(sat_id_range.yfilter)) leaf_name_data.push_back(sat_id_range.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());


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

void NvSatellite::SatelliteProperties::IdRanges::IdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sat-id-range")
    {
        sat_id_range = value;
        sat_id_range.value_namespace = name_space;
        sat_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SatelliteProperties::IdRanges::IdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sat-id-range")
    {
        sat_id_range.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool NvSatellite::SatelliteProperties::IdRanges::IdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sat-id-range" || name == "max" || name == "min")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SdacpDiscovery2S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SdacpDiscovery2S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SdacpDiscovery2S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdacp-discovery2")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter);
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

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


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

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "satellite" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_status.yfilter);
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

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.yfilter)) leaf_name_data.push_back(interface_status.get_name_leafdata());


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

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
        interface_status.value_namespace = name_space;
        interface_status.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-status")
    {
        interface_status.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-status")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(host_ip_address.yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(satellite_ip_address.yfilter)
	|| ydk::is_set(satellite_status.yfilter);
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

    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (host_ip_address.is_set || is_set(host_ip_address.yfilter)) leaf_name_data.push_back(host_ip_address.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (satellite_ip_address.is_set || is_set(satellite_ip_address.yfilter)) leaf_name_data.push_back(satellite_ip_address.get_name_leafdata());
    if (satellite_status.is_set || is_set(satellite_status.yfilter)) leaf_name_data.push_back(satellite_status.get_name_leafdata());


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

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-ip-address")
    {
        host_ip_address = value;
        host_ip_address.value_namespace = name_space;
        host_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address = value;
        satellite_ip_address.value_namespace = name_space;
        satellite_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-status")
    {
        satellite_status = value;
        satellite_status.value_namespace = name_space;
        satellite_status.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "host-ip-address")
    {
        host_ip_address.yfilter = yfilter;
    }
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address.yfilter = yfilter;
    }
    if(value_path == "satellite-status")
    {
        satellite_status.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "conflict-reason" || name == "host-ip-address" || name == "satellite-id" || name == "satellite-ip-address" || name == "satellite-status")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(satellite_chassis_mac.yfilter)
	|| ydk::is_set(satellite_chassis_vendor.yfilter)
	|| ydk::is_set(satellite_interface_id.yfilter)
	|| ydk::is_set(satellite_interface_mac.yfilter)
	|| ydk::is_set(satellite_module_vendor.yfilter)
	|| ydk::is_set(satellite_serial_id.yfilter)
	|| ydk::is_set(satellite_status.yfilter);
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

    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (satellite_chassis_mac.is_set || is_set(satellite_chassis_mac.yfilter)) leaf_name_data.push_back(satellite_chassis_mac.get_name_leafdata());
    if (satellite_chassis_vendor.is_set || is_set(satellite_chassis_vendor.yfilter)) leaf_name_data.push_back(satellite_chassis_vendor.get_name_leafdata());
    if (satellite_interface_id.is_set || is_set(satellite_interface_id.yfilter)) leaf_name_data.push_back(satellite_interface_id.get_name_leafdata());
    if (satellite_interface_mac.is_set || is_set(satellite_interface_mac.yfilter)) leaf_name_data.push_back(satellite_interface_mac.get_name_leafdata());
    if (satellite_module_vendor.is_set || is_set(satellite_module_vendor.yfilter)) leaf_name_data.push_back(satellite_module_vendor.get_name_leafdata());
    if (satellite_serial_id.is_set || is_set(satellite_serial_id.yfilter)) leaf_name_data.push_back(satellite_serial_id.get_name_leafdata());
    if (satellite_status.is_set || is_set(satellite_status.yfilter)) leaf_name_data.push_back(satellite_status.get_name_leafdata());


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

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-chassis-mac")
    {
        satellite_chassis_mac = value;
        satellite_chassis_mac.value_namespace = name_space;
        satellite_chassis_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-chassis-vendor")
    {
        satellite_chassis_vendor = value;
        satellite_chassis_vendor.value_namespace = name_space;
        satellite_chassis_vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-interface-id")
    {
        satellite_interface_id = value;
        satellite_interface_id.value_namespace = name_space;
        satellite_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-interface-mac")
    {
        satellite_interface_mac = value;
        satellite_interface_mac.value_namespace = name_space;
        satellite_interface_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-module-vendor")
    {
        satellite_module_vendor = value;
        satellite_module_vendor.value_namespace = name_space;
        satellite_module_vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-serial-id")
    {
        satellite_serial_id = value;
        satellite_serial_id.value_namespace = name_space;
        satellite_serial_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-status")
    {
        satellite_status = value;
        satellite_status.value_namespace = name_space;
        satellite_status.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "satellite-chassis-mac")
    {
        satellite_chassis_mac.yfilter = yfilter;
    }
    if(value_path == "satellite-chassis-vendor")
    {
        satellite_chassis_vendor.yfilter = yfilter;
    }
    if(value_path == "satellite-interface-id")
    {
        satellite_interface_id.yfilter = yfilter;
    }
    if(value_path == "satellite-interface-mac")
    {
        satellite_interface_mac.yfilter = yfilter;
    }
    if(value_path == "satellite-module-vendor")
    {
        satellite_module_vendor.yfilter = yfilter;
    }
    if(value_path == "satellite-serial-id")
    {
        satellite_serial_id.yfilter = yfilter;
    }
    if(value_path == "satellite-status")
    {
        satellite_status.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpDiscovery2S::SdacpDiscovery2::Satellite::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict-reason" || name == "interface-handle" || name == "satellite-chassis-mac" || name == "satellite-chassis-vendor" || name == "satellite-interface-id" || name == "satellite-interface-mac" || name == "satellite-module-vendor" || name == "satellite-serial-id" || name == "satellite-status")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::IcpeDpms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::IcpeDpms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::IcpeDpms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icpe-dpm")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(discovery_interface.yfilter)
	|| ydk::is_set(ack_packets_sent.yfilter)
	|| ydk::is_set(configuration_packets_sent.yfilter)
	|| ydk::is_set(discovery_interface_handle.yfilter)
	|| ydk::is_set(discovery_interface_status.yfilter)
	|| ydk::is_set(discovery_interface_xr.yfilter)
	|| ydk::is_set(host_ack_packets_received.yfilter)
	|| ydk::is_set(host_ack_packets_sent.yfilter)
	|| ydk::is_set(ident_packets_received.yfilter)
	|| ydk::is_set(invalid_packets_received.yfilter)
	|| ydk::is_set(los_packets_received.yfilter)
	|| ydk::is_set(probe_packets_sent.yfilter)
	|| ydk::is_set(ready_packets_received.yfilter)
	|| ydk::is_set(reject_packets_sent.yfilter)
	|| ydk::is_set(secs_since_pkts_cleaned.yfilter);
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

    if (discovery_interface.is_set || is_set(discovery_interface.yfilter)) leaf_name_data.push_back(discovery_interface.get_name_leafdata());
    if (ack_packets_sent.is_set || is_set(ack_packets_sent.yfilter)) leaf_name_data.push_back(ack_packets_sent.get_name_leafdata());
    if (configuration_packets_sent.is_set || is_set(configuration_packets_sent.yfilter)) leaf_name_data.push_back(configuration_packets_sent.get_name_leafdata());
    if (discovery_interface_handle.is_set || is_set(discovery_interface_handle.yfilter)) leaf_name_data.push_back(discovery_interface_handle.get_name_leafdata());
    if (discovery_interface_status.is_set || is_set(discovery_interface_status.yfilter)) leaf_name_data.push_back(discovery_interface_status.get_name_leafdata());
    if (discovery_interface_xr.is_set || is_set(discovery_interface_xr.yfilter)) leaf_name_data.push_back(discovery_interface_xr.get_name_leafdata());
    if (host_ack_packets_received.is_set || is_set(host_ack_packets_received.yfilter)) leaf_name_data.push_back(host_ack_packets_received.get_name_leafdata());
    if (host_ack_packets_sent.is_set || is_set(host_ack_packets_sent.yfilter)) leaf_name_data.push_back(host_ack_packets_sent.get_name_leafdata());
    if (ident_packets_received.is_set || is_set(ident_packets_received.yfilter)) leaf_name_data.push_back(ident_packets_received.get_name_leafdata());
    if (invalid_packets_received.is_set || is_set(invalid_packets_received.yfilter)) leaf_name_data.push_back(invalid_packets_received.get_name_leafdata());
    if (los_packets_received.is_set || is_set(los_packets_received.yfilter)) leaf_name_data.push_back(los_packets_received.get_name_leafdata());
    if (probe_packets_sent.is_set || is_set(probe_packets_sent.yfilter)) leaf_name_data.push_back(probe_packets_sent.get_name_leafdata());
    if (ready_packets_received.is_set || is_set(ready_packets_received.yfilter)) leaf_name_data.push_back(ready_packets_received.get_name_leafdata());
    if (reject_packets_sent.is_set || is_set(reject_packets_sent.yfilter)) leaf_name_data.push_back(reject_packets_sent.get_name_leafdata());
    if (secs_since_pkts_cleaned.is_set || is_set(secs_since_pkts_cleaned.yfilter)) leaf_name_data.push_back(secs_since_pkts_cleaned.get_name_leafdata());


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

void NvSatellite::IcpeDpms::IcpeDpm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discovery-interface")
    {
        discovery_interface = value;
        discovery_interface.value_namespace = name_space;
        discovery_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-packets-sent")
    {
        ack_packets_sent = value;
        ack_packets_sent.value_namespace = name_space;
        ack_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-packets-sent")
    {
        configuration_packets_sent = value;
        configuration_packets_sent.value_namespace = name_space;
        configuration_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-interface-handle")
    {
        discovery_interface_handle = value;
        discovery_interface_handle.value_namespace = name_space;
        discovery_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-interface-status")
    {
        discovery_interface_status = value;
        discovery_interface_status.value_namespace = name_space;
        discovery_interface_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-interface-xr")
    {
        discovery_interface_xr = value;
        discovery_interface_xr.value_namespace = name_space;
        discovery_interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-ack-packets-received")
    {
        host_ack_packets_received = value;
        host_ack_packets_received.value_namespace = name_space;
        host_ack_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-ack-packets-sent")
    {
        host_ack_packets_sent = value;
        host_ack_packets_sent.value_namespace = name_space;
        host_ack_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ident-packets-received")
    {
        ident_packets_received = value;
        ident_packets_received.value_namespace = name_space;
        ident_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packets-received")
    {
        invalid_packets_received = value;
        invalid_packets_received.value_namespace = name_space;
        invalid_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "los-packets-received")
    {
        los_packets_received = value;
        los_packets_received.value_namespace = name_space;
        los_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-packets-sent")
    {
        probe_packets_sent = value;
        probe_packets_sent.value_namespace = name_space;
        probe_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-packets-received")
    {
        ready_packets_received = value;
        ready_packets_received.value_namespace = name_space;
        ready_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reject-packets-sent")
    {
        reject_packets_sent = value;
        reject_packets_sent.value_namespace = name_space;
        reject_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned = value;
        secs_since_pkts_cleaned.value_namespace = name_space;
        secs_since_pkts_cleaned.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::IcpeDpms::IcpeDpm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discovery-interface")
    {
        discovery_interface.yfilter = yfilter;
    }
    if(value_path == "ack-packets-sent")
    {
        ack_packets_sent.yfilter = yfilter;
    }
    if(value_path == "configuration-packets-sent")
    {
        configuration_packets_sent.yfilter = yfilter;
    }
    if(value_path == "discovery-interface-handle")
    {
        discovery_interface_handle.yfilter = yfilter;
    }
    if(value_path == "discovery-interface-status")
    {
        discovery_interface_status.yfilter = yfilter;
    }
    if(value_path == "discovery-interface-xr")
    {
        discovery_interface_xr.yfilter = yfilter;
    }
    if(value_path == "host-ack-packets-received")
    {
        host_ack_packets_received.yfilter = yfilter;
    }
    if(value_path == "host-ack-packets-sent")
    {
        host_ack_packets_sent.yfilter = yfilter;
    }
    if(value_path == "ident-packets-received")
    {
        ident_packets_received.yfilter = yfilter;
    }
    if(value_path == "invalid-packets-received")
    {
        invalid_packets_received.yfilter = yfilter;
    }
    if(value_path == "los-packets-received")
    {
        los_packets_received.yfilter = yfilter;
    }
    if(value_path == "probe-packets-sent")
    {
        probe_packets_sent.yfilter = yfilter;
    }
    if(value_path == "ready-packets-received")
    {
        ready_packets_received.yfilter = yfilter;
    }
    if(value_path == "reject-packets-sent")
    {
        reject_packets_sent.yfilter = yfilter;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned.yfilter = yfilter;
    }
}

bool NvSatellite::IcpeDpms::IcpeDpm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-host" || name == "satellite" || name == "discovery-interface" || name == "ack-packets-sent" || name == "configuration-packets-sent" || name == "discovery-interface-handle" || name == "discovery-interface-status" || name == "discovery-interface-xr" || name == "host-ack-packets-received" || name == "host-ack-packets-sent" || name == "ident-packets-received" || name == "invalid-packets-received" || name == "los-packets-received" || name == "probe-packets-sent" || name == "ready-packets-received" || name == "reject-packets-sent" || name == "secs-since-pkts-cleaned")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ack_packets_sent.yfilter)
	|| ydk::is_set(configuration_packets_sent.yfilter)
	|| ydk::is_set(conflict_reason.yfilter)
	|| ydk::is_set(current_timeout.yfilter)
	|| ydk::is_set(deleting.yfilter)
	|| ydk::is_set(discovery_protocol_state.yfilter)
	|| ydk::is_set(host_chassis_mac.yfilter)
	|| ydk::is_set(host_chassis_type.yfilter)
	|| ydk::is_set(host_chassis_vendor.yfilter)
	|| ydk::is_set(host_ip_address.yfilter)
	|| ydk::is_set(ident_packets_received.yfilter)
	|| ydk::is_set(ifmgr_state.yfilter)
	|| ydk::is_set(invalid_packets_received.yfilter)
	|| ydk::is_set(is_queued_for_efd.yfilter)
	|| ydk::is_set(is_queued_for_oc.yfilter)
	|| ydk::is_set(last_imdr_state.yfilter)
	|| ydk::is_set(legacy.yfilter)
	|| ydk::is_set(los_packets_received.yfilter)
	|| ydk::is_set(ready_packets_received.yfilter)
	|| ydk::is_set(received_sys_mac.yfilter)
	|| ydk::is_set(reject_packets_sent.yfilter)
	|| ydk::is_set(satellite_chassis_mac.yfilter)
	|| ydk::is_set(satellite_chassis_type.yfilter)
	|| ydk::is_set(satellite_chassis_vendor.yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(satellite_interface_id.yfilter)
	|| ydk::is_set(satellite_interface_mac.yfilter)
	|| ydk::is_set(satellite_ip_address.yfilter)
	|| ydk::is_set(satellite_module_mac.yfilter)
	|| ydk::is_set(satellite_module_type.yfilter)
	|| ydk::is_set(satellite_module_vendor.yfilter)
	|| ydk::is_set(satellite_serial_id.yfilter)
	|| ydk::is_set(secs_since_pkts_cleaned.yfilter);
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

    if (ack_packets_sent.is_set || is_set(ack_packets_sent.yfilter)) leaf_name_data.push_back(ack_packets_sent.get_name_leafdata());
    if (configuration_packets_sent.is_set || is_set(configuration_packets_sent.yfilter)) leaf_name_data.push_back(configuration_packets_sent.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.yfilter)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (current_timeout.is_set || is_set(current_timeout.yfilter)) leaf_name_data.push_back(current_timeout.get_name_leafdata());
    if (deleting.is_set || is_set(deleting.yfilter)) leaf_name_data.push_back(deleting.get_name_leafdata());
    if (discovery_protocol_state.is_set || is_set(discovery_protocol_state.yfilter)) leaf_name_data.push_back(discovery_protocol_state.get_name_leafdata());
    if (host_chassis_mac.is_set || is_set(host_chassis_mac.yfilter)) leaf_name_data.push_back(host_chassis_mac.get_name_leafdata());
    if (host_chassis_type.is_set || is_set(host_chassis_type.yfilter)) leaf_name_data.push_back(host_chassis_type.get_name_leafdata());
    if (host_chassis_vendor.is_set || is_set(host_chassis_vendor.yfilter)) leaf_name_data.push_back(host_chassis_vendor.get_name_leafdata());
    if (host_ip_address.is_set || is_set(host_ip_address.yfilter)) leaf_name_data.push_back(host_ip_address.get_name_leafdata());
    if (ident_packets_received.is_set || is_set(ident_packets_received.yfilter)) leaf_name_data.push_back(ident_packets_received.get_name_leafdata());
    if (ifmgr_state.is_set || is_set(ifmgr_state.yfilter)) leaf_name_data.push_back(ifmgr_state.get_name_leafdata());
    if (invalid_packets_received.is_set || is_set(invalid_packets_received.yfilter)) leaf_name_data.push_back(invalid_packets_received.get_name_leafdata());
    if (is_queued_for_efd.is_set || is_set(is_queued_for_efd.yfilter)) leaf_name_data.push_back(is_queued_for_efd.get_name_leafdata());
    if (is_queued_for_oc.is_set || is_set(is_queued_for_oc.yfilter)) leaf_name_data.push_back(is_queued_for_oc.get_name_leafdata());
    if (last_imdr_state.is_set || is_set(last_imdr_state.yfilter)) leaf_name_data.push_back(last_imdr_state.get_name_leafdata());
    if (legacy.is_set || is_set(legacy.yfilter)) leaf_name_data.push_back(legacy.get_name_leafdata());
    if (los_packets_received.is_set || is_set(los_packets_received.yfilter)) leaf_name_data.push_back(los_packets_received.get_name_leafdata());
    if (ready_packets_received.is_set || is_set(ready_packets_received.yfilter)) leaf_name_data.push_back(ready_packets_received.get_name_leafdata());
    if (received_sys_mac.is_set || is_set(received_sys_mac.yfilter)) leaf_name_data.push_back(received_sys_mac.get_name_leafdata());
    if (reject_packets_sent.is_set || is_set(reject_packets_sent.yfilter)) leaf_name_data.push_back(reject_packets_sent.get_name_leafdata());
    if (satellite_chassis_mac.is_set || is_set(satellite_chassis_mac.yfilter)) leaf_name_data.push_back(satellite_chassis_mac.get_name_leafdata());
    if (satellite_chassis_type.is_set || is_set(satellite_chassis_type.yfilter)) leaf_name_data.push_back(satellite_chassis_type.get_name_leafdata());
    if (satellite_chassis_vendor.is_set || is_set(satellite_chassis_vendor.yfilter)) leaf_name_data.push_back(satellite_chassis_vendor.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (satellite_interface_id.is_set || is_set(satellite_interface_id.yfilter)) leaf_name_data.push_back(satellite_interface_id.get_name_leafdata());
    if (satellite_interface_mac.is_set || is_set(satellite_interface_mac.yfilter)) leaf_name_data.push_back(satellite_interface_mac.get_name_leafdata());
    if (satellite_ip_address.is_set || is_set(satellite_ip_address.yfilter)) leaf_name_data.push_back(satellite_ip_address.get_name_leafdata());
    if (satellite_module_mac.is_set || is_set(satellite_module_mac.yfilter)) leaf_name_data.push_back(satellite_module_mac.get_name_leafdata());
    if (satellite_module_type.is_set || is_set(satellite_module_type.yfilter)) leaf_name_data.push_back(satellite_module_type.get_name_leafdata());
    if (satellite_module_vendor.is_set || is_set(satellite_module_vendor.yfilter)) leaf_name_data.push_back(satellite_module_vendor.get_name_leafdata());
    if (satellite_serial_id.is_set || is_set(satellite_serial_id.yfilter)) leaf_name_data.push_back(satellite_serial_id.get_name_leafdata());
    if (secs_since_pkts_cleaned.is_set || is_set(secs_since_pkts_cleaned.yfilter)) leaf_name_data.push_back(secs_since_pkts_cleaned.get_name_leafdata());


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

void NvSatellite::IcpeDpms::IcpeDpm::Satellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-packets-sent")
    {
        ack_packets_sent = value;
        ack_packets_sent.value_namespace = name_space;
        ack_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-packets-sent")
    {
        configuration_packets_sent = value;
        configuration_packets_sent.value_namespace = name_space;
        configuration_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason = value;
        conflict_reason.value_namespace = name_space;
        conflict_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-timeout")
    {
        current_timeout = value;
        current_timeout.value_namespace = name_space;
        current_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleting")
    {
        deleting = value;
        deleting.value_namespace = name_space;
        deleting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-protocol-state")
    {
        discovery_protocol_state = value;
        discovery_protocol_state.value_namespace = name_space;
        discovery_protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-chassis-mac")
    {
        host_chassis_mac = value;
        host_chassis_mac.value_namespace = name_space;
        host_chassis_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-chassis-type")
    {
        host_chassis_type = value;
        host_chassis_type.value_namespace = name_space;
        host_chassis_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-chassis-vendor")
    {
        host_chassis_vendor = value;
        host_chassis_vendor.value_namespace = name_space;
        host_chassis_vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-ip-address")
    {
        host_ip_address = value;
        host_ip_address.value_namespace = name_space;
        host_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ident-packets-received")
    {
        ident_packets_received = value;
        ident_packets_received.value_namespace = name_space;
        ident_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifmgr-state")
    {
        ifmgr_state = value;
        ifmgr_state.value_namespace = name_space;
        ifmgr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packets-received")
    {
        invalid_packets_received = value;
        invalid_packets_received.value_namespace = name_space;
        invalid_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-queued-for-efd")
    {
        is_queued_for_efd = value;
        is_queued_for_efd.value_namespace = name_space;
        is_queued_for_efd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-queued-for-oc")
    {
        is_queued_for_oc = value;
        is_queued_for_oc.value_namespace = name_space;
        is_queued_for_oc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-imdr-state")
    {
        last_imdr_state = value;
        last_imdr_state.value_namespace = name_space;
        last_imdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "legacy")
    {
        legacy = value;
        legacy.value_namespace = name_space;
        legacy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "los-packets-received")
    {
        los_packets_received = value;
        los_packets_received.value_namespace = name_space;
        los_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-packets-received")
    {
        ready_packets_received = value;
        ready_packets_received.value_namespace = name_space;
        ready_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-sys-mac")
    {
        received_sys_mac = value;
        received_sys_mac.value_namespace = name_space;
        received_sys_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reject-packets-sent")
    {
        reject_packets_sent = value;
        reject_packets_sent.value_namespace = name_space;
        reject_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-chassis-mac")
    {
        satellite_chassis_mac = value;
        satellite_chassis_mac.value_namespace = name_space;
        satellite_chassis_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-chassis-type")
    {
        satellite_chassis_type = value;
        satellite_chassis_type.value_namespace = name_space;
        satellite_chassis_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-chassis-vendor")
    {
        satellite_chassis_vendor = value;
        satellite_chassis_vendor.value_namespace = name_space;
        satellite_chassis_vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-interface-id")
    {
        satellite_interface_id = value;
        satellite_interface_id.value_namespace = name_space;
        satellite_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-interface-mac")
    {
        satellite_interface_mac = value;
        satellite_interface_mac.value_namespace = name_space;
        satellite_interface_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address = value;
        satellite_ip_address.value_namespace = name_space;
        satellite_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-module-mac")
    {
        satellite_module_mac = value;
        satellite_module_mac.value_namespace = name_space;
        satellite_module_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-module-type")
    {
        satellite_module_type = value;
        satellite_module_type.value_namespace = name_space;
        satellite_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-module-vendor")
    {
        satellite_module_vendor = value;
        satellite_module_vendor.value_namespace = name_space;
        satellite_module_vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-serial-id")
    {
        satellite_serial_id = value;
        satellite_serial_id.value_namespace = name_space;
        satellite_serial_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned = value;
        secs_since_pkts_cleaned.value_namespace = name_space;
        secs_since_pkts_cleaned.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::IcpeDpms::IcpeDpm::Satellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-packets-sent")
    {
        ack_packets_sent.yfilter = yfilter;
    }
    if(value_path == "configuration-packets-sent")
    {
        configuration_packets_sent.yfilter = yfilter;
    }
    if(value_path == "conflict-reason")
    {
        conflict_reason.yfilter = yfilter;
    }
    if(value_path == "current-timeout")
    {
        current_timeout.yfilter = yfilter;
    }
    if(value_path == "deleting")
    {
        deleting.yfilter = yfilter;
    }
    if(value_path == "discovery-protocol-state")
    {
        discovery_protocol_state.yfilter = yfilter;
    }
    if(value_path == "host-chassis-mac")
    {
        host_chassis_mac.yfilter = yfilter;
    }
    if(value_path == "host-chassis-type")
    {
        host_chassis_type.yfilter = yfilter;
    }
    if(value_path == "host-chassis-vendor")
    {
        host_chassis_vendor.yfilter = yfilter;
    }
    if(value_path == "host-ip-address")
    {
        host_ip_address.yfilter = yfilter;
    }
    if(value_path == "ident-packets-received")
    {
        ident_packets_received.yfilter = yfilter;
    }
    if(value_path == "ifmgr-state")
    {
        ifmgr_state.yfilter = yfilter;
    }
    if(value_path == "invalid-packets-received")
    {
        invalid_packets_received.yfilter = yfilter;
    }
    if(value_path == "is-queued-for-efd")
    {
        is_queued_for_efd.yfilter = yfilter;
    }
    if(value_path == "is-queued-for-oc")
    {
        is_queued_for_oc.yfilter = yfilter;
    }
    if(value_path == "last-imdr-state")
    {
        last_imdr_state.yfilter = yfilter;
    }
    if(value_path == "legacy")
    {
        legacy.yfilter = yfilter;
    }
    if(value_path == "los-packets-received")
    {
        los_packets_received.yfilter = yfilter;
    }
    if(value_path == "ready-packets-received")
    {
        ready_packets_received.yfilter = yfilter;
    }
    if(value_path == "received-sys-mac")
    {
        received_sys_mac.yfilter = yfilter;
    }
    if(value_path == "reject-packets-sent")
    {
        reject_packets_sent.yfilter = yfilter;
    }
    if(value_path == "satellite-chassis-mac")
    {
        satellite_chassis_mac.yfilter = yfilter;
    }
    if(value_path == "satellite-chassis-type")
    {
        satellite_chassis_type.yfilter = yfilter;
    }
    if(value_path == "satellite-chassis-vendor")
    {
        satellite_chassis_vendor.yfilter = yfilter;
    }
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "satellite-interface-id")
    {
        satellite_interface_id.yfilter = yfilter;
    }
    if(value_path == "satellite-interface-mac")
    {
        satellite_interface_mac.yfilter = yfilter;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address.yfilter = yfilter;
    }
    if(value_path == "satellite-module-mac")
    {
        satellite_module_mac.yfilter = yfilter;
    }
    if(value_path == "satellite-module-type")
    {
        satellite_module_type.yfilter = yfilter;
    }
    if(value_path == "satellite-module-vendor")
    {
        satellite_module_vendor.yfilter = yfilter;
    }
    if(value_path == "satellite-serial-id")
    {
        satellite_serial_id.yfilter = yfilter;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned.yfilter = yfilter;
    }
}

bool NvSatellite::IcpeDpms::IcpeDpm::Satellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-packets-sent" || name == "configuration-packets-sent" || name == "conflict-reason" || name == "current-timeout" || name == "deleting" || name == "discovery-protocol-state" || name == "host-chassis-mac" || name == "host-chassis-type" || name == "host-chassis-vendor" || name == "host-ip-address" || name == "ident-packets-received" || name == "ifmgr-state" || name == "invalid-packets-received" || name == "is-queued-for-efd" || name == "is-queued-for-oc" || name == "last-imdr-state" || name == "legacy" || name == "los-packets-received" || name == "ready-packets-received" || name == "received-sys-mac" || name == "reject-packets-sent" || name == "satellite-chassis-mac" || name == "satellite-chassis-type" || name == "satellite-chassis-vendor" || name == "satellite-id" || name == "satellite-interface-id" || name == "satellite-interface-mac" || name == "satellite-ip-address" || name == "satellite-module-mac" || name == "satellite-module-type" || name == "satellite-module-vendor" || name == "satellite-serial-id" || name == "secs-since-pkts-cleaned")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(current_timeout.yfilter)
	|| ydk::is_set(discovery_protocol_state.yfilter)
	|| ydk::is_set(host_ack_packets_received.yfilter)
	|| ydk::is_set(host_ack_packets_sent.yfilter)
	|| ydk::is_set(host_chassis_mac.yfilter)
	|| ydk::is_set(host_interface_mac.yfilter)
	|| ydk::is_set(route_length.yfilter)
	|| ydk::is_set(secs_since_pkts_cleaned.yfilter);
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

    if (current_timeout.is_set || is_set(current_timeout.yfilter)) leaf_name_data.push_back(current_timeout.get_name_leafdata());
    if (discovery_protocol_state.is_set || is_set(discovery_protocol_state.yfilter)) leaf_name_data.push_back(discovery_protocol_state.get_name_leafdata());
    if (host_ack_packets_received.is_set || is_set(host_ack_packets_received.yfilter)) leaf_name_data.push_back(host_ack_packets_received.get_name_leafdata());
    if (host_ack_packets_sent.is_set || is_set(host_ack_packets_sent.yfilter)) leaf_name_data.push_back(host_ack_packets_sent.get_name_leafdata());
    if (host_chassis_mac.is_set || is_set(host_chassis_mac.yfilter)) leaf_name_data.push_back(host_chassis_mac.get_name_leafdata());
    if (host_interface_mac.is_set || is_set(host_interface_mac.yfilter)) leaf_name_data.push_back(host_interface_mac.get_name_leafdata());
    if (route_length.is_set || is_set(route_length.yfilter)) leaf_name_data.push_back(route_length.get_name_leafdata());
    if (secs_since_pkts_cleaned.is_set || is_set(secs_since_pkts_cleaned.yfilter)) leaf_name_data.push_back(secs_since_pkts_cleaned.get_name_leafdata());


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

void NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-timeout")
    {
        current_timeout = value;
        current_timeout.value_namespace = name_space;
        current_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-protocol-state")
    {
        discovery_protocol_state = value;
        discovery_protocol_state.value_namespace = name_space;
        discovery_protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-ack-packets-received")
    {
        host_ack_packets_received = value;
        host_ack_packets_received.value_namespace = name_space;
        host_ack_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-ack-packets-sent")
    {
        host_ack_packets_sent = value;
        host_ack_packets_sent.value_namespace = name_space;
        host_ack_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-chassis-mac")
    {
        host_chassis_mac = value;
        host_chassis_mac.value_namespace = name_space;
        host_chassis_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-interface-mac")
    {
        host_interface_mac = value;
        host_interface_mac.value_namespace = name_space;
        host_interface_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-length")
    {
        route_length = value;
        route_length.value_namespace = name_space;
        route_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned = value;
        secs_since_pkts_cleaned.value_namespace = name_space;
        secs_since_pkts_cleaned.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-timeout")
    {
        current_timeout.yfilter = yfilter;
    }
    if(value_path == "discovery-protocol-state")
    {
        discovery_protocol_state.yfilter = yfilter;
    }
    if(value_path == "host-ack-packets-received")
    {
        host_ack_packets_received.yfilter = yfilter;
    }
    if(value_path == "host-ack-packets-sent")
    {
        host_ack_packets_sent.yfilter = yfilter;
    }
    if(value_path == "host-chassis-mac")
    {
        host_chassis_mac.yfilter = yfilter;
    }
    if(value_path == "host-interface-mac")
    {
        host_interface_mac.yfilter = yfilter;
    }
    if(value_path == "route-length")
    {
        route_length.yfilter = yfilter;
    }
    if(value_path == "secs-since-pkts-cleaned")
    {
        secs_since_pkts_cleaned.yfilter = yfilter;
    }
}

bool NvSatellite::IcpeDpms::IcpeDpm::RemoteHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-timeout" || name == "discovery-protocol-state" || name == "host-ack-packets-received" || name == "host-ack-packets-sent" || name == "host-chassis-mac" || name == "host-interface-mac" || name == "route-length" || name == "secs-since-pkts-cleaned")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SdacpControls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SdacpControls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SdacpControls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdacp-control")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(control_protocol_state.yfilter)
	|| ydk::is_set(ip_address_auto.yfilter)
	|| ydk::is_set(satellite_id_xr.yfilter)
	|| ydk::is_set(satellite_ip_address.yfilter)
	|| ydk::is_set(transport_error.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
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

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (control_protocol_state.is_set || is_set(control_protocol_state.yfilter)) leaf_name_data.push_back(control_protocol_state.get_name_leafdata());
    if (ip_address_auto.is_set || is_set(ip_address_auto.yfilter)) leaf_name_data.push_back(ip_address_auto.get_name_leafdata());
    if (satellite_id_xr.is_set || is_set(satellite_id_xr.yfilter)) leaf_name_data.push_back(satellite_id_xr.get_name_leafdata());
    if (satellite_ip_address.is_set || is_set(satellite_ip_address.yfilter)) leaf_name_data.push_back(satellite_ip_address.get_name_leafdata());
    if (transport_error.is_set || is_set(transport_error.yfilter)) leaf_name_data.push_back(transport_error.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


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

void NvSatellite::SdacpControls::SdacpControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-protocol-state")
    {
        control_protocol_state = value;
        control_protocol_state.value_namespace = name_space;
        control_protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto = value;
        ip_address_auto.value_namespace = name_space;
        ip_address_auto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr = value;
        satellite_id_xr.value_namespace = name_space;
        satellite_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address = value;
        satellite_ip_address.value_namespace = name_space;
        satellite_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-error")
    {
        transport_error = value;
        transport_error.value_namespace = name_space;
        transport_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpControls::SdacpControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "control-protocol-state")
    {
        control_protocol_state.yfilter = yfilter;
    }
    if(value_path == "ip-address-auto")
    {
        ip_address_auto.yfilter = yfilter;
    }
    if(value_path == "satellite-id-xr")
    {
        satellite_id_xr.yfilter = yfilter;
    }
    if(value_path == "satellite-ip-address")
    {
        satellite_ip_address.yfilter = yfilter;
    }
    if(value_path == "transport-error")
    {
        transport_error.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpControls::SdacpControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel" || name == "protocol-state-timestamp" || name == "transport-error-timestamp" || name == "satellite-id" || name == "control-protocol-state" || name == "ip-address-auto" || name == "satellite-id-xr" || name == "satellite-ip-address" || name == "transport-error" || name == "vrf-name")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpControls::SdacpControl::ProtocolStateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpControls::SdacpControl::TransportErrorTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(channel_id.yfilter)
	|| ydk::is_set(channel_state.yfilter)
	|| ydk::is_set(control_messages_dropped.yfilter)
	|| ydk::is_set(control_messages_received.yfilter)
	|| ydk::is_set(control_messages_sent.yfilter)
	|| ydk::is_set(normal_messages_dropped.yfilter)
	|| ydk::is_set(normal_messages_received.yfilter)
	|| ydk::is_set(normal_messages_sent.yfilter)
	|| ydk::is_set(resync_state.yfilter)
	|| ydk::is_set(secs_since_last_cleared.yfilter)
	|| ydk::is_set(version.yfilter)
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

    if (channel_id.is_set || is_set(channel_id.yfilter)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (channel_state.is_set || is_set(channel_state.yfilter)) leaf_name_data.push_back(channel_state.get_name_leafdata());
    if (control_messages_dropped.is_set || is_set(control_messages_dropped.yfilter)) leaf_name_data.push_back(control_messages_dropped.get_name_leafdata());
    if (control_messages_received.is_set || is_set(control_messages_received.yfilter)) leaf_name_data.push_back(control_messages_received.get_name_leafdata());
    if (control_messages_sent.is_set || is_set(control_messages_sent.yfilter)) leaf_name_data.push_back(control_messages_sent.get_name_leafdata());
    if (normal_messages_dropped.is_set || is_set(normal_messages_dropped.yfilter)) leaf_name_data.push_back(normal_messages_dropped.get_name_leafdata());
    if (normal_messages_received.is_set || is_set(normal_messages_received.yfilter)) leaf_name_data.push_back(normal_messages_received.get_name_leafdata());
    if (normal_messages_sent.is_set || is_set(normal_messages_sent.yfilter)) leaf_name_data.push_back(normal_messages_sent.get_name_leafdata());
    if (resync_state.is_set || is_set(resync_state.yfilter)) leaf_name_data.push_back(resync_state.get_name_leafdata());
    if (secs_since_last_cleared.is_set || is_set(secs_since_last_cleared.yfilter)) leaf_name_data.push_back(secs_since_last_cleared.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void NvSatellite::SdacpControls::SdacpControl::Channel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-id")
    {
        channel_id = value;
        channel_id.value_namespace = name_space;
        channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-state")
    {
        channel_state = value;
        channel_state.value_namespace = name_space;
        channel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-messages-dropped")
    {
        control_messages_dropped = value;
        control_messages_dropped.value_namespace = name_space;
        control_messages_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-messages-received")
    {
        control_messages_received = value;
        control_messages_received.value_namespace = name_space;
        control_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-messages-sent")
    {
        control_messages_sent = value;
        control_messages_sent.value_namespace = name_space;
        control_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-messages-dropped")
    {
        normal_messages_dropped = value;
        normal_messages_dropped.value_namespace = name_space;
        normal_messages_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-messages-received")
    {
        normal_messages_received = value;
        normal_messages_received.value_namespace = name_space;
        normal_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-messages-sent")
    {
        normal_messages_sent = value;
        normal_messages_sent.value_namespace = name_space;
        normal_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-state")
    {
        resync_state = value;
        resync_state.value_namespace = name_space;
        resync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs-since-last-cleared")
    {
        secs_since_last_cleared = value;
        secs_since_last_cleared.value_namespace = name_space;
        secs_since_last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpControls::SdacpControl::Channel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-id")
    {
        channel_id.yfilter = yfilter;
    }
    if(value_path == "channel-state")
    {
        channel_state.yfilter = yfilter;
    }
    if(value_path == "control-messages-dropped")
    {
        control_messages_dropped.yfilter = yfilter;
    }
    if(value_path == "control-messages-received")
    {
        control_messages_received.yfilter = yfilter;
    }
    if(value_path == "control-messages-sent")
    {
        control_messages_sent.yfilter = yfilter;
    }
    if(value_path == "normal-messages-dropped")
    {
        normal_messages_dropped.yfilter = yfilter;
    }
    if(value_path == "normal-messages-received")
    {
        normal_messages_received.yfilter = yfilter;
    }
    if(value_path == "normal-messages-sent")
    {
        normal_messages_sent.yfilter = yfilter;
    }
    if(value_path == "resync-state")
    {
        resync_state.yfilter = yfilter;
    }
    if(value_path == "secs-since-last-cleared")
    {
        secs_since_last_cleared.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities" || name == "channel-state-timestamp" || name == "resync-state-timestamp" || name == "channel-id" || name == "channel-state" || name == "control-messages-dropped" || name == "control-messages-received" || name == "control-messages-sent" || name == "normal-messages-dropped" || name == "normal-messages-received" || name == "normal-messages-sent" || name == "resync-state" || name == "secs-since-last-cleared" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter);
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

void NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tl-vs")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(debug.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
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

    if (debug.is_set || is_set(debug.yfilter)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

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

void NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "debug")
    {
        debug = value;
        debug.value_namespace = name_space;
        debug.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "debug")
    {
        debug.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::Capabilities::TlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug" || name == "type" || name == "value")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::ResyncStateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool NvSatellite::SdacpControls::SdacpControl::Channel::ChannelStateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

const Enum::YLeaf IcpeOpmChanFsmState::icpe_opm_chan_fsm_state_down {0, "icpe-opm-chan-fsm-state-down"};
const Enum::YLeaf IcpeOpmChanFsmState::icpe_opm_chan_fsm_state_closed {1, "icpe-opm-chan-fsm-state-closed"};
const Enum::YLeaf IcpeOpmChanFsmState::icpe_opm_chan_fsm_state_opening {2, "icpe-opm-chan-fsm-state-opening"};
const Enum::YLeaf IcpeOpmChanFsmState::icpe_opm_chan_fsm_state_opened {3, "icpe-opm-chan-fsm-state-opened"};
const Enum::YLeaf IcpeOpmChanFsmState::icpe_opm_chan_fsm_state_open {4, "icpe-opm-chan-fsm-state-open"};

const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_unknown {0, "icpe-install-sat-state-unknown"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_not_initiat_ed {1, "icpe-install-sat-state-not-initiat-ed"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_transferring {2, "icpe-install-sat-state-transferring"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_activating {3, "icpe-install-sat-state-activating"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_updating {4, "icpe-install-sat-state-updating"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_deactivating {5, "icpe-install-sat-state-deactivating"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_removing {6, "icpe-install-sat-state-removing"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_success {7, "icpe-install-sat-state-success"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_failure {8, "icpe-install-sat-state-failure"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_multiple_ops {9, "icpe-install-sat-state-multiple-ops"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_aborted {10, "icpe-install-sat-state-aborted"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_protocol_version {11, "icpe-install-sat-state-protocol-version"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_pkg_not_present {12, "icpe-install-sat-state-pkg-not-present"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_no_image {13, "icpe-install-sat-state-no-image"};
const Enum::YLeaf IcpeInstallSatState::icpe_install_sat_state_no_such_file {14, "icpe-install-sat-state-no-such-file"};

const Enum::YLeaf IcpeOpmResyncFsmState::icpe_opm_resync_fsm_state_not_open {0, "icpe-opm-resync-fsm-state-not-open"};
const Enum::YLeaf IcpeOpmResyncFsmState::icpe_opm_resync_fsm_state_stable {1, "icpe-opm-resync-fsm-state-stable"};
const Enum::YLeaf IcpeOpmResyncFsmState::icpe_opm_resync_fsm_state_in_resync {2, "icpe-opm-resync-fsm-state-in-resync"};
const Enum::YLeaf IcpeOpmResyncFsmState::icpe_opm_resync_fsm_state_queued {3, "icpe-opm-resync-fsm-state-queued"};
const Enum::YLeaf IcpeOpmResyncFsmState::icpe_opm_resync_fsm_state_resync_req {4, "icpe-opm-resync-fsm-state-resync-req"};

const Enum::YLeaf IcpeOpmSyncFsmState::icpe_opm_sync_fsm_state_split_brain {0, "icpe-opm-sync-fsm-state-split-brain"};
const Enum::YLeaf IcpeOpmSyncFsmState::icpe_opm_sync_fsm_state_waiting {1, "icpe-opm-sync-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmSyncFsmState::icpe_opm_sync_fsm_state_whole_brain {2, "icpe-opm-sync-fsm-state-whole-brain"};

const Enum::YLeaf IcpeInstallPkgSupp::icpe_install_pkg_supp_unknown {0, "icpe-install-pkg-supp-unknown"};
const Enum::YLeaf IcpeInstallPkgSupp::icpe_install_pkg_supp_not_supported {1, "icpe-install-pkg-supp-not-supported"};
const Enum::YLeaf IcpeInstallPkgSupp::icpe_install_pkg_supp_supported {2, "icpe-install-pkg-supp-supported"};

const Enum::YLeaf IcpeOperDiscdLinkState::icpe_oper_discd_link_state_stopped {0, "icpe-oper-discd-link-state-stopped"};
const Enum::YLeaf IcpeOperDiscdLinkState::icpe_oper_discd_link_state_probing {1, "icpe-oper-discd-link-state-probing"};
const Enum::YLeaf IcpeOperDiscdLinkState::icpe_oper_discd_link_state_configuring {2, "icpe-oper-discd-link-state-configuring"};
const Enum::YLeaf IcpeOperDiscdLinkState::icpe_oper_discd_link_state_ready {3, "icpe-oper-discd-link-state-ready"};

const Enum::YLeaf IcpeOperPort::icpe_oper_port_unknown {0, "icpe-oper-port-unknown"};
const Enum::YLeaf IcpeOperPort::icpe_oper_port_gigabit_ethernet {1, "icpe-oper-port-gigabit-ethernet"};
const Enum::YLeaf IcpeOperPort::icpe_oper_port_ten_gig_e {2, "icpe-oper-port-ten-gig-e"};

const Enum::YLeaf IcpeOpmArbitrationFsmState::icpe_opm_arbitration_fsm_state_unarbitrated {0, "icpe-opm-arbitration-fsm-state-unarbitrated"};
const Enum::YLeaf IcpeOpmArbitrationFsmState::icpe_opm_arbitration_fsm_state_waiting {1, "icpe-opm-arbitration-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmArbitrationFsmState::icpe_opm_arbitration_fsm_state_arbitrating {2, "icpe-opm-arbitration-fsm-state-arbitrating"};
const Enum::YLeaf IcpeOpmArbitrationFsmState::icpe_opm_arbitration_fsm_state_arbitrated {3, "icpe-opm-arbitration-fsm-state-arbitrated"};

const Enum::YLeaf IcpeOperMultichassisRedundancy::icpe_oper_multi_chassis_redundancy_not_redundant {0, "icpe-oper-multi-chassis-redundancy-not-redundant"};
const Enum::YLeaf IcpeOperMultichassisRedundancy::icpe_oper_multi_chassis_redundancy_active {1, "icpe-oper-multi-chassis-redundancy-active"};
const Enum::YLeaf IcpeOperMultichassisRedundancy::icpe_oper_multi_chassis_redundancy_standby {2, "icpe-oper-multi-chassis-redundancy-standby"};

const Enum::YLeaf IcpeOperInstallState::icpe_oper_install_state_stable {0, "icpe-oper-install-state-stable"};
const Enum::YLeaf IcpeOperInstallState::icpe_oper_install_state_transferring {1, "icpe-oper-install-state-transferring"};
const Enum::YLeaf IcpeOperInstallState::icpe_oper_install_state_transferred {2, "icpe-oper-install-state-transferred"};
const Enum::YLeaf IcpeOperInstallState::icpe_oper_install_state_installing {3, "icpe-oper-install-state-installing"};
const Enum::YLeaf IcpeOperInstallState::icpe_oper_install_state_in_progress {4, "icpe-oper-install-state-in-progress"};

const Enum::YLeaf IcpeOpmSessState::icpe_opm_sess_state_disconnected {0, "icpe-opm-sess-state-disconnected"};
const Enum::YLeaf IcpeOpmSessState::icpe_opm_sess_state_connecting {1, "icpe-opm-sess-state-connecting"};
const Enum::YLeaf IcpeOpmSessState::icpe_opm_sess_state_authenticating {2, "icpe-opm-sess-state-authenticating"};
const Enum::YLeaf IcpeOpmSessState::icpe_opm_sess_state_arbitrating {3, "icpe-opm-sess-state-arbitrating"};
const Enum::YLeaf IcpeOpmSessState::icpe_opm_sess_state_waiting_for_resyncs {4, "icpe-opm-sess-state-waiting-for-resyncs"};
const Enum::YLeaf IcpeOpmSessState::icpe_opm_sess_state_connected {5, "icpe-opm-sess-state-connected"};

const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_not_calculated {0, "icpe-oper-conflict-not-calculated"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_no_conflict {1, "icpe-oper-conflict-no-conflict"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_not_configured {2, "icpe-oper-conflict-satellite-not-configured"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_no_type {3, "icpe-oper-conflict-satellite-no-type"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_id_invalid {4, "icpe-oper-conflict-satellite-id-invalid"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_no_ipv4_addr {5, "icpe-oper-conflict-satellite-no-ipv4-addr"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_conflicting_ipv4_addr {6, "icpe-oper-conflict-satellite-conflicting-ipv4-addr"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_no_configured_links {7, "icpe-oper-conflict-no-configured-links"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_no_discovered_links {8, "icpe-oper-conflict-no-discovered-links"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_invalid_ports {9, "icpe-oper-conflict-invalid-ports"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_ports_overlap {10, "icpe-oper-conflict-ports-overlap"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_waiting_for_ipv4_addr {11, "icpe-oper-conflict-waiting-for-ipv4-addr"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_waiting_for_vrf {12, "icpe-oper-conflict-waiting-for-vrf"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_different_ipv4_addr {13, "icpe-oper-conflict-different-ipv4-addr"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_different_vrf {14, "icpe-oper-conflict-different-vrf"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_link_ipv4_overlap {15, "icpe-oper-conflict-satellite-link-ipv4-overlap"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_waiting_for_ident {16, "icpe-oper-conflict-waiting-for-ident"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_multiple_ids {17, "icpe-oper-conflict-multiple-ids"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_multiple_satellites {18, "icpe-oper-conflict-multiple-satellites"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_ident_rejected {19, "icpe-oper-conflict-ident-rejected"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_interface_down {20, "icpe-oper-conflict-interface-down"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_auto_ip_unavailable {21, "icpe-oper-conflict-auto-ip-unavailable"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_auto_ip_link_manual_ip {22, "icpe-oper-conflict-satellite-auto-ip-link-manual-ip"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_link_auto_ip_satellite_manual_ip {23, "icpe-oper-conflict-link-auto-ip-satellite-manual-ip"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_serial_num_mismatch {24, "icpe-oper-conflict-serial-num-mismatch"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_not_identified {25, "icpe-oper-conflict-satellite-not-identified"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_unsupported_type {26, "icpe-oper-conflict-satellite-unsupported-type"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_partition_unsupported {27, "icpe-oper-conflict-satellite-partition-unsupported"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_no_serial_number {28, "icpe-oper-conflict-satellite-no-serial-number"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_conflicting_serial_number {29, "icpe-oper-conflict-satellite-conflicting-serial-number"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_link_waiting_for_arp {30, "icpe-oper-conflict-satellite-link-waiting-for-arp"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_host_pe_isolated_split_brain {31, "icpe-oper-conflict-host-pe-isolated-split-brain"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_fabric_iccp_group_inconsistent {32, "icpe-oper-conflict-fabric-iccp-group-inconsistent"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_invalid_iccp_group {33, "icpe-oper-conflict-invalid-iccp-group"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_port_rejected {34, "icpe-oper-conflict-port-rejected"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_satellite_icl_not_supported {35, "icpe-oper-conflict-satellite-icl-not-supported"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_multiple_serial_number {36, "icpe-oper-conflict-multiple-serial-number"};
const Enum::YLeaf IcpeOperConflict::icpe_oper_conflict_multiple_mac_address {37, "icpe-oper-conflict-multiple-mac-address"};

const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_disconnected {0, "icpe-opm-transport-state-disconnected"};
const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_iccp_unavailable {1, "icpe-opm-transport-state-iccp-unavailable"};
const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_no_member_present {2, "icpe-opm-transport-state-no-member-present"};
const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_member_down {3, "icpe-opm-transport-state-member-down"};
const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_member_not_reachable {4, "icpe-opm-transport-state-member-not-reachable"};
const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_waiting_for_app_connect {5, "icpe-opm-transport-state-waiting-for-app-connect"};
const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_waiting_for_app_connect_response {6, "icpe-opm-transport-state-waiting-for-app-connect-response"};
const Enum::YLeaf IcpeOpmTransportState::icpe_opm_transport_state_connected {7, "icpe-opm-transport-state-connected"};

const Enum::YLeaf IcpeOperVerCheckState::icpe_oper_ver_check_state_unknown {0, "icpe-oper-ver-check-state-unknown"};
const Enum::YLeaf IcpeOperVerCheckState::icpe_oper_ver_check_state_not_compatible {1, "icpe-oper-ver-check-state-not-compatible"};
const Enum::YLeaf IcpeOperVerCheckState::icpe_oper_ver_check_state_current_version {2, "icpe-oper-ver-check-state-current-version"};
const Enum::YLeaf IcpeOperVerCheckState::icpe_oper_ver_check_state_compatible_older {3, "icpe-oper-ver-check-state-compatible-older"};
const Enum::YLeaf IcpeOperVerCheckState::icpe_oper_ver_check_state_compatible_newer {4, "icpe-oper-ver-check-state-compatible-newer"};

const Enum::YLeaf IcpeOperTopoRemoteSource::icpe_oper_topo_remote_source_unknown {0, "icpe-oper-topo-remote-source-unknown"};
const Enum::YLeaf IcpeOperTopoRemoteSource::icpe_oper_topo_remote_source_remote_icl_id {1, "icpe-oper-topo-remote-source-remote-icl-id"};
const Enum::YLeaf IcpeOperTopoRemoteSource::icpe_oper_topo_remote_source_remote_satellite_mac {2, "icpe-oper-topo-remote-source-remote-satellite-mac"};
const Enum::YLeaf IcpeOperTopoRemoteSource::icpe_oper_topo_remote_source_remote_host_mac {3, "icpe-oper-topo-remote-source-remote-host-mac"};
const Enum::YLeaf IcpeOperTopoRemoteSource::icpe_oper_topo_remote_source_direct_satellite {4, "icpe-oper-topo-remote-source-direct-satellite"};
const Enum::YLeaf IcpeOperTopoRemoteSource::icpe_oper_topo_remote_source_direct_host {5, "icpe-oper-topo-remote-source-direct-host"};

const Enum::YLeaf IcpeOpticalSyncState::icpe_optical_sync_state_unknown {0, "icpe-optical-sync-state-unknown"};
const Enum::YLeaf IcpeOpticalSyncState::icpe_optical_sync_state_syncing {1, "icpe-optical-sync-state-syncing"};
const Enum::YLeaf IcpeOpticalSyncState::icpe_optical_sync_state_synced {2, "icpe-optical-sync-state-synced"};
const Enum::YLeaf IcpeOpticalSyncState::icpe_optical_sync_state_not_connected {3, "icpe-optical-sync-state-not-connected"};

const Enum::YLeaf IcpeOpmAuthFsmState::icpe_opm_auth_fsm_state_unauth {0, "icpe-opm-auth-fsm-state-unauth"};
const Enum::YLeaf IcpeOpmAuthFsmState::icpe_opm_auth_fsm_state_waiting {1, "icpe-opm-auth-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmAuthFsmState::icpe_opm_auth_fsm_state_waiting_for_auth {2, "icpe-opm-auth-fsm-state-waiting-for-auth"};
const Enum::YLeaf IcpeOpmAuthFsmState::icpe_opm_auth_fsm_state_waiting_for_reply {3, "icpe-opm-auth-fsm-state-waiting-for-reply"};
const Enum::YLeaf IcpeOpmAuthFsmState::icpe_opm_auth_fsm_state_authed {4, "icpe-opm-auth-fsm-state-authed"};

const Enum::YLeaf IcpeOperSdacpSessState::icpe_oper_sdacp_sess_state_not_created {0, "icpe-oper-sdacp-sess-state-not-created"};
const Enum::YLeaf IcpeOperSdacpSessState::icpe_oper_sdacp_sess_state_created {1, "icpe-oper-sdacp-sess-state-created"};
const Enum::YLeaf IcpeOperSdacpSessState::icpe_oper_sdacp_sess_state_authentication_not_ok {2, "icpe-oper-sdacp-sess-state-authentication-not-ok"};
const Enum::YLeaf IcpeOperSdacpSessState::icpe_oper_sdacp_sess_state_authentication_ok {3, "icpe-oper-sdacp-sess-state-authentication-ok"};
const Enum::YLeaf IcpeOperSdacpSessState::icpe_oper_sdacp_sess_state_version_not_ok {4, "icpe-oper-sdacp-sess-state-version-not-ok"};
const Enum::YLeaf IcpeOperSdacpSessState::icpe_oper_sdacp_sess_state_up {5, "icpe-oper-sdacp-sess-state-up"};
const Enum::YLeaf IcpeOperSdacpSessState::icpe_oper_sdacp_sess_state_issu {6, "icpe-oper-sdacp-sess-state-issu"};

const Enum::YLeaf IcpeOperFabricPort::icpe_oper_fabric_port_unknown {0, "icpe-oper-fabric-port-unknown"};
const Enum::YLeaf IcpeOperFabricPort::icpe_oper_fabric_port_n_v_fabric_gig_e {1, "icpe-oper-fabric-port-n-v-fabric-gig-e"};
const Enum::YLeaf IcpeOperFabricPort::icpe_oper_fabric_port_n_v_fabric_ten_gig_e {2, "icpe-oper-fabric-port-n-v-fabric-ten-gig-e"};
const Enum::YLeaf IcpeOperFabricPort::icpe_oper_fabric_port_n_v_fabric_hundred_gig_e {3, "icpe-oper-fabric-port-n-v-fabric-hundred-gig-e"};

const Enum::YLeaf IcpeOpmController::icpe_opm_controller_unknown {0, "icpe-opm-controller-unknown"};
const Enum::YLeaf IcpeOpmController::icpe_opm_controller_primary {1, "icpe-opm-controller-primary"};
const Enum::YLeaf IcpeOpmController::icpe_opm_controller_secondary {2, "icpe-opm-controller-secondary"};

const Enum::YLeaf IcpeGcoOperControlReason::icpe_gco_oper_control_reason_unknown_error {0, "icpe-gco-oper-control-reason-unknown-error"};
const Enum::YLeaf IcpeGcoOperControlReason::icpe_gco_oper_control_reason_wrong_chassis_type {1, "icpe-gco-oper-control-reason-wrong-chassis-type"};
const Enum::YLeaf IcpeGcoOperControlReason::icpe_gco_oper_control_reason_wrong_chassis_serial {2, "icpe-gco-oper-control-reason-wrong-chassis-serial"};
const Enum::YLeaf IcpeGcoOperControlReason::icpe_gco_oper_control_reason_needs_to_upgrade {3, "icpe-gco-oper-control-reason-needs-to-upgrade"};
const Enum::YLeaf IcpeGcoOperControlReason::icpe_gco_oper_control_reason_none {4, "icpe-gco-oper-control-reason-none"};


}
}

