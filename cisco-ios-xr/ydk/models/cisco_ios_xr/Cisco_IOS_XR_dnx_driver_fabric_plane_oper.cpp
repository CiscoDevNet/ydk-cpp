
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dnx_driver_fabric_plane_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dnx_driver_fabric_plane_oper {

Fabric::Fabric()
    :
    plane_table(std::make_shared<Fabric::PlaneTable>())
{
    plane_table->parent = this;

    yang_name = "fabric"; yang_parent_name = "Cisco-IOS-XR-dnx-driver-fabric-plane-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Fabric::~Fabric()
{
}

bool Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (plane_table !=  nullptr && plane_table->has_data());
}

bool Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (plane_table !=  nullptr && plane_table->has_operation());
}

std::string Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-fabric-plane-oper:fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane-table")
    {
        if(plane_table == nullptr)
        {
            plane_table = std::make_shared<Fabric::PlaneTable>();
        }
        return plane_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(plane_table != nullptr)
    {
        _children["plane-table"] = plane_table;
    }

    return _children;
}

void Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Fabric::clone_ptr() const
{
    return std::make_shared<Fabric>();
}

std::string Fabric::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fabric::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fabric::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fabric::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane-table")
        return true;
    return false;
}

Fabric::PlaneTable::PlaneTable()
    :
    statistics(std::make_shared<Fabric::PlaneTable::Statistics>())
    , plane(std::make_shared<Fabric::PlaneTable::Plane>())
{
    statistics->parent = this;
    plane->parent = this;

    yang_name = "plane-table"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Fabric::PlaneTable::~PlaneTable()
{
}

bool Fabric::PlaneTable::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data())
	|| (plane !=  nullptr && plane->has_data());
}

bool Fabric::PlaneTable::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (plane !=  nullptr && plane->has_operation());
}

std::string Fabric::PlaneTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-fabric-plane-oper:fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Fabric::PlaneTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fabric::PlaneTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fabric::PlaneTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Fabric::PlaneTable::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "plane")
    {
        if(plane == nullptr)
        {
            plane = std::make_shared<Fabric::PlaneTable::Plane>();
        }
        return plane;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fabric::PlaneTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(plane != nullptr)
    {
        _children["plane"] = plane;
    }

    return _children;
}

void Fabric::PlaneTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fabric::PlaneTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fabric::PlaneTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "plane")
        return true;
    return false;
}

Fabric::PlaneTable::Statistics::Statistics()
    :
    plane_stats_info(this, {})
{

    yang_name = "statistics"; yang_parent_name = "plane-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Fabric::PlaneTable::Statistics::~Statistics()
{
}

bool Fabric::PlaneTable::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane_stats_info.len(); index++)
    {
        if(plane_stats_info[index]->has_data())
            return true;
    }
    return false;
}

