
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_terminal_device_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_terminal_device_oper {

OpticalInterface::OpticalInterface()
    :
    config_status(std::make_shared<OpticalInterface::ConfigStatus>())
	,optical_channel_interfaces(std::make_shared<OpticalInterface::OpticalChannelInterfaces>())
	,graph(std::make_shared<OpticalInterface::Graph>())
	,operational_modes(std::make_shared<OpticalInterface::OperationalModes>())
	,optical_logical_interfaces(std::make_shared<OpticalInterface::OpticalLogicalInterfaces>())
{
    config_status->parent = this;
    optical_channel_interfaces->parent = this;
    graph->parent = this;
    operational_modes->parent = this;
    optical_logical_interfaces->parent = this;

    yang_name = "optical-interface"; yang_parent_name = "Cisco-IOS-XR-terminal-device-oper"; is_top_level_class = true; has_list_ancestor = false;
}

OpticalInterface::~OpticalInterface()
{
}

bool OpticalInterface::has_data() const
{
    return (config_status !=  nullptr && config_status->has_data())
	|| (optical_channel_interfaces !=  nullptr && optical_channel_interfaces->has_data())
	|| (graph !=  nullptr && graph->has_data())
	|| (operational_modes !=  nullptr && operational_modes->has_data())
	|| (optical_logical_interfaces !=  nullptr && optical_logical_interfaces->has_data());
}

bool OpticalInterface::has_operation() const
{
    return is_set(yfilter)
	|| (config_status !=  nullptr && config_status->has_operation())
	|| (optical_channel_interfaces !=  nullptr && optical_channel_interfaces->has_operation())
	|| (graph !=  nullptr && graph->has_operation())
	|| (operational_modes !=  nullptr && operational_modes->has_operation())
	|| (optical_logical_interfaces !=  nullptr && optical_logical_interfaces->has_operation());
}

std::string OpticalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-status")
    {
        if(config_status == nullptr)
        {
            config_status = std::make_shared<OpticalInterface::ConfigStatus>();
        }
        return config_status;
    }

    if(child_yang_name == "optical-channel-interfaces")
    {
        if(optical_channel_interfaces == nullptr)
        {
            optical_channel_interfaces = std::make_shared<OpticalInterface::OpticalChannelInterfaces>();
        }
        return optical_channel_interfaces;
    }

    if(child_yang_name == "graph")
    {
        if(graph == nullptr)
        {
            graph = std::make_shared<OpticalInterface::Graph>();
        }
        return graph;
    }

    if(child_yang_name == "operational-modes")
    {
        if(operational_modes == nullptr)
        {
            operational_modes = std::make_shared<OpticalInterface::OperationalModes>();
        }
        return operational_modes;
    }

    if(child_yang_name == "optical-logical-interfaces")
    {
        if(optical_logical_interfaces == nullptr)
        {
            optical_logical_interfaces = std::make_shared<OpticalInterface::OpticalLogicalInterfaces>();
        }
        return optical_logical_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_status != nullptr)
    {
        children["config-status"] = config_status;
    }

    if(optical_channel_interfaces != nullptr)
    {
        children["optical-channel-interfaces"] = optical_channel_interfaces;
    }

    if(graph != nullptr)
    {
        children["graph"] = graph;
    }

    if(operational_modes != nullptr)
    {
        children["operational-modes"] = operational_modes;
    }

    if(optical_logical_interfaces != nullptr)
    {
        children["optical-logical-interfaces"] = optical_logical_interfaces;
    }

    return children;
}

void OpticalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OpticalInterface::clone_ptr() const
{
    return std::make_shared<OpticalInterface>();
}

std::string OpticalInterface::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OpticalInterface::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OpticalInterface::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OpticalInterface::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OpticalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-status" || name == "optical-channel-interfaces" || name == "graph" || name == "operational-modes" || name == "optical-logical-interfaces")
        return true;
    return false;
}

OpticalInterface::ConfigStatus::ConfigStatus()
    :
    partial_config(std::make_shared<OpticalInterface::ConfigStatus::PartialConfig>())
	,slice_tables(std::make_shared<OpticalInterface::ConfigStatus::SliceTables>())
{
    partial_config->parent = this;
    slice_tables->parent = this;

    yang_name = "config-status"; yang_parent_name = "optical-interface"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::ConfigStatus::~ConfigStatus()
{
}

bool OpticalInterface::ConfigStatus::has_data() const
{
    return (partial_config !=  nullptr && partial_config->has_data())
	|| (slice_tables !=  nullptr && slice_tables->has_data());
}

bool OpticalInterface::ConfigStatus::has_operation() const
{
    return is_set(yfilter)
	|| (partial_config !=  nullptr && partial_config->has_operation())
	|| (slice_tables !=  nullptr && slice_tables->has_operation());
}

std::string OpticalInterface::ConfigStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::ConfigStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::ConfigStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "partial-config")
    {
        if(partial_config == nullptr)
        {
            partial_config = std::make_shared<OpticalInterface::ConfigStatus::PartialConfig>();
        }
        return partial_config;
    }

    if(child_yang_name == "slice-tables")
    {
        if(slice_tables == nullptr)
        {
            slice_tables = std::make_shared<OpticalInterface::ConfigStatus::SliceTables>();
        }
        return slice_tables;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::ConfigStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(partial_config != nullptr)
    {
        children["partial-config"] = partial_config;
    }

    if(slice_tables != nullptr)
    {
        children["slice-tables"] = slice_tables;
    }

    return children;
}

