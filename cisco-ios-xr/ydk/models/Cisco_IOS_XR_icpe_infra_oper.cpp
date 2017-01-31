
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_icpe_infra_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_icpe_infra_oper {

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
    path_buffer << "reload-op-status" <<"[operation-id='" <<operation_id.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::ReloadOpStatuses::ReloadOpStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/reload-op-statuses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::ReloadOpStatuses::ReloadOpStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::ReloadOpStatuses::ReloadOpStatus::get_children()
{
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

EntityPath NvSatellite::ReloadOpStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::ReloadOpStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reload-op-status")
    {
        for(auto const & c : reload_op_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::ReloadOpStatuses::ReloadOpStatus>();
        c->parent = this;
        reload_op_status.push_back(std::move(c));
        children[segment_path] = reload_op_status.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::ReloadOpStatuses::get_children()
{
    for (auto const & c : reload_op_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::ReloadOpStatuses::set_value(const std::string & value_path, std::string value)
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
	 sats_transferring{YType::uint16, "sats-transferring"}
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
	|| is_set(sats_transferring.operation);
}

std::string NvSatellite::InstallStatuses::InstallStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-status" <<"[satellite-range='" <<satellite_range.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::InstallStatuses::InstallStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install-statuses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::InstallStatuses::InstallStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::InstallStatuses::InstallStatus::get_children()
{
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

EntityPath NvSatellite::InstallStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::InstallStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "install-status")
    {
        for(auto const & c : install_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::InstallStatuses::InstallStatus>();
        c->parent = this;
        install_status.push_back(std::move(c));
        children[segment_path] = install_status.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::InstallStatuses::get_children()
{
    for (auto const & c : install_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::InstallStatuses::set_value(const std::string & value_path, std::string value)
{
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

EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp::get_children()
{
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

EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp::get_children()
{
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

EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp::get_children()
{
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
    channel_state_timestamp(std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp>())
	,resync_state_timestamp(std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp>())
{
    channel_state_timestamp->parent = this;
    children["channel-state-timestamp"] = channel_state_timestamp.get();

    resync_state_timestamp->parent = this;
    children["resync-state-timestamp"] = resync_state_timestamp.get();

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

EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "channel-state-timestamp")
    {
        if(channel_state_timestamp != nullptr)
        {
            children["channel-state-timestamp"] = channel_state_timestamp.get();
        }
        else
        {
            channel_state_timestamp = std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ChannelStateTimestamp>();
            channel_state_timestamp->parent = this;
            children["channel-state-timestamp"] = channel_state_timestamp.get();
        }
        return children.at("channel-state-timestamp");
    }

    if(child_yang_name == "resync-state-timestamp")
    {
        if(resync_state_timestamp != nullptr)
        {
            children["resync-state-timestamp"] = resync_state_timestamp.get();
        }
        else
        {
            resync_state_timestamp = std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::ResyncStateTimestamp>();
            resync_state_timestamp->parent = this;
            children["resync-state-timestamp"] = resync_state_timestamp.get();
        }
        return children.at("resync-state-timestamp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel::get_children()
{
    if(children.find("channel-state-timestamp") == children.end())
    {
        if(channel_state_timestamp != nullptr)
        {
            children["channel-state-timestamp"] = channel_state_timestamp.get();
        }
    }

    if(children.find("resync-state-timestamp") == children.end())
    {
        if(resync_state_timestamp != nullptr)
        {
            children["resync-state-timestamp"] = resync_state_timestamp.get();
        }
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
    protocol_state_timestamp(std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp>())
{
    protocol_state_timestamp->parent = this;
    children["protocol-state-timestamp"] = protocol_state_timestamp.get();

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
    path_buffer << "sdacp-redundancy" <<"[iccp-group='" <<iccp_group.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::SdacpRedundancies::SdacpRedundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/sdacp-redundancies/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SdacpRedundancies::SdacpRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "channel")
    {
        for(auto const & c : channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy::Channel>();
        c->parent = this;
        channel.push_back(std::move(c));
        children[segment_path] = channel.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-state-timestamp")
    {
        if(protocol_state_timestamp != nullptr)
        {
            children["protocol-state-timestamp"] = protocol_state_timestamp.get();
        }
        else
        {
            protocol_state_timestamp = std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy::ProtocolStateTimestamp>();
            protocol_state_timestamp->parent = this;
            children["protocol-state-timestamp"] = protocol_state_timestamp.get();
        }
        return children.at("protocol-state-timestamp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SdacpRedundancies::SdacpRedundancy::get_children()
{
    for (auto const & c : channel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("protocol-state-timestamp") == children.end())
    {
        if(protocol_state_timestamp != nullptr)
        {
            children["protocol-state-timestamp"] = protocol_state_timestamp.get();
        }
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

EntityPath NvSatellite::SdacpRedundancies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SdacpRedundancies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sdacp-redundancy")
    {
        for(auto const & c : sdacp_redundancy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SdacpRedundancies::SdacpRedundancy>();
        c->parent = this;
        sdacp_redundancy.push_back(std::move(c));
        children[segment_path] = sdacp_redundancy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SdacpRedundancies::get_children()
{
    for (auto const & c : sdacp_redundancy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::SdacpRedundancies::set_value(const std::string & value_path, std::string value)
{
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort::get_children()
{
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort::get_children()
{
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_up.is_set || is_set(channel_up.operation)) leaf_name_data.push_back(channel_up.get_name_leafdata());
    if (error_string.is_set || is_set(error_string.operation)) leaf_name_data.push_back(error_string.get_name_leafdata());
    if (out_of_sync.is_set || is_set(out_of_sync.operation)) leaf_name_data.push_back(out_of_sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured-port")
    {
        for(auto const & c : configured_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::ConfiguredPort>();
        c->parent = this;
        configured_port.push_back(std::move(c));
        children[segment_path] = configured_port.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "current-port")
    {
        for(auto const & c : current_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::CurrentPort>();
        c->parent = this;
        current_port.push_back(std::move(c));
        children[segment_path] = current_port.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts::get_children()
{
    for (auto const & c : configured_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : current_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sync_state.is_set || is_set(sync_state.operation)) leaf_name_data.push_back(sync_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application::get_children()
{
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_sync_state.is_set || is_set(chassis_sync_state.operation)) leaf_name_data.push_back(chassis_sync_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::Application>();
        c->parent = this;
        application.push_back(std::move(c));
        children[segment_path] = application.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus::get_children()
{
    for (auto const & c : application)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp::get_children()
{
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange::get_children()
{
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

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_context.is_set || is_set(conflict_context.operation)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink::get_children()
{
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

NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::ConfiguredLink()
    :
    	conflict_context{YType::str, "conflict-context"},
	 conflict_reason{YType::enumeration, "conflict-reason"},
	 interface_handle{YType::str, "interface-handle"},
	 ip_address{YType::str, "ip-address"},
	 ip_address_auto{YType::boolean, "ip-address-auto"},
	 min_links_satisfied{YType::boolean, "min-links-satisfied"},
	 minimum_preferred_links{YType::uint32, "minimum-preferred-links"},
	 number_active_links{YType::uint32, "number-active-links"},
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
	|| number_active_links.is_set
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
	|| is_set(number_active_links.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_id_present.operation);
}

std::string NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-link";

    return path_buffer.str();

}

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_context.is_set || is_set(conflict_context.operation)) leaf_name_data.push_back(conflict_context.get_name_leafdata());
    if (conflict_reason.is_set || is_set(conflict_reason.operation)) leaf_name_data.push_back(conflict_reason.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_auto.is_set || is_set(ip_address_auto.operation)) leaf_name_data.push_back(ip_address_auto.get_name_leafdata());
    if (min_links_satisfied.is_set || is_set(min_links_satisfied.operation)) leaf_name_data.push_back(min_links_satisfied.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.operation)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());
    if (number_active_links.is_set || is_set(number_active_links.operation)) leaf_name_data.push_back(number_active_links.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_id_present.is_set || is_set(vrf_id_present.operation)) leaf_name_data.push_back(vrf_id_present.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovered-link")
    {
        for(auto const & c : discovered_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::DiscoveredLink>();
        c->parent = this;
        discovered_link.push_back(std::move(c));
        children[segment_path] = discovered_link.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "port-range")
    {
        for(auto const & c : port_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::PortRange>();
        c->parent = this;
        port_range.push_back(std::move(c));
        children[segment_path] = port_range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink::get_children()
{
    for (auto const & c : discovered_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : port_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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
    if(value_path == "number-active-links")
    {
        number_active_links = value;
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
    candidate_fabric_ports(std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts>())
	,optical_status(std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus>())
	,redundancy_out_of_sync_timestamp(std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp>())
{
    candidate_fabric_ports->parent = this;
    children["candidate-fabric-ports"] = candidate_fabric_ports.get();

    optical_status->parent = this;
    children["optical-status"] = optical_status.get();

    redundancy_out_of_sync_timestamp->parent = this;
    children["redundancy-out-of-sync-timestamp"] = redundancy_out_of_sync_timestamp.get();

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
    path_buffer << "satellite-status" <<"[satellite-id='" <<satellite_id.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::SatelliteStatuses::SatelliteStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-statuses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteStatuses::SatelliteStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-fabric-ports")
    {
        if(candidate_fabric_ports != nullptr)
        {
            children["candidate-fabric-ports"] = candidate_fabric_ports.get();
        }
        else
        {
            candidate_fabric_ports = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::CandidateFabricPorts>();
            candidate_fabric_ports->parent = this;
            children["candidate-fabric-ports"] = candidate_fabric_ports.get();
        }
        return children.at("candidate-fabric-ports");
    }

    if(child_yang_name == "configured-link")
    {
        for(auto const & c : configured_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::ConfiguredLink>();
        c->parent = this;
        configured_link.push_back(std::move(c));
        children[segment_path] = configured_link.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "optical-status")
    {
        if(optical_status != nullptr)
        {
            children["optical-status"] = optical_status.get();
        }
        else
        {
            optical_status = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::OpticalStatus>();
            optical_status->parent = this;
            children["optical-status"] = optical_status.get();
        }
        return children.at("optical-status");
    }

    if(child_yang_name == "redundancy-out-of-sync-timestamp")
    {
        if(redundancy_out_of_sync_timestamp != nullptr)
        {
            children["redundancy-out-of-sync-timestamp"] = redundancy_out_of_sync_timestamp.get();
        }
        else
        {
            redundancy_out_of_sync_timestamp = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus::RedundancyOutOfSyncTimestamp>();
            redundancy_out_of_sync_timestamp->parent = this;
            children["redundancy-out-of-sync-timestamp"] = redundancy_out_of_sync_timestamp.get();
        }
        return children.at("redundancy-out-of-sync-timestamp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::SatelliteStatus::get_children()
{
    if(children.find("candidate-fabric-ports") == children.end())
    {
        if(candidate_fabric_ports != nullptr)
        {
            children["candidate-fabric-ports"] = candidate_fabric_ports.get();
        }
    }

    for (auto const & c : configured_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("optical-status") == children.end())
    {
        if(optical_status != nullptr)
        {
            children["optical-status"] = optical_status.get();
        }
    }

    if(children.find("redundancy-out-of-sync-timestamp") == children.end())
    {
        if(redundancy_out_of_sync_timestamp != nullptr)
        {
            children["redundancy-out-of-sync-timestamp"] = redundancy_out_of_sync_timestamp.get();
        }
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

EntityPath NvSatellite::SatelliteStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "satellite-status")
    {
        for(auto const & c : satellite_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteStatuses::SatelliteStatus>();
        c->parent = this;
        satellite_status.push_back(std::move(c));
        children[segment_path] = satellite_status.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteStatuses::get_children()
{
    for (auto const & c : satellite_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::SatelliteStatuses::set_value(const std::string & value_path, std::string value)
{
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

EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discovery_running.is_set || is_set(discovery_running.operation)) leaf_name_data.push_back(discovery_running.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink::get_children()
{
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

EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice::get_children()
{
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

EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-device")
    {
        for(auto const & c : remote_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::RemoteDevice>();
        c->parent = this;
        remote_device.push_back(std::move(c));
        children[segment_path] = remote_device.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink::get_children()
{
    for (auto const & c : remote_device)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fabric-link")
    {
        for(auto const & c : fabric_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::FabricLink>();
        c->parent = this;
        fabric_link.push_back(std::move(c));
        children[segment_path] = fabric_link.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite::get_children()
{
    for (auto const & c : fabric_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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
    path_buffer << "satellite-topology" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::SatelliteTopologies::SatelliteTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/satellite-topologies/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::SatelliteTopologies::SatelliteTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovered-link")
    {
        for(auto const & c : discovered_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteTopologies::SatelliteTopology::DiscoveredLink>();
        c->parent = this;
        discovered_link.push_back(std::move(c));
        children[segment_path] = discovered_link.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteTopologies::SatelliteTopology::Satellite>();
        c->parent = this;
        satellite.push_back(std::move(c));
        children[segment_path] = satellite.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteTopologies::SatelliteTopology::get_children()
{
    for (auto const & c : discovered_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : satellite)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

EntityPath NvSatellite::SatelliteTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::SatelliteTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "satellite-topology")
    {
        for(auto const & c : satellite_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::SatelliteTopologies::SatelliteTopology>();
        c->parent = this;
        satellite_topology.push_back(std::move(c));
        children[segment_path] = satellite_topology.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::SatelliteTopologies::get_children()
{
    for (auto const & c : satellite_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::SatelliteTopologies::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "install-progress" <<"[progress-percentage='" <<progress_percentage.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::InstallProgresses::InstallProgress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install-progresses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (progress_percentage.is_set || is_set(progress_percentage.operation)) leaf_name_data.push_back(progress_percentage.get_name_leafdata());
    if (progress_percentage_xr.is_set || is_set(progress_percentage_xr.operation)) leaf_name_data.push_back(progress_percentage_xr.get_name_leafdata());
    if (satellite_count.is_set || is_set(satellite_count.operation)) leaf_name_data.push_back(satellite_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::InstallProgresses::InstallProgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::InstallProgresses::InstallProgress::get_children()
{
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

EntityPath NvSatellite::InstallProgresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::InstallProgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "install-progress")
    {
        for(auto const & c : install_progress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::InstallProgresses::InstallProgress>();
        c->parent = this;
        install_progress.push_back(std::move(c));
        children[segment_path] = install_progress.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::InstallProgresses::get_children()
{
    for (auto const & c : install_progress)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::InstallProgresses::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "reload-status" <<"[satellite-range='" <<satellite_range.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::ReloadStatuses::ReloadStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/reload-statuses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NvSatellite::ReloadStatuses::ReloadStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::ReloadStatuses::ReloadStatus::get_children()
{
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

EntityPath NvSatellite::ReloadStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::ReloadStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reload-status")
    {
        for(auto const & c : reload_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::ReloadStatuses::ReloadStatus>();
        c->parent = this;
        reload_status.push_back(std::move(c));
        children[segment_path] = reload_status.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::ReloadStatuses::get_children()
{
    for (auto const & c : reload_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::ReloadStatuses::set_value(const std::string & value_path, std::string value)
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
	 sats_transferring{YType::uint16, "sats-transferring"}
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
	|| is_set(sats_transferring.operation);
}

std::string NvSatellite::InstallOpStatuses::InstallOpStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-op-status" <<"[operation-id='" <<operation_id.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellite::InstallOpStatuses::InstallOpStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/install-op-statuses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::InstallOpStatuses::InstallOpStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::InstallOpStatuses::InstallOpStatus::get_children()
{
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

EntityPath NvSatellite::InstallOpStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::InstallOpStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "install-op-status")
    {
        for(auto const & c : install_op_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellite::InstallOpStatuses::InstallOpStatus>();
        c->parent = this;
        install_op_status.push_back(std::move(c));
        children[segment_path] = install_op_status.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::InstallOpStatuses::get_children()
{
    for (auto const & c : install_op_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellite::InstallOpStatuses::set_value(const std::string & value_path, std::string value)
{
}

NvSatellite::NvSatellite()
    :
    install_op_statuses(std::make_unique<NvSatellite::InstallOpStatuses>())
	,install_progresses(std::make_unique<NvSatellite::InstallProgresses>())
	,install_statuses(std::make_unique<NvSatellite::InstallStatuses>())
	,reload_op_statuses(std::make_unique<NvSatellite::ReloadOpStatuses>())
	,reload_statuses(std::make_unique<NvSatellite::ReloadStatuses>())
	,satellite_statuses(std::make_unique<NvSatellite::SatelliteStatuses>())
	,satellite_topologies(std::make_unique<NvSatellite::SatelliteTopologies>())
	,sdacp_redundancies(std::make_unique<NvSatellite::SdacpRedundancies>())
{
    install_op_statuses->parent = this;
    children["install-op-statuses"] = install_op_statuses.get();

    install_progresses->parent = this;
    children["install-progresses"] = install_progresses.get();

    install_statuses->parent = this;
    children["install-statuses"] = install_statuses.get();

    reload_op_statuses->parent = this;
    children["reload-op-statuses"] = reload_op_statuses.get();

    reload_statuses->parent = this;
    children["reload-statuses"] = reload_statuses.get();

    satellite_statuses->parent = this;
    children["satellite-statuses"] = satellite_statuses.get();

    satellite_topologies->parent = this;
    children["satellite-topologies"] = satellite_topologies.get();

    sdacp_redundancies->parent = this;
    children["sdacp-redundancies"] = sdacp_redundancies.get();

    yang_name = "nv-satellite"; yang_parent_name = "Cisco-IOS-XR-icpe-infra-oper";
}

NvSatellite::~NvSatellite()
{
}

bool NvSatellite::has_data() const
{
    return (install_op_statuses !=  nullptr && install_op_statuses->has_data())
	|| (install_progresses !=  nullptr && install_progresses->has_data())
	|| (install_statuses !=  nullptr && install_statuses->has_data())
	|| (reload_op_statuses !=  nullptr && reload_op_statuses->has_data())
	|| (reload_statuses !=  nullptr && reload_statuses->has_data())
	|| (satellite_statuses !=  nullptr && satellite_statuses->has_data())
	|| (satellite_topologies !=  nullptr && satellite_topologies->has_data())
	|| (sdacp_redundancies !=  nullptr && sdacp_redundancies->has_data());
}

bool NvSatellite::has_operation() const
{
    return is_set(operation)
	|| (install_op_statuses !=  nullptr && install_op_statuses->has_operation())
	|| (install_progresses !=  nullptr && install_progresses->has_operation())
	|| (install_statuses !=  nullptr && install_statuses->has_operation())
	|| (reload_op_statuses !=  nullptr && reload_op_statuses->has_operation())
	|| (reload_statuses !=  nullptr && reload_statuses->has_operation())
	|| (satellite_statuses !=  nullptr && satellite_statuses->has_operation())
	|| (satellite_topologies !=  nullptr && satellite_topologies->has_operation())
	|| (sdacp_redundancies !=  nullptr && sdacp_redundancies->has_operation());
}

std::string NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-oper:nv-satellite";

    return path_buffer.str();

}

EntityPath NvSatellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "install-op-statuses")
    {
        if(install_op_statuses != nullptr)
        {
            children["install-op-statuses"] = install_op_statuses.get();
        }
        else
        {
            install_op_statuses = std::make_unique<NvSatellite::InstallOpStatuses>();
            install_op_statuses->parent = this;
            children["install-op-statuses"] = install_op_statuses.get();
        }
        return children.at("install-op-statuses");
    }

    if(child_yang_name == "install-progresses")
    {
        if(install_progresses != nullptr)
        {
            children["install-progresses"] = install_progresses.get();
        }
        else
        {
            install_progresses = std::make_unique<NvSatellite::InstallProgresses>();
            install_progresses->parent = this;
            children["install-progresses"] = install_progresses.get();
        }
        return children.at("install-progresses");
    }

    if(child_yang_name == "install-statuses")
    {
        if(install_statuses != nullptr)
        {
            children["install-statuses"] = install_statuses.get();
        }
        else
        {
            install_statuses = std::make_unique<NvSatellite::InstallStatuses>();
            install_statuses->parent = this;
            children["install-statuses"] = install_statuses.get();
        }
        return children.at("install-statuses");
    }

    if(child_yang_name == "reload-op-statuses")
    {
        if(reload_op_statuses != nullptr)
        {
            children["reload-op-statuses"] = reload_op_statuses.get();
        }
        else
        {
            reload_op_statuses = std::make_unique<NvSatellite::ReloadOpStatuses>();
            reload_op_statuses->parent = this;
            children["reload-op-statuses"] = reload_op_statuses.get();
        }
        return children.at("reload-op-statuses");
    }

    if(child_yang_name == "reload-statuses")
    {
        if(reload_statuses != nullptr)
        {
            children["reload-statuses"] = reload_statuses.get();
        }
        else
        {
            reload_statuses = std::make_unique<NvSatellite::ReloadStatuses>();
            reload_statuses->parent = this;
            children["reload-statuses"] = reload_statuses.get();
        }
        return children.at("reload-statuses");
    }

    if(child_yang_name == "satellite-statuses")
    {
        if(satellite_statuses != nullptr)
        {
            children["satellite-statuses"] = satellite_statuses.get();
        }
        else
        {
            satellite_statuses = std::make_unique<NvSatellite::SatelliteStatuses>();
            satellite_statuses->parent = this;
            children["satellite-statuses"] = satellite_statuses.get();
        }
        return children.at("satellite-statuses");
    }

    if(child_yang_name == "satellite-topologies")
    {
        if(satellite_topologies != nullptr)
        {
            children["satellite-topologies"] = satellite_topologies.get();
        }
        else
        {
            satellite_topologies = std::make_unique<NvSatellite::SatelliteTopologies>();
            satellite_topologies->parent = this;
            children["satellite-topologies"] = satellite_topologies.get();
        }
        return children.at("satellite-topologies");
    }

    if(child_yang_name == "sdacp-redundancies")
    {
        if(sdacp_redundancies != nullptr)
        {
            children["sdacp-redundancies"] = sdacp_redundancies.get();
        }
        else
        {
            sdacp_redundancies = std::make_unique<NvSatellite::SdacpRedundancies>();
            sdacp_redundancies->parent = this;
            children["sdacp-redundancies"] = sdacp_redundancies.get();
        }
        return children.at("sdacp-redundancies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellite::get_children()
{
    if(children.find("install-op-statuses") == children.end())
    {
        if(install_op_statuses != nullptr)
        {
            children["install-op-statuses"] = install_op_statuses.get();
        }
    }

    if(children.find("install-progresses") == children.end())
    {
        if(install_progresses != nullptr)
        {
            children["install-progresses"] = install_progresses.get();
        }
    }

    if(children.find("install-statuses") == children.end())
    {
        if(install_statuses != nullptr)
        {
            children["install-statuses"] = install_statuses.get();
        }
    }

    if(children.find("reload-op-statuses") == children.end())
    {
        if(reload_op_statuses != nullptr)
        {
            children["reload-op-statuses"] = reload_op_statuses.get();
        }
    }

    if(children.find("reload-statuses") == children.end())
    {
        if(reload_statuses != nullptr)
        {
            children["reload-statuses"] = reload_statuses.get();
        }
    }

    if(children.find("satellite-statuses") == children.end())
    {
        if(satellite_statuses != nullptr)
        {
            children["satellite-statuses"] = satellite_statuses.get();
        }
    }

    if(children.find("satellite-topologies") == children.end())
    {
        if(satellite_topologies != nullptr)
        {
            children["satellite-topologies"] = satellite_topologies.get();
        }
    }

    if(children.find("sdacp-redundancies") == children.end())
    {
        if(sdacp_redundancies != nullptr)
        {
            children["sdacp-redundancies"] = sdacp_redundancies.get();
        }
    }

    return children;
}

void NvSatellite::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> NvSatellite::clone_ptr()
{
    return std::make_unique<NvSatellite>();
}

const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_not_created {0, "icpe-oper-sdacp-sess-state-not-created"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_created {1, "icpe-oper-sdacp-sess-state-created"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_authentication_not_ok {2, "icpe-oper-sdacp-sess-state-authentication-not-ok"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_authentication_ok {3, "icpe-oper-sdacp-sess-state-authentication-ok"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_version_not_ok {4, "icpe-oper-sdacp-sess-state-version-not-ok"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_up {5, "icpe-oper-sdacp-sess-state-up"};
const Enum::YLeaf IcpeOperSdacpSessStateEnum::icpe_oper_sdacp_sess_state_issu {6, "icpe-oper-sdacp-sess-state-issu"};

const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_unknown_error {0, "icpe-gco-oper-control-reason-unknown-error"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_wrong_chassis_type {1, "icpe-gco-oper-control-reason-wrong-chassis-type"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_wrong_chassis_serial {2, "icpe-gco-oper-control-reason-wrong-chassis-serial"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_needs_to_upgrade {3, "icpe-gco-oper-control-reason-needs-to-upgrade"};
const Enum::YLeaf IcpeGcoOperControlReasonEnum::icpe_gco_oper_control_reason_none {4, "icpe-gco-oper-control-reason-none"};

const Enum::YLeaf IcpeOpmSyncFsmStateEnum::icpe_opm_sync_fsm_state_split_brain {0, "icpe-opm-sync-fsm-state-split-brain"};
const Enum::YLeaf IcpeOpmSyncFsmStateEnum::icpe_opm_sync_fsm_state_waiting {1, "icpe-opm-sync-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmSyncFsmStateEnum::icpe_opm_sync_fsm_state_whole_brain {2, "icpe-opm-sync-fsm-state-whole-brain"};

const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_unarbitrated {0, "icpe-opm-arbitration-fsm-state-unarbitrated"};
const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_waiting {1, "icpe-opm-arbitration-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_arbitrating {2, "icpe-opm-arbitration-fsm-state-arbitrating"};
const Enum::YLeaf IcpeOpmArbitrationFsmStateEnum::icpe_opm_arbitration_fsm_state_arbitrated {3, "icpe-opm-arbitration-fsm-state-arbitrated"};

const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_stable {0, "icpe-oper-install-state-stable"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_transferring {1, "icpe-oper-install-state-transferring"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_transferred {2, "icpe-oper-install-state-transferred"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_installing {3, "icpe-oper-install-state-installing"};
const Enum::YLeaf IcpeOperInstallStateEnum::icpe_oper_install_state_in_progress {4, "icpe-oper-install-state-in-progress"};

const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_disconnected {0, "icpe-opm-transport-state-disconnected"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_iccp_unavailable {1, "icpe-opm-transport-state-iccp-unavailable"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_no_member_present {2, "icpe-opm-transport-state-no-member-present"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_member_down {3, "icpe-opm-transport-state-member-down"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_member_not_reachable {4, "icpe-opm-transport-state-member-not-reachable"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_waiting_for_app_connect {5, "icpe-opm-transport-state-waiting-for-app-connect"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_waiting_for_app_connect_response {6, "icpe-opm-transport-state-waiting-for-app-connect-response"};
const Enum::YLeaf IcpeOpmTransportStateEnum::icpe_opm_transport_state_connected {7, "icpe-opm-transport-state-connected"};

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

const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_not_open {0, "icpe-opm-resync-fsm-state-not-open"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_stable {1, "icpe-opm-resync-fsm-state-stable"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_in_resync {2, "icpe-opm-resync-fsm-state-in-resync"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_queued {3, "icpe-opm-resync-fsm-state-queued"};
const Enum::YLeaf IcpeOpmResyncFsmStateEnum::icpe_opm_resync_fsm_state_resync_req {4, "icpe-opm-resync-fsm-state-resync-req"};

const Enum::YLeaf IcpeOperPortEnum::icpe_oper_port_unknown {0, "icpe-oper-port-unknown"};
const Enum::YLeaf IcpeOperPortEnum::icpe_oper_port_gigabit_ethernet {1, "icpe-oper-port-gigabit-ethernet"};
const Enum::YLeaf IcpeOperPortEnum::icpe_oper_port_ten_gig_e {2, "icpe-oper-port-ten-gig-e"};

const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_unauth {0, "icpe-opm-auth-fsm-state-unauth"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_waiting {1, "icpe-opm-auth-fsm-state-waiting"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_waiting_for_auth {2, "icpe-opm-auth-fsm-state-waiting-for-auth"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_waiting_for_reply {3, "icpe-opm-auth-fsm-state-waiting-for-reply"};
const Enum::YLeaf IcpeOpmAuthFsmStateEnum::icpe_opm_auth_fsm_state_authed {4, "icpe-opm-auth-fsm-state-authed"};

const Enum::YLeaf IcpeOpmControllerEnum::icpe_opm_controller_unknown {0, "icpe-opm-controller-unknown"};
const Enum::YLeaf IcpeOpmControllerEnum::icpe_opm_controller_primary {1, "icpe-opm-controller-primary"};
const Enum::YLeaf IcpeOpmControllerEnum::icpe_opm_controller_secondary {2, "icpe-opm-controller-secondary"};

const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_unknown {0, "icpe-oper-fabric-port-unknown"};
const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_n_v_fabric_gig_e {1, "icpe-oper-fabric-port-n-v-fabric-gig-e"};
const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_n_v_fabric_ten_gig_e {2, "icpe-oper-fabric-port-n-v-fabric-ten-gig-e"};
const Enum::YLeaf IcpeOperFabricPortEnum::icpe_oper_fabric_port_n_v_fabric_hundred_gig_e {3, "icpe-oper-fabric-port-n-v-fabric-hundred-gig-e"};

const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_unknown {0, "icpe-oper-ver-check-state-unknown"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_not_compatible {1, "icpe-oper-ver-check-state-not-compatible"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_current_version {2, "icpe-oper-ver-check-state-current-version"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_compatible_older {3, "icpe-oper-ver-check-state-compatible-older"};
const Enum::YLeaf IcpeOperVerCheckStateEnum::icpe_oper_ver_check_state_compatible_newer {4, "icpe-oper-ver-check-state-compatible-newer"};

const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_unknown {0, "icpe-optical-sync-state-unknown"};
const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_syncing {1, "icpe-optical-sync-state-syncing"};
const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_synced {2, "icpe-optical-sync-state-synced"};
const Enum::YLeaf IcpeOpticalSyncStateEnum::icpe_optical_sync_state_not_connected {3, "icpe-optical-sync-state-not-connected"};

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


}
}