bool Fabric::PlaneTable::Statistics::has_operation() const
{
    for (std::size_t index=0; index<plane_stats_info.len(); index++)
    {
        if(plane_stats_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fabric::PlaneTable::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-fabric-plane-oper:fabric/plane-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Fabric::PlaneTable::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fabric::PlaneTable::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fabric::PlaneTable::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane-stats-info")
    {
        auto ent_ = std::make_shared<Fabric::PlaneTable::Statistics::PlaneStatsInfo>();
        ent_->parent = this;
        plane_stats_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fabric::PlaneTable::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : plane_stats_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Fabric::PlaneTable::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fabric::PlaneTable::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fabric::PlaneTable::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane-stats-info")
        return true;
    return false;
}

Fabric::PlaneTable::Statistics::PlaneStatsInfo::PlaneStatsInfo()
    :
    plane_id{YType::uint32, "plane-id"},
    rx_data_cells{YType::uint64, "rx-data-cells"},
    tx_data_cells{YType::uint64, "tx-data-cells"},
    rx_correctable_error_cells{YType::uint32, "rx-correctable-error-cells"},
    rx_un_correctable_error_cells{YType::uint32, "rx-un-correctable-error-cells"},
    rx_parity_error_cells{YType::uint32, "rx-parity-error-cells"}
{

    yang_name = "plane-stats-info"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Fabric::PlaneTable::Statistics::PlaneStatsInfo::~PlaneStatsInfo()
{
}

bool Fabric::PlaneTable::Statistics::PlaneStatsInfo::has_data() const
{
    if (is_presence_container) return true;
    return plane_id.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_correctable_error_cells.is_set
	|| rx_un_correctable_error_cells.is_set
	|| rx_parity_error_cells.is_set;
}

bool Fabric::PlaneTable::Statistics::PlaneStatsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_correctable_error_cells.yfilter)
	|| ydk::is_set(rx_un_correctable_error_cells.yfilter)
	|| ydk::is_set(rx_parity_error_cells.yfilter);
}

std::string Fabric::PlaneTable::Statistics::PlaneStatsInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-fabric-plane-oper:fabric/plane-table/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Fabric::PlaneTable::Statistics::PlaneStatsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane-stats-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fabric::PlaneTable::Statistics::PlaneStatsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_correctable_error_cells.is_set || is_set(rx_correctable_error_cells.yfilter)) leaf_name_data.push_back(rx_correctable_error_cells.get_name_leafdata());
    if (rx_un_correctable_error_cells.is_set || is_set(rx_un_correctable_error_cells.yfilter)) leaf_name_data.push_back(rx_un_correctable_error_cells.get_name_leafdata());
    if (rx_parity_error_cells.is_set || is_set(rx_parity_error_cells.yfilter)) leaf_name_data.push_back(rx_parity_error_cells.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fabric::PlaneTable::Statistics::PlaneStatsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fabric::PlaneTable::Statistics::PlaneStatsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Fabric::PlaneTable::Statistics::PlaneStatsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane-id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-correctable-error-cells")
    {
        rx_correctable_error_cells = value;
        rx_correctable_error_cells.value_namespace = name_space;
        rx_correctable_error_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-un-correctable-error-cells")
    {
        rx_un_correctable_error_cells = value;
        rx_un_correctable_error_cells.value_namespace = name_space;
        rx_un_correctable_error_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-parity-error-cells")
    {
        rx_parity_error_cells = value;
        rx_parity_error_cells.value_namespace = name_space;
        rx_parity_error_cells.value_namespace_prefix = name_space_prefix;
    }
}

void Fabric::PlaneTable::Statistics::PlaneStatsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane-id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "rx-data-cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx-data-cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx-correctable-error-cells")
    {
        rx_correctable_error_cells.yfilter = yfilter;
    }
    if(value_path == "rx-un-correctable-error-cells")
    {
        rx_un_correctable_error_cells.yfilter = yfilter;
    }
    if(value_path == "rx-parity-error-cells")
    {
        rx_parity_error_cells.yfilter = yfilter;
    }
}

bool Fabric::PlaneTable::Statistics::PlaneStatsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane-id" || name == "rx-data-cells" || name == "tx-data-cells" || name == "rx-correctable-error-cells" || name == "rx-un-correctable-error-cells" || name == "rx-parity-error-cells")
        return true;
    return false;
}

Fabric::PlaneTable::Plane::Plane()
    :
    detail_plane_info(this, {})
{

    yang_name = "plane"; yang_parent_name = "plane-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Fabric::PlaneTable::Plane::~Plane()
{
}

bool Fabric::PlaneTable::Plane::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail_plane_info.len(); index++)
    {
        if(detail_plane_info[index]->has_data())
            return true;
    }
    return false;
}