void OpticalInterface::ConfigStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::ConfigStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalInterface::ConfigStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partial-config" || name == "slice-tables")
        return true;
    return false;
}

OpticalInterface::ConfigStatus::PartialConfig::PartialConfig()
    :
    partial_config{YType::uint8, "partial-config"}
{

    yang_name = "partial-config"; yang_parent_name = "config-status"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::ConfigStatus::PartialConfig::~PartialConfig()
{
}

bool OpticalInterface::ConfigStatus::PartialConfig::has_data() const
{
    return partial_config.is_set;
}

bool OpticalInterface::ConfigStatus::PartialConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partial_config.yfilter);
}

std::string OpticalInterface::ConfigStatus::PartialConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/config-status/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::ConfigStatus::PartialConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partial-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::ConfigStatus::PartialConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partial_config.is_set || is_set(partial_config.yfilter)) leaf_name_data.push_back(partial_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::PartialConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::ConfigStatus::PartialConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::ConfigStatus::PartialConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partial-config")
    {
        partial_config = value;
        partial_config.value_namespace = name_space;
        partial_config.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::ConfigStatus::PartialConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partial-config")
    {
        partial_config.yfilter = yfilter;
    }
}

bool OpticalInterface::ConfigStatus::PartialConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partial-config")
        return true;
    return false;
}

