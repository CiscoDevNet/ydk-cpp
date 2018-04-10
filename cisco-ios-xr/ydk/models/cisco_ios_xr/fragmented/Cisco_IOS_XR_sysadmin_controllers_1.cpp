
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_1.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::has_data() const
{
    for (std::size_t index=0; index<bport_stats_all_racks.size(); index++)
    {
        if(bport_stats_all_racks[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_all_racks.size(); index++)
    {
        if(bport_stats_all_racks[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/port/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_all_racks")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks>();
        c->parent = this;
        bport_stats_all_racks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bport_stats_all_racks)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_all_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsAllRacks()
    :
    idx{YType::int32, "idx"},
    total_racks{YType::uint32, "total_racks"}
{

    yang_name = "bport_stats_all_racks"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::~BportStatsAllRacks()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::has_data() const
{
    for (std::size_t index=0; index<bport_stats_rack.size(); index++)
    {
        if(bport_stats_rack[index]->has_data())
            return true;
    }
    return idx.is_set
	|| total_racks.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_rack.size(); index++)
    {
        if(bport_stats_rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(total_racks.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/port/all/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_all_racks" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (total_racks.is_set || is_set(total_racks.yfilter)) leaf_name_data.push_back(total_racks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_rack")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack>();
        c->parent = this;
        bport_stats_rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bport_stats_rack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_racks")
    {
        total_racks = value;
        total_racks.value_namespace = name_space;
        total_racks.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "total_racks")
    {
        total_racks.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_rack" || name == "idx" || name == "total_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStatsRack()
    :
    idx{YType::int32, "idx"},
    rack_num_str{YType::str, "rack_num_str"}
{

    yang_name = "bport_stats_rack"; yang_parent_name = "bport_stats_all_racks"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::~BportStatsRack()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::has_data() const
{
    for (std::size_t index=0; index<bport_stats.size(); index++)
    {
        if(bport_stats[index]->has_data())
            return true;
    }
    return idx.is_set
	|| rack_num_str.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::has_operation() const
{
    for (std::size_t index=0; index<bport_stats.size(); index++)
    {
        if(bport_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(rack_num_str.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_rack" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (rack_num_str.is_set || is_set(rack_num_str.yfilter)) leaf_name_data.push_back(rack_num_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats>();
        c->parent = this;
        bport_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bport_stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str = value;
        rack_num_str.value_namespace = name_space;
        rack_num_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats" || name == "idx" || name == "rack_num_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::BportStats()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    last_clear_ts{YType::str, "last_clear_ts"}
{

    yang_name = "bport_stats"; yang_parent_name = "bport_stats_rack"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::~BportStats()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_data() const
{
    return idx.is_set
	|| bport_id.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| last_clear_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "last_clear_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
    	,
    statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics>())
{
    statistics->parent = this;

    yang_name = "location"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::~Location()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::has_data() const
{
    for (std::size_t index=0; index<bport_all_list.size(); index++)
    {
        if(bport_all_list[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::has_operation() const
{
    for (std::size_t index=0; index<bport_all_list.size(); index++)
    {
        if(bport_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[loc_str='" <<loc_str <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_all_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList>();
        c->parent = this;
        bport_all_list.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bport_all_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_all_list" || name == "statistics" || name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::BportAllList()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"}
{

    yang_name = "bport_all_list"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::~BportAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::has_data() const
{
    return idx.is_set
	|| bport_id.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_all_list" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "admin-state" || name == "oper_state" || name == "down_flags")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::has_data() const
{
    for (std::size_t index=0; index<bport_stats_all_racks.size(); index++)
    {
        if(bport_stats_all_racks[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_all_racks.size(); index++)
    {
        if(bport_stats_all_racks[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_all_racks")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks>();
        c->parent = this;
        bport_stats_all_racks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bport_stats_all_racks)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_all_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsAllRacks()
    :
    idx{YType::int32, "idx"},
    total_racks{YType::uint32, "total_racks"}
{

    yang_name = "bport_stats_all_racks"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::~BportStatsAllRacks()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::has_data() const
{
    for (std::size_t index=0; index<bport_stats_rack.size(); index++)
    {
        if(bport_stats_rack[index]->has_data())
            return true;
    }
    return idx.is_set
	|| total_racks.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_rack.size(); index++)
    {
        if(bport_stats_rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(total_racks.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_all_racks" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (total_racks.is_set || is_set(total_racks.yfilter)) leaf_name_data.push_back(total_racks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_rack")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack>();
        c->parent = this;
        bport_stats_rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bport_stats_rack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_racks")
    {
        total_racks = value;
        total_racks.value_namespace = name_space;
        total_racks.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "total_racks")
    {
        total_racks.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_rack" || name == "idx" || name == "total_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStatsRack()
    :
    idx{YType::int32, "idx"},
    rack_num_str{YType::str, "rack_num_str"}
{

    yang_name = "bport_stats_rack"; yang_parent_name = "bport_stats_all_racks"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::~BportStatsRack()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::has_data() const
{
    for (std::size_t index=0; index<bport_stats.size(); index++)
    {
        if(bport_stats[index]->has_data())
            return true;
    }
    return idx.is_set
	|| rack_num_str.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::has_operation() const
{
    for (std::size_t index=0; index<bport_stats.size(); index++)
    {
        if(bport_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(rack_num_str.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_rack" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (rack_num_str.is_set || is_set(rack_num_str.yfilter)) leaf_name_data.push_back(rack_num_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats>();
        c->parent = this;
        bport_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bport_stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str = value;
        rack_num_str.value_namespace = name_space;
        rack_num_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats" || name == "idx" || name == "rack_num_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::BportStats()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    last_clear_ts{YType::str, "last_clear_ts"}
{

    yang_name = "bport_stats"; yang_parent_name = "bport_stats_rack"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::~BportStats()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_data() const
{
    return idx.is_set
	|| bport_id.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| last_clear_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "last_clear_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
{

    yang_name = "location"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::~Location()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::has_data() const
{
    for (std::size_t index=0; index<bundle_all_list.size(); index++)
    {
        if(bundle_all_list[index]->has_data())
            return true;
    }
    return loc_str.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::has_operation() const
{
    for (std::size_t index=0; index<bundle_all_list.size(); index++)
    {
        if(bundle_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[loc_str='" <<loc_str <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle_all_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList>();
        c->parent = this;
        bundle_all_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bundle_all_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle_all_list" || name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::BundleAllList()
    :
    idx{YType::int64, "idx"},
    bundle_id{YType::str, "bundle_id"},
    oper_state{YType::str, "oper_state"},
    plane_id{YType::uint32, "plane_id"},
    total_links{YType::uint32, "total_links"},
    down_links{YType::uint32, "down_links"},
    bport1{YType::str, "bport1"},
    bport2{YType::str, "bport2"}
{

    yang_name = "bundle_all_list"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::~BundleAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::has_data() const
{
    return idx.is_set
	|| bundle_id.is_set
	|| oper_state.is_set
	|| plane_id.is_set
	|| total_links.is_set
	|| down_links.is_set
	|| bport1.is_set
	|| bport2.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(total_links.yfilter)
	|| ydk::is_set(down_links.yfilter)
	|| ydk::is_set(bport1.yfilter)
	|| ydk::is_set(bport2.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle_all_list" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());
    if (down_links.is_set || is_set(down_links.yfilter)) leaf_name_data.push_back(down_links.get_name_leafdata());
    if (bport1.is_set || is_set(bport1.yfilter)) leaf_name_data.push_back(bport1.get_name_leafdata());
    if (bport2.is_set || is_set(bport2.yfilter)) leaf_name_data.push_back(bport2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle_id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_links")
    {
        total_links = value;
        total_links.value_namespace = name_space;
        total_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_links")
    {
        down_links = value;
        down_links.value_namespace = name_space;
        down_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport1")
    {
        bport1 = value;
        bport1.value_namespace = name_space;
        bport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport2")
    {
        bport2 = value;
        bport2.value_namespace = name_space;
        bport2.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bundle_id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "total_links")
    {
        total_links.yfilter = yfilter;
    }
    if(value_path == "down_links")
    {
        down_links.yfilter = yfilter;
    }
    if(value_path == "bport1")
    {
        bport1.yfilter = yfilter;
    }
    if(value_path == "bport2")
    {
        bport2.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bundle_id" || name == "oper_state" || name == "plane_id" || name == "total_links" || name == "down_links" || name == "bport1" || name == "bport2")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "fsdbagg_active"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::has_data() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::has_operation() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane>();
        c->parent = this;
        plane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : plane)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
{

    yang_name = "plane"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::has_data() const
{
    for (std::size_t index=0; index<asic_internal_error.size(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.size(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_active/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane" <<"[planeid='" <<planeid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError>();
        c->parent = this;
        asic_internal_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : asic_internal_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::has_data() const
{
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error" <<"[asic_number='" <<asic_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggLink::FsdbaggLink()
{

    yang_name = "fsdbagg_link"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggLink::~FsdbaggLink()
{
}

bool Controller::Fabric::Oper::FsdbaggLink::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggLink::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggLink::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggLink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggLink::Port::Port()
    :
    portname{YType::str, "portname"},
    description{YType::str, "description"}
{

    yang_name = "port"; yang_parent_name = "fsdbagg_link"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggLink::Port::~Port()
{
}

bool Controller::Fabric::Oper::FsdbaggLink::Port::has_data() const
{
    return portname.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::FsdbaggLink::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(portname.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggLink::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_link/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggLink::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[portname='" <<portname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggLink::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (portname.is_set || is_set(portname.yfilter)) leaf_name_data.push_back(portname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggLink::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggLink::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggLink::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "portname")
    {
        portname = value;
        portname.value_namespace = name_space;
        portname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggLink::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "portname")
    {
        portname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggLink::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "portname" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::FsdbaggSfeAsicType()
{

    yang_name = "fsdbagg_sfe_asic_type"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::~FsdbaggSfeAsicType()
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::has_data() const
{
    for (std::size_t index=0; index<asic_types.size(); index++)
    {
        if(asic_types[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::has_operation() const
{
    for (std::size_t index=0; index<asic_types.size(); index++)
    {
        if(asic_types[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_sfe_asic_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggSfeAsicType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggSfeAsicType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_types")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes>();
        c->parent = this;
        asic_types.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggSfeAsicType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : asic_types)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_types")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::AsicTypes()
    :
    asicname{YType::str, "asicname"},
    description{YType::str, "description"}
{

    yang_name = "asic_types"; yang_parent_name = "fsdbagg_sfe_asic_type"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::~AsicTypes()
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::has_data() const
{
    for (std::size_t index=0; index<block.size(); index++)
    {
        if(block[index]->has_data())
            return true;
    }
    return asicname.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::has_operation() const
{
    for (std::size_t index=0; index<block.size(); index++)
    {
        if(block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asicname.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_sfe_asic_type/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_types" <<"[asicname='" <<asicname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asicname.is_set || is_set(asicname.yfilter)) leaf_name_data.push_back(asicname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block>();
        c->parent = this;
        block.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : block)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asicname")
    {
        asicname = value;
        asicname.value_namespace = name_space;
        asicname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asicname")
    {
        asicname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block" || name == "asicname" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::Block()
    :
    blockname{YType::str, "blockname"}
{

    yang_name = "block"; yang_parent_name = "asic_types"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::~Block()
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::has_data() const
{
    return blockname.is_set;
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blockname.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block" <<"[blockname='" <<blockname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blockname.is_set || is_set(blockname.yfilter)) leaf_name_data.push_back(blockname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blockname")
    {
        blockname = value;
        blockname.value_namespace = name_space;
        blockname.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blockname")
    {
        blockname.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blockname")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::FsdbaggStandby()
    :
    statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics>())
{
    statistics->parent = this;

    yang_name = "fsdbagg_standby"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggStandby::~FsdbaggStandby()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::has_data() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggStandby::has_operation() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggStandby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Plane>();
        c->parent = this;
        plane.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : plane)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
{

    yang_name = "plane"; yang_parent_name = "fsdbagg_standby"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::has_data() const
{
    for (std::size_t index=0; index<asic_internal_error.size(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.size(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane" <<"[planeid='" <<planeid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggStandby::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError>();
        c->parent = this;
        asic_internal_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggStandby::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : asic_internal_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::has_data() const
{
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error" <<"[asic_number='" <<asic_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "fsdbagg_standby"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::has_data() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::has_operation() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane>();
        c->parent = this;
        plane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : plane)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
{

    yang_name = "plane"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::has_data() const
{
    for (std::size_t index=0; index<asic_internal_error.size(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.size(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdbagg_standby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane" <<"[planeid='" <<planeid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError>();
        c->parent = this;
        asic_internal_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : asic_internal_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::has_data() const
{
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error" <<"[asic_number='" <<asic_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::FabHealth()
{

    yang_name = "fab_health"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FabHealth::~FabHealth()
{
}

bool Controller::Fabric::Oper::FabHealth::has_data() const
{
    for (std::size_t index=0; index<sys_info_list.size(); index++)
    {
        if(sys_info_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FabHealth::has_operation() const
{
    for (std::size_t index=0; index<sys_info_list.size(); index++)
    {
        if(sys_info_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FabHealth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fab_health";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sys_info_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList>();
        c->parent = this;
        sys_info_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sys_info_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FabHealth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FabHealth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FabHealth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys_info_list")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SysInfoList()
    :
    index_key{YType::int32, "index_key"},
    aggr_status{YType::boolean, "aggr_status"},
    available_rack_ids{YType::str, "available_rack_ids"},
    rack_id_separator{YType::str, "rack_id_separator"},
    available_fm_loc{YType::str, "available_fm_loc"},
    fm_loc_separator{YType::str, "fm_loc_separator"},
    rack_total{YType::uint32, "rack_total"},
    rack_lcc{YType::uint32, "rack_lcc"},
    rack_fcc{YType::uint32, "rack_fcc"},
    plane_up{YType::uint32, "plane_up"},
    plane_dn{YType::uint32, "plane_dn"},
    plane_mcast_dn{YType::uint32, "plane_mcast_dn"},
    plane_admin_dn{YType::uint32, "plane_admin_dn"},
    show_sys_plane_detail{YType::boolean, "show_sys_plane_detail"},
    sfe_asics_total{YType::uint32, "sfe_asics_total"},
    sfe_asics_up{YType::uint32, "sfe_asics_up"},
    sfe_asics_dn{YType::uint32, "sfe_asics_dn"},
    fia_asics_total{YType::uint32, "fia_asics_total"},
    fia_asics_up{YType::uint32, "fia_asics_up"},
    fia_asics_dn{YType::uint32, "fia_asics_dn"}
{

    yang_name = "sys_info_list"; yang_parent_name = "fab_health"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::~SysInfoList()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::has_data() const
{
    for (std::size_t index=0; index<sys_plane_info_list.size(); index++)
    {
        if(sys_plane_info_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rack_info_list.size(); index++)
    {
        if(rack_info_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fsdb_status.size(); index++)
    {
        if(fsdb_status[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sfe_status.size(); index++)
    {
        if(sfe_status[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sfe_drvr_loc.size(); index++)
    {
        if(sfe_drvr_loc[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sfe_fm_sep.size(); index++)
    {
        if(sfe_fm_sep[index]->has_data())
            return true;
    }
    return index_key.is_set
	|| aggr_status.is_set
	|| available_rack_ids.is_set
	|| rack_id_separator.is_set
	|| available_fm_loc.is_set
	|| fm_loc_separator.is_set
	|| rack_total.is_set
	|| rack_lcc.is_set
	|| rack_fcc.is_set
	|| plane_up.is_set
	|| plane_dn.is_set
	|| plane_mcast_dn.is_set
	|| plane_admin_dn.is_set
	|| show_sys_plane_detail.is_set
	|| sfe_asics_total.is_set
	|| sfe_asics_up.is_set
	|| sfe_asics_dn.is_set
	|| fia_asics_total.is_set
	|| fia_asics_up.is_set
	|| fia_asics_dn.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::has_operation() const
{
    for (std::size_t index=0; index<sys_plane_info_list.size(); index++)
    {
        if(sys_plane_info_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rack_info_list.size(); index++)
    {
        if(rack_info_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fsdb_status.size(); index++)
    {
        if(fsdb_status[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sfe_status.size(); index++)
    {
        if(sfe_status[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sfe_drvr_loc.size(); index++)
    {
        if(sfe_drvr_loc[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sfe_fm_sep.size(); index++)
    {
        if(sfe_fm_sep[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_key.yfilter)
	|| ydk::is_set(aggr_status.yfilter)
	|| ydk::is_set(available_rack_ids.yfilter)
	|| ydk::is_set(rack_id_separator.yfilter)
	|| ydk::is_set(available_fm_loc.yfilter)
	|| ydk::is_set(fm_loc_separator.yfilter)
	|| ydk::is_set(rack_total.yfilter)
	|| ydk::is_set(rack_lcc.yfilter)
	|| ydk::is_set(rack_fcc.yfilter)
	|| ydk::is_set(plane_up.yfilter)
	|| ydk::is_set(plane_dn.yfilter)
	|| ydk::is_set(plane_mcast_dn.yfilter)
	|| ydk::is_set(plane_admin_dn.yfilter)
	|| ydk::is_set(show_sys_plane_detail.yfilter)
	|| ydk::is_set(sfe_asics_total.yfilter)
	|| ydk::is_set(sfe_asics_up.yfilter)
	|| ydk::is_set(sfe_asics_dn.yfilter)
	|| ydk::is_set(fia_asics_total.yfilter)
	|| ydk::is_set(fia_asics_up.yfilter)
	|| ydk::is_set(fia_asics_dn.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fab_health/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys_info_list" <<"[index_key='" <<index_key <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_key.is_set || is_set(index_key.yfilter)) leaf_name_data.push_back(index_key.get_name_leafdata());
    if (aggr_status.is_set || is_set(aggr_status.yfilter)) leaf_name_data.push_back(aggr_status.get_name_leafdata());
    if (available_rack_ids.is_set || is_set(available_rack_ids.yfilter)) leaf_name_data.push_back(available_rack_ids.get_name_leafdata());
    if (rack_id_separator.is_set || is_set(rack_id_separator.yfilter)) leaf_name_data.push_back(rack_id_separator.get_name_leafdata());
    if (available_fm_loc.is_set || is_set(available_fm_loc.yfilter)) leaf_name_data.push_back(available_fm_loc.get_name_leafdata());
    if (fm_loc_separator.is_set || is_set(fm_loc_separator.yfilter)) leaf_name_data.push_back(fm_loc_separator.get_name_leafdata());
    if (rack_total.is_set || is_set(rack_total.yfilter)) leaf_name_data.push_back(rack_total.get_name_leafdata());
    if (rack_lcc.is_set || is_set(rack_lcc.yfilter)) leaf_name_data.push_back(rack_lcc.get_name_leafdata());
    if (rack_fcc.is_set || is_set(rack_fcc.yfilter)) leaf_name_data.push_back(rack_fcc.get_name_leafdata());
    if (plane_up.is_set || is_set(plane_up.yfilter)) leaf_name_data.push_back(plane_up.get_name_leafdata());
    if (plane_dn.is_set || is_set(plane_dn.yfilter)) leaf_name_data.push_back(plane_dn.get_name_leafdata());
    if (plane_mcast_dn.is_set || is_set(plane_mcast_dn.yfilter)) leaf_name_data.push_back(plane_mcast_dn.get_name_leafdata());
    if (plane_admin_dn.is_set || is_set(plane_admin_dn.yfilter)) leaf_name_data.push_back(plane_admin_dn.get_name_leafdata());
    if (show_sys_plane_detail.is_set || is_set(show_sys_plane_detail.yfilter)) leaf_name_data.push_back(show_sys_plane_detail.get_name_leafdata());
    if (sfe_asics_total.is_set || is_set(sfe_asics_total.yfilter)) leaf_name_data.push_back(sfe_asics_total.get_name_leafdata());
    if (sfe_asics_up.is_set || is_set(sfe_asics_up.yfilter)) leaf_name_data.push_back(sfe_asics_up.get_name_leafdata());
    if (sfe_asics_dn.is_set || is_set(sfe_asics_dn.yfilter)) leaf_name_data.push_back(sfe_asics_dn.get_name_leafdata());
    if (fia_asics_total.is_set || is_set(fia_asics_total.yfilter)) leaf_name_data.push_back(fia_asics_total.get_name_leafdata());
    if (fia_asics_up.is_set || is_set(fia_asics_up.yfilter)) leaf_name_data.push_back(fia_asics_up.get_name_leafdata());
    if (fia_asics_dn.is_set || is_set(fia_asics_dn.yfilter)) leaf_name_data.push_back(fia_asics_dn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sys_plane_info_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList>();
        c->parent = this;
        sys_plane_info_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rack_info_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList>();
        c->parent = this;
        rack_info_list.push_back(c);
        return c;
    }

    if(child_yang_name == "fsdb_status")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus>();
        c->parent = this;
        fsdb_status.push_back(c);
        return c;
    }

    if(child_yang_name == "sfe_status")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus>();
        c->parent = this;
        sfe_status.push_back(c);
        return c;
    }

    if(child_yang_name == "sfe_drvr_loc")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc>();
        c->parent = this;
        sfe_drvr_loc.push_back(c);
        return c;
    }

    if(child_yang_name == "sfe_fm_sep")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep>();
        c->parent = this;
        sfe_fm_sep.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sys_plane_info_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : rack_info_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : fsdb_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sfe_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sfe_drvr_loc)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sfe_fm_sep)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index_key")
    {
        index_key = value;
        index_key.value_namespace = name_space;
        index_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr_status")
    {
        aggr_status = value;
        aggr_status.value_namespace = name_space;
        aggr_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available_rack_ids")
    {
        available_rack_ids = value;
        available_rack_ids.value_namespace = name_space;
        available_rack_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_id_separator")
    {
        rack_id_separator = value;
        rack_id_separator.value_namespace = name_space;
        rack_id_separator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available_fm_loc")
    {
        available_fm_loc = value;
        available_fm_loc.value_namespace = name_space;
        available_fm_loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_loc_separator")
    {
        fm_loc_separator = value;
        fm_loc_separator.value_namespace = name_space;
        fm_loc_separator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_total")
    {
        rack_total = value;
        rack_total.value_namespace = name_space;
        rack_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_lcc")
    {
        rack_lcc = value;
        rack_lcc.value_namespace = name_space;
        rack_lcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_fcc")
    {
        rack_fcc = value;
        rack_fcc.value_namespace = name_space;
        rack_fcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_up")
    {
        plane_up = value;
        plane_up.value_namespace = name_space;
        plane_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_dn")
    {
        plane_dn = value;
        plane_dn.value_namespace = name_space;
        plane_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mcast_dn")
    {
        plane_mcast_dn = value;
        plane_mcast_dn.value_namespace = name_space;
        plane_mcast_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_admin_dn")
    {
        plane_admin_dn = value;
        plane_admin_dn.value_namespace = name_space;
        plane_admin_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_sys_plane_detail")
    {
        show_sys_plane_detail = value;
        show_sys_plane_detail.value_namespace = name_space;
        show_sys_plane_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_total")
    {
        sfe_asics_total = value;
        sfe_asics_total.value_namespace = name_space;
        sfe_asics_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_up")
    {
        sfe_asics_up = value;
        sfe_asics_up.value_namespace = name_space;
        sfe_asics_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_dn")
    {
        sfe_asics_dn = value;
        sfe_asics_dn.value_namespace = name_space;
        sfe_asics_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_total")
    {
        fia_asics_total = value;
        fia_asics_total.value_namespace = name_space;
        fia_asics_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_up")
    {
        fia_asics_up = value;
        fia_asics_up.value_namespace = name_space;
        fia_asics_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_dn")
    {
        fia_asics_dn = value;
        fia_asics_dn.value_namespace = name_space;
        fia_asics_dn.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index_key")
    {
        index_key.yfilter = yfilter;
    }
    if(value_path == "aggr_status")
    {
        aggr_status.yfilter = yfilter;
    }
    if(value_path == "available_rack_ids")
    {
        available_rack_ids.yfilter = yfilter;
    }
    if(value_path == "rack_id_separator")
    {
        rack_id_separator.yfilter = yfilter;
    }
    if(value_path == "available_fm_loc")
    {
        available_fm_loc.yfilter = yfilter;
    }
    if(value_path == "fm_loc_separator")
    {
        fm_loc_separator.yfilter = yfilter;
    }
    if(value_path == "rack_total")
    {
        rack_total.yfilter = yfilter;
    }
    if(value_path == "rack_lcc")
    {
        rack_lcc.yfilter = yfilter;
    }
    if(value_path == "rack_fcc")
    {
        rack_fcc.yfilter = yfilter;
    }
    if(value_path == "plane_up")
    {
        plane_up.yfilter = yfilter;
    }
    if(value_path == "plane_dn")
    {
        plane_dn.yfilter = yfilter;
    }
    if(value_path == "plane_mcast_dn")
    {
        plane_mcast_dn.yfilter = yfilter;
    }
    if(value_path == "plane_admin_dn")
    {
        plane_admin_dn.yfilter = yfilter;
    }
    if(value_path == "show_sys_plane_detail")
    {
        show_sys_plane_detail.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_total")
    {
        sfe_asics_total.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_up")
    {
        sfe_asics_up.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_dn")
    {
        sfe_asics_dn.yfilter = yfilter;
    }
    if(value_path == "fia_asics_total")
    {
        fia_asics_total.yfilter = yfilter;
    }
    if(value_path == "fia_asics_up")
    {
        fia_asics_up.yfilter = yfilter;
    }
    if(value_path == "fia_asics_dn")
    {
        fia_asics_dn.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys_plane_info_list" || name == "rack_info_list" || name == "fsdb_status" || name == "sfe_status" || name == "sfe_drvr_loc" || name == "sfe_fm_sep" || name == "index_key" || name == "aggr_status" || name == "available_rack_ids" || name == "rack_id_separator" || name == "available_fm_loc" || name == "fm_loc_separator" || name == "rack_total" || name == "rack_lcc" || name == "rack_fcc" || name == "plane_up" || name == "plane_dn" || name == "plane_mcast_dn" || name == "plane_admin_dn" || name == "show_sys_plane_detail" || name == "sfe_asics_total" || name == "sfe_asics_up" || name == "sfe_asics_dn" || name == "fia_asics_total" || name == "fia_asics_up" || name == "fia_asics_dn")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::SysPlaneInfoList()
    :
    plane_id{YType::int32, "plane_id"},
    admin_state{YType::str, "admin-state"},
    plane_state{YType::str, "plane_state"},
    plane_mode{YType::str, "plane_mode"},
    racks_w_plane_fault{YType::int32, "racks_w_plane_fault"},
    is_data_drop{YType::boolean, "is_data_drop"}
{

    yang_name = "sys_plane_info_list"; yang_parent_name = "sys_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::~SysPlaneInfoList()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::has_data() const
{
    return plane_id.is_set
	|| admin_state.is_set
	|| plane_state.is_set
	|| plane_mode.is_set
	|| racks_w_plane_fault.is_set
	|| is_data_drop.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(plane_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(racks_w_plane_fault.yfilter)
	|| ydk::is_set(is_data_drop.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys_plane_info_list" <<"[plane_id='" <<plane_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (plane_state.is_set || is_set(plane_state.yfilter)) leaf_name_data.push_back(plane_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (racks_w_plane_fault.is_set || is_set(racks_w_plane_fault.yfilter)) leaf_name_data.push_back(racks_w_plane_fault.get_name_leafdata());
    if (is_data_drop.is_set || is_set(is_data_drop.yfilter)) leaf_name_data.push_back(is_data_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_state")
    {
        plane_state = value;
        plane_state.value_namespace = name_space;
        plane_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "racks_w_plane_fault")
    {
        racks_w_plane_fault = value;
        racks_w_plane_fault.value_namespace = name_space;
        racks_w_plane_fault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_data_drop")
    {
        is_data_drop = value;
        is_data_drop.value_namespace = name_space;
        is_data_drop.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "plane_state")
    {
        plane_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "racks_w_plane_fault")
    {
        racks_w_plane_fault.yfilter = yfilter;
    }
    if(value_path == "is_data_drop")
    {
        is_data_drop.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane_id" || name == "admin-state" || name == "plane_state" || name == "plane_mode" || name == "racks_w_plane_fault" || name == "is_data_drop")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackInfoList()
    :
    rack_id{YType::int32, "rack_id"},
    rack_name{YType::str, "rack_name"},
    rack_type{YType::str, "rack_type"},
    sfe_asics_total{YType::int32, "sfe_asics_total"},
    sfe_asics_up{YType::int32, "sfe_asics_up"},
    sfe_asics_dn{YType::int32, "sfe_asics_dn"},
    fia_asics_total{YType::int32, "fia_asics_total"},
    fia_asics_up{YType::int32, "fia_asics_up"},
    fia_asics_dn{YType::int32, "fia_asics_dn"},
    plane_up{YType::uint32, "plane_up"},
    plane_dn{YType::uint32, "plane_dn"},
    plane_mcast_dn{YType::uint32, "plane_mcast_dn"},
    plane_admin_dn{YType::uint32, "plane_admin_dn"},
    show_rack_plane_detail{YType::boolean, "show_rack_plane_detail"},
    amba_valid{YType::int32, "amba_valid"}
{

    yang_name = "rack_info_list"; yang_parent_name = "sys_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::~RackInfoList()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::has_data() const
{
    for (std::size_t index=0; index<rack_plane_info_list.size(); index++)
    {
        if(rack_plane_info_list[index]->has_data())
            return true;
    }
    return rack_id.is_set
	|| rack_name.is_set
	|| rack_type.is_set
	|| sfe_asics_total.is_set
	|| sfe_asics_up.is_set
	|| sfe_asics_dn.is_set
	|| fia_asics_total.is_set
	|| fia_asics_up.is_set
	|| fia_asics_dn.is_set
	|| plane_up.is_set
	|| plane_dn.is_set
	|| plane_mcast_dn.is_set
	|| plane_admin_dn.is_set
	|| show_rack_plane_detail.is_set
	|| amba_valid.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::has_operation() const
{
    for (std::size_t index=0; index<rack_plane_info_list.size(); index++)
    {
        if(rack_plane_info_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(rack_name.yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(sfe_asics_total.yfilter)
	|| ydk::is_set(sfe_asics_up.yfilter)
	|| ydk::is_set(sfe_asics_dn.yfilter)
	|| ydk::is_set(fia_asics_total.yfilter)
	|| ydk::is_set(fia_asics_up.yfilter)
	|| ydk::is_set(fia_asics_dn.yfilter)
	|| ydk::is_set(plane_up.yfilter)
	|| ydk::is_set(plane_dn.yfilter)
	|| ydk::is_set(plane_mcast_dn.yfilter)
	|| ydk::is_set(plane_admin_dn.yfilter)
	|| ydk::is_set(show_rack_plane_detail.yfilter)
	|| ydk::is_set(amba_valid.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_info_list" <<"[rack_id='" <<rack_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (rack_name.is_set || is_set(rack_name.yfilter)) leaf_name_data.push_back(rack_name.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (sfe_asics_total.is_set || is_set(sfe_asics_total.yfilter)) leaf_name_data.push_back(sfe_asics_total.get_name_leafdata());
    if (sfe_asics_up.is_set || is_set(sfe_asics_up.yfilter)) leaf_name_data.push_back(sfe_asics_up.get_name_leafdata());
    if (sfe_asics_dn.is_set || is_set(sfe_asics_dn.yfilter)) leaf_name_data.push_back(sfe_asics_dn.get_name_leafdata());
    if (fia_asics_total.is_set || is_set(fia_asics_total.yfilter)) leaf_name_data.push_back(fia_asics_total.get_name_leafdata());
    if (fia_asics_up.is_set || is_set(fia_asics_up.yfilter)) leaf_name_data.push_back(fia_asics_up.get_name_leafdata());
    if (fia_asics_dn.is_set || is_set(fia_asics_dn.yfilter)) leaf_name_data.push_back(fia_asics_dn.get_name_leafdata());
    if (plane_up.is_set || is_set(plane_up.yfilter)) leaf_name_data.push_back(plane_up.get_name_leafdata());
    if (plane_dn.is_set || is_set(plane_dn.yfilter)) leaf_name_data.push_back(plane_dn.get_name_leafdata());
    if (plane_mcast_dn.is_set || is_set(plane_mcast_dn.yfilter)) leaf_name_data.push_back(plane_mcast_dn.get_name_leafdata());
    if (plane_admin_dn.is_set || is_set(plane_admin_dn.yfilter)) leaf_name_data.push_back(plane_admin_dn.get_name_leafdata());
    if (show_rack_plane_detail.is_set || is_set(show_rack_plane_detail.yfilter)) leaf_name_data.push_back(show_rack_plane_detail.get_name_leafdata());
    if (amba_valid.is_set || is_set(amba_valid.yfilter)) leaf_name_data.push_back(amba_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_plane_info_list")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList>();
        c->parent = this;
        rack_plane_info_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rack_plane_info_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_name")
    {
        rack_name = value;
        rack_name.value_namespace = name_space;
        rack_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_total")
    {
        sfe_asics_total = value;
        sfe_asics_total.value_namespace = name_space;
        sfe_asics_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_up")
    {
        sfe_asics_up = value;
        sfe_asics_up.value_namespace = name_space;
        sfe_asics_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_dn")
    {
        sfe_asics_dn = value;
        sfe_asics_dn.value_namespace = name_space;
        sfe_asics_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_total")
    {
        fia_asics_total = value;
        fia_asics_total.value_namespace = name_space;
        fia_asics_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_up")
    {
        fia_asics_up = value;
        fia_asics_up.value_namespace = name_space;
        fia_asics_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_dn")
    {
        fia_asics_dn = value;
        fia_asics_dn.value_namespace = name_space;
        fia_asics_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_up")
    {
        plane_up = value;
        plane_up.value_namespace = name_space;
        plane_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_dn")
    {
        plane_dn = value;
        plane_dn.value_namespace = name_space;
        plane_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mcast_dn")
    {
        plane_mcast_dn = value;
        plane_mcast_dn.value_namespace = name_space;
        plane_mcast_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_admin_dn")
    {
        plane_admin_dn = value;
        plane_admin_dn.value_namespace = name_space;
        plane_admin_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_rack_plane_detail")
    {
        show_rack_plane_detail = value;
        show_rack_plane_detail.value_namespace = name_space;
        show_rack_plane_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amba_valid")
    {
        amba_valid = value;
        amba_valid.value_namespace = name_space;
        amba_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "rack_name")
    {
        rack_name.yfilter = yfilter;
    }
    if(value_path == "rack_type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_total")
    {
        sfe_asics_total.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_up")
    {
        sfe_asics_up.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_dn")
    {
        sfe_asics_dn.yfilter = yfilter;
    }
    if(value_path == "fia_asics_total")
    {
        fia_asics_total.yfilter = yfilter;
    }
    if(value_path == "fia_asics_up")
    {
        fia_asics_up.yfilter = yfilter;
    }
    if(value_path == "fia_asics_dn")
    {
        fia_asics_dn.yfilter = yfilter;
    }
    if(value_path == "plane_up")
    {
        plane_up.yfilter = yfilter;
    }
    if(value_path == "plane_dn")
    {
        plane_dn.yfilter = yfilter;
    }
    if(value_path == "plane_mcast_dn")
    {
        plane_mcast_dn.yfilter = yfilter;
    }
    if(value_path == "plane_admin_dn")
    {
        plane_admin_dn.yfilter = yfilter;
    }
    if(value_path == "show_rack_plane_detail")
    {
        show_rack_plane_detail.yfilter = yfilter;
    }
    if(value_path == "amba_valid")
    {
        amba_valid.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_plane_info_list" || name == "rack_id" || name == "rack_name" || name == "rack_type" || name == "sfe_asics_total" || name == "sfe_asics_up" || name == "sfe_asics_dn" || name == "fia_asics_total" || name == "fia_asics_up" || name == "fia_asics_dn" || name == "plane_up" || name == "plane_dn" || name == "plane_mcast_dn" || name == "plane_admin_dn" || name == "show_rack_plane_detail" || name == "amba_valid")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::RackPlaneInfoList()
    :
    plane_id{YType::int32, "plane_id"},
    plane_state{YType::str, "plane_state"},
    plane_mode{YType::str, "plane_mode"},
    asics_total{YType::int32, "asics_total"},
    asics_up{YType::int32, "asics_up"},
    asics_dn{YType::int32, "asics_dn"}
{

    yang_name = "rack_plane_info_list"; yang_parent_name = "rack_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::~RackPlaneInfoList()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::has_data() const
{
    for (std::size_t index=0; index<reachable_amba.size(); index++)
    {
        if(reachable_amba[index]->has_data())
            return true;
    }
    return plane_id.is_set
	|| plane_state.is_set
	|| plane_mode.is_set
	|| asics_total.is_set
	|| asics_up.is_set
	|| asics_dn.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::has_operation() const
{
    for (std::size_t index=0; index<reachable_amba.size(); index++)
    {
        if(reachable_amba[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(plane_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(asics_total.yfilter)
	|| ydk::is_set(asics_up.yfilter)
	|| ydk::is_set(asics_dn.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_plane_info_list" <<"[plane_id='" <<plane_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (plane_state.is_set || is_set(plane_state.yfilter)) leaf_name_data.push_back(plane_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (asics_total.is_set || is_set(asics_total.yfilter)) leaf_name_data.push_back(asics_total.get_name_leafdata());
    if (asics_up.is_set || is_set(asics_up.yfilter)) leaf_name_data.push_back(asics_up.get_name_leafdata());
    if (asics_dn.is_set || is_set(asics_dn.yfilter)) leaf_name_data.push_back(asics_dn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable_amba")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba>();
        c->parent = this;
        reachable_amba.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : reachable_amba)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_state")
    {
        plane_state = value;
        plane_state.value_namespace = name_space;
        plane_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asics_total")
    {
        asics_total = value;
        asics_total.value_namespace = name_space;
        asics_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asics_up")
    {
        asics_up = value;
        asics_up.value_namespace = name_space;
        asics_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asics_dn")
    {
        asics_dn = value;
        asics_dn.value_namespace = name_space;
        asics_dn.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "plane_state")
    {
        plane_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "asics_total")
    {
        asics_total.yfilter = yfilter;
    }
    if(value_path == "asics_up")
    {
        asics_up.yfilter = yfilter;
    }
    if(value_path == "asics_dn")
    {
        asics_dn.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable_amba" || name == "plane_id" || name == "plane_state" || name == "plane_mode" || name == "asics_total" || name == "asics_up" || name == "asics_dn")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::ReachableAmba()
    :
    idx{YType::int32, "idx"},
    num_reachable{YType::int32, "num_reachable"}
{

    yang_name = "reachable_amba"; yang_parent_name = "rack_plane_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::~ReachableAmba()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::has_data() const
{
    return idx.is_set
	|| num_reachable.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(num_reachable.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable_amba" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (num_reachable.is_set || is_set(num_reachable.yfilter)) leaf_name_data.push_back(num_reachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_reachable")
    {
        num_reachable = value;
        num_reachable.value_namespace = name_space;
        num_reachable.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "num_reachable")
    {
        num_reachable.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "num_reachable")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::FsdbStatus()
    :
    rack_id{YType::int32, "rack_id"},
    status{YType::boolean, "status"}
{

    yang_name = "fsdb_status"; yang_parent_name = "sys_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::~FsdbStatus()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::has_data() const
{
    return rack_id.is_set
	|| status.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdb_status" <<"[rack_id='" <<rack_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_id" || name == "status")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::SfeStatus()
    :
    rack_id{YType::int32, "rack_id"},
    status{YType::boolean, "status"}
{

    yang_name = "sfe_status"; yang_parent_name = "sys_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::~SfeStatus()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::has_data() const
{
    return rack_id.is_set
	|| status.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe_status" <<"[rack_id='" <<rack_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_id" || name == "status")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::SfeDrvrLoc()
    :
    loc_str{YType::str, "loc_str"}
{

    yang_name = "sfe_drvr_loc"; yang_parent_name = "sys_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::~SfeDrvrLoc()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::has_data() const
{
    return loc_str.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe_drvr_loc" <<"[loc_str='" <<loc_str <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::SfeFmSep()
    :
    loc_str{YType::str, "loc_str"}
{

    yang_name = "sfe_fm_sep"; yang_parent_name = "sys_info_list"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::~SfeFmSep()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::has_data() const
{
    return loc_str.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe_fm_sep" <<"[loc_str='" <<loc_str <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbAggregator::FsdbAggregator()
    :
    fsdbagg(std::make_shared<Controller::Fabric::Oper::FsdbAggregator::Fsdbagg>())
{
    fsdbagg->parent = this;

    yang_name = "fsdb-aggregator"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbAggregator::~FsdbAggregator()
{
}

bool Controller::Fabric::Oper::FsdbAggregator::has_data() const
{
    return (fsdbagg !=  nullptr && fsdbagg->has_data());
}

bool Controller::Fabric::Oper::FsdbAggregator::has_operation() const
{
    return is_set(yfilter)
	|| (fsdbagg !=  nullptr && fsdbagg->has_operation());
}

std::string Controller::Fabric::Oper::FsdbAggregator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbAggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdb-aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbAggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbAggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsdbagg")
    {
        if(fsdbagg == nullptr)
        {
            fsdbagg = std::make_shared<Controller::Fabric::Oper::FsdbAggregator::Fsdbagg>();
        }
        return fsdbagg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbAggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fsdbagg != nullptr)
    {
        children["fsdbagg"] = fsdbagg;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbAggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbAggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbAggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsdbagg")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Fsdbagg()
{

    yang_name = "fsdbagg"; yang_parent_name = "fsdb-aggregator"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::~Fsdbagg()
{
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::has_data() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::has_operation() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdb-aggregator/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace>();
        c->parent = this;
        trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
{

    yang_name = "trace"; yang_parent_name = "fsdbagg"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::~Trace()
{
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/fsdb-aggregator/fsdbagg/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace" <<"[buffer='" <<buffer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::~Location()
{
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::has_data() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location_name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : all_options)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::has_data() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace_blocks)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    return data.is_set;
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Link()
{

    yang_name = "link"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::Link::~Link()
{
}

bool Controller::Fabric::Oper::Link::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_location.size(); index++)
    {
        if(node_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_location.size(); index++)
    {
        if(node_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    if(child_yang_name == "node_location")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation>();
        c->parent = this;
        node_location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : node_location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "node_location")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Rack()
    :
    rack_number{YType::int32, "rack_number"}
{

    yang_name = "rack"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Fabric::Oper::Link::Rack::~Rack()
{
}

bool Controller::Fabric::Oper::Link::Rack::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return rack_number.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric/oper/link/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Link::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack_number='" <<rack_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "rack_number")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Port()
    :
    portname{YType::str, "portname"},
    description{YType::str, "description"}
    	,
    rx(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Rx>())
	,tx(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "port"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::~Port()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return portname.is_set
	|| description.is_set
	|| (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(portname.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[portname='" <<portname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (portname.is_set || is_set(portname.yfilter)) leaf_name_data.push_back(portname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "portname")
    {
        portname = value;
        portname.value_namespace = name_space;
        portname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "portname")
    {
        portname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "rx" || name == "tx" || name == "portname" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
    	,
    rx(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx>())
	,tx(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "location"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::~Location()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::has_data() const
{
    return loc_str.is_set
	|| (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[loc_str='" <<loc_str <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx" || name == "tx" || name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Rx()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail>())
	,state(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State>())
	,statistics(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics>())
{
    brief->parent = this;
    detail->parent = this;
    state->parent = this;
    statistics->parent = this;

    yang_name = "rx"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::~Rx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State>();
        }
        return state;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail" || name == "state" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::State()
    :
    up(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up>())
	,down(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down>())
	,er(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er>())
	,mismatch(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch>())
{
    up->parent = this;
    down->parent = this;
    er->parent = this;
    mismatch->parent = this;

    yang_name = "state"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::~State()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::has_data() const
{
    return (up !=  nullptr && up->has_data())
	|| (down !=  nullptr && down->has_data())
	|| (er !=  nullptr && er->has_data())
	|| (mismatch !=  nullptr && mismatch->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::has_operation() const
{
    return is_set(yfilter)
	|| (up !=  nullptr && up->has_operation())
	|| (down !=  nullptr && down->has_operation())
	|| (er !=  nullptr && er->has_operation())
	|| (mismatch !=  nullptr && mismatch->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up>();
        }
        return up;
    }

    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down>();
        }
        return down;
    }

    if(child_yang_name == "er")
    {
        if(er == nullptr)
        {
            er = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er>();
        }
        return er;
    }

    if(child_yang_name == "mismatch")
    {
        if(mismatch == nullptr)
        {
            mismatch = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch>();
        }
        return mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(up != nullptr)
    {
        children["up"] = up;
    }

    if(down != nullptr)
    {
        children["down"] = down;
    }

    if(er != nullptr)
    {
        children["er"] = er;
    }

    if(mismatch != nullptr)
    {
        children["mismatch"] = mismatch;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "er" || name == "mismatch")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Up()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "up"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::~Up()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Down()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "down"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::~Down()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Er()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "er"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::~Er()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "er";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "er"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "er"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "er"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Mismatch()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "mismatch"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::~Mismatch()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Statistics()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::has_data() const
{
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::has_data() const
{
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::has_data() const
{
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Tx()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail>())
	,state(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State>())
	,statistics(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics>())
{
    brief->parent = this;
    detail->parent = this;
    state->parent = this;
    statistics->parent = this;

    yang_name = "tx"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::~Tx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State>();
        }
        return state;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail" || name == "state" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::State()
    :
    up(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up>())
	,down(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down>())
	,er(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er>())
	,mismatch(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch>())
{
    up->parent = this;
    down->parent = this;
    er->parent = this;
    mismatch->parent = this;

    yang_name = "state"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::~State()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::has_data() const
{
    return (up !=  nullptr && up->has_data())
	|| (down !=  nullptr && down->has_data())
	|| (er !=  nullptr && er->has_data())
	|| (mismatch !=  nullptr && mismatch->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::has_operation() const
{
    return is_set(yfilter)
	|| (up !=  nullptr && up->has_operation())
	|| (down !=  nullptr && down->has_operation())
	|| (er !=  nullptr && er->has_operation())
	|| (mismatch !=  nullptr && mismatch->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up>();
        }
        return up;
    }

    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down>();
        }
        return down;
    }

    if(child_yang_name == "er")
    {
        if(er == nullptr)
        {
            er = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er>();
        }
        return er;
    }

    if(child_yang_name == "mismatch")
    {
        if(mismatch == nullptr)
        {
            mismatch = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch>();
        }
        return mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(up != nullptr)
    {
        children["up"] = up;
    }

    if(down != nullptr)
    {
        children["down"] = down;
    }

    if(er != nullptr)
    {
        children["er"] = er;
    }

    if(mismatch != nullptr)
    {
        children["mismatch"] = mismatch;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "er" || name == "mismatch")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Up()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "up"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::~Up()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Down()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "down"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::~Down()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Er()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "er"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::~Er()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "er";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "er"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "er"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "er"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Mismatch()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "mismatch"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::~Mismatch()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::has_data() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.size(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History>();
        c->parent = this;
        history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : history)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::has_data() const
{
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history" <<"[history_idx='" <<history_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Statistics()
    :
    brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief>())
	,detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::has_data() const
{
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::Brief()
{

    yang_name = "brief"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::has_data() const
{
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::has_data() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.size(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto c = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx>();
        c->parent = this;
        data_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_idx)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::has_data() const
{
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx" <<"[port_data_idx='" <<port_data_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}


}
}