bool Fabric::PlaneTable::Plane::has_operation() const
{
    for (std::size_t index=0; index<detail_plane_info.len(); index++)
    {
        if(detail_plane_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fabric::PlaneTable::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-fabric-plane-oper:fabric/plane-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Fabric::PlaneTable::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fabric::PlaneTable::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fabric::PlaneTable::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-plane-info")
    {
        auto ent_ = std::make_shared<Fabric::PlaneTable::Plane::DetailPlaneInfo>();
        ent_->parent = this;
        detail_plane_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fabric::PlaneTable::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : detail_plane_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Fabric::PlaneTable::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fabric::PlaneTable::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fabric::PlaneTable::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-plane-info")
        return true;
    return false;
}

Fabric::PlaneTable::Plane::DetailPlaneInfo::DetailPlaneInfo()
    :
    plane_id{YType::uint32, "plane-id"},
    plane_oper_status{YType::enumeration, "plane-oper-status"},
    plane_admin_status{YType::enumeration, "plane-admin-status"},
    plane_mode{YType::enumeration, "plane-mode"},
    bundles{YType::uint16, "bundles"},
    down_bundles{YType::uint16, "down-bundles"},
    plane_up_down_count{YType::uint32, "plane-up-down-count"},
    up_multicast_count{YType::uint32, "up-multicast-count"},
    ppu_state{YType::str, "ppu-state"}
{

    yang_name = "detail-plane-info"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = false; 
}

Fabric::PlaneTable::Plane::DetailPlaneInfo::~DetailPlaneInfo()
{
}

bool Fabric::PlaneTable::Plane::DetailPlaneInfo::has_data() const
{
    if (is_presence_container) return true;
    return plane_id.is_set
	|| plane_oper_status.is_set
	|| plane_admin_status.is_set
	|| plane_mode.is_set
	|| bundles.is_set
	|| down_bundles.is_set
	|| plane_up_down_count.is_set
	|| up_multicast_count.is_set
	|| ppu_state.is_set;
}

bool Fabric::PlaneTable::Plane::DetailPlaneInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(plane_oper_status.yfilter)
	|| ydk::is_set(plane_admin_status.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(plane_up_down_count.yfilter)
	|| ydk::is_set(up_multicast_count.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Fabric::PlaneTable::Plane::DetailPlaneInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-fabric-plane-oper:fabric/plane-table/plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Fabric::PlaneTable::Plane::DetailPlaneInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-plane-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fabric::PlaneTable::Plane::DetailPlaneInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (plane_oper_status.is_set || is_set(plane_oper_status.yfilter)) leaf_name_data.push_back(plane_oper_status.get_name_leafdata());
    if (plane_admin_status.is_set || is_set(plane_admin_status.yfilter)) leaf_name_data.push_back(plane_admin_status.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (bundles.is_set || is_set(bundles.yfilter)) leaf_name_data.push_back(bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (plane_up_down_count.is_set || is_set(plane_up_down_count.yfilter)) leaf_name_data.push_back(plane_up_down_count.get_name_leafdata());
    if (up_multicast_count.is_set || is_set(up_multicast_count.yfilter)) leaf_name_data.push_back(up_multicast_count.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Fabric::PlaneTable::Plane::DetailPlaneInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Fabric::PlaneTable::Plane::DetailPlaneInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Fabric::PlaneTable::Plane::DetailPlaneInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane-id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-oper-status")
    {
        plane_oper_status = value;
        plane_oper_status.value_namespace = name_space;
        plane_oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-admin-status")
    {
        plane_admin_status = value;
        plane_admin_status.value_namespace = name_space;
        plane_admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundles")
    {
        bundles = value;
        bundles.value_namespace = name_space;
        bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-up-down-count")
    {
        plane_up_down_count = value;
        plane_up_down_count.value_namespace = name_space;
        plane_up_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-multicast-count")
    {
        up_multicast_count = value;
        up_multicast_count.value_namespace = name_space;
        up_multicast_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu-state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Fabric::PlaneTable::Plane::DetailPlaneInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane-id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "plane-oper-status")
    {
        plane_oper_status.yfilter = yfilter;
    }
    if(value_path == "plane-admin-status")
    {
        plane_admin_status.yfilter = yfilter;
    }
    if(value_path == "plane-mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "bundles")
    {
        bundles.yfilter = yfilter;
    }
    if(value_path == "down-bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "plane-up-down-count")
    {
        plane_up_down_count.yfilter = yfilter;
    }
    if(value_path == "up-multicast-count")
    {
        up_multicast_count.yfilter = yfilter;
    }
    if(value_path == "ppu-state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Fabric::PlaneTable::Plane::DetailPlaneInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane-id" || name == "plane-oper-status" || name == "plane-admin-status" || name == "plane-mode" || name == "bundles" || name == "down-bundles" || name == "plane-up-down-count" || name == "up-multicast-count" || name == "ppu-state")
        return true;
    return false;
}

const Enum::YLeaf FsdbPlaneMode::plane_mode_unknown {0, "plane-mode-unknown"};
const Enum::YLeaf FsdbPlaneMode::plane_mode_sc {1, "plane-mode-sc"};
const Enum::YLeaf FsdbPlaneMode::plane_mode_b2b {2, "plane-mode-b2b"};
const Enum::YLeaf FsdbPlaneMode::plane_mode_mc {3, "plane-mode-mc"};
const Enum::YLeaf FsdbPlaneMode::plane_mode_folded {4, "plane-mode-folded"};

const Enum::YLeaf FsdbPlaneAdminState::plane_state_admin_up {0, "plane-state-admin-up"};
const Enum::YLeaf FsdbPlaneAdminState::plane_state_admin_down {1, "plane-state-admin-down"};

const Enum::YLeaf FsdbPlaneOperState::plane_state_oper_up {0, "plane-state-oper-up"};
const Enum::YLeaf FsdbPlaneOperState::plane_state_oper_down {1, "plane-state-oper-down"};
const Enum::YLeaf FsdbPlaneOperState::plane_state_oper_mcast_down {2, "plane-state-oper-mcast-down"};


}
}