OpticalInterface::ConfigStatus::SliceTables::SliceTables()
{

    yang_name = "slice-tables"; yang_parent_name = "config-status"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::ConfigStatus::SliceTables::~SliceTables()
{
}

bool OpticalInterface::ConfigStatus::SliceTables::has_data() const
{
    for (std::size_t index=0; index<slice_table.size(); index++)
    {
        if(slice_table[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::ConfigStatus::SliceTables::has_operation() const
{
    for (std::size_t index=0; index<slice_table.size(); index++)
    {
        if(slice_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalInterface::ConfigStatus::SliceTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/config-status/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::ConfigStatus::SliceTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::ConfigStatus::SliceTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::SliceTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-table")
    {
        for(auto const & c : slice_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticalInterface::ConfigStatus::SliceTables::SliceTable>();
        c->parent = this;
        slice_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::ConfigStatus::SliceTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slice_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticalInterface::ConfigStatus::SliceTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::ConfigStatus::SliceTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalInterface::ConfigStatus::SliceTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-table")
        return true;
    return false;
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceTable()
    :
    index_{YType::int32, "index"}
    	,
    slice_status_attr(std::make_shared<OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr>())
{
    slice_status_attr->parent = this;

    yang_name = "slice-table"; yang_parent_name = "slice-tables"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::~SliceTable()
{
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::has_data() const
{
    return index_.is_set
	|| (slice_status_attr !=  nullptr && slice_status_attr->has_data());
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (slice_status_attr !=  nullptr && slice_status_attr->has_operation());
}

std::string OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/config-status/slice-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-table" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-status-attr")
    {
        if(slice_status_attr == nullptr)
        {
            slice_status_attr = std::make_shared<OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr>();
        }
        return slice_status_attr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::ConfigStatus::SliceTables::SliceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slice_status_attr != nullptr)
    {
        children["slice-status-attr"] = slice_status_attr;
    }

    return children;
}

void OpticalInterface::ConfigStatus::SliceTables::SliceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::ConfigStatus::SliceTables::SliceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-status-attr" || name == "index")
        return true;
    return false;
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::SliceStatusAttr()
    :
    slice{YType::uint8, "slice"},
    prov_status{YType::str, "prov-status"},
    present_config{YType::str, "present-config"},
    present_timestamp{YType::str, "present-timestamp"},
    past_config{YType::str, "past-config"},
    past_timestamp{YType::str, "past-timestamp"},
    err_str{YType::str, "err-str"},
    err_timestamp{YType::str, "err-timestamp"}
{

    yang_name = "slice-status-attr"; yang_parent_name = "slice-table"; is_top_level_class = false; has_list_ancestor = true;
}

OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::~SliceStatusAttr()
{
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::has_data() const
{
    return slice.is_set
	|| prov_status.is_set
	|| present_config.is_set
	|| present_timestamp.is_set
	|| past_config.is_set
	|| past_timestamp.is_set
	|| err_str.is_set
	|| err_timestamp.is_set;
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice.yfilter)
	|| ydk::is_set(prov_status.yfilter)
	|| ydk::is_set(present_config.yfilter)
	|| ydk::is_set(present_timestamp.yfilter)
	|| ydk::is_set(past_config.yfilter)
	|| ydk::is_set(past_timestamp.yfilter)
	|| ydk::is_set(err_str.yfilter)
	|| ydk::is_set(err_timestamp.yfilter);
}

std::string OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-status-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice.is_set || is_set(slice.yfilter)) leaf_name_data.push_back(slice.get_name_leafdata());
    if (prov_status.is_set || is_set(prov_status.yfilter)) leaf_name_data.push_back(prov_status.get_name_leafdata());
    if (present_config.is_set || is_set(present_config.yfilter)) leaf_name_data.push_back(present_config.get_name_leafdata());
    if (present_timestamp.is_set || is_set(present_timestamp.yfilter)) leaf_name_data.push_back(present_timestamp.get_name_leafdata());
    if (past_config.is_set || is_set(past_config.yfilter)) leaf_name_data.push_back(past_config.get_name_leafdata());
    if (past_timestamp.is_set || is_set(past_timestamp.yfilter)) leaf_name_data.push_back(past_timestamp.get_name_leafdata());
    if (err_str.is_set || is_set(err_str.yfilter)) leaf_name_data.push_back(err_str.get_name_leafdata());
    if (err_timestamp.is_set || is_set(err_timestamp.yfilter)) leaf_name_data.push_back(err_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice")
    {
        slice = value;
        slice.value_namespace = name_space;
        slice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prov-status")
    {
        prov_status = value;
        prov_status.value_namespace = name_space;
        prov_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "present-config")
    {
        present_config = value;
        present_config.value_namespace = name_space;
        present_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "present-timestamp")
    {
        present_timestamp = value;
        present_timestamp.value_namespace = name_space;
        present_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "past-config")
    {
        past_config = value;
        past_config.value_namespace = name_space;
        past_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "past-timestamp")
    {
        past_timestamp = value;
        past_timestamp.value_namespace = name_space;
        past_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-str")
    {
        err_str = value;
        err_str.value_namespace = name_space;
        err_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-timestamp")
    {
        err_timestamp = value;
        err_timestamp.value_namespace = name_space;
        err_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice")
    {
        slice.yfilter = yfilter;
    }
    if(value_path == "prov-status")
    {
        prov_status.yfilter = yfilter;
    }
    if(value_path == "present-config")
    {
        present_config.yfilter = yfilter;
    }
    if(value_path == "present-timestamp")
    {
        present_timestamp.yfilter = yfilter;
    }
    if(value_path == "past-config")
    {
        past_config.yfilter = yfilter;
    }
    if(value_path == "past-timestamp")
    {
        past_timestamp.yfilter = yfilter;
    }
    if(value_path == "err-str")
    {
        err_str.yfilter = yfilter;
    }
    if(value_path == "err-timestamp")
    {
        err_timestamp.yfilter = yfilter;
    }
}

bool OpticalInterface::ConfigStatus::SliceTables::SliceTable::SliceStatusAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice" || name == "prov-status" || name == "present-config" || name == "present-timestamp" || name == "past-config" || name == "past-timestamp" || name == "err-str" || name == "err-timestamp")
        return true;
    return false;
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterfaces()
{

    yang_name = "optical-channel-interfaces"; yang_parent_name = "optical-interface"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::OpticalChannelInterfaces::~OpticalChannelInterfaces()
{
}

bool OpticalInterface::OpticalChannelInterfaces::has_data() const
{
    for (std::size_t index=0; index<optical_channel_interface.size(); index++)
    {
        if(optical_channel_interface[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalChannelInterfaces::has_operation() const
{
    for (std::size_t index=0; index<optical_channel_interface.size(); index++)
    {
        if(optical_channel_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalInterface::OpticalChannelInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::OpticalChannelInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalChannelInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalChannelInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-channel-interface")
    {
        for(auto const & c : optical_channel_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface>();
        c->parent = this;
        optical_channel_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalChannelInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optical_channel_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticalInterface::OpticalChannelInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::OpticalChannelInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalInterface::OpticalChannelInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-channel-interface")
        return true;
    return false;
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterface()
    :
    location{YType::str, "location"}
    	,
    optical_channel_interface_attr(std::make_shared<OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr>())
{
    optical_channel_interface_attr->parent = this;

    yang_name = "optical-channel-interface"; yang_parent_name = "optical-channel-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::~OpticalChannelInterface()
{
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::has_data() const
{
    return location.is_set
	|| (optical_channel_interface_attr !=  nullptr && optical_channel_interface_attr->has_data());
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (optical_channel_interface_attr !=  nullptr && optical_channel_interface_attr->has_operation());
}

std::string OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/optical-channel-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel-interface" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-channel-interface-attr")
    {
        if(optical_channel_interface_attr == nullptr)
        {
            optical_channel_interface_attr = std::make_shared<OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr>();
        }
        return optical_channel_interface_attr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_channel_interface_attr != nullptr)
    {
        children["optical-channel-interface-attr"] = optical_channel_interface_attr;
    }

    return children;
}

void OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-channel-interface-attr" || name == "location")
        return true;
    return false;
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::OpticalChannelInterfaceAttr()
    :
    name{YType::str, "name"},
    index_{YType::uint32, "index"},
    frequency{YType::uint64, "frequency"},
    power{YType::uint64, "power"},
    oper_mode{YType::uint32, "oper-mode"},
    line_port{YType::str, "line-port"}
{

    yang_name = "optical-channel-interface-attr"; yang_parent_name = "optical-channel-interface"; is_top_level_class = false; has_list_ancestor = true;
}

OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::~OpticalChannelInterfaceAttr()
{
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::has_data() const
{
    return name.is_set
	|| index_.is_set
	|| frequency.is_set
	|| power.is_set
	|| oper_mode.is_set
	|| line_port.is_set;
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(power.yfilter)
	|| ydk::is_set(oper_mode.yfilter)
	|| ydk::is_set(line_port.yfilter);
}

std::string OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel-interface-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());
    if (oper_mode.is_set || is_set(oper_mode.yfilter)) leaf_name_data.push_back(oper_mode.get_name_leafdata());
    if (line_port.is_set || is_set(line_port.yfilter)) leaf_name_data.push_back(line_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-mode")
    {
        oper_mode = value;
        oper_mode.value_namespace = name_space;
        oper_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port")
    {
        line_port = value;
        line_port.value_namespace = name_space;
        line_port.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
    if(value_path == "oper-mode")
    {
        oper_mode.yfilter = yfilter;
    }
    if(value_path == "line-port")
    {
        line_port.yfilter = yfilter;
    }
}

bool OpticalInterface::OpticalChannelInterfaces::OpticalChannelInterface::OpticalChannelInterfaceAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "index" || name == "frequency" || name == "power" || name == "oper-mode" || name == "line-port")
        return true;
    return false;
}

OpticalInterface::Graph::Graph()
    :
    adj_list_path(std::make_shared<OpticalInterface::Graph::AdjListPath>())
	,graph_structure_path(std::make_shared<OpticalInterface::Graph::GraphStructurePath>())
{
    adj_list_path->parent = this;
    graph_structure_path->parent = this;

    yang_name = "graph"; yang_parent_name = "optical-interface"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::Graph::~Graph()
{
}

bool OpticalInterface::Graph::has_data() const
{
    return (adj_list_path !=  nullptr && adj_list_path->has_data())
	|| (graph_structure_path !=  nullptr && graph_structure_path->has_data());
}

bool OpticalInterface::Graph::has_operation() const
{
    return is_set(yfilter)
	|| (adj_list_path !=  nullptr && adj_list_path->has_operation())
	|| (graph_structure_path !=  nullptr && graph_structure_path->has_operation());
}

std::string OpticalInterface::Graph::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::Graph::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graph";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::Graph::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::Graph::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-list-path")
    {
        if(adj_list_path == nullptr)
        {
            adj_list_path = std::make_shared<OpticalInterface::Graph::AdjListPath>();
        }
        return adj_list_path;
    }

    if(child_yang_name == "graph-structure-path")
    {
        if(graph_structure_path == nullptr)
        {
            graph_structure_path = std::make_shared<OpticalInterface::Graph::GraphStructurePath>();
        }
        return graph_structure_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::Graph::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adj_list_path != nullptr)
    {
        children["adj-list-path"] = adj_list_path;
    }

    if(graph_structure_path != nullptr)
    {
        children["graph-structure-path"] = graph_structure_path;
    }

    return children;
}

void OpticalInterface::Graph::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::Graph::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalInterface::Graph::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-list-path" || name == "graph-structure-path")
        return true;
    return false;
}

OpticalInterface::Graph::AdjListPath::AdjListPath()
    :
    path{YType::str, "path"}
{

    yang_name = "adj-list-path"; yang_parent_name = "graph"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::Graph::AdjListPath::~AdjListPath()
{
}

bool OpticalInterface::Graph::AdjListPath::has_data() const
{
    return path.is_set;
}

bool OpticalInterface::Graph::AdjListPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string OpticalInterface::Graph::AdjListPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/graph/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::Graph::AdjListPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-list-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::Graph::AdjListPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::Graph::AdjListPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::Graph::AdjListPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::Graph::AdjListPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::Graph::AdjListPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool OpticalInterface::Graph::AdjListPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

OpticalInterface::Graph::GraphStructurePath::GraphStructurePath()
    :
    path{YType::str, "path"}
{

    yang_name = "graph-structure-path"; yang_parent_name = "graph"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::Graph::GraphStructurePath::~GraphStructurePath()
{
}

bool OpticalInterface::Graph::GraphStructurePath::has_data() const
{
    return path.is_set;
}

bool OpticalInterface::Graph::GraphStructurePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string OpticalInterface::Graph::GraphStructurePath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/graph/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::Graph::GraphStructurePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graph-structure-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::Graph::GraphStructurePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::Graph::GraphStructurePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::Graph::GraphStructurePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::Graph::GraphStructurePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::Graph::GraphStructurePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool OpticalInterface::Graph::GraphStructurePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

OpticalInterface::OperationalModes::OperationalModes()
{

    yang_name = "operational-modes"; yang_parent_name = "optical-interface"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::OperationalModes::~OperationalModes()
{
}

bool OpticalInterface::OperationalModes::has_data() const
{
    for (std::size_t index=0; index<operational_mode.size(); index++)
    {
        if(operational_mode[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OperationalModes::has_operation() const
{
    for (std::size_t index=0; index<operational_mode.size(); index++)
    {
        if(operational_mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalInterface::OperationalModes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::OperationalModes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-modes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OperationalModes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OperationalModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-mode")
    {
        for(auto const & c : operational_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticalInterface::OperationalModes::OperationalMode>();
        c->parent = this;
        operational_mode.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OperationalModes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operational_mode)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticalInterface::OperationalModes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::OperationalModes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalInterface::OperationalModes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-mode")
        return true;
    return false;
}

OpticalInterface::OperationalModes::OperationalMode::OperationalMode()
    :
    mode_id{YType::int32, "mode-id"}
    	,
    operational_mode_attributes(std::make_shared<OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes>())
{
    operational_mode_attributes->parent = this;

    yang_name = "operational-mode"; yang_parent_name = "operational-modes"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::OperationalModes::OperationalMode::~OperationalMode()
{
}

bool OpticalInterface::OperationalModes::OperationalMode::has_data() const
{
    return mode_id.is_set
	|| (operational_mode_attributes !=  nullptr && operational_mode_attributes->has_data());
}

bool OpticalInterface::OperationalModes::OperationalMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| (operational_mode_attributes !=  nullptr && operational_mode_attributes->has_operation());
}

std::string OpticalInterface::OperationalModes::OperationalMode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/operational-modes/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::OperationalModes::OperationalMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-mode" <<"[mode-id='" <<mode_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OperationalModes::OperationalMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OperationalModes::OperationalMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-mode-attributes")
    {
        if(operational_mode_attributes == nullptr)
        {
            operational_mode_attributes = std::make_shared<OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes>();
        }
        return operational_mode_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OperationalModes::OperationalMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_mode_attributes != nullptr)
    {
        children["operational-mode-attributes"] = operational_mode_attributes;
    }

    return children;
}

void OpticalInterface::OperationalModes::OperationalMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-id")
    {
        mode_id = value;
        mode_id.value_namespace = name_space;
        mode_id.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OperationalModes::OperationalMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-id")
    {
        mode_id.yfilter = yfilter;
    }
}

bool OpticalInterface::OperationalModes::OperationalMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-mode-attributes" || name == "mode-id")
        return true;
    return false;
}

OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::OperationalModeAttributes()
    :
    description{YType::str, "description"},
    vendor_id{YType::str, "vendor-id"}
{

    yang_name = "operational-mode-attributes"; yang_parent_name = "operational-mode"; is_top_level_class = false; has_list_ancestor = true;
}

OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::~OperationalModeAttributes()
{
}

bool OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::has_data() const
{
    return description.is_set
	|| vendor_id.is_set;
}

bool OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_id.yfilter);
}

std::string OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-mode-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_id.is_set || is_set(vendor_id.yfilter)) leaf_name_data.push_back(vendor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-id")
    {
        vendor_id = value;
        vendor_id.value_namespace = name_space;
        vendor_id.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-id")
    {
        vendor_id.yfilter = yfilter;
    }
}

bool OpticalInterface::OperationalModes::OperationalMode::OperationalModeAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-id")
        return true;
    return false;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterfaces()
{

    yang_name = "optical-logical-interfaces"; yang_parent_name = "optical-interface"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::OpticalLogicalInterfaces::~OpticalLogicalInterfaces()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::has_data() const
{
    for (std::size_t index=0; index<optical_logical_interface.size(); index++)
    {
        if(optical_logical_interface[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalLogicalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<optical_logical_interface.size(); index++)
    {
        if(optical_logical_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalInterface::OpticalLogicalInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::OpticalLogicalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalLogicalInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-logical-interface")
    {
        for(auto const & c : optical_logical_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface>();
        c->parent = this;
        optical_logical_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalLogicalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optical_logical_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::OpticalLogicalInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalInterface::OpticalLogicalInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-logical-interface")
        return true;
    return false;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterface()
    :
    index_{YType::int32, "index"}
    	,
    optical_logical_interface_attr(std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr>())
	,optical_logical_interface_logical_channel_assignments(std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments>())
{
    optical_logical_interface_attr->parent = this;
    optical_logical_interface_logical_channel_assignments->parent = this;

    yang_name = "optical-logical-interface"; yang_parent_name = "optical-logical-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::~OpticalLogicalInterface()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::has_data() const
{
    return index_.is_set
	|| (optical_logical_interface_attr !=  nullptr && optical_logical_interface_attr->has_data())
	|| (optical_logical_interface_logical_channel_assignments !=  nullptr && optical_logical_interface_logical_channel_assignments->has_data());
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (optical_logical_interface_attr !=  nullptr && optical_logical_interface_attr->has_operation())
	|| (optical_logical_interface_logical_channel_assignments !=  nullptr && optical_logical_interface_logical_channel_assignments->has_operation());
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-oper:optical-interface/optical-logical-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-logical-interface-attr")
    {
        if(optical_logical_interface_attr == nullptr)
        {
            optical_logical_interface_attr = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr>();
        }
        return optical_logical_interface_attr;
    }

    if(child_yang_name == "optical-logical-interface-logical-channel-assignments")
    {
        if(optical_logical_interface_logical_channel_assignments == nullptr)
        {
            optical_logical_interface_logical_channel_assignments = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments>();
        }
        return optical_logical_interface_logical_channel_assignments;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_logical_interface_attr != nullptr)
    {
        children["optical-logical-interface-attr"] = optical_logical_interface_attr;
    }

    if(optical_logical_interface_logical_channel_assignments != nullptr)
    {
        children["optical-logical-interface-logical-channel-assignments"] = optical_logical_interface_logical_channel_assignments;
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-logical-interface-attr" || name == "optical-logical-interface-logical-channel-assignments" || name == "index")
        return true;
    return false;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::OpticalLogicalInterfaceAttr()
    :
    logical_channel_index{YType::uint32, "logical-channel-index"},
    logical_channel_ifname{YType::str, "logical-channel-ifname"},
    type{YType::str, "type"},
    trib_rate_class{YType::enumeration, "trib-rate-class"},
    trib_protocol{YType::enumeration, "trib-protocol"},
    protocol_type{YType::enumeration, "protocol-type"},
    admin_state{YType::uint32, "admin-state"},
    loopback_mode{YType::uint32, "loopback-mode"},
    ingress_client_port{YType::str, "ingress-client-port"},
    ingress_physical_channel{YType::uint32, "ingress-physical-channel"},
    tti_transmit{YType::str, "tti-transmit"},
    tti_expected{YType::str, "tti-expected"}
{

    yang_name = "optical-logical-interface-attr"; yang_parent_name = "optical-logical-interface"; is_top_level_class = false; has_list_ancestor = true;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::~OpticalLogicalInterfaceAttr()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::has_data() const
{
    return logical_channel_index.is_set
	|| logical_channel_ifname.is_set
	|| type.is_set
	|| trib_rate_class.is_set
	|| trib_protocol.is_set
	|| protocol_type.is_set
	|| admin_state.is_set
	|| loopback_mode.is_set
	|| ingress_client_port.is_set
	|| ingress_physical_channel.is_set
	|| tti_transmit.is_set
	|| tti_expected.is_set;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logical_channel_index.yfilter)
	|| ydk::is_set(logical_channel_ifname.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(trib_rate_class.yfilter)
	|| ydk::is_set(trib_protocol.yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(ingress_client_port.yfilter)
	|| ydk::is_set(ingress_physical_channel.yfilter)
	|| ydk::is_set(tti_transmit.yfilter)
	|| ydk::is_set(tti_expected.yfilter);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logical_channel_index.is_set || is_set(logical_channel_index.yfilter)) leaf_name_data.push_back(logical_channel_index.get_name_leafdata());
    if (logical_channel_ifname.is_set || is_set(logical_channel_ifname.yfilter)) leaf_name_data.push_back(logical_channel_ifname.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (trib_rate_class.is_set || is_set(trib_rate_class.yfilter)) leaf_name_data.push_back(trib_rate_class.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.yfilter)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (ingress_client_port.is_set || is_set(ingress_client_port.yfilter)) leaf_name_data.push_back(ingress_client_port.get_name_leafdata());
    if (ingress_physical_channel.is_set || is_set(ingress_physical_channel.yfilter)) leaf_name_data.push_back(ingress_physical_channel.get_name_leafdata());
    if (tti_transmit.is_set || is_set(tti_transmit.yfilter)) leaf_name_data.push_back(tti_transmit.get_name_leafdata());
    if (tti_expected.is_set || is_set(tti_expected.yfilter)) leaf_name_data.push_back(tti_expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logical-channel-index")
    {
        logical_channel_index = value;
        logical_channel_index.value_namespace = name_space;
        logical_channel_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel-ifname")
    {
        logical_channel_ifname = value;
        logical_channel_ifname.value_namespace = name_space;
        logical_channel_ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trib-rate-class")
    {
        trib_rate_class = value;
        trib_rate_class.value_namespace = name_space;
        trib_rate_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
        trib_protocol.value_namespace = name_space;
        trib_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-client-port")
    {
        ingress_client_port = value;
        ingress_client_port.value_namespace = name_space;
        ingress_client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-physical-channel")
    {
        ingress_physical_channel = value;
        ingress_physical_channel.value_namespace = name_space;
        ingress_physical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-transmit")
    {
        tti_transmit = value;
        tti_transmit.value_namespace = name_space;
        tti_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-expected")
    {
        tti_expected = value;
        tti_expected.value_namespace = name_space;
        tti_expected.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logical-channel-index")
    {
        logical_channel_index.yfilter = yfilter;
    }
    if(value_path == "logical-channel-ifname")
    {
        logical_channel_ifname.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "trib-rate-class")
    {
        trib_rate_class.yfilter = yfilter;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol.yfilter = yfilter;
    }
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
    if(value_path == "ingress-client-port")
    {
        ingress_client_port.yfilter = yfilter;
    }
    if(value_path == "ingress-physical-channel")
    {
        ingress_physical_channel.yfilter = yfilter;
    }
    if(value_path == "tti-transmit")
    {
        tti_transmit.yfilter = yfilter;
    }
    if(value_path == "tti-expected")
    {
        tti_expected.yfilter = yfilter;
    }
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logical-channel-index" || name == "logical-channel-ifname" || name == "type" || name == "trib-rate-class" || name == "trib-protocol" || name == "protocol-type" || name == "admin-state" || name == "loopback-mode" || name == "ingress-client-port" || name == "ingress-physical-channel" || name == "tti-transmit" || name == "tti-expected")
        return true;
    return false;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignments()
{

    yang_name = "optical-logical-interface-logical-channel-assignments"; yang_parent_name = "optical-logical-interface"; is_top_level_class = false; has_list_ancestor = true;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::~OpticalLogicalInterfaceLogicalChannelAssignments()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::has_data() const
{
    for (std::size_t index=0; index<optical_logical_interface_logical_channel_assignment.size(); index++)
    {
        if(optical_logical_interface_logical_channel_assignment[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<optical_logical_interface_logical_channel_assignment.size(); index++)
    {
        if(optical_logical_interface_logical_channel_assignment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-logical-interface-logical-channel-assignment")
    {
        for(auto const & c : optical_logical_interface_logical_channel_assignment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment>();
        c->parent = this;
        optical_logical_interface_logical_channel_assignment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optical_logical_interface_logical_channel_assignment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-logical-interface-logical-channel-assignment")
        return true;
    return false;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignment()
    :
    index_{YType::int32, "index"}
    	,
    optical_logical_interface_logical_channel_assignment_attr(std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr>())
{
    optical_logical_interface_logical_channel_assignment_attr->parent = this;

    yang_name = "optical-logical-interface-logical-channel-assignment"; yang_parent_name = "optical-logical-interface-logical-channel-assignments"; is_top_level_class = false; has_list_ancestor = true;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::~OpticalLogicalInterfaceLogicalChannelAssignment()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::has_data() const
{
    return index_.is_set
	|| (optical_logical_interface_logical_channel_assignment_attr !=  nullptr && optical_logical_interface_logical_channel_assignment_attr->has_data());
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (optical_logical_interface_logical_channel_assignment_attr !=  nullptr && optical_logical_interface_logical_channel_assignment_attr->has_operation());
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignment" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-logical-interface-logical-channel-assignment-attr")
    {
        if(optical_logical_interface_logical_channel_assignment_attr == nullptr)
        {
            optical_logical_interface_logical_channel_assignment_attr = std::make_shared<OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr>();
        }
        return optical_logical_interface_logical_channel_assignment_attr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optical_logical_interface_logical_channel_assignment_attr != nullptr)
    {
        children["optical-logical-interface-logical-channel-assignment-attr"] = optical_logical_interface_logical_channel_assignment_attr;
    }

    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-logical-interface-logical-channel-assignment-attr" || name == "index")
        return true;
    return false;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::OpticalLogicalInterfaceLogicalChannelAssignmentAttr()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    is_logical_link{YType::boolean, "is-logical-link"},
    logical_channel{YType::uint32, "logical-channel"},
    optical_channel{YType::str, "optical-channel"},
    allocation{YType::uint32, "allocation"},
    assignment_type{YType::uint32, "assignment-type"}
{

    yang_name = "optical-logical-interface-logical-channel-assignment-attr"; yang_parent_name = "optical-logical-interface-logical-channel-assignment"; is_top_level_class = false; has_list_ancestor = true;
}

OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::~OpticalLogicalInterfaceLogicalChannelAssignmentAttr()
{
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::has_data() const
{
    return index_.is_set
	|| name.is_set
	|| is_logical_link.is_set
	|| logical_channel.is_set
	|| optical_channel.is_set
	|| allocation.is_set
	|| assignment_type.is_set;
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(is_logical_link.yfilter)
	|| ydk::is_set(logical_channel.yfilter)
	|| ydk::is_set(optical_channel.yfilter)
	|| ydk::is_set(allocation.yfilter)
	|| ydk::is_set(assignment_type.yfilter);
}

std::string OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-logical-interface-logical-channel-assignment-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (is_logical_link.is_set || is_set(is_logical_link.yfilter)) leaf_name_data.push_back(is_logical_link.get_name_leafdata());
    if (logical_channel.is_set || is_set(logical_channel.yfilter)) leaf_name_data.push_back(logical_channel.get_name_leafdata());
    if (optical_channel.is_set || is_set(optical_channel.yfilter)) leaf_name_data.push_back(optical_channel.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.yfilter)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.yfilter)) leaf_name_data.push_back(assignment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-logical-link")
    {
        is_logical_link = value;
        is_logical_link.value_namespace = name_space;
        is_logical_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel")
    {
        logical_channel = value;
        logical_channel.value_namespace = name_space;
        logical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-channel")
    {
        optical_channel = value;
        optical_channel.value_namespace = name_space;
        optical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation")
    {
        allocation = value;
        allocation.value_namespace = name_space;
        allocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assignment-type")
    {
        assignment_type = value;
        assignment_type.value_namespace = name_space;
        assignment_type.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "is-logical-link")
    {
        is_logical_link.yfilter = yfilter;
    }
    if(value_path == "logical-channel")
    {
        logical_channel.yfilter = yfilter;
    }
    if(value_path == "optical-channel")
    {
        optical_channel.yfilter = yfilter;
    }
    if(value_path == "allocation")
    {
        allocation.yfilter = yfilter;
    }
    if(value_path == "assignment-type")
    {
        assignment_type.yfilter = yfilter;
    }
}

bool OpticalInterface::OpticalLogicalInterfaces::OpticalLogicalInterface::OpticalLogicalInterfaceLogicalChannelAssignments::OpticalLogicalInterfaceLogicalChannelAssignment::OpticalLogicalInterfaceLogicalChannelAssignmentAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name" || name == "is-logical-link" || name == "logical-channel" || name == "optical-channel" || name == "allocation" || name == "assignment-type")
        return true;
    return false;
}

const Enum::YLeaf LogicalProtocol::proto_type_unknown {0, "proto-type-unknown"};
const Enum::YLeaf LogicalProtocol::proto_type_ethernet {1, "proto-type-ethernet"};
const Enum::YLeaf LogicalProtocol::proto_type_otn {2, "proto-type-otn"};

const Enum::YLeaf TribProtocol::trib_proto_type_unknown {0, "trib-proto-type-unknown"};
const Enum::YLeaf TribProtocol::trib_proto_type1ge {1, "trib-proto-type1ge"};
const Enum::YLeaf TribProtocol::trib_proto_type_oc48 {2, "trib-proto-type-oc48"};
const Enum::YLeaf TribProtocol::trib_proto_type_stm16 {3, "trib-proto-type-stm16"};
const Enum::YLeaf TribProtocol::trib_proto_type10gelan {4, "trib-proto-type10gelan"};
const Enum::YLeaf TribProtocol::trib_proto_type10gewan {5, "trib-proto-type10gewan"};
const Enum::YLeaf TribProtocol::trib_proto_type_oc192 {6, "trib-proto-type-oc192"};
const Enum::YLeaf TribProtocol::trib_proto_type_stm64 {7, "trib-proto-type-stm64"};
const Enum::YLeaf TribProtocol::trib_proto_type_otu2 {8, "trib-proto-type-otu2"};
const Enum::YLeaf TribProtocol::trib_proto_type_otu2e {9, "trib-proto-type-otu2e"};
const Enum::YLeaf TribProtocol::trib_proto_type_otu1e {10, "trib-proto-type-otu1e"};
const Enum::YLeaf TribProtocol::trib_proto_type_odu2 {11, "trib-proto-type-odu2"};
const Enum::YLeaf TribProtocol::trib_proto_type_odu2e {12, "trib-proto-type-odu2e"};
const Enum::YLeaf TribProtocol::trib_proto_type40ge {13, "trib-proto-type40ge"};
const Enum::YLeaf TribProtocol::trib_proto_type_oc768 {14, "trib-proto-type-oc768"};
const Enum::YLeaf TribProtocol::trib_proto_type_stm256 {15, "trib-proto-type-stm256"};
const Enum::YLeaf TribProtocol::trib_proto_type_otu3 {16, "trib-proto-type-otu3"};
const Enum::YLeaf TribProtocol::trib_proto_type_odu3 {17, "trib-proto-type-odu3"};
const Enum::YLeaf TribProtocol::trib_proto_type100ge {18, "trib-proto-type100ge"};
const Enum::YLeaf TribProtocol::trib_proto_type100g_mlg {19, "trib-proto-type100g-mlg"};
const Enum::YLeaf TribProtocol::trib_proto_type_otu4 {20, "trib-proto-type-otu4"};
const Enum::YLeaf TribProtocol::trib_proto_type_otu_cn {21, "trib-proto-type-otu-cn"};
const Enum::YLeaf TribProtocol::trib_proto_type_odu4 {22, "trib-proto-type-odu4"};

const Enum::YLeaf TribRateClass::trib_rate_unknown {0, "trib-rate-unknown"};
const Enum::YLeaf TribRateClass::trib_rate1g {1, "trib-rate1g"};
const Enum::YLeaf TribRateClass::trib_rate25g {2, "trib-rate25g"};
const Enum::YLeaf TribRateClass::trib_rate10g {3, "trib-rate10g"};
const Enum::YLeaf TribRateClass::trib_rate40g {4, "trib-rate40g"};
const Enum::YLeaf TribRateClass::trib_rate100g {5, "trib-rate100g"};


}
}

