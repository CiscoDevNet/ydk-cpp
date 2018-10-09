
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_32.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_33.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::SignallingSummary::SignallingSummary()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "signalling-summary"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::SignallingSummary::~SignallingSummary()
{
}

bool MplsTe::SignallingCounters::SignallingSummary::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::SignallingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::SignallingSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::SignallingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::SignallingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::SignallingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::SignallingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::SignallingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::SignallingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::SignallingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::DiffServTeClasses::DiffServTeClasses()
    :
    te_class(this, {})
{

    yang_name = "diff-serv-te-classes"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::DiffServTeClasses::~DiffServTeClasses()
{
}

bool MplsTe::DiffServTeClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::DiffServTeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::DiffServTeClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-te-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTeClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        auto c = std::make_shared<MplsTe::DiffServTeClasses::TeClass>();
        c->parent = this;
        te_class.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : te_class.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::DiffServTeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::DiffServTeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::DiffServTeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-class")
        return true;
    return false;
}

MplsTe::DiffServTeClasses::TeClass::TeClass()
    :
    class_number{YType::uint8, "class-number"},
    class_type{YType::uint8, "class-type"},
    priority{YType::uint8, "priority"},
    class_status{YType::enumeration, "class-status"}
{

    yang_name = "te-class"; yang_parent_name = "diff-serv-te-classes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::DiffServTeClasses::TeClass::~TeClass()
{
}

bool MplsTe::DiffServTeClasses::TeClass::has_data() const
{
    if (is_presence_container) return true;
    return class_number.is_set
	|| class_type.is_set
	|| priority.is_set
	|| class_status.is_set;
}

bool MplsTe::DiffServTeClasses::TeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_number.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(class_status.yfilter);
}

std::string MplsTe::DiffServTeClasses::TeClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/diff-serv-te-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTeClasses::TeClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.yfilter)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (class_status.is_set || is_set(class_status.yfilter)) leaf_name_data.push_back(class_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::DiffServTeClasses::TeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-number")
    {
        class_number = value;
        class_number.value_namespace = name_space;
        class_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-status")
    {
        class_status = value;
        class_status.value_namespace = name_space;
        class_status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::DiffServTeClasses::TeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-number")
    {
        class_number.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "class-status")
    {
        class_status.yfilter = yfilter;
    }
}

bool MplsTe::DiffServTeClasses::TeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "class-type" || name == "priority" || name == "class-status")
        return true;
    return false;
}

MplsTe::Issu::Issu()
    :
    status(std::make_shared<MplsTe::Issu::Status>())
    , detail(std::make_shared<MplsTe::Issu::Detail>())
{
    status->parent = this;
    detail->parent = this;

    yang_name = "issu"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::~Issu()
{
}

bool MplsTe::Issu::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool MplsTe::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string MplsTe::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTe::Issu::Status>();
        }
        return status;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTe::Issu::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void MplsTe::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "detail")
        return true;
    return false;
}

MplsTe::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
        ,
    sync_status_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::~Status()
{
}

bool MplsTe::Issu::Status::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Issu::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Issu::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Issu::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
        ,
    slave_sync_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto c = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.append(c);
        return c;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto c = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        c->parent = this;
        s2l_pending.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    count = 0;
    for (auto c : vif_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : s2l_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::Detail()
    :
    role{YType::enumeration, "role"}
        ,
    sync_status_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::~Detail()
{
}

bool MplsTe::Issu::Detail::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Issu::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Issu::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Issu::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
        ,
    slave_sync_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto c = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.append(c);
        return c;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto c = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        c->parent = this;
        s2l_pending.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    count = 0;
    for (auto c : vif_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : s2l_pending.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntries()
    :
    auto_route_destination_entry(this, {"tunnel_id"})
{

    yang_name = "auto-route-destination-entries"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoRouteDestinationEntries::~AutoRouteDestinationEntries()
{
}

bool MplsTe::AutoRouteDestinationEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auto_route_destination_entry.len(); index++)
    {
        if(auto_route_destination_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoRouteDestinationEntries::has_operation() const
{
    for (std::size_t index=0; index<auto_route_destination_entry.len(); index++)
    {
        if(auto_route_destination_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AutoRouteDestinationEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoRouteDestinationEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoRouteDestinationEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoRouteDestinationEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-destination-entry")
    {
        auto c = std::make_shared<MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry>();
        c->parent = this;
        auto_route_destination_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoRouteDestinationEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : auto_route_destination_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoRouteDestinationEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoRouteDestinationEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoRouteDestinationEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-destination-entry")
        return true;
    return false;
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::AutoRouteDestinationEntry()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"}
        ,
    tunnel_autoroute_dest(this, {})
{

    yang_name = "auto-route-destination-entry"; yang_parent_name = "auto-route-destination-entries"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::~AutoRouteDestinationEntry()
{
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_autoroute_dest.len(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_operation() const
{
    for (std::size_t index=0; index<tunnel_autoroute_dest.len(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-route-destination-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entry";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-autoroute-dest")
    {
        auto c = std::make_shared<MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest>();
        c->parent = this;
        tunnel_autoroute_dest.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel_autoroute_dest.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-autoroute-dest" || name == "tunnel-id" || name == "tunnel-id-xr" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::TunnelAutorouteDest()
    :
    prefix_address{YType::str, "prefix-address"},
    prefix_length{YType::uint32, "prefix-length"},
    metric{YType::uint32, "metric"},
    install_time{YType::uint32, "install-time"},
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "tunnel-autoroute-dest"; yang_parent_name = "auto-route-destination-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::~TunnelAutorouteDest()
{
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_data() const
{
    if (is_presence_container) return true;
    return prefix_address.is_set
	|| prefix_length.is_set
	|| metric.is_set
	|| install_time.is_set
	|| interface_handle.is_set;
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(install_time.yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-autoroute-dest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_address.is_set || is_set(prefix_address.yfilter)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (install_time.is_set || is_set(install_time.yfilter)) leaf_name_data.push_back(install_time.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-address")
    {
        prefix_address = value;
        prefix_address.value_namespace = name_space;
        prefix_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-time")
    {
        install_time = value;
        install_time.value_namespace = name_space;
        install_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-address")
    {
        prefix_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "install-time")
    {
        install_time.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-address" || name == "prefix-length" || name == "metric" || name == "install-time" || name == "interface-handle")
        return true;
    return false;
}

MplsTe::FastReroute::FastReroute()
    :
    backup_tunnels(std::make_shared<MplsTe::FastReroute::BackupTunnels>())
    , protected_interfaces(std::make_shared<MplsTe::FastReroute::ProtectedInterfaces>())
    , protections(std::make_shared<MplsTe::FastReroute::Protections>())
    , promotion(std::make_shared<MplsTe::FastReroute::Promotion>())
{
    backup_tunnels->parent = this;
    protected_interfaces->parent = this;
    protections->parent = this;
    promotion->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::~FastReroute()
{
}

bool MplsTe::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (backup_tunnels !=  nullptr && backup_tunnels->has_data())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_data())
	|| (protections !=  nullptr && protections->has_data())
	|| (promotion !=  nullptr && promotion->has_data());
}

bool MplsTe::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_operation())
	|| (protections !=  nullptr && protections->has_operation())
	|| (promotion !=  nullptr && promotion->has_operation());
}

std::string MplsTe::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels == nullptr)
        {
            backup_tunnels = std::make_shared<MplsTe::FastReroute::BackupTunnels>();
        }
        return backup_tunnels;
    }

    if(child_yang_name == "protected-interfaces")
    {
        if(protected_interfaces == nullptr)
        {
            protected_interfaces = std::make_shared<MplsTe::FastReroute::ProtectedInterfaces>();
        }
        return protected_interfaces;
    }

    if(child_yang_name == "protections")
    {
        if(protections == nullptr)
        {
            protections = std::make_shared<MplsTe::FastReroute::Protections>();
        }
        return protections;
    }

    if(child_yang_name == "promotion")
    {
        if(promotion == nullptr)
        {
            promotion = std::make_shared<MplsTe::FastReroute::Promotion>();
        }
        return promotion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_tunnels != nullptr)
    {
        children["backup-tunnels"] = backup_tunnels;
    }

    if(protected_interfaces != nullptr)
    {
        children["protected-interfaces"] = protected_interfaces;
    }

    if(protections != nullptr)
    {
        children["protections"] = protections;
    }

    if(promotion != nullptr)
    {
        children["promotion"] = promotion;
    }

    return children;
}

void MplsTe::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnels" || name == "protected-interfaces" || name == "protections" || name == "promotion")
        return true;
    return false;
}

MplsTe::FastReroute::BackupTunnels::BackupTunnels()
    :
    backup_tunnel(this, {"tunnel_name", "interface_name"})
{

    yang_name = "backup-tunnels"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::BackupTunnels::~BackupTunnels()
{
}

bool MplsTe::FastReroute::BackupTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_tunnel.len(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FastReroute::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.len(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::FastReroute::BackupTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::BackupTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel")
    {
        auto c = std::make_shared<MplsTe::FastReroute::BackupTunnels::BackupTunnel>();
        c->parent = this;
        backup_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::BackupTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : backup_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::FastReroute::BackupTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::FastReroute::BackupTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::FastReroute::BackupTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel")
        return true;
    return false;
}

MplsTe::FastReroute::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    interface_name{YType::str, "interface-name"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_status{YType::enumeration, "backup-status"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    general_status{YType::enumeration, "general-status"},
    connection_status{YType::enumeration, "connection-status"},
    output_interface_name{YType::str, "output-interface-name"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth{YType::uint32, "bandwidth"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    ls_ps{YType::uint32, "ls-ps"},
    s2l_families{YType::uint32, "s2l-families"},
    s2_ls{YType::uint32, "s2-ls"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"}
{

    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTe::FastReroute::BackupTunnels::BackupTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| interface_name.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_status.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| tunnel_attribute_set_name.is_set
	|| has_attribute_set.is_set
	|| is_attribute_set_in_db.is_set
	|| recreate_timer_is_running.is_set
	|| recreate_remaining_time.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| general_status.is_set
	|| connection_status.is_set
	|| output_interface_name.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth.is_set
	|| tunnel_instance.is_set
	|| in_use_bandwidth.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| ls_ps.is_set
	|| s2l_families.is_set
	|| s2_ls.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set;
}

bool MplsTe::FastReroute::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter);
}

std::string MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/backup-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::FastReroute::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FastReroute::BackupTunnels::BackupTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::FastReroute::BackupTunnels::BackupTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "interface-name" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-status" || name == "backup-type" || name == "backup-usage" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "tunnel-attribute-set-name" || name == "has-attribute-set" || name == "is-attribute-set-in-db" || name == "recreate-timer-is-running" || name == "recreate-remaining-time" || name == "source-address" || name == "destination-address" || name == "general-status" || name == "connection-status" || name == "output-interface-name" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "bandwidth" || name == "tunnel-instance" || name == "in-use-bandwidth" || name == "soft-preempted-in-use-bandwidth" || name == "ls-ps" || name == "s2l-families" || name == "s2-ls" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterfaces()
    :
    protected_interface(this, {"interface_name", "backup_tunnel_name"})
{

    yang_name = "protected-interfaces"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::ProtectedInterfaces::~ProtectedInterfaces()
{
}

bool MplsTe::FastReroute::ProtectedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FastReroute::ProtectedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::FastReroute::ProtectedInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::ProtectedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::ProtectedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::ProtectedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface")
    {
        auto c = std::make_shared<MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface>();
        c->parent = this;
        protected_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::ProtectedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protected_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::FastReroute::ProtectedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::FastReroute::ProtectedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::FastReroute::ProtectedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::ProtectedInterface()
    :
    interface_name{YType::str, "interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_status{YType::enumeration, "backup-status"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    general_status{YType::enumeration, "general-status"},
    connection_status{YType::enumeration, "connection-status"},
    output_interface_name{YType::str, "output-interface-name"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth{YType::uint32, "bandwidth"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    ls_ps{YType::uint32, "ls-ps"},
    s2l_families{YType::uint32, "s2l-families"},
    s2_ls{YType::uint32, "s2-ls"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"}
{

    yang_name = "protected-interface"; yang_parent_name = "protected-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| backup_tunnel_name.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_status.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| tunnel_attribute_set_name.is_set
	|| has_attribute_set.is_set
	|| is_attribute_set_in_db.is_set
	|| recreate_timer_is_running.is_set
	|| recreate_remaining_time.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| general_status.is_set
	|| connection_status.is_set
	|| output_interface_name.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth.is_set
	|| tunnel_instance.is_set
	|| in_use_bandwidth.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| ls_ps.is_set
	|| s2l_families.is_set
	|| s2_ls.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set;
}

bool MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter);
}

std::string MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/protected-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(backup_tunnel_name, "backup-tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "backup-tunnel-name" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-status" || name == "backup-type" || name == "backup-usage" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "tunnel-attribute-set-name" || name == "has-attribute-set" || name == "is-attribute-set-in-db" || name == "recreate-timer-is-running" || name == "recreate-remaining-time" || name == "source-address" || name == "destination-address" || name == "general-status" || name == "connection-status" || name == "output-interface-name" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "bandwidth" || name == "tunnel-instance" || name == "in-use-bandwidth" || name == "soft-preempted-in-use-bandwidth" || name == "ls-ps" || name == "s2l-families" || name == "s2-ls" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTe::FastReroute::Protections::Protections()
    :
    protection(this, {"source_address", "destination_address", "tunnel_id", "extended_tunnel_id", "lsp_id", "sub_group_id", "sub_group_originator", "p2mp_id", "session_type"})
{

    yang_name = "protections"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::Protections::~Protections()
{
}

bool MplsTe::FastReroute::Protections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protection.len(); index++)
    {
        if(protection[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FastReroute::Protections::has_operation() const
{
    for (std::size_t index=0; index<protection.len(); index++)
    {
        if(protection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::FastReroute::Protections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::Protections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::Protections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::Protections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        auto c = std::make_shared<MplsTe::FastReroute::Protections::Protection>();
        c->parent = this;
        protection.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::Protections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protection.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::FastReroute::Protections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::FastReroute::Protections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::FastReroute::Protections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

MplsTe::FastReroute::Protections::Protection::Protection()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    sub_group_id{YType::uint32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    p2mp_id{YType::uint32, "p2mp-id"},
    session_type{YType::uint32, "session-type"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    role{YType::enumeration, "role"},
    admin_status{YType::enumeration, "admin-status"},
    operation_status{YType::enumeration, "operation-status"},
    is_signalled{YType::boolean, "is-signalled"},
    is_frr_requested{YType::boolean, "is-frr-requested"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    inbound_frr_state{YType::enumeration, "inbound-frr-state"},
    output_interface_lsp{YType::str, "output-interface-lsp"},
    output_label{YType::uint32, "output-label"},
    next_hop_address{YType::str, "next-hop-address"},
    frr_output_tunnel_interface{YType::str, "frr-output-tunnel-interface"},
    frr_output_label{YType::uint32, "frr-output-label"},
    backup_status{YType::enumeration, "backup-status"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    original_input_interface{YType::str, "original-input-interface"},
    input_label{YType::uint32, "input-label"},
    previous_hop_address{YType::str, "previous-hop-address"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    frr_output_interface{YType::str, "frr-output-interface"},
    backup_next_hop_address{YType::str, "backup-next-hop-address"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    sharing_type{YType::enumeration, "sharing-type"},
    is_p2mp_tunnel{YType::boolean, "is-p2mp-tunnel"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"}
{

    yang_name = "protection"; yang_parent_name = "protections"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::Protections::Protection::~Protection()
{
}

bool MplsTe::FastReroute::Protections::Protection::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| tunnel_id_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| tunnel_instance.is_set
	|| role.is_set
	|| admin_status.is_set
	|| operation_status.is_set
	|| is_signalled.is_set
	|| is_frr_requested.is_set
	|| outbound_frr_state.is_set
	|| inbound_frr_state.is_set
	|| output_interface_lsp.is_set
	|| output_label.is_set
	|| next_hop_address.is_set
	|| frr_output_tunnel_interface.is_set
	|| frr_output_label.is_set
	|| backup_status.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| original_input_interface.is_set
	|| input_label.is_set
	|| previous_hop_address.is_set
	|| backup_bandwidth.is_set
	|| frr_output_interface.is_set
	|| backup_next_hop_address.is_set
	|| lsp_bandwidth_type.is_set
	|| sharing_type.is_set
	|| is_p2mp_tunnel.is_set
	|| sub_group_original_id.is_set
	|| sub_group_id_xr.is_set
	|| p2mp_id_xr.is_set;
}

bool MplsTe::FastReroute::Protections::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(is_signalled.yfilter)
	|| ydk::is_set(is_frr_requested.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(inbound_frr_state.yfilter)
	|| ydk::is_set(output_interface_lsp.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(frr_output_tunnel_interface.yfilter)
	|| ydk::is_set(frr_output_label.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter)
	|| ydk::is_set(frr_output_interface.yfilter)
	|| ydk::is_set(backup_next_hop_address.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(sharing_type.yfilter)
	|| ydk::is_set(is_p2mp_tunnel.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter);
}

std::string MplsTe::FastReroute::Protections::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/protections/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::Protections::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(session_type, "session-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::Protections::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (is_signalled.is_set || is_set(is_signalled.yfilter)) leaf_name_data.push_back(is_signalled.get_name_leafdata());
    if (is_frr_requested.is_set || is_set(is_frr_requested.yfilter)) leaf_name_data.push_back(is_frr_requested.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (inbound_frr_state.is_set || is_set(inbound_frr_state.yfilter)) leaf_name_data.push_back(inbound_frr_state.get_name_leafdata());
    if (output_interface_lsp.is_set || is_set(output_interface_lsp.yfilter)) leaf_name_data.push_back(output_interface_lsp.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (frr_output_tunnel_interface.is_set || is_set(frr_output_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_output_tunnel_interface.get_name_leafdata());
    if (frr_output_label.is_set || is_set(frr_output_label.yfilter)) leaf_name_data.push_back(frr_output_label.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (frr_output_interface.is_set || is_set(frr_output_interface.yfilter)) leaf_name_data.push_back(frr_output_interface.get_name_leafdata());
    if (backup_next_hop_address.is_set || is_set(backup_next_hop_address.yfilter)) leaf_name_data.push_back(backup_next_hop_address.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (sharing_type.is_set || is_set(sharing_type.yfilter)) leaf_name_data.push_back(sharing_type.get_name_leafdata());
    if (is_p2mp_tunnel.is_set || is_set(is_p2mp_tunnel.yfilter)) leaf_name_data.push_back(is_p2mp_tunnel.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::Protections::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::Protections::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::FastReroute::Protections::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-signalled")
    {
        is_signalled = value;
        is_signalled.value_namespace = name_space;
        is_signalled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested = value;
        is_frr_requested.value_namespace = name_space;
        is_frr_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state = value;
        inbound_frr_state.value_namespace = name_space;
        inbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp = value;
        output_interface_lsp.value_namespace = name_space;
        output_interface_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface = value;
        frr_output_tunnel_interface.value_namespace = name_space;
        frr_output_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label = value;
        frr_output_label.value_namespace = name_space;
        frr_output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface = value;
        frr_output_interface.value_namespace = name_space;
        frr_output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address = value;
        backup_next_hop_address.value_namespace = name_space;
        backup_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharing-type")
    {
        sharing_type = value;
        sharing_type.value_namespace = name_space;
        sharing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel = value;
        is_p2mp_tunnel.value_namespace = name_space;
        is_p2mp_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FastReroute::Protections::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "is-signalled")
    {
        is_signalled.yfilter = yfilter;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface.yfilter = yfilter;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "sharing-type")
    {
        sharing_type.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
}

bool MplsTe::FastReroute::Protections::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "sub-group-id" || name == "sub-group-originator" || name == "p2mp-id" || name == "session-type" || name == "source-address-xr" || name == "destination-address-xr" || name == "tunnel-id-xr" || name == "extended-tunnel-id-xr" || name == "tunnel-name" || name == "tunnel-instance" || name == "role" || name == "admin-status" || name == "operation-status" || name == "is-signalled" || name == "is-frr-requested" || name == "outbound-frr-state" || name == "inbound-frr-state" || name == "output-interface-lsp" || name == "output-label" || name == "next-hop-address" || name == "frr-output-tunnel-interface" || name == "frr-output-label" || name == "backup-status" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "original-input-interface" || name == "input-label" || name == "previous-hop-address" || name == "backup-bandwidth" || name == "frr-output-interface" || name == "backup-next-hop-address" || name == "lsp-bandwidth-type" || name == "sharing-type" || name == "is-p2mp-tunnel" || name == "sub-group-original-id" || name == "sub-group-id-xr" || name == "p2mp-id-xr")
        return true;
    return false;
}

MplsTe::FastReroute::Promotion::Promotion()
    :
    promotion_period{YType::uint32, "promotion-period"},
    remaining_time{YType::uint32, "remaining-time"},
    is_configured{YType::boolean, "is-configured"}
{

    yang_name = "promotion"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FastReroute::Promotion::~Promotion()
{
}

bool MplsTe::FastReroute::Promotion::has_data() const
{
    if (is_presence_container) return true;
    return promotion_period.is_set
	|| remaining_time.is_set
	|| is_configured.is_set;
}

bool MplsTe::FastReroute::Promotion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(promotion_period.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(is_configured.yfilter);
}

std::string MplsTe::FastReroute::Promotion::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FastReroute::Promotion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "promotion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FastReroute::Promotion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (promotion_period.is_set || is_set(promotion_period.yfilter)) leaf_name_data.push_back(promotion_period.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::FastReroute::Promotion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::FastReroute::Promotion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::FastReroute::Promotion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "promotion-period")
    {
        promotion_period = value;
        promotion_period.value_namespace = name_space;
        promotion_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FastReroute::Promotion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "promotion-period")
    {
        promotion_period.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
}

bool MplsTe::FastReroute::Promotion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "promotion-period" || name == "remaining-time" || name == "is-configured")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSets()
    :
    attribute_set(this, {"attribute_set_type", "attribute_set_name"})
{

    yang_name = "attribute-sets"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AttributeSets::~AttributeSets()
{
}

bool MplsTe::AttributeSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AttributeSets::has_operation() const
{
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AttributeSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AttributeSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet>();
        c->parent = this;
        attribute_set.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : attribute_set.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AttributeSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AttributeSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSet()
    :
    attribute_set_type{YType::enumeration, "attribute-set-type"},
    attribute_set_name{YType::str, "attribute-set-name"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
        ,
    attribute_set_union(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "attribute-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AttributeSets::AttributeSet::~AttributeSet()
{
}

bool MplsTe::AttributeSets::AttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return attribute_set_type.is_set
	|| attribute_set_name.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_type.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/attribute-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AttributeSets::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    ADD_KEY_TOKEN(attribute_set_type, "attribute-set-type");
    ADD_KEY_TOKEN(attribute_set_name, "attribute-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_type.is_set || is_set(attribute_set_type.yfilter)) leaf_name_data.push_back(attribute_set_type.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-type")
    {
        attribute_set_type = value;
        attribute_set_type.value_namespace = name_space;
        attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-type")
    {
        attribute_set_type.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "attribute-set-type" || name == "attribute-set-name" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
        ,
    attribute_set_path_option(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
    , attribute_set_autobackup(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
    , attribute_set_automesh(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
    , attribute_set_xro(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>())
    , attribute_set_p2mpte(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>())
    , attribute_set_aps_pp(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
    , attribute_set_p2p_te(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_delay_limit_configured{YType::boolean, "is-delay-limit-configured"},
    delay_limit{YType::uint32, "delay-limit"}
        ,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
    , bfd_reverse_path(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
    , tunnel_id(this, {})
    , version_info(this, {})
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_delay_limit_configured.is_set
	|| delay_limit.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_delay_limit_configured.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_delay_limit_configured.is_set || is_set(is_delay_limit_configured.yfilter)) leaf_name_data.push_back(is_delay_limit_configured.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        c->parent = this;
        tunnel_id.append(c);
        return c;
    }

    if(child_yang_name == "version-info")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    count = 0;
    for (auto c : tunnel_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : version_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured = value;
        is_delay_limit_configured.value_namespace = name_space;
        is_delay_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured" || name == "is-delay-limit-configured" || name == "delay-limit")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    if (is_presence_container) return true;
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    record_route{YType::boolean, "record-route"}
        ,
    signalled_name(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
    , affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
    , logging(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
    , policy_class_entry(this, {})
    , tunnel_id(this, {})
    , protected_interface(this, {})
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return is_signalled_name_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| is_affinity_configured.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.append(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        c->parent = this;
        tunnel_id.append(c);
        return c;
    }

    if(child_yang_name == "protected-interface")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    count = 0;
    for (auto c : policy_class_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : tunnel_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : protected_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    if (is_presence_container) return true;
    return protected_interface.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    forward_class{YType::uint32, "forward-class"},
    is_forward_class_configured{YType::boolean, "is-forward-class-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    record_route{YType::boolean, "record-route"},
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    bandwidth{YType::uint32, "bandwidth"},
    load_share{YType::uint32, "load-share"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"}
        ,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
    , logging(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
    , policy_class_entry(this, {})
    , mesh_group_id(this, {})
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| forward_class.is_set
	|| is_forward_class_configured.is_set
	|| is_affinity_configured.is_set
	|| fast_reroute.is_set
	|| frr_node_protection.is_set
	|| frr_bandwidth_protection.is_set
	|| record_route.is_set
	|| auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| soft_preemption_configured.is_set
	|| bandwidth.is_set
	|| load_share.is_set
	|| is_interface_bw_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(is_forward_class_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (is_forward_class_configured.is_set || is_set(is_forward_class_configured.yfilter)) leaf_name_data.push_back(is_forward_class_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        c->parent = this;
        policy_class_entry.append(c);
        return c;
    }

    if(child_yang_name == "mesh-group-id")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        c->parent = this;
        mesh_group_id.append(c);
        return c;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        c->parent = this;
        tunnel_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    count = 0;
    for (auto c : policy_class_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mesh_group_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : tunnel_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured = value;
        is_forward_class_configured.value_namespace = name_space;
        is_forward_class_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-forward-class-configured" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    if (is_presence_container) return true;
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
        ,
    xro_subobject(this, {})
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : xro_subobject.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
        ,
    ipv4_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
    , ipv6_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
    , unnumbered_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
    , as_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
    , srlg_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
    , lsp_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    if (is_presence_container) return true;
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    if (is_presence_container) return true;
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
        ,
    fec(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    if (is_presence_container) return true;
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::AttributeSetP2mpte()
    :
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"}
        ,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>())
    , tunnel_id(this, {})
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::~AttributeSetP2mpte()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_affinity_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId>();
        c->parent = this;
        tunnel_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    count = 0;
    for (auto c : tunnel_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::~TunnelId()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
        ,
    revert_schedule(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    if (is_presence_container) return true;
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(revert_schedule != nullptr)
    {
        children["revert-schedule"] = revert_schedule;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    if (is_presence_container) return true;
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::AttributeSetP2pTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"}
        ,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>())
    , logging(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>())
    , prepend_list(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>())
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::~AttributeSetP2pTe()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| path_selection_metric.is_set
	|| is_path_selection_metric_configured.is_set
	|| path_selection_segment_routing_margin.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_path_select_configured.is_set
	|| is_prepend_list_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId>();
        c->parent = this;
        tunnel_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        children["prepend-list"] = prepend_list;
    }

    count = 0;
    for (auto c : tunnel_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::~Logging()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependList()
    :
    prepend_entry(this, {})
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::~PrependList()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prepend_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::~TunnelId()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBriefs()
    :
    igp_area_brief(this, {"protocol", "process_tag"})
{

    yang_name = "igp-area-briefs"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::IgpAreaBriefs::~IgpAreaBriefs()
{
}

bool MplsTe::IgpAreaBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_area_brief.len(); index++)
    {
        if(igp_area_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::IgpAreaBriefs::has_operation() const
{
    for (std::size_t index=0; index<igp_area_brief.len(); index++)
    {
        if(igp_area_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::IgpAreaBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreaBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area-brief")
    {
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief>();
        c->parent = this;
        igp_area_brief.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : igp_area_brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::IgpAreaBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::IgpAreaBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-brief")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::IgpAreaBrief()
    :
    protocol{YType::enumeration, "protocol"},
    process_tag{YType::str, "process-tag"},
    igp_type{YType::enumeration, "igp-type"},
    instance_name{YType::str, "instance-name"},
    igp_system_id{YType::str, "igp-system-id"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    is_connection_up{YType::boolean, "is-connection-up"},
    connection_up_count{YType::uint32, "connection-up-count"},
    connection_down_count{YType::uint32, "connection-down-count"}
        ,
    secondary_router_id(this, {})
    , area(this, {})
{

    yang_name = "igp-area-brief"; yang_parent_name = "igp-area-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::~IgpAreaBrief()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| process_tag.is_set
	|| igp_type.is_set
	|| instance_name.is_set
	|| igp_system_id.is_set
	|| configured_te_router_id.is_set
	|| global_router_id.is_set
	|| globall_router_id_optical.is_set
	|| in_use_te_router_id.is_set
	|| is_connection_up.is_set
	|| connection_up_count.is_set
	|| connection_down_count.is_set;
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_operation() const
{
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(connection_down_count.yfilter);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/igp-area-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-brief";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(process_tag, "process-tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-router-id")
    {
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.append(c);
        return c;
    }

    if(child_yang_name == "area")
    {
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area>();
        c->parent = this;
        area.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : secondary_router_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-tag")
    {
        process_tag = value;
        process_tag.value_namespace = name_space;
        process_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
        global_router_id.value_namespace = name_space;
        global_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
        globall_router_id_optical.value_namespace = name_space;
        globall_router_id_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id" || name == "area" || name == "protocol" || name == "process-tag" || name == "igp-type" || name == "instance-name" || name == "igp-system-id" || name == "configured-te-router-id" || name == "global-router-id" || name == "globall-router-id-optical" || name == "in-use-te-router-id" || name == "is-connection-up" || name == "connection-up-count" || name == "connection-down-count")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::Area()
    :
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    area_format{YType::enumeration, "area-format"},
    is_config_ready{YType::boolean, "is-config-ready"}
        ,
    active_data(std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::~Area()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_data() const
{
    if (is_presence_container) return true;
    return area_index.is_set
	|| area_number.is_set
	|| area_format.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-index")
    {
        area_index = value;
        area_index.value_namespace = name_space;
        area_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-number")
    {
        area_number = value;
        area_number.value_namespace = name_space;
        area_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-index" || name == "area-number" || name == "area-format" || name == "is-config-ready")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::ActiveData()
    :
    interfaces_count{YType::uint32, "interfaces-count"},
    link_idt_received{YType::boolean, "link-idt-received"},
    topology_idt_received{YType::boolean, "topology-idt-received"},
    sr_strict{YType::boolean, "sr-strict"},
    p2p_heads_count{YType::uint32, "p2p-heads-count"},
    p2p_autoroute_announced_count{YType::uint32, "p2p-autoroute-announced-count"},
    p2p_forwarding_adjacency_count{YType::uint32, "p2p-forwarding-adjacency-count"},
    p2mp_destination_count{YType::uint32, "p2mp-destination-count"},
    tunnel_loose_hops{YType::uint32, "tunnel-loose-hops"}
        ,
    area_statistics(std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::~ActiveData()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_data() const
{
    if (is_presence_container) return true;
    return interfaces_count.is_set
	|| link_idt_received.is_set
	|| topology_idt_received.is_set
	|| sr_strict.is_set
	|| p2p_heads_count.is_set
	|| p2p_autoroute_announced_count.is_set
	|| p2p_forwarding_adjacency_count.is_set
	|| p2mp_destination_count.is_set
	|| tunnel_loose_hops.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data());
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
        interfaces_count.value_namespace = name_space;
        interfaces_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
        link_idt_received.value_namespace = name_space;
        link_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
        p2p_autoroute_announced_count.value_namespace = name_space;
        p2p_autoroute_announced_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
        p2p_forwarding_adjacency_count.value_namespace = name_space;
        p2p_forwarding_adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "topology-idt-received" || name == "sr-strict" || name == "p2p-heads-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2mp-destination-count" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::AreaStatistics()
    :
    area_adjacency_request_messages{YType::uint32, "area-adjacency-request-messages"},
    area_adjacency_announce_messages{YType::uint32, "area-adjacency-announce-messages"},
    area_flood_messages{YType::uint32, "area-flood-messages"},
    area_lsa_announce_messages{YType::uint32, "area-lsa-announce-messages"},
    area_lsa_fragment_announce_messages{YType::uint32, "area-lsa-fragment-announce-messages"},
    area_lsa_delete_messages{YType::uint32, "area-lsa-delete-messages"},
    area_lsa_fragment_delete_messages{YType::uint32, "area-lsa-fragment-delete-messages"},
    area_tunnel_announce_messages{YType::uint32, "area-tunnel-announce-messages"}
{

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_data() const
{
    if (is_presence_container) return true;
    return area_adjacency_request_messages.is_set
	|| area_adjacency_announce_messages.is_set
	|| area_flood_messages.is_set
	|| area_lsa_announce_messages.is_set
	|| area_lsa_fragment_announce_messages.is_set
	|| area_lsa_delete_messages.is_set
	|| area_lsa_fragment_delete_messages.is_set
	|| area_tunnel_announce_messages.is_set;
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
        area_flood_messages.value_namespace = name_space;
        area_flood_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
        area_lsa_announce_messages.value_namespace = name_space;
        area_lsa_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
        area_lsa_fragment_delete_messages.value_namespace = name_space;
        area_lsa_fragment_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
        area_tunnel_announce_messages.value_namespace = name_space;
        area_tunnel_announce_messages.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-request-messages" || name == "area-adjacency-announce-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTe::BandwidthAccountingCounters::BandwidthAccountingCounters()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    bandwidth_application_count{YType::uint32, "bandwidth-application-count"},
    bandwidth_sample_count{YType::uint32, "bandwidth-sample-count"},
    invalid_sample_count{YType::uint32, "invalid-sample-count"},
    skipped_application_count{YType::uint32, "skipped-application-count"},
    capped_sample_count{YType::uint32, "capped-sample-count"},
    high_latency_count{YType::uint32, "high-latency-count"}
{

    yang_name = "bandwidth-accounting-counters"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::BandwidthAccountingCounters::~BandwidthAccountingCounters()
{
}

bool MplsTe::BandwidthAccountingCounters::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| bandwidth_application_count.is_set
	|| bandwidth_sample_count.is_set
	|| invalid_sample_count.is_set
	|| skipped_application_count.is_set
	|| capped_sample_count.is_set
	|| high_latency_count.is_set;
}

bool MplsTe::BandwidthAccountingCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(bandwidth_application_count.yfilter)
	|| ydk::is_set(bandwidth_sample_count.yfilter)
	|| ydk::is_set(invalid_sample_count.yfilter)
	|| ydk::is_set(skipped_application_count.yfilter)
	|| ydk::is_set(capped_sample_count.yfilter)
	|| ydk::is_set(high_latency_count.yfilter);
}

std::string MplsTe::BandwidthAccountingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::BandwidthAccountingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-accounting-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::BandwidthAccountingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (bandwidth_application_count.is_set || is_set(bandwidth_application_count.yfilter)) leaf_name_data.push_back(bandwidth_application_count.get_name_leafdata());
    if (bandwidth_sample_count.is_set || is_set(bandwidth_sample_count.yfilter)) leaf_name_data.push_back(bandwidth_sample_count.get_name_leafdata());
    if (invalid_sample_count.is_set || is_set(invalid_sample_count.yfilter)) leaf_name_data.push_back(invalid_sample_count.get_name_leafdata());
    if (skipped_application_count.is_set || is_set(skipped_application_count.yfilter)) leaf_name_data.push_back(skipped_application_count.get_name_leafdata());
    if (capped_sample_count.is_set || is_set(capped_sample_count.yfilter)) leaf_name_data.push_back(capped_sample_count.get_name_leafdata());
    if (high_latency_count.is_set || is_set(high_latency_count.yfilter)) leaf_name_data.push_back(high_latency_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::BandwidthAccountingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::BandwidthAccountingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::BandwidthAccountingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-application-count")
    {
        bandwidth_application_count = value;
        bandwidth_application_count.value_namespace = name_space;
        bandwidth_application_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-sample-count")
    {
        bandwidth_sample_count = value;
        bandwidth_sample_count.value_namespace = name_space;
        bandwidth_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-sample-count")
    {
        invalid_sample_count = value;
        invalid_sample_count.value_namespace = name_space;
        invalid_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped-application-count")
    {
        skipped_application_count = value;
        skipped_application_count.value_namespace = name_space;
        skipped_application_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capped-sample-count")
    {
        capped_sample_count = value;
        capped_sample_count.value_namespace = name_space;
        capped_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-latency-count")
    {
        high_latency_count = value;
        high_latency_count.value_namespace = name_space;
        high_latency_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::BandwidthAccountingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "bandwidth-application-count")
    {
        bandwidth_application_count.yfilter = yfilter;
    }
    if(value_path == "bandwidth-sample-count")
    {
        bandwidth_sample_count.yfilter = yfilter;
    }
    if(value_path == "invalid-sample-count")
    {
        invalid_sample_count.yfilter = yfilter;
    }
    if(value_path == "skipped-application-count")
    {
        skipped_application_count.yfilter = yfilter;
    }
    if(value_path == "capped-sample-count")
    {
        capped_sample_count.yfilter = yfilter;
    }
    if(value_path == "high-latency-count")
    {
        high_latency_count.yfilter = yfilter;
    }
}

bool MplsTe::BandwidthAccountingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "bandwidth-application-count" || name == "bandwidth-sample-count" || name == "invalid-sample-count" || name == "skipped-application-count" || name == "capped-sample-count" || name == "high-latency-count")
        return true;
    return false;
}

MplsTe::Tunnels::Tunnels()
    :
    tunnel_flex_lsps(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps>())
    , tunnel_auto_bandwidths(std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths>())
    , summary(std::make_shared<MplsTe::Tunnels::Summary>())
    , tunnel_path_protections(std::make_shared<MplsTe::Tunnels::TunnelPathProtections>())
{
    tunnel_flex_lsps->parent = this;
    tunnel_auto_bandwidths->parent = this;
    summary->parent = this;
    tunnel_path_protections->parent = this;

    yang_name = "tunnels"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::~Tunnels()
{
}

bool MplsTe::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_flex_lsps !=  nullptr && tunnel_flex_lsps->has_data())
	|| (tunnel_auto_bandwidths !=  nullptr && tunnel_auto_bandwidths->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (tunnel_path_protections !=  nullptr && tunnel_path_protections->has_data());
}

bool MplsTe::Tunnels::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_flex_lsps !=  nullptr && tunnel_flex_lsps->has_operation())
	|| (tunnel_auto_bandwidths !=  nullptr && tunnel_auto_bandwidths->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tunnel_path_protections !=  nullptr && tunnel_path_protections->has_operation());
}

std::string MplsTe::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-flex-lsps")
    {
        if(tunnel_flex_lsps == nullptr)
        {
            tunnel_flex_lsps = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps>();
        }
        return tunnel_flex_lsps;
    }

    if(child_yang_name == "tunnel-auto-bandwidths")
    {
        if(tunnel_auto_bandwidths == nullptr)
        {
            tunnel_auto_bandwidths = std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths>();
        }
        return tunnel_auto_bandwidths;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::Tunnels::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "tunnel-path-protections")
    {
        if(tunnel_path_protections == nullptr)
        {
            tunnel_path_protections = std::make_shared<MplsTe::Tunnels::TunnelPathProtections>();
        }
        return tunnel_path_protections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_flex_lsps != nullptr)
    {
        children["tunnel-flex-lsps"] = tunnel_flex_lsps;
    }

    if(tunnel_auto_bandwidths != nullptr)
    {
        children["tunnel-auto-bandwidths"] = tunnel_auto_bandwidths;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(tunnel_path_protections != nullptr)
    {
        children["tunnel-path-protections"] = tunnel_path_protections;
    }

    return children;
}

void MplsTe::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-flex-lsps" || name == "tunnel-auto-bandwidths" || name == "summary" || name == "tunnel-path-protections")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsps()
    :
    tunnel_flex_lsp(this, {})
{

    yang_name = "tunnel-flex-lsps"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::~TunnelFlexLsps()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_flex_lsp.len(); index++)
    {
        if(tunnel_flex_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Tunnels::TunnelFlexLsps::has_operation() const
{
    for (std::size_t index=0; index<tunnel_flex_lsp.len(); index++)
    {
        if(tunnel_flex_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-flex-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-flex-lsp")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp>();
        c->parent = this;
        tunnel_flex_lsp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel_flex_lsp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::TunnelFlexLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-flex-lsp")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::TunnelFlexLsp()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    tun_id{YType::uint16, "tun-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
        ,
    working_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>())
    , protect_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>())
{
    working_lsp->parent = this;
    protect_lsp->parent = this;

    yang_name = "tunnel-flex-lsp"; yang_parent_name = "tunnel-flex-lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::~TunnelFlexLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_data() const
{
    if (is_presence_container) return true;
    return ctype.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| is_tunnel_up.is_set
	|| tun_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(tun_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-flex-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (tun_id.is_set || is_set(tun_id.yfilter)) leaf_name_data.push_back(tun_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tun-id")
    {
        tun_id = value;
        tun_id.value_namespace = name_space;
        tun_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "tun-id")
    {
        tun_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "working-lsp" || name == "protect-lsp" || name == "ctype" || name == "tunnel-id" || name == "tunnel-name" || name == "is-tunnel-up" || name == "tun-id" || name == "source-address" || name == "destination-address" || name == "extended-tunnel-id")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::WorkingLsp()
    :
    is_operational{YType::boolean, "is-operational"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"}
        ,
    flex_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>())
    , association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>())
    , protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection>())
    , reverse_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp>())
    , lsp_hop(this, {})
{
    flex_info->parent = this;
    association->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;

    yang_name = "working-lsp"; yang_parent_name = "tunnel-flex-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::~WorkingLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return is_operational.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| lsp_mode.is_set
	|| lsp_local_label.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_operational.yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_operational.is_set || is_set(is_operational.yfilter)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp>();
        }
        return reverse_lsp;
    }

    if(child_yang_name == "lsp-hop")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop>();
        c->parent = this;
        lsp_hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    count = 0;
    for (auto c : lsp_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-operational")
    {
        is_operational = value;
        is_operational.value_namespace = name_space;
        is_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime = value;
        lsp_uptime.value_namespace = name_space;
        lsp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id = value;
        path_protection_lsp_id.value_namespace = name_space;
        path_protection_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label = value;
        lsp_local_label.value_namespace = name_space;
        lsp_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface = value;
        lsp_output_interface.value_namespace = name_space;
        lsp_output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label = value;
        lsp_output_label.value_namespace = name_space;
        lsp_output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-operational")
    {
        is_operational.yfilter = yfilter;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label.yfilter = yfilter;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface.yfilter = yfilter;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-info" || name == "association" || name == "protection" || name == "reverse-lsp" || name == "lsp-hop" || name == "is-operational" || name == "lsp-uptime" || name == "path-protection-lsp-id" || name == "lsp-mode" || name == "lsp-local-label" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexInfo()
    :
    entry_exists{YType::boolean, "entry-exists"},
    in_label{YType::uint32, "in-label"},
    bfd_created{YType::boolean, "bfd-created"},
    bfd_up{YType::boolean, "bfd-up"},
    oam_created{YType::boolean, "oam-created"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_time{YType::uint32, "fault-time"}
        ,
    flex_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;

    yang_name = "flex-info"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::~FlexInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_data() const
{
    if (is_presence_container) return true;
    return entry_exists.is_set
	|| in_label.is_set
	|| bfd_created.is_set
	|| bfd_up.is_set
	|| oam_created.is_set
	|| bfd_next_hop.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_out_ifh.is_set
	|| bfd_int_label.is_set
	|| bfd_egress_label.is_set
	|| fault_ldi_lockout.is_set
	|| fault_ldi.is_set
	|| fault_lkr.is_set
	|| fault_ais.is_set
	|| fault_time.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_exists.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bfd_created.yfilter)
	|| ydk::is_set(bfd_up.yfilter)
	|| ydk::is_set(oam_created.yfilter)
	|| ydk::is_set(bfd_next_hop.yfilter)
	|| ydk::is_set(bfd_tun_ifh.yfilter)
	|| ydk::is_set(bfd_out_ifh.yfilter)
	|| ydk::is_set(bfd_int_label.yfilter)
	|| ydk::is_set(bfd_egress_label.yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_exists.is_set || is_set(entry_exists.yfilter)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bfd_created.is_set || is_set(bfd_created.yfilter)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.yfilter)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.yfilter)) leaf_name_data.push_back(oam_created.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.yfilter)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.yfilter)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.yfilter)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.yfilter)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.yfilter)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-fec")
    {
        if(flex_fec == nullptr)
        {
            flex_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec>();
        }
        return flex_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_fec != nullptr)
    {
        children["flex-fec"] = flex_fec;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-exists")
    {
        entry_exists = value;
        entry_exists.value_namespace = name_space;
        entry_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-created")
    {
        bfd_created = value;
        bfd_created.value_namespace = name_space;
        bfd_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
        bfd_up.value_namespace = name_space;
        bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
        oam_created.value_namespace = name_space;
        oam_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
        bfd_next_hop.value_namespace = name_space;
        bfd_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
        bfd_tun_ifh.value_namespace = name_space;
        bfd_tun_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
        bfd_out_ifh.value_namespace = name_space;
        bfd_out_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
        bfd_int_label.value_namespace = name_space;
        bfd_int_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
        bfd_egress_label.value_namespace = name_space;
        bfd_egress_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-exists")
    {
        entry_exists.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bfd-created")
    {
        bfd_created.yfilter = yfilter;
    }
    if(value_path == "bfd-up")
    {
        bfd_up.yfilter = yfilter;
    }
    if(value_path == "oam-created")
    {
        oam_created.yfilter = yfilter;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop.yfilter = yfilter;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label.yfilter = yfilter;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label.yfilter = yfilter;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-fec" || name == "entry-exists" || name == "in-label" || name == "bfd-created" || name == "bfd-up" || name == "oam-created" || name == "bfd-next-hop" || name == "bfd-tun-ifh" || name == "bfd-out-ifh" || name == "bfd-int-label" || name == "bfd-egress-label" || name == "fault-ldi-lockout" || name == "fault-ldi" || name == "fault-lkr" || name == "fault-ais" || name == "fault-time")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "flex-fec"; yang_parent_name = "flex-info"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/flex-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::Association()
    :
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
        ,
    s2l_extended_id(this, {})
{

    yang_name = "association"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_type.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId>();
        c->parent = this;
        s2l_extended_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : s2l_extended_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-type" || name == "s2l-association-tie-role" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::S2lExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::~S2lExtendedId()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2lExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::Protection()
    :
    s2l_secondary{YType::boolean, "s2l-secondary"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    enhanced{YType::boolean, "enhanced"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    shared{YType::boolean, "shared"},
    link_unprotected{YType::boolean, "link-unprotected"},
    extra_traffic{YType::boolean, "extra-traffic"},
    any{YType::boolean, "any"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"}
{

    yang_name = "protection"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_data() const
{
    if (is_presence_container) return true;
    return s2l_secondary.is_set
	|| s2l_protecting.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| enhanced.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| shared.is_set
	|| link_unprotected.is_set
	|| extra_traffic.is_set
	|| any.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| one_to_n_protection_et.is_set
	|| one_plus_one_uni.is_set
	|| one_plus_one_bi.is_set
	|| lsp_unprotected.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-secondary" || name == "s2l-protecting" || name == "s2l-notification" || name == "s2l-operational" || name == "enhanced" || name == "ded1-plus1" || name == "ded1-to1" || name == "shared" || name == "link-unprotected" || name == "extra-traffic" || name == "any" || name == "rerouting" || name == "rerouting-no-et" || name == "one-to-n-protection-et" || name == "one-plus-one-uni" || name == "one-plus-one-bi" || name == "lsp-unprotected")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLsp()
    :
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"}
        ,
    reverse_lsp_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec>())
    , association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association>())
    , protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection>())
{
    reverse_lsp_fec->parent = this;
    association->parent = this;
    protection->parent = this;

    yang_name = "reverse-lsp"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::~ReverseLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_data() const
{
    if (is_presence_container) return true;
    return reverse_lsp_present.is_set
	|| reverse_lsp_connected.is_set
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reverse_lsp_fec != nullptr)
    {
        children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-lsp-fec" || name == "association" || name == "protection" || name == "reverse-lsp-present" || name == "reverse-lsp-connected")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::ReverseLspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/reverse-lsp-fec/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::Association()
    :
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
        ,
    s2l_extended_id(this, {})
{

    yang_name = "association"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_type.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId>();
        c->parent = this;
        s2l_extended_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : s2l_extended_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-type" || name == "s2l-association-tie-role" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::S2lExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::~S2lExtendedId()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2lExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::Protection()
    :
    s2l_secondary{YType::boolean, "s2l-secondary"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    enhanced{YType::boolean, "enhanced"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    shared{YType::boolean, "shared"},
    link_unprotected{YType::boolean, "link-unprotected"},
    extra_traffic{YType::boolean, "extra-traffic"},
    any{YType::boolean, "any"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"}
{

    yang_name = "protection"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_data() const
{
    if (is_presence_container) return true;
    return s2l_secondary.is_set
	|| s2l_protecting.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| enhanced.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| shared.is_set
	|| link_unprotected.is_set
	|| extra_traffic.is_set
	|| any.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| one_to_n_protection_et.is_set
	|| one_plus_one_uni.is_set
	|| one_plus_one_bi.is_set
	|| lsp_unprotected.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-secondary" || name == "s2l-protecting" || name == "s2l-notification" || name == "s2l-operational" || name == "enhanced" || name == "ded1-plus1" || name == "ded1-to1" || name == "shared" || name == "link-unprotected" || name == "extra-traffic" || name == "any" || name == "rerouting" || name == "rerouting-no-et" || name == "one-to-n-protection-et" || name == "one-plus-one-uni" || name == "one-plus-one-bi" || name == "lsp-unprotected")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::~LspHop()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ProtectLsp()
    :
    is_operational{YType::boolean, "is-operational"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"}
        ,
    flex_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo>())
    , association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association>())
    , protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection>())
    , reverse_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp>())
    , lsp_hop(this, {})
{
    flex_info->parent = this;
    association->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;

    yang_name = "protect-lsp"; yang_parent_name = "tunnel-flex-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::~ProtectLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return is_operational.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| lsp_mode.is_set
	|| lsp_local_label.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_operational.yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_operational.is_set || is_set(is_operational.yfilter)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp>();
        }
        return reverse_lsp;
    }

    if(child_yang_name == "lsp-hop")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop>();
        c->parent = this;
        lsp_hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    count = 0;
    for (auto c : lsp_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-operational")
    {
        is_operational = value;
        is_operational.value_namespace = name_space;
        is_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime = value;
        lsp_uptime.value_namespace = name_space;
        lsp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id = value;
        path_protection_lsp_id.value_namespace = name_space;
        path_protection_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label = value;
        lsp_local_label.value_namespace = name_space;
        lsp_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface = value;
        lsp_output_interface.value_namespace = name_space;
        lsp_output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label = value;
        lsp_output_label.value_namespace = name_space;
        lsp_output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-operational")
    {
        is_operational.yfilter = yfilter;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label.yfilter = yfilter;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface.yfilter = yfilter;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-info" || name == "association" || name == "protection" || name == "reverse-lsp" || name == "lsp-hop" || name == "is-operational" || name == "lsp-uptime" || name == "path-protection-lsp-id" || name == "lsp-mode" || name == "lsp-local-label" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexInfo()
    :
    entry_exists{YType::boolean, "entry-exists"},
    in_label{YType::uint32, "in-label"},
    bfd_created{YType::boolean, "bfd-created"},
    bfd_up{YType::boolean, "bfd-up"},
    oam_created{YType::boolean, "oam-created"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_time{YType::uint32, "fault-time"}
        ,
    flex_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;

    yang_name = "flex-info"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::~FlexInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_data() const
{
    if (is_presence_container) return true;
    return entry_exists.is_set
	|| in_label.is_set
	|| bfd_created.is_set
	|| bfd_up.is_set
	|| oam_created.is_set
	|| bfd_next_hop.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_out_ifh.is_set
	|| bfd_int_label.is_set
	|| bfd_egress_label.is_set
	|| fault_ldi_lockout.is_set
	|| fault_ldi.is_set
	|| fault_lkr.is_set
	|| fault_ais.is_set
	|| fault_time.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_exists.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bfd_created.yfilter)
	|| ydk::is_set(bfd_up.yfilter)
	|| ydk::is_set(oam_created.yfilter)
	|| ydk::is_set(bfd_next_hop.yfilter)
	|| ydk::is_set(bfd_tun_ifh.yfilter)
	|| ydk::is_set(bfd_out_ifh.yfilter)
	|| ydk::is_set(bfd_int_label.yfilter)
	|| ydk::is_set(bfd_egress_label.yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_exists.is_set || is_set(entry_exists.yfilter)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bfd_created.is_set || is_set(bfd_created.yfilter)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.yfilter)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.yfilter)) leaf_name_data.push_back(oam_created.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.yfilter)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.yfilter)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.yfilter)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.yfilter)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.yfilter)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-fec")
    {
        if(flex_fec == nullptr)
        {
            flex_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec>();
        }
        return flex_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_fec != nullptr)
    {
        children["flex-fec"] = flex_fec;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-exists")
    {
        entry_exists = value;
        entry_exists.value_namespace = name_space;
        entry_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-created")
    {
        bfd_created = value;
        bfd_created.value_namespace = name_space;
        bfd_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
        bfd_up.value_namespace = name_space;
        bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
        oam_created.value_namespace = name_space;
        oam_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
        bfd_next_hop.value_namespace = name_space;
        bfd_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
        bfd_tun_ifh.value_namespace = name_space;
        bfd_tun_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
        bfd_out_ifh.value_namespace = name_space;
        bfd_out_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
        bfd_int_label.value_namespace = name_space;
        bfd_int_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
        bfd_egress_label.value_namespace = name_space;
        bfd_egress_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-exists")
    {
        entry_exists.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bfd-created")
    {
        bfd_created.yfilter = yfilter;
    }
    if(value_path == "bfd-up")
    {
        bfd_up.yfilter = yfilter;
    }
    if(value_path == "oam-created")
    {
        oam_created.yfilter = yfilter;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop.yfilter = yfilter;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label.yfilter = yfilter;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label.yfilter = yfilter;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-fec" || name == "entry-exists" || name == "in-label" || name == "bfd-created" || name == "bfd-up" || name == "oam-created" || name == "bfd-next-hop" || name == "bfd-tun-ifh" || name == "bfd-out-ifh" || name == "bfd-int-label" || name == "bfd-egress-label" || name == "fault-ldi-lockout" || name == "fault-ldi" || name == "fault-lkr" || name == "fault-ais" || name == "fault-time")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "flex-fec"; yang_parent_name = "flex-info"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/flex-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::Association()
    :
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
        ,
    s2l_extended_id(this, {})
{

    yang_name = "association"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_type.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId>();
        c->parent = this;
        s2l_extended_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : s2l_extended_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-type" || name == "s2l-association-tie-role" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::S2lExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::~S2lExtendedId()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2lExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::Protection()
    :
    s2l_secondary{YType::boolean, "s2l-secondary"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    enhanced{YType::boolean, "enhanced"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    shared{YType::boolean, "shared"},
    link_unprotected{YType::boolean, "link-unprotected"},
    extra_traffic{YType::boolean, "extra-traffic"},
    any{YType::boolean, "any"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"}
{

    yang_name = "protection"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_data() const
{
    if (is_presence_container) return true;
    return s2l_secondary.is_set
	|| s2l_protecting.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| enhanced.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| shared.is_set
	|| link_unprotected.is_set
	|| extra_traffic.is_set
	|| any.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| one_to_n_protection_et.is_set
	|| one_plus_one_uni.is_set
	|| one_plus_one_bi.is_set
	|| lsp_unprotected.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-secondary" || name == "s2l-protecting" || name == "s2l-notification" || name == "s2l-operational" || name == "enhanced" || name == "ded1-plus1" || name == "ded1-to1" || name == "shared" || name == "link-unprotected" || name == "extra-traffic" || name == "any" || name == "rerouting" || name == "rerouting-no-et" || name == "one-to-n-protection-et" || name == "one-plus-one-uni" || name == "one-plus-one-bi" || name == "lsp-unprotected")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLsp()
    :
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"}
        ,
    reverse_lsp_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec>())
    , association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association>())
    , protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection>())
{
    reverse_lsp_fec->parent = this;
    association->parent = this;
    protection->parent = this;

    yang_name = "reverse-lsp"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::~ReverseLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_data() const
{
    if (is_presence_container) return true;
    return reverse_lsp_present.is_set
	|| reverse_lsp_connected.is_set
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reverse_lsp_fec != nullptr)
    {
        children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-lsp-fec" || name == "association" || name == "protection" || name == "reverse-lsp-present" || name == "reverse-lsp-connected")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::ReverseLspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/reverse-lsp-fec/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::Association()
    :
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
        ,
    s2l_extended_id(this, {})
{

    yang_name = "association"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_type.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.len(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId>();
        c->parent = this;
        s2l_extended_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : s2l_extended_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-type" || name == "s2l-association-tie-role" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::S2lExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::~S2lExtendedId()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2lExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::Protection()
    :
    s2l_secondary{YType::boolean, "s2l-secondary"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    enhanced{YType::boolean, "enhanced"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    shared{YType::boolean, "shared"},
    link_unprotected{YType::boolean, "link-unprotected"},
    extra_traffic{YType::boolean, "extra-traffic"},
    any{YType::boolean, "any"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"}
{

    yang_name = "protection"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_data() const
{
    if (is_presence_container) return true;
    return s2l_secondary.is_set
	|| s2l_protecting.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| enhanced.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| shared.is_set
	|| link_unprotected.is_set
	|| extra_traffic.is_set
	|| any.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| one_to_n_protection_et.is_set
	|| one_plus_one_uni.is_set
	|| one_plus_one_bi.is_set
	|| lsp_unprotected.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-secondary" || name == "s2l-protecting" || name == "s2l-notification" || name == "s2l-operational" || name == "enhanced" || name == "ded1-plus1" || name == "ded1-to1" || name == "shared" || name == "link-unprotected" || name == "extra-traffic" || name == "any" || name == "rerouting" || name == "rerouting-no-et" || name == "one-to-n-protection-et" || name == "one-plus-one-uni" || name == "one-plus-one-bi" || name == "lsp-unprotected")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::~LspHop()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidths()
    :
    tunnel_auto_bandwidth(this, {"tunnel_name"})
{

    yang_name = "tunnel-auto-bandwidths"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelAutoBandwidths::~TunnelAutoBandwidths()
{
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_auto_bandwidth.len(); index++)
    {
        if(tunnel_auto_bandwidth[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::has_operation() const
{
    for (std::size_t index=0; index<tunnel_auto_bandwidth.len(); index++)
    {
        if(tunnel_auto_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-auto-bandwidths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelAutoBandwidths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelAutoBandwidths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-auto-bandwidth")
    {
        auto c = std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth>();
        c->parent = this;
        tunnel_auto_bandwidth.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelAutoBandwidths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel_auto_bandwidth.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Tunnels::TunnelAutoBandwidths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::TunnelAutoBandwidths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-auto-bandwidth")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::TunnelAutoBandwidth()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"},
    signaled_name{YType::str, "signaled-name"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    bandwidth_applications{YType::uint32, "bandwidth-applications"},
    last_bandwidth_applied{YType::uint32, "last-bandwidth-applied"},
    tunnel_requested_bandwidth{YType::uint32, "tunnel-requested-bandwidth"},
    signalled_bandwidth{YType::uint32, "signalled-bandwidth"},
    highest_bandwidth{YType::uint32, "highest-bandwidth"},
    last_sample_bandwidth{YType::uint32, "last-sample-bandwidth"},
    samples_collected{YType::uint32, "samples-collected"},
    time_left_application{YType::uint32, "time-left-application"}
        ,
    auto_bandwidth_status(std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus>())
{
    auto_bandwidth_status->parent = this;

    yang_name = "tunnel-auto-bandwidth"; yang_parent_name = "tunnel-auto-bandwidths"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::~TunnelAutoBandwidth()
{
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| tunnel_name_xr.is_set
	|| signaled_name.is_set
	|| tunnel_lsp_id.is_set
	|| bandwidth_applications.is_set
	|| last_bandwidth_applied.is_set
	|| tunnel_requested_bandwidth.is_set
	|| signalled_bandwidth.is_set
	|| highest_bandwidth.is_set
	|| last_sample_bandwidth.is_set
	|| samples_collected.is_set
	|| time_left_application.is_set
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_data());
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(bandwidth_applications.yfilter)
	|| ydk::is_set(last_bandwidth_applied.yfilter)
	|| ydk::is_set(tunnel_requested_bandwidth.yfilter)
	|| ydk::is_set(signalled_bandwidth.yfilter)
	|| ydk::is_set(highest_bandwidth.yfilter)
	|| ydk::is_set(last_sample_bandwidth.yfilter)
	|| ydk::is_set(samples_collected.yfilter)
	|| ydk::is_set(time_left_application.yfilter)
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_operation());
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-auto-bandwidths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-auto-bandwidth";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (bandwidth_applications.is_set || is_set(bandwidth_applications.yfilter)) leaf_name_data.push_back(bandwidth_applications.get_name_leafdata());
    if (last_bandwidth_applied.is_set || is_set(last_bandwidth_applied.yfilter)) leaf_name_data.push_back(last_bandwidth_applied.get_name_leafdata());
    if (tunnel_requested_bandwidth.is_set || is_set(tunnel_requested_bandwidth.yfilter)) leaf_name_data.push_back(tunnel_requested_bandwidth.get_name_leafdata());
    if (signalled_bandwidth.is_set || is_set(signalled_bandwidth.yfilter)) leaf_name_data.push_back(signalled_bandwidth.get_name_leafdata());
    if (highest_bandwidth.is_set || is_set(highest_bandwidth.yfilter)) leaf_name_data.push_back(highest_bandwidth.get_name_leafdata());
    if (last_sample_bandwidth.is_set || is_set(last_sample_bandwidth.yfilter)) leaf_name_data.push_back(last_sample_bandwidth.get_name_leafdata());
    if (samples_collected.is_set || is_set(samples_collected.yfilter)) leaf_name_data.push_back(samples_collected.get_name_leafdata());
    if (time_left_application.is_set || is_set(time_left_application.yfilter)) leaf_name_data.push_back(time_left_application.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bandwidth-status")
    {
        if(auto_bandwidth_status == nullptr)
        {
            auto_bandwidth_status = std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus>();
        }
        return auto_bandwidth_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_bandwidth_status != nullptr)
    {
        children["auto-bandwidth-status"] = auto_bandwidth_status;
    }

    return children;
}

void MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
        tunnel_lsp_id.value_namespace = name_space;
        tunnel_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications = value;
        bandwidth_applications.value_namespace = name_space;
        bandwidth_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied = value;
        last_bandwidth_applied.value_namespace = name_space;
        last_bandwidth_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-requested-bandwidth")
    {
        tunnel_requested_bandwidth = value;
        tunnel_requested_bandwidth.value_namespace = name_space;
        tunnel_requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-bandwidth")
    {
        signalled_bandwidth = value;
        signalled_bandwidth.value_namespace = name_space;
        signalled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth = value;
        highest_bandwidth.value_namespace = name_space;
        highest_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-bandwidth")
    {
        last_sample_bandwidth = value;
        last_sample_bandwidth.value_namespace = name_space;
        last_sample_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-collected")
    {
        samples_collected = value;
        samples_collected.value_namespace = name_space;
        samples_collected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left-application")
    {
        time_left_application = value;
        time_left_application.value_namespace = name_space;
        time_left_application.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id.yfilter = yfilter;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications.yfilter = yfilter;
    }
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied.yfilter = yfilter;
    }
    if(value_path == "tunnel-requested-bandwidth")
    {
        tunnel_requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "signalled-bandwidth")
    {
        signalled_bandwidth.yfilter = yfilter;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth.yfilter = yfilter;
    }
    if(value_path == "last-sample-bandwidth")
    {
        last_sample_bandwidth.yfilter = yfilter;
    }
    if(value_path == "samples-collected")
    {
        samples_collected.yfilter = yfilter;
    }
    if(value_path == "time-left-application")
    {
        time_left_application.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bandwidth-status" || name == "tunnel-name" || name == "tunnel-name-xr" || name == "signaled-name" || name == "tunnel-lsp-id" || name == "bandwidth-applications" || name == "last-bandwidth-applied" || name == "tunnel-requested-bandwidth" || name == "signalled-bandwidth" || name == "highest-bandwidth" || name == "last-sample-bandwidth" || name == "samples-collected" || name == "time-left-application")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::AutoBandwidthStatus()
    :
    is_auto_bandwidth_enabled{YType::boolean, "is-auto-bandwidth-enabled"},
    reactivation_time{YType::uint32, "reactivation-time"}
{

    yang_name = "auto-bandwidth-status"; yang_parent_name = "tunnel-auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::~AutoBandwidthStatus()
{
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_auto_bandwidth_enabled.is_set
	|| reactivation_time.is_set;
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_auto_bandwidth_enabled.yfilter)
	|| ydk::is_set(reactivation_time.yfilter);
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_enabled.is_set || is_set(is_auto_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_auto_bandwidth_enabled.get_name_leafdata());
    if (reactivation_time.is_set || is_set(reactivation_time.yfilter)) leaf_name_data.push_back(reactivation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled = value;
        is_auto_bandwidth_enabled.value_namespace = name_space;
        is_auto_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time = value;
        reactivation_time.value_namespace = name_space;
        reactivation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-auto-bandwidth-enabled" || name == "reactivation-time")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::Summary()
    :
    pcalc_tie_breaker_type{YType::enumeration, "pcalc-tie-breaker-type"},
    pcalc_tiebreaker{YType::uint32, "pcalc-tiebreaker"},
    tiebreaker_qualifier{YType::enumeration, "tiebreaker-qualifier"},
    te_process_status{YType::enumeration, "te-process-status"},
    is_rsvp_process_enabled{YType::boolean, "is-rsvp-process-enabled"},
    is_forwarding_enabled{YType::boolean, "is-forwarding-enabled"},
    activated_heads{YType::uint32, "activated-heads"},
    deactivated_heads{YType::uint32, "deactivated-heads"},
    recovered_heads{YType::uint32, "recovered-heads"},
    is_periodic_reoptimization_on{YType::boolean, "is-periodic-reoptimization-on"},
    reoptimization_period{YType::uint32, "reoptimization-period"},
    next_reoptimization_timer{YType::uint32, "next-reoptimization-timer"},
    auto_bandwidth_tunnels{YType::uint32, "auto-bandwidth-tunnels"},
    auto_bandwidth_collection_period{YType::uint32, "auto-bandwidth-collection-period"},
    is_promotion_on{YType::boolean, "is-promotion-on"},
    promotion_period{YType::uint32, "promotion-period"},
    next_promotion_timer{YType::uint32, "next-promotion-timer"},
    tunnel_check_period{YType::uint32, "tunnel-check-period"},
    next_check_time{YType::uint32, "next-check-time"},
    tunnel_verify_period{YType::uint32, "tunnel-verify-period"},
    next_verify_timer{YType::uint32, "next-verify-timer"},
    frr_head_tunnels{YType::uint32, "frr-head-tunnels"},
    protected_head_tunnels{YType::uint32, "protected-head-tunnels"},
    rerouted_head_tunnels{YType::uint32, "rerouted-head-tunnels"},
    frr_mid_point_tunnels{YType::uint32, "frr-mid-point-tunnels"},
    protected_mid_point_tunnels{YType::uint32, "protected-mid-point-tunnels"},
    rerouted_mid_point_tunnels{YType::uint32, "rerouted-mid-point-tunnels"},
    link_protected_tunnels{YType::uint32, "link-protected-tunnels"},
    node_protected_tunnels{YType::uint32, "node-protected-tunnels"},
    bw_protected_tunnels{YType::uint32, "bw-protected-tunnels"},
    frr_p2p_head_tunnels{YType::uint32, "frr-p2p-head-tunnels"},
    protected_p2p_head_tunnels{YType::uint32, "protected-p2p-head-tunnels"},
    rerouted_p2p_head_tunnels{YType::uint32, "rerouted-p2p-head-tunnels"},
    frr_p2p_mid_point_tunnels{YType::uint32, "frr-p2p-mid-point-tunnels"},
    protected_p2p_mid_point_tunnels{YType::uint32, "protected-p2p-mid-point-tunnels"},
    rerouted_p2p_mid_point_tunnels{YType::uint32, "rerouted-p2p-mid-point-tunnels"},
    link_protected_p2p_tunnels{YType::uint32, "link-protected-p2p-tunnels"},
    node_protected_p2p_tunnels{YType::uint32, "node-protected-p2p-tunnels"},
    bw_protected_p2p_tunnels{YType::uint32, "bw-protected-p2p-tunnels"},
    backup_tunnels{YType::uint32, "backup-tunnels"},
    backups_assigned{YType::uint32, "backups-assigned"},
    frr_protected_interfaces{YType::uint32, "frr-protected-interfaces"},
    rerouted_interfaces{YType::uint32, "rerouted-interfaces"},
    p2p_head_tunnels{YType::uint32, "p2p-head-tunnels"},
    up_p2p_head_tunnels{YType::uint32, "up-p2p-head-tunnels"},
    dynamic_up_p2p_head_tunnels{YType::uint32, "dynamic-up-p2p-head-tunnels"},
    frr_config_p2p_head_tunnels{YType::uint32, "frr-config-p2p-head-tunnels"},
    p2p_head_destinations{YType::uint32, "p2p-head-destinations"},
    p2p_head_destinations_up{YType::uint32, "p2p-head-destinations-up"},
    bw_protected_p2p_s2_ls{YType::uint32, "bw-protected-p2p-s2-ls"},
    link_protected_p2p_s2_ls{YType::uint32, "link-protected-p2p-s2-ls"},
    up_p2p_head_s2_ls{YType::uint32, "up-p2p-head-s2-ls"},
    proceeding_p2p_head_s2_ls{YType::uint32, "proceeding-p2p-head-s2-ls"},
    recovering_p2p_head_s2_ls{YType::uint32, "recovering-p2p-head-s2-ls"},
    frr_p2p_head_s2_ls{YType::uint32, "frr-p2p-head-s2-ls"},
    protected_p2p_head_s2_ls{YType::uint32, "protected-p2p-head-s2-ls"},
    rerouted_p2p_head_s2_ls{YType::uint32, "rerouted-p2p-head-s2-ls"},
    p2p_mid_point_s2_ls{YType::uint32, "p2p-mid-point-s2-ls"},
    up_p2p_mid_point_s2_ls{YType::uint32, "up-p2p-mid-point-s2-ls"},
    proceeding_p2p_mid_point_s2_ls{YType::uint32, "proceeding-p2p-mid-point-s2-ls"},
    frr_p2p_mid_point_s2_ls{YType::uint32, "frr-p2p-mid-point-s2-ls"},
    protected_p2p_mid_point_s2_ls{YType::uint32, "protected-p2p-mid-point-s2-ls"},
    rerouted_p2p_mid_point_s2_ls{YType::uint32, "rerouted-p2p-mid-point-s2-ls"},
    p2p_tail_s2_ls{YType::uint32, "p2p-tail-s2-ls"},
    up_p2p_tail_s2_ls{YType::uint32, "up-p2p-tail-s2-ls"},
    p2p_tail_tunnels{YType::uint32, "p2p-tail-tunnels"},
    path_protect_configured_tunnels{YType::uint16, "path-protect-configured-tunnels"},
    path_protect_configured_tunnels_up{YType::uint16, "path-protect-configured-tunnels-up"},
    path_protect_configured_tunnels_standby_up{YType::uint16, "path-protect-configured-tunnels-standby-up"},
    link_diverse_paths{YType::uint16, "link-diverse-paths"},
    node_diverse_paths{YType::uint16, "node-diverse-paths"},
    link_and_node_diverse_paths{YType::uint16, "link-and-node-diverse-paths"},
    user_defined_paths{YType::uint16, "user-defined-paths"},
    p2mp_head_tunnels{YType::uint32, "p2mp-head-tunnels"},
    up_p2mp_head_tunnels{YType::uint32, "up-p2mp-head-tunnels"},
    frr_config_p2mp_head_tunnels{YType::uint32, "frr-config-p2mp-head-tunnels"},
    p2mp_head_destinations{YType::uint32, "p2mp-head-destinations"},
    up_p2mp_head_destinations{YType::uint32, "up-p2mp-head-destinations"},
    bw_protected_p2mp_s2_ls{YType::uint32, "bw-protected-p2mp-s2-ls"},
    link_protected_p2mp_s2_ls{YType::uint32, "link-protected-p2mp-s2-ls"},
    up_p2mp_head_s2_ls{YType::uint32, "up-p2mp-head-s2-ls"},
    proceeding_p2mp_head_s2_ls{YType::uint32, "proceeding-p2mp-head-s2-ls"},
    frr_p2mp_head_s2_ls{YType::uint32, "frr-p2mp-head-s2-ls"},
    protected_p2mp_head_s2_ls{YType::uint32, "protected-p2mp-head-s2-ls"},
    rerouted_p2mp_head_s2_ls{YType::uint32, "rerouted-p2mp-head-s2-ls"},
    p2mp_mid_point_s2_ls{YType::uint32, "p2mp-mid-point-s2-ls"},
    up_p2mp_mid_point_s2_ls{YType::uint32, "up-p2mp-mid-point-s2-ls"},
    proceeding_p2mp_mid_point_s2_ls{YType::uint32, "proceeding-p2mp-mid-point-s2-ls"},
    frr_p2mp_mid_point_s2_ls{YType::uint32, "frr-p2mp-mid-point-s2-ls"},
    protected_p2mp_mid_point_s2_ls{YType::uint32, "protected-p2mp-mid-point-s2-ls"},
    rerouted_p2mp_mid_point_s2_ls{YType::uint32, "rerouted-p2mp-mid-point-s2-ls"},
    p2mp_tail_s2_ls{YType::uint32, "p2mp-tail-s2-ls"},
    up_p2mp_tail_s2_ls{YType::uint32, "up-p2mp-tail-s2-ls"},
    bidir_head_tunnels{YType::uint32, "bidir-head-tunnels"},
    bidir_head_tunnels_up{YType::uint32, "bidir-head-tunnels-up"},
    bidir_head_tunnels_associated{YType::uint32, "bidir-head-tunnels-associated"},
    bidir_head_tunnels_corouted{YType::uint32, "bidir-head-tunnels-corouted"},
    bidir_head_ls_ps_up{YType::uint32, "bidir-head-ls-ps-up"},
    bidir_head_ls_ps_proceeding{YType::uint32, "bidir-head-ls-ps-proceeding"},
    bidir_head_ls_ps_associated{YType::uint32, "bidir-head-ls-ps-associated"},
    bidir_head_ls_ps_standby{YType::uint32, "bidir-head-ls-ps-standby"},
    bidir_mid_tunnels{YType::uint32, "bidir-mid-tunnels"},
    bidir_mid_tunnels_up{YType::uint32, "bidir-mid-tunnels-up"},
    bidir_mid_ls_ps_proceeding{YType::uint32, "bidir-mid-ls-ps-proceeding"},
    bidir_mid_ls_ps_associated{YType::uint32, "bidir-mid-ls-ps-associated"},
    bidir_mid_ls_ps_standby{YType::uint32, "bidir-mid-ls-ps-standby"},
    bidir_tail_ls_ps{YType::uint32, "bidir-tail-ls-ps"},
    bidir_tail_ls_ps_up{YType::uint32, "bidir-tail-ls-ps-up"},
    bidir_tail_ls_ps_proceeding{YType::uint32, "bidir-tail-ls-ps-proceeding"},
    bidir_tail_ls_ps_associated{YType::uint32, "bidir-tail-ls-ps-associated"},
    bidir_tail_ls_ps_standby{YType::uint32, "bidir-tail-ls-ps-standby"},
    bidir_tail_ls_ps_corouted{YType::uint32, "bidir-tail-ls-ps-corouted"}
        ,
    autobackup_summary(std::make_shared<MplsTe::Tunnels::Summary::AutobackupSummary>())
    , auto_mesh_summary(std::make_shared<MplsTe::Tunnels::Summary::AutoMeshSummary>())
    , auto_mesh_one_hop_summary(std::make_shared<MplsTe::Tunnels::Summary::AutoMeshOneHopSummary>())
    , gmpls_uni_summary(std::make_shared<MplsTe::Tunnels::Summary::GmplsUniSummary>())
    , gmpls_nni_summary(std::make_shared<MplsTe::Tunnels::Summary::GmplsNniSummary>())
    , current_tunnel_convergence_summary(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary>())
    , last_tunnel_convergence_summary(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary>())
    , auto_tun_server_summary(std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary>())
{
    autobackup_summary->parent = this;
    auto_mesh_summary->parent = this;
    auto_mesh_one_hop_summary->parent = this;
    gmpls_uni_summary->parent = this;
    gmpls_nni_summary->parent = this;
    current_tunnel_convergence_summary->parent = this;
    last_tunnel_convergence_summary->parent = this;
    auto_tun_server_summary->parent = this;

    yang_name = "summary"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::~Summary()
{
}

bool MplsTe::Tunnels::Summary::has_data() const
{
    if (is_presence_container) return true;
    return pcalc_tie_breaker_type.is_set
	|| pcalc_tiebreaker.is_set
	|| tiebreaker_qualifier.is_set
	|| te_process_status.is_set
	|| is_rsvp_process_enabled.is_set
	|| is_forwarding_enabled.is_set
	|| activated_heads.is_set
	|| deactivated_heads.is_set
	|| recovered_heads.is_set
	|| is_periodic_reoptimization_on.is_set
	|| reoptimization_period.is_set
	|| next_reoptimization_timer.is_set
	|| auto_bandwidth_tunnels.is_set
	|| auto_bandwidth_collection_period.is_set
	|| is_promotion_on.is_set
	|| promotion_period.is_set
	|| next_promotion_timer.is_set
	|| tunnel_check_period.is_set
	|| next_check_time.is_set
	|| tunnel_verify_period.is_set
	|| next_verify_timer.is_set
	|| frr_head_tunnels.is_set
	|| protected_head_tunnels.is_set
	|| rerouted_head_tunnels.is_set
	|| frr_mid_point_tunnels.is_set
	|| protected_mid_point_tunnels.is_set
	|| rerouted_mid_point_tunnels.is_set
	|| link_protected_tunnels.is_set
	|| node_protected_tunnels.is_set
	|| bw_protected_tunnels.is_set
	|| frr_p2p_head_tunnels.is_set
	|| protected_p2p_head_tunnels.is_set
	|| rerouted_p2p_head_tunnels.is_set
	|| frr_p2p_mid_point_tunnels.is_set
	|| protected_p2p_mid_point_tunnels.is_set
	|| rerouted_p2p_mid_point_tunnels.is_set
	|| link_protected_p2p_tunnels.is_set
	|| node_protected_p2p_tunnels.is_set
	|| bw_protected_p2p_tunnels.is_set
	|| backup_tunnels.is_set
	|| backups_assigned.is_set
	|| frr_protected_interfaces.is_set
	|| rerouted_interfaces.is_set
	|| p2p_head_tunnels.is_set
	|| up_p2p_head_tunnels.is_set
	|| dynamic_up_p2p_head_tunnels.is_set
	|| frr_config_p2p_head_tunnels.is_set
	|| p2p_head_destinations.is_set
	|| p2p_head_destinations_up.is_set
	|| bw_protected_p2p_s2_ls.is_set
	|| link_protected_p2p_s2_ls.is_set
	|| up_p2p_head_s2_ls.is_set
	|| proceeding_p2p_head_s2_ls.is_set
	|| recovering_p2p_head_s2_ls.is_set
	|| frr_p2p_head_s2_ls.is_set
	|| protected_p2p_head_s2_ls.is_set
	|| rerouted_p2p_head_s2_ls.is_set
	|| p2p_mid_point_s2_ls.is_set
	|| up_p2p_mid_point_s2_ls.is_set
	|| proceeding_p2p_mid_point_s2_ls.is_set
	|| frr_p2p_mid_point_s2_ls.is_set
	|| protected_p2p_mid_point_s2_ls.is_set
	|| rerouted_p2p_mid_point_s2_ls.is_set
	|| p2p_tail_s2_ls.is_set
	|| up_p2p_tail_s2_ls.is_set
	|| p2p_tail_tunnels.is_set
	|| path_protect_configured_tunnels.is_set
	|| path_protect_configured_tunnels_up.is_set
	|| path_protect_configured_tunnels_standby_up.is_set
	|| link_diverse_paths.is_set
	|| node_diverse_paths.is_set
	|| link_and_node_diverse_paths.is_set
	|| user_defined_paths.is_set
	|| p2mp_head_tunnels.is_set
	|| up_p2mp_head_tunnels.is_set
	|| frr_config_p2mp_head_tunnels.is_set
	|| p2mp_head_destinations.is_set
	|| up_p2mp_head_destinations.is_set
	|| bw_protected_p2mp_s2_ls.is_set
	|| link_protected_p2mp_s2_ls.is_set
	|| up_p2mp_head_s2_ls.is_set
	|| proceeding_p2mp_head_s2_ls.is_set
	|| frr_p2mp_head_s2_ls.is_set
	|| protected_p2mp_head_s2_ls.is_set
	|| rerouted_p2mp_head_s2_ls.is_set
	|| p2mp_mid_point_s2_ls.is_set
	|| up_p2mp_mid_point_s2_ls.is_set
	|| proceeding_p2mp_mid_point_s2_ls.is_set
	|| frr_p2mp_mid_point_s2_ls.is_set
	|| protected_p2mp_mid_point_s2_ls.is_set
	|| rerouted_p2mp_mid_point_s2_ls.is_set
	|| p2mp_tail_s2_ls.is_set
	|| up_p2mp_tail_s2_ls.is_set
	|| bidir_head_tunnels.is_set
	|| bidir_head_tunnels_up.is_set
	|| bidir_head_tunnels_associated.is_set
	|| bidir_head_tunnels_corouted.is_set
	|| bidir_head_ls_ps_up.is_set
	|| bidir_head_ls_ps_proceeding.is_set
	|| bidir_head_ls_ps_associated.is_set
	|| bidir_head_ls_ps_standby.is_set
	|| bidir_mid_tunnels.is_set
	|| bidir_mid_tunnels_up.is_set
	|| bidir_mid_ls_ps_proceeding.is_set
	|| bidir_mid_ls_ps_associated.is_set
	|| bidir_mid_ls_ps_standby.is_set
	|| bidir_tail_ls_ps.is_set
	|| bidir_tail_ls_ps_up.is_set
	|| bidir_tail_ls_ps_proceeding.is_set
	|| bidir_tail_ls_ps_associated.is_set
	|| bidir_tail_ls_ps_standby.is_set
	|| bidir_tail_ls_ps_corouted.is_set
	|| (autobackup_summary !=  nullptr && autobackup_summary->has_data())
	|| (auto_mesh_summary !=  nullptr && auto_mesh_summary->has_data())
	|| (auto_mesh_one_hop_summary !=  nullptr && auto_mesh_one_hop_summary->has_data())
	|| (gmpls_uni_summary !=  nullptr && gmpls_uni_summary->has_data())
	|| (gmpls_nni_summary !=  nullptr && gmpls_nni_summary->has_data())
	|| (current_tunnel_convergence_summary !=  nullptr && current_tunnel_convergence_summary->has_data())
	|| (last_tunnel_convergence_summary !=  nullptr && last_tunnel_convergence_summary->has_data())
	|| (auto_tun_server_summary !=  nullptr && auto_tun_server_summary->has_data());
}

bool MplsTe::Tunnels::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcalc_tie_breaker_type.yfilter)
	|| ydk::is_set(pcalc_tiebreaker.yfilter)
	|| ydk::is_set(tiebreaker_qualifier.yfilter)
	|| ydk::is_set(te_process_status.yfilter)
	|| ydk::is_set(is_rsvp_process_enabled.yfilter)
	|| ydk::is_set(is_forwarding_enabled.yfilter)
	|| ydk::is_set(activated_heads.yfilter)
	|| ydk::is_set(deactivated_heads.yfilter)
	|| ydk::is_set(recovered_heads.yfilter)
	|| ydk::is_set(is_periodic_reoptimization_on.yfilter)
	|| ydk::is_set(reoptimization_period.yfilter)
	|| ydk::is_set(next_reoptimization_timer.yfilter)
	|| ydk::is_set(auto_bandwidth_tunnels.yfilter)
	|| ydk::is_set(auto_bandwidth_collection_period.yfilter)
	|| ydk::is_set(is_promotion_on.yfilter)
	|| ydk::is_set(promotion_period.yfilter)
	|| ydk::is_set(next_promotion_timer.yfilter)
	|| ydk::is_set(tunnel_check_period.yfilter)
	|| ydk::is_set(next_check_time.yfilter)
	|| ydk::is_set(tunnel_verify_period.yfilter)
	|| ydk::is_set(next_verify_timer.yfilter)
	|| ydk::is_set(frr_head_tunnels.yfilter)
	|| ydk::is_set(protected_head_tunnels.yfilter)
	|| ydk::is_set(rerouted_head_tunnels.yfilter)
	|| ydk::is_set(frr_mid_point_tunnels.yfilter)
	|| ydk::is_set(protected_mid_point_tunnels.yfilter)
	|| ydk::is_set(rerouted_mid_point_tunnels.yfilter)
	|| ydk::is_set(link_protected_tunnels.yfilter)
	|| ydk::is_set(node_protected_tunnels.yfilter)
	|| ydk::is_set(bw_protected_tunnels.yfilter)
	|| ydk::is_set(frr_p2p_head_tunnels.yfilter)
	|| ydk::is_set(protected_p2p_head_tunnels.yfilter)
	|| ydk::is_set(rerouted_p2p_head_tunnels.yfilter)
	|| ydk::is_set(frr_p2p_mid_point_tunnels.yfilter)
	|| ydk::is_set(protected_p2p_mid_point_tunnels.yfilter)
	|| ydk::is_set(rerouted_p2p_mid_point_tunnels.yfilter)
	|| ydk::is_set(link_protected_p2p_tunnels.yfilter)
	|| ydk::is_set(node_protected_p2p_tunnels.yfilter)
	|| ydk::is_set(bw_protected_p2p_tunnels.yfilter)
	|| ydk::is_set(backup_tunnels.yfilter)
	|| ydk::is_set(backups_assigned.yfilter)
	|| ydk::is_set(frr_protected_interfaces.yfilter)
	|| ydk::is_set(rerouted_interfaces.yfilter)
	|| ydk::is_set(p2p_head_tunnels.yfilter)
	|| ydk::is_set(up_p2p_head_tunnels.yfilter)
	|| ydk::is_set(dynamic_up_p2p_head_tunnels.yfilter)
	|| ydk::is_set(frr_config_p2p_head_tunnels.yfilter)
	|| ydk::is_set(p2p_head_destinations.yfilter)
	|| ydk::is_set(p2p_head_destinations_up.yfilter)
	|| ydk::is_set(bw_protected_p2p_s2_ls.yfilter)
	|| ydk::is_set(link_protected_p2p_s2_ls.yfilter)
	|| ydk::is_set(up_p2p_head_s2_ls.yfilter)
	|| ydk::is_set(proceeding_p2p_head_s2_ls.yfilter)
	|| ydk::is_set(recovering_p2p_head_s2_ls.yfilter)
	|| ydk::is_set(frr_p2p_head_s2_ls.yfilter)
	|| ydk::is_set(protected_p2p_head_s2_ls.yfilter)
	|| ydk::is_set(rerouted_p2p_head_s2_ls.yfilter)
	|| ydk::is_set(p2p_mid_point_s2_ls.yfilter)
	|| ydk::is_set(up_p2p_mid_point_s2_ls.yfilter)
	|| ydk::is_set(proceeding_p2p_mid_point_s2_ls.yfilter)
	|| ydk::is_set(frr_p2p_mid_point_s2_ls.yfilter)
	|| ydk::is_set(protected_p2p_mid_point_s2_ls.yfilter)
	|| ydk::is_set(rerouted_p2p_mid_point_s2_ls.yfilter)
	|| ydk::is_set(p2p_tail_s2_ls.yfilter)
	|| ydk::is_set(up_p2p_tail_s2_ls.yfilter)
	|| ydk::is_set(p2p_tail_tunnels.yfilter)
	|| ydk::is_set(path_protect_configured_tunnels.yfilter)
	|| ydk::is_set(path_protect_configured_tunnels_up.yfilter)
	|| ydk::is_set(path_protect_configured_tunnels_standby_up.yfilter)
	|| ydk::is_set(link_diverse_paths.yfilter)
	|| ydk::is_set(node_diverse_paths.yfilter)
	|| ydk::is_set(link_and_node_diverse_paths.yfilter)
	|| ydk::is_set(user_defined_paths.yfilter)
	|| ydk::is_set(p2mp_head_tunnels.yfilter)
	|| ydk::is_set(up_p2mp_head_tunnels.yfilter)
	|| ydk::is_set(frr_config_p2mp_head_tunnels.yfilter)
	|| ydk::is_set(p2mp_head_destinations.yfilter)
	|| ydk::is_set(up_p2mp_head_destinations.yfilter)
	|| ydk::is_set(bw_protected_p2mp_s2_ls.yfilter)
	|| ydk::is_set(link_protected_p2mp_s2_ls.yfilter)
	|| ydk::is_set(up_p2mp_head_s2_ls.yfilter)
	|| ydk::is_set(proceeding_p2mp_head_s2_ls.yfilter)
	|| ydk::is_set(frr_p2mp_head_s2_ls.yfilter)
	|| ydk::is_set(protected_p2mp_head_s2_ls.yfilter)
	|| ydk::is_set(rerouted_p2mp_head_s2_ls.yfilter)
	|| ydk::is_set(p2mp_mid_point_s2_ls.yfilter)
	|| ydk::is_set(up_p2mp_mid_point_s2_ls.yfilter)
	|| ydk::is_set(proceeding_p2mp_mid_point_s2_ls.yfilter)
	|| ydk::is_set(frr_p2mp_mid_point_s2_ls.yfilter)
	|| ydk::is_set(protected_p2mp_mid_point_s2_ls.yfilter)
	|| ydk::is_set(rerouted_p2mp_mid_point_s2_ls.yfilter)
	|| ydk::is_set(p2mp_tail_s2_ls.yfilter)
	|| ydk::is_set(up_p2mp_tail_s2_ls.yfilter)
	|| ydk::is_set(bidir_head_tunnels.yfilter)
	|| ydk::is_set(bidir_head_tunnels_up.yfilter)
	|| ydk::is_set(bidir_head_tunnels_associated.yfilter)
	|| ydk::is_set(bidir_head_tunnels_corouted.yfilter)
	|| ydk::is_set(bidir_head_ls_ps_up.yfilter)
	|| ydk::is_set(bidir_head_ls_ps_proceeding.yfilter)
	|| ydk::is_set(bidir_head_ls_ps_associated.yfilter)
	|| ydk::is_set(bidir_head_ls_ps_standby.yfilter)
	|| ydk::is_set(bidir_mid_tunnels.yfilter)
	|| ydk::is_set(bidir_mid_tunnels_up.yfilter)
	|| ydk::is_set(bidir_mid_ls_ps_proceeding.yfilter)
	|| ydk::is_set(bidir_mid_ls_ps_associated.yfilter)
	|| ydk::is_set(bidir_mid_ls_ps_standby.yfilter)
	|| ydk::is_set(bidir_tail_ls_ps.yfilter)
	|| ydk::is_set(bidir_tail_ls_ps_up.yfilter)
	|| ydk::is_set(bidir_tail_ls_ps_proceeding.yfilter)
	|| ydk::is_set(bidir_tail_ls_ps_associated.yfilter)
	|| ydk::is_set(bidir_tail_ls_ps_standby.yfilter)
	|| ydk::is_set(bidir_tail_ls_ps_corouted.yfilter)
	|| (autobackup_summary !=  nullptr && autobackup_summary->has_operation())
	|| (auto_mesh_summary !=  nullptr && auto_mesh_summary->has_operation())
	|| (auto_mesh_one_hop_summary !=  nullptr && auto_mesh_one_hop_summary->has_operation())
	|| (gmpls_uni_summary !=  nullptr && gmpls_uni_summary->has_operation())
	|| (gmpls_nni_summary !=  nullptr && gmpls_nni_summary->has_operation())
	|| (current_tunnel_convergence_summary !=  nullptr && current_tunnel_convergence_summary->has_operation())
	|| (last_tunnel_convergence_summary !=  nullptr && last_tunnel_convergence_summary->has_operation())
	|| (auto_tun_server_summary !=  nullptr && auto_tun_server_summary->has_operation());
}

std::string MplsTe::Tunnels::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcalc_tie_breaker_type.is_set || is_set(pcalc_tie_breaker_type.yfilter)) leaf_name_data.push_back(pcalc_tie_breaker_type.get_name_leafdata());
    if (pcalc_tiebreaker.is_set || is_set(pcalc_tiebreaker.yfilter)) leaf_name_data.push_back(pcalc_tiebreaker.get_name_leafdata());
    if (tiebreaker_qualifier.is_set || is_set(tiebreaker_qualifier.yfilter)) leaf_name_data.push_back(tiebreaker_qualifier.get_name_leafdata());
    if (te_process_status.is_set || is_set(te_process_status.yfilter)) leaf_name_data.push_back(te_process_status.get_name_leafdata());
    if (is_rsvp_process_enabled.is_set || is_set(is_rsvp_process_enabled.yfilter)) leaf_name_data.push_back(is_rsvp_process_enabled.get_name_leafdata());
    if (is_forwarding_enabled.is_set || is_set(is_forwarding_enabled.yfilter)) leaf_name_data.push_back(is_forwarding_enabled.get_name_leafdata());
    if (activated_heads.is_set || is_set(activated_heads.yfilter)) leaf_name_data.push_back(activated_heads.get_name_leafdata());
    if (deactivated_heads.is_set || is_set(deactivated_heads.yfilter)) leaf_name_data.push_back(deactivated_heads.get_name_leafdata());
    if (recovered_heads.is_set || is_set(recovered_heads.yfilter)) leaf_name_data.push_back(recovered_heads.get_name_leafdata());
    if (is_periodic_reoptimization_on.is_set || is_set(is_periodic_reoptimization_on.yfilter)) leaf_name_data.push_back(is_periodic_reoptimization_on.get_name_leafdata());
    if (reoptimization_period.is_set || is_set(reoptimization_period.yfilter)) leaf_name_data.push_back(reoptimization_period.get_name_leafdata());
    if (next_reoptimization_timer.is_set || is_set(next_reoptimization_timer.yfilter)) leaf_name_data.push_back(next_reoptimization_timer.get_name_leafdata());
    if (auto_bandwidth_tunnels.is_set || is_set(auto_bandwidth_tunnels.yfilter)) leaf_name_data.push_back(auto_bandwidth_tunnels.get_name_leafdata());
    if (auto_bandwidth_collection_period.is_set || is_set(auto_bandwidth_collection_period.yfilter)) leaf_name_data.push_back(auto_bandwidth_collection_period.get_name_leafdata());
    if (is_promotion_on.is_set || is_set(is_promotion_on.yfilter)) leaf_name_data.push_back(is_promotion_on.get_name_leafdata());
    if (promotion_period.is_set || is_set(promotion_period.yfilter)) leaf_name_data.push_back(promotion_period.get_name_leafdata());
    if (next_promotion_timer.is_set || is_set(next_promotion_timer.yfilter)) leaf_name_data.push_back(next_promotion_timer.get_name_leafdata());
    if (tunnel_check_period.is_set || is_set(tunnel_check_period.yfilter)) leaf_name_data.push_back(tunnel_check_period.get_name_leafdata());
    if (next_check_time.is_set || is_set(next_check_time.yfilter)) leaf_name_data.push_back(next_check_time.get_name_leafdata());
    if (tunnel_verify_period.is_set || is_set(tunnel_verify_period.yfilter)) leaf_name_data.push_back(tunnel_verify_period.get_name_leafdata());
    if (next_verify_timer.is_set || is_set(next_verify_timer.yfilter)) leaf_name_data.push_back(next_verify_timer.get_name_leafdata());
    if (frr_head_tunnels.is_set || is_set(frr_head_tunnels.yfilter)) leaf_name_data.push_back(frr_head_tunnels.get_name_leafdata());
    if (protected_head_tunnels.is_set || is_set(protected_head_tunnels.yfilter)) leaf_name_data.push_back(protected_head_tunnels.get_name_leafdata());
    if (rerouted_head_tunnels.is_set || is_set(rerouted_head_tunnels.yfilter)) leaf_name_data.push_back(rerouted_head_tunnels.get_name_leafdata());
    if (frr_mid_point_tunnels.is_set || is_set(frr_mid_point_tunnels.yfilter)) leaf_name_data.push_back(frr_mid_point_tunnels.get_name_leafdata());
    if (protected_mid_point_tunnels.is_set || is_set(protected_mid_point_tunnels.yfilter)) leaf_name_data.push_back(protected_mid_point_tunnels.get_name_leafdata());
    if (rerouted_mid_point_tunnels.is_set || is_set(rerouted_mid_point_tunnels.yfilter)) leaf_name_data.push_back(rerouted_mid_point_tunnels.get_name_leafdata());
    if (link_protected_tunnels.is_set || is_set(link_protected_tunnels.yfilter)) leaf_name_data.push_back(link_protected_tunnels.get_name_leafdata());
    if (node_protected_tunnels.is_set || is_set(node_protected_tunnels.yfilter)) leaf_name_data.push_back(node_protected_tunnels.get_name_leafdata());
    if (bw_protected_tunnels.is_set || is_set(bw_protected_tunnels.yfilter)) leaf_name_data.push_back(bw_protected_tunnels.get_name_leafdata());
    if (frr_p2p_head_tunnels.is_set || is_set(frr_p2p_head_tunnels.yfilter)) leaf_name_data.push_back(frr_p2p_head_tunnels.get_name_leafdata());
    if (protected_p2p_head_tunnels.is_set || is_set(protected_p2p_head_tunnels.yfilter)) leaf_name_data.push_back(protected_p2p_head_tunnels.get_name_leafdata());
    if (rerouted_p2p_head_tunnels.is_set || is_set(rerouted_p2p_head_tunnels.yfilter)) leaf_name_data.push_back(rerouted_p2p_head_tunnels.get_name_leafdata());
    if (frr_p2p_mid_point_tunnels.is_set || is_set(frr_p2p_mid_point_tunnels.yfilter)) leaf_name_data.push_back(frr_p2p_mid_point_tunnels.get_name_leafdata());
    if (protected_p2p_mid_point_tunnels.is_set || is_set(protected_p2p_mid_point_tunnels.yfilter)) leaf_name_data.push_back(protected_p2p_mid_point_tunnels.get_name_leafdata());
    if (rerouted_p2p_mid_point_tunnels.is_set || is_set(rerouted_p2p_mid_point_tunnels.yfilter)) leaf_name_data.push_back(rerouted_p2p_mid_point_tunnels.get_name_leafdata());
    if (link_protected_p2p_tunnels.is_set || is_set(link_protected_p2p_tunnels.yfilter)) leaf_name_data.push_back(link_protected_p2p_tunnels.get_name_leafdata());
    if (node_protected_p2p_tunnels.is_set || is_set(node_protected_p2p_tunnels.yfilter)) leaf_name_data.push_back(node_protected_p2p_tunnels.get_name_leafdata());
    if (bw_protected_p2p_tunnels.is_set || is_set(bw_protected_p2p_tunnels.yfilter)) leaf_name_data.push_back(bw_protected_p2p_tunnels.get_name_leafdata());
    if (backup_tunnels.is_set || is_set(backup_tunnels.yfilter)) leaf_name_data.push_back(backup_tunnels.get_name_leafdata());
    if (backups_assigned.is_set || is_set(backups_assigned.yfilter)) leaf_name_data.push_back(backups_assigned.get_name_leafdata());
    if (frr_protected_interfaces.is_set || is_set(frr_protected_interfaces.yfilter)) leaf_name_data.push_back(frr_protected_interfaces.get_name_leafdata());
    if (rerouted_interfaces.is_set || is_set(rerouted_interfaces.yfilter)) leaf_name_data.push_back(rerouted_interfaces.get_name_leafdata());
    if (p2p_head_tunnels.is_set || is_set(p2p_head_tunnels.yfilter)) leaf_name_data.push_back(p2p_head_tunnels.get_name_leafdata());
    if (up_p2p_head_tunnels.is_set || is_set(up_p2p_head_tunnels.yfilter)) leaf_name_data.push_back(up_p2p_head_tunnels.get_name_leafdata());
    if (dynamic_up_p2p_head_tunnels.is_set || is_set(dynamic_up_p2p_head_tunnels.yfilter)) leaf_name_data.push_back(dynamic_up_p2p_head_tunnels.get_name_leafdata());
    if (frr_config_p2p_head_tunnels.is_set || is_set(frr_config_p2p_head_tunnels.yfilter)) leaf_name_data.push_back(frr_config_p2p_head_tunnels.get_name_leafdata());
    if (p2p_head_destinations.is_set || is_set(p2p_head_destinations.yfilter)) leaf_name_data.push_back(p2p_head_destinations.get_name_leafdata());
    if (p2p_head_destinations_up.is_set || is_set(p2p_head_destinations_up.yfilter)) leaf_name_data.push_back(p2p_head_destinations_up.get_name_leafdata());
    if (bw_protected_p2p_s2_ls.is_set || is_set(bw_protected_p2p_s2_ls.yfilter)) leaf_name_data.push_back(bw_protected_p2p_s2_ls.get_name_leafdata());
    if (link_protected_p2p_s2_ls.is_set || is_set(link_protected_p2p_s2_ls.yfilter)) leaf_name_data.push_back(link_protected_p2p_s2_ls.get_name_leafdata());
    if (up_p2p_head_s2_ls.is_set || is_set(up_p2p_head_s2_ls.yfilter)) leaf_name_data.push_back(up_p2p_head_s2_ls.get_name_leafdata());
    if (proceeding_p2p_head_s2_ls.is_set || is_set(proceeding_p2p_head_s2_ls.yfilter)) leaf_name_data.push_back(proceeding_p2p_head_s2_ls.get_name_leafdata());
    if (recovering_p2p_head_s2_ls.is_set || is_set(recovering_p2p_head_s2_ls.yfilter)) leaf_name_data.push_back(recovering_p2p_head_s2_ls.get_name_leafdata());
    if (frr_p2p_head_s2_ls.is_set || is_set(frr_p2p_head_s2_ls.yfilter)) leaf_name_data.push_back(frr_p2p_head_s2_ls.get_name_leafdata());
    if (protected_p2p_head_s2_ls.is_set || is_set(protected_p2p_head_s2_ls.yfilter)) leaf_name_data.push_back(protected_p2p_head_s2_ls.get_name_leafdata());
    if (rerouted_p2p_head_s2_ls.is_set || is_set(rerouted_p2p_head_s2_ls.yfilter)) leaf_name_data.push_back(rerouted_p2p_head_s2_ls.get_name_leafdata());
    if (p2p_mid_point_s2_ls.is_set || is_set(p2p_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(p2p_mid_point_s2_ls.get_name_leafdata());
    if (up_p2p_mid_point_s2_ls.is_set || is_set(up_p2p_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(up_p2p_mid_point_s2_ls.get_name_leafdata());
    if (proceeding_p2p_mid_point_s2_ls.is_set || is_set(proceeding_p2p_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(proceeding_p2p_mid_point_s2_ls.get_name_leafdata());
    if (frr_p2p_mid_point_s2_ls.is_set || is_set(frr_p2p_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(frr_p2p_mid_point_s2_ls.get_name_leafdata());
    if (protected_p2p_mid_point_s2_ls.is_set || is_set(protected_p2p_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(protected_p2p_mid_point_s2_ls.get_name_leafdata());
    if (rerouted_p2p_mid_point_s2_ls.is_set || is_set(rerouted_p2p_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(rerouted_p2p_mid_point_s2_ls.get_name_leafdata());
    if (p2p_tail_s2_ls.is_set || is_set(p2p_tail_s2_ls.yfilter)) leaf_name_data.push_back(p2p_tail_s2_ls.get_name_leafdata());
    if (up_p2p_tail_s2_ls.is_set || is_set(up_p2p_tail_s2_ls.yfilter)) leaf_name_data.push_back(up_p2p_tail_s2_ls.get_name_leafdata());
    if (p2p_tail_tunnels.is_set || is_set(p2p_tail_tunnels.yfilter)) leaf_name_data.push_back(p2p_tail_tunnels.get_name_leafdata());
    if (path_protect_configured_tunnels.is_set || is_set(path_protect_configured_tunnels.yfilter)) leaf_name_data.push_back(path_protect_configured_tunnels.get_name_leafdata());
    if (path_protect_configured_tunnels_up.is_set || is_set(path_protect_configured_tunnels_up.yfilter)) leaf_name_data.push_back(path_protect_configured_tunnels_up.get_name_leafdata());
    if (path_protect_configured_tunnels_standby_up.is_set || is_set(path_protect_configured_tunnels_standby_up.yfilter)) leaf_name_data.push_back(path_protect_configured_tunnels_standby_up.get_name_leafdata());
    if (link_diverse_paths.is_set || is_set(link_diverse_paths.yfilter)) leaf_name_data.push_back(link_diverse_paths.get_name_leafdata());
    if (node_diverse_paths.is_set || is_set(node_diverse_paths.yfilter)) leaf_name_data.push_back(node_diverse_paths.get_name_leafdata());
    if (link_and_node_diverse_paths.is_set || is_set(link_and_node_diverse_paths.yfilter)) leaf_name_data.push_back(link_and_node_diverse_paths.get_name_leafdata());
    if (user_defined_paths.is_set || is_set(user_defined_paths.yfilter)) leaf_name_data.push_back(user_defined_paths.get_name_leafdata());
    if (p2mp_head_tunnels.is_set || is_set(p2mp_head_tunnels.yfilter)) leaf_name_data.push_back(p2mp_head_tunnels.get_name_leafdata());
    if (up_p2mp_head_tunnels.is_set || is_set(up_p2mp_head_tunnels.yfilter)) leaf_name_data.push_back(up_p2mp_head_tunnels.get_name_leafdata());
    if (frr_config_p2mp_head_tunnels.is_set || is_set(frr_config_p2mp_head_tunnels.yfilter)) leaf_name_data.push_back(frr_config_p2mp_head_tunnels.get_name_leafdata());
    if (p2mp_head_destinations.is_set || is_set(p2mp_head_destinations.yfilter)) leaf_name_data.push_back(p2mp_head_destinations.get_name_leafdata());
    if (up_p2mp_head_destinations.is_set || is_set(up_p2mp_head_destinations.yfilter)) leaf_name_data.push_back(up_p2mp_head_destinations.get_name_leafdata());
    if (bw_protected_p2mp_s2_ls.is_set || is_set(bw_protected_p2mp_s2_ls.yfilter)) leaf_name_data.push_back(bw_protected_p2mp_s2_ls.get_name_leafdata());
    if (link_protected_p2mp_s2_ls.is_set || is_set(link_protected_p2mp_s2_ls.yfilter)) leaf_name_data.push_back(link_protected_p2mp_s2_ls.get_name_leafdata());
    if (up_p2mp_head_s2_ls.is_set || is_set(up_p2mp_head_s2_ls.yfilter)) leaf_name_data.push_back(up_p2mp_head_s2_ls.get_name_leafdata());
    if (proceeding_p2mp_head_s2_ls.is_set || is_set(proceeding_p2mp_head_s2_ls.yfilter)) leaf_name_data.push_back(proceeding_p2mp_head_s2_ls.get_name_leafdata());
    if (frr_p2mp_head_s2_ls.is_set || is_set(frr_p2mp_head_s2_ls.yfilter)) leaf_name_data.push_back(frr_p2mp_head_s2_ls.get_name_leafdata());
    if (protected_p2mp_head_s2_ls.is_set || is_set(protected_p2mp_head_s2_ls.yfilter)) leaf_name_data.push_back(protected_p2mp_head_s2_ls.get_name_leafdata());
    if (rerouted_p2mp_head_s2_ls.is_set || is_set(rerouted_p2mp_head_s2_ls.yfilter)) leaf_name_data.push_back(rerouted_p2mp_head_s2_ls.get_name_leafdata());
    if (p2mp_mid_point_s2_ls.is_set || is_set(p2mp_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(p2mp_mid_point_s2_ls.get_name_leafdata());
    if (up_p2mp_mid_point_s2_ls.is_set || is_set(up_p2mp_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(up_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (proceeding_p2mp_mid_point_s2_ls.is_set || is_set(proceeding_p2mp_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(proceeding_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (frr_p2mp_mid_point_s2_ls.is_set || is_set(frr_p2mp_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(frr_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (protected_p2mp_mid_point_s2_ls.is_set || is_set(protected_p2mp_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(protected_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (rerouted_p2mp_mid_point_s2_ls.is_set || is_set(rerouted_p2mp_mid_point_s2_ls.yfilter)) leaf_name_data.push_back(rerouted_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (p2mp_tail_s2_ls.is_set || is_set(p2mp_tail_s2_ls.yfilter)) leaf_name_data.push_back(p2mp_tail_s2_ls.get_name_leafdata());
    if (up_p2mp_tail_s2_ls.is_set || is_set(up_p2mp_tail_s2_ls.yfilter)) leaf_name_data.push_back(up_p2mp_tail_s2_ls.get_name_leafdata());
    if (bidir_head_tunnels.is_set || is_set(bidir_head_tunnels.yfilter)) leaf_name_data.push_back(bidir_head_tunnels.get_name_leafdata());
    if (bidir_head_tunnels_up.is_set || is_set(bidir_head_tunnels_up.yfilter)) leaf_name_data.push_back(bidir_head_tunnels_up.get_name_leafdata());
    if (bidir_head_tunnels_associated.is_set || is_set(bidir_head_tunnels_associated.yfilter)) leaf_name_data.push_back(bidir_head_tunnels_associated.get_name_leafdata());
    if (bidir_head_tunnels_corouted.is_set || is_set(bidir_head_tunnels_corouted.yfilter)) leaf_name_data.push_back(bidir_head_tunnels_corouted.get_name_leafdata());
    if (bidir_head_ls_ps_up.is_set || is_set(bidir_head_ls_ps_up.yfilter)) leaf_name_data.push_back(bidir_head_ls_ps_up.get_name_leafdata());
    if (bidir_head_ls_ps_proceeding.is_set || is_set(bidir_head_ls_ps_proceeding.yfilter)) leaf_name_data.push_back(bidir_head_ls_ps_proceeding.get_name_leafdata());
    if (bidir_head_ls_ps_associated.is_set || is_set(bidir_head_ls_ps_associated.yfilter)) leaf_name_data.push_back(bidir_head_ls_ps_associated.get_name_leafdata());
    if (bidir_head_ls_ps_standby.is_set || is_set(bidir_head_ls_ps_standby.yfilter)) leaf_name_data.push_back(bidir_head_ls_ps_standby.get_name_leafdata());
    if (bidir_mid_tunnels.is_set || is_set(bidir_mid_tunnels.yfilter)) leaf_name_data.push_back(bidir_mid_tunnels.get_name_leafdata());
    if (bidir_mid_tunnels_up.is_set || is_set(bidir_mid_tunnels_up.yfilter)) leaf_name_data.push_back(bidir_mid_tunnels_up.get_name_leafdata());
    if (bidir_mid_ls_ps_proceeding.is_set || is_set(bidir_mid_ls_ps_proceeding.yfilter)) leaf_name_data.push_back(bidir_mid_ls_ps_proceeding.get_name_leafdata());
    if (bidir_mid_ls_ps_associated.is_set || is_set(bidir_mid_ls_ps_associated.yfilter)) leaf_name_data.push_back(bidir_mid_ls_ps_associated.get_name_leafdata());
    if (bidir_mid_ls_ps_standby.is_set || is_set(bidir_mid_ls_ps_standby.yfilter)) leaf_name_data.push_back(bidir_mid_ls_ps_standby.get_name_leafdata());
    if (bidir_tail_ls_ps.is_set || is_set(bidir_tail_ls_ps.yfilter)) leaf_name_data.push_back(bidir_tail_ls_ps.get_name_leafdata());
    if (bidir_tail_ls_ps_up.is_set || is_set(bidir_tail_ls_ps_up.yfilter)) leaf_name_data.push_back(bidir_tail_ls_ps_up.get_name_leafdata());
    if (bidir_tail_ls_ps_proceeding.is_set || is_set(bidir_tail_ls_ps_proceeding.yfilter)) leaf_name_data.push_back(bidir_tail_ls_ps_proceeding.get_name_leafdata());
    if (bidir_tail_ls_ps_associated.is_set || is_set(bidir_tail_ls_ps_associated.yfilter)) leaf_name_data.push_back(bidir_tail_ls_ps_associated.get_name_leafdata());
    if (bidir_tail_ls_ps_standby.is_set || is_set(bidir_tail_ls_ps_standby.yfilter)) leaf_name_data.push_back(bidir_tail_ls_ps_standby.get_name_leafdata());
    if (bidir_tail_ls_ps_corouted.is_set || is_set(bidir_tail_ls_ps_corouted.yfilter)) leaf_name_data.push_back(bidir_tail_ls_ps_corouted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autobackup-summary")
    {
        if(autobackup_summary == nullptr)
        {
            autobackup_summary = std::make_shared<MplsTe::Tunnels::Summary::AutobackupSummary>();
        }
        return autobackup_summary;
    }

    if(child_yang_name == "auto-mesh-summary")
    {
        if(auto_mesh_summary == nullptr)
        {
            auto_mesh_summary = std::make_shared<MplsTe::Tunnels::Summary::AutoMeshSummary>();
        }
        return auto_mesh_summary;
    }

    if(child_yang_name == "auto-mesh-one-hop-summary")
    {
        if(auto_mesh_one_hop_summary == nullptr)
        {
            auto_mesh_one_hop_summary = std::make_shared<MplsTe::Tunnels::Summary::AutoMeshOneHopSummary>();
        }
        return auto_mesh_one_hop_summary;
    }

    if(child_yang_name == "gmpls-uni-summary")
    {
        if(gmpls_uni_summary == nullptr)
        {
            gmpls_uni_summary = std::make_shared<MplsTe::Tunnels::Summary::GmplsUniSummary>();
        }
        return gmpls_uni_summary;
    }

    if(child_yang_name == "gmpls-nni-summary")
    {
        if(gmpls_nni_summary == nullptr)
        {
            gmpls_nni_summary = std::make_shared<MplsTe::Tunnels::Summary::GmplsNniSummary>();
        }
        return gmpls_nni_summary;
    }

    if(child_yang_name == "current-tunnel-convergence-summary")
    {
        if(current_tunnel_convergence_summary == nullptr)
        {
            current_tunnel_convergence_summary = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary>();
        }
        return current_tunnel_convergence_summary;
    }

    if(child_yang_name == "last-tunnel-convergence-summary")
    {
        if(last_tunnel_convergence_summary == nullptr)
        {
            last_tunnel_convergence_summary = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary>();
        }
        return last_tunnel_convergence_summary;
    }

    if(child_yang_name == "auto-tun-server-summary")
    {
        if(auto_tun_server_summary == nullptr)
        {
            auto_tun_server_summary = std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary>();
        }
        return auto_tun_server_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autobackup_summary != nullptr)
    {
        children["autobackup-summary"] = autobackup_summary;
    }

    if(auto_mesh_summary != nullptr)
    {
        children["auto-mesh-summary"] = auto_mesh_summary;
    }

    if(auto_mesh_one_hop_summary != nullptr)
    {
        children["auto-mesh-one-hop-summary"] = auto_mesh_one_hop_summary;
    }

    if(gmpls_uni_summary != nullptr)
    {
        children["gmpls-uni-summary"] = gmpls_uni_summary;
    }

    if(gmpls_nni_summary != nullptr)
    {
        children["gmpls-nni-summary"] = gmpls_nni_summary;
    }

    if(current_tunnel_convergence_summary != nullptr)
    {
        children["current-tunnel-convergence-summary"] = current_tunnel_convergence_summary;
    }

    if(last_tunnel_convergence_summary != nullptr)
    {
        children["last-tunnel-convergence-summary"] = last_tunnel_convergence_summary;
    }

    if(auto_tun_server_summary != nullptr)
    {
        children["auto-tun-server-summary"] = auto_tun_server_summary;
    }

    return children;
}

void MplsTe::Tunnels::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcalc-tie-breaker-type")
    {
        pcalc_tie_breaker_type = value;
        pcalc_tie_breaker_type.value_namespace = name_space;
        pcalc_tie_breaker_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-tiebreaker")
    {
        pcalc_tiebreaker = value;
        pcalc_tiebreaker.value_namespace = name_space;
        pcalc_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-qualifier")
    {
        tiebreaker_qualifier = value;
        tiebreaker_qualifier.value_namespace = name_space;
        tiebreaker_qualifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-process-status")
    {
        te_process_status = value;
        te_process_status.value_namespace = name_space;
        te_process_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-process-enabled")
    {
        is_rsvp_process_enabled = value;
        is_rsvp_process_enabled.value_namespace = name_space;
        is_rsvp_process_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding-enabled")
    {
        is_forwarding_enabled = value;
        is_forwarding_enabled.value_namespace = name_space;
        is_forwarding_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-heads")
    {
        activated_heads = value;
        activated_heads.value_namespace = name_space;
        activated_heads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deactivated-heads")
    {
        deactivated_heads = value;
        deactivated_heads.value_namespace = name_space;
        deactivated_heads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovered-heads")
    {
        recovered_heads = value;
        recovered_heads.value_namespace = name_space;
        recovered_heads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-periodic-reoptimization-on")
    {
        is_periodic_reoptimization_on = value;
        is_periodic_reoptimization_on.value_namespace = name_space;
        is_periodic_reoptimization_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimization-period")
    {
        reoptimization_period = value;
        reoptimization_period.value_namespace = name_space;
        reoptimization_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-reoptimization-timer")
    {
        next_reoptimization_timer = value;
        next_reoptimization_timer.value_namespace = name_space;
        next_reoptimization_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-tunnels")
    {
        auto_bandwidth_tunnels = value;
        auto_bandwidth_tunnels.value_namespace = name_space;
        auto_bandwidth_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collection-period")
    {
        auto_bandwidth_collection_period = value;
        auto_bandwidth_collection_period.value_namespace = name_space;
        auto_bandwidth_collection_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-promotion-on")
    {
        is_promotion_on = value;
        is_promotion_on.value_namespace = name_space;
        is_promotion_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promotion-period")
    {
        promotion_period = value;
        promotion_period.value_namespace = name_space;
        promotion_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-promotion-timer")
    {
        next_promotion_timer = value;
        next_promotion_timer.value_namespace = name_space;
        next_promotion_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-check-period")
    {
        tunnel_check_period = value;
        tunnel_check_period.value_namespace = name_space;
        tunnel_check_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-check-time")
    {
        next_check_time = value;
        next_check_time.value_namespace = name_space;
        next_check_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-verify-period")
    {
        tunnel_verify_period = value;
        tunnel_verify_period.value_namespace = name_space;
        tunnel_verify_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-verify-timer")
    {
        next_verify_timer = value;
        next_verify_timer.value_namespace = name_space;
        next_verify_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-head-tunnels")
    {
        frr_head_tunnels = value;
        frr_head_tunnels.value_namespace = name_space;
        frr_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-head-tunnels")
    {
        protected_head_tunnels = value;
        protected_head_tunnels.value_namespace = name_space;
        protected_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-head-tunnels")
    {
        rerouted_head_tunnels = value;
        rerouted_head_tunnels.value_namespace = name_space;
        rerouted_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-mid-point-tunnels")
    {
        frr_mid_point_tunnels = value;
        frr_mid_point_tunnels.value_namespace = name_space;
        frr_mid_point_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-mid-point-tunnels")
    {
        protected_mid_point_tunnels = value;
        protected_mid_point_tunnels.value_namespace = name_space;
        protected_mid_point_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-mid-point-tunnels")
    {
        rerouted_mid_point_tunnels = value;
        rerouted_mid_point_tunnels.value_namespace = name_space;
        rerouted_mid_point_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protected-tunnels")
    {
        link_protected_tunnels = value;
        link_protected_tunnels.value_namespace = name_space;
        link_protected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protected-tunnels")
    {
        node_protected_tunnels = value;
        node_protected_tunnels.value_namespace = name_space;
        node_protected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-protected-tunnels")
    {
        bw_protected_tunnels = value;
        bw_protected_tunnels.value_namespace = name_space;
        bw_protected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-p2p-head-tunnels")
    {
        frr_p2p_head_tunnels = value;
        frr_p2p_head_tunnels.value_namespace = name_space;
        frr_p2p_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-p2p-head-tunnels")
    {
        protected_p2p_head_tunnels = value;
        protected_p2p_head_tunnels.value_namespace = name_space;
        protected_p2p_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-p2p-head-tunnels")
    {
        rerouted_p2p_head_tunnels = value;
        rerouted_p2p_head_tunnels.value_namespace = name_space;
        rerouted_p2p_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-p2p-mid-point-tunnels")
    {
        frr_p2p_mid_point_tunnels = value;
        frr_p2p_mid_point_tunnels.value_namespace = name_space;
        frr_p2p_mid_point_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-p2p-mid-point-tunnels")
    {
        protected_p2p_mid_point_tunnels = value;
        protected_p2p_mid_point_tunnels.value_namespace = name_space;
        protected_p2p_mid_point_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-p2p-mid-point-tunnels")
    {
        rerouted_p2p_mid_point_tunnels = value;
        rerouted_p2p_mid_point_tunnels.value_namespace = name_space;
        rerouted_p2p_mid_point_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protected-p2p-tunnels")
    {
        link_protected_p2p_tunnels = value;
        link_protected_p2p_tunnels.value_namespace = name_space;
        link_protected_p2p_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protected-p2p-tunnels")
    {
        node_protected_p2p_tunnels = value;
        node_protected_p2p_tunnels.value_namespace = name_space;
        node_protected_p2p_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-protected-p2p-tunnels")
    {
        bw_protected_p2p_tunnels = value;
        bw_protected_p2p_tunnels.value_namespace = name_space;
        bw_protected_p2p_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnels")
    {
        backup_tunnels = value;
        backup_tunnels.value_namespace = name_space;
        backup_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backups-assigned")
    {
        backups_assigned = value;
        backups_assigned.value_namespace = name_space;
        backups_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-protected-interfaces")
    {
        frr_protected_interfaces = value;
        frr_protected_interfaces.value_namespace = name_space;
        frr_protected_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-interfaces")
    {
        rerouted_interfaces = value;
        rerouted_interfaces.value_namespace = name_space;
        rerouted_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-head-tunnels")
    {
        p2p_head_tunnels = value;
        p2p_head_tunnels.value_namespace = name_space;
        p2p_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2p-head-tunnels")
    {
        up_p2p_head_tunnels = value;
        up_p2p_head_tunnels.value_namespace = name_space;
        up_p2p_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-up-p2p-head-tunnels")
    {
        dynamic_up_p2p_head_tunnels = value;
        dynamic_up_p2p_head_tunnels.value_namespace = name_space;
        dynamic_up_p2p_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-config-p2p-head-tunnels")
    {
        frr_config_p2p_head_tunnels = value;
        frr_config_p2p_head_tunnels.value_namespace = name_space;
        frr_config_p2p_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-head-destinations")
    {
        p2p_head_destinations = value;
        p2p_head_destinations.value_namespace = name_space;
        p2p_head_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-head-destinations-up")
    {
        p2p_head_destinations_up = value;
        p2p_head_destinations_up.value_namespace = name_space;
        p2p_head_destinations_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-protected-p2p-s2-ls")
    {
        bw_protected_p2p_s2_ls = value;
        bw_protected_p2p_s2_ls.value_namespace = name_space;
        bw_protected_p2p_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protected-p2p-s2-ls")
    {
        link_protected_p2p_s2_ls = value;
        link_protected_p2p_s2_ls.value_namespace = name_space;
        link_protected_p2p_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2p-head-s2-ls")
    {
        up_p2p_head_s2_ls = value;
        up_p2p_head_s2_ls.value_namespace = name_space;
        up_p2p_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proceeding-p2p-head-s2-ls")
    {
        proceeding_p2p_head_s2_ls = value;
        proceeding_p2p_head_s2_ls.value_namespace = name_space;
        proceeding_p2p_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovering-p2p-head-s2-ls")
    {
        recovering_p2p_head_s2_ls = value;
        recovering_p2p_head_s2_ls.value_namespace = name_space;
        recovering_p2p_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-p2p-head-s2-ls")
    {
        frr_p2p_head_s2_ls = value;
        frr_p2p_head_s2_ls.value_namespace = name_space;
        frr_p2p_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-p2p-head-s2-ls")
    {
        protected_p2p_head_s2_ls = value;
        protected_p2p_head_s2_ls.value_namespace = name_space;
        protected_p2p_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-p2p-head-s2-ls")
    {
        rerouted_p2p_head_s2_ls = value;
        rerouted_p2p_head_s2_ls.value_namespace = name_space;
        rerouted_p2p_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-mid-point-s2-ls")
    {
        p2p_mid_point_s2_ls = value;
        p2p_mid_point_s2_ls.value_namespace = name_space;
        p2p_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2p-mid-point-s2-ls")
    {
        up_p2p_mid_point_s2_ls = value;
        up_p2p_mid_point_s2_ls.value_namespace = name_space;
        up_p2p_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proceeding-p2p-mid-point-s2-ls")
    {
        proceeding_p2p_mid_point_s2_ls = value;
        proceeding_p2p_mid_point_s2_ls.value_namespace = name_space;
        proceeding_p2p_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-p2p-mid-point-s2-ls")
    {
        frr_p2p_mid_point_s2_ls = value;
        frr_p2p_mid_point_s2_ls.value_namespace = name_space;
        frr_p2p_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-p2p-mid-point-s2-ls")
    {
        protected_p2p_mid_point_s2_ls = value;
        protected_p2p_mid_point_s2_ls.value_namespace = name_space;
        protected_p2p_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-p2p-mid-point-s2-ls")
    {
        rerouted_p2p_mid_point_s2_ls = value;
        rerouted_p2p_mid_point_s2_ls.value_namespace = name_space;
        rerouted_p2p_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-tail-s2-ls")
    {
        p2p_tail_s2_ls = value;
        p2p_tail_s2_ls.value_namespace = name_space;
        p2p_tail_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2p-tail-s2-ls")
    {
        up_p2p_tail_s2_ls = value;
        up_p2p_tail_s2_ls.value_namespace = name_space;
        up_p2p_tail_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-tail-tunnels")
    {
        p2p_tail_tunnels = value;
        p2p_tail_tunnels.value_namespace = name_space;
        p2p_tail_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protect-configured-tunnels")
    {
        path_protect_configured_tunnels = value;
        path_protect_configured_tunnels.value_namespace = name_space;
        path_protect_configured_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protect-configured-tunnels-up")
    {
        path_protect_configured_tunnels_up = value;
        path_protect_configured_tunnels_up.value_namespace = name_space;
        path_protect_configured_tunnels_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protect-configured-tunnels-standby-up")
    {
        path_protect_configured_tunnels_standby_up = value;
        path_protect_configured_tunnels_standby_up.value_namespace = name_space;
        path_protect_configured_tunnels_standby_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-diverse-paths")
    {
        link_diverse_paths = value;
        link_diverse_paths.value_namespace = name_space;
        link_diverse_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-diverse-paths")
    {
        node_diverse_paths = value;
        node_diverse_paths.value_namespace = name_space;
        node_diverse_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-and-node-diverse-paths")
    {
        link_and_node_diverse_paths = value;
        link_and_node_diverse_paths.value_namespace = name_space;
        link_and_node_diverse_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-defined-paths")
    {
        user_defined_paths = value;
        user_defined_paths.value_namespace = name_space;
        user_defined_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-head-tunnels")
    {
        p2mp_head_tunnels = value;
        p2mp_head_tunnels.value_namespace = name_space;
        p2mp_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2mp-head-tunnels")
    {
        up_p2mp_head_tunnels = value;
        up_p2mp_head_tunnels.value_namespace = name_space;
        up_p2mp_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-config-p2mp-head-tunnels")
    {
        frr_config_p2mp_head_tunnels = value;
        frr_config_p2mp_head_tunnels.value_namespace = name_space;
        frr_config_p2mp_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-head-destinations")
    {
        p2mp_head_destinations = value;
        p2mp_head_destinations.value_namespace = name_space;
        p2mp_head_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2mp-head-destinations")
    {
        up_p2mp_head_destinations = value;
        up_p2mp_head_destinations.value_namespace = name_space;
        up_p2mp_head_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-protected-p2mp-s2-ls")
    {
        bw_protected_p2mp_s2_ls = value;
        bw_protected_p2mp_s2_ls.value_namespace = name_space;
        bw_protected_p2mp_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protected-p2mp-s2-ls")
    {
        link_protected_p2mp_s2_ls = value;
        link_protected_p2mp_s2_ls.value_namespace = name_space;
        link_protected_p2mp_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2mp-head-s2-ls")
    {
        up_p2mp_head_s2_ls = value;
        up_p2mp_head_s2_ls.value_namespace = name_space;
        up_p2mp_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proceeding-p2mp-head-s2-ls")
    {
        proceeding_p2mp_head_s2_ls = value;
        proceeding_p2mp_head_s2_ls.value_namespace = name_space;
        proceeding_p2mp_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-p2mp-head-s2-ls")
    {
        frr_p2mp_head_s2_ls = value;
        frr_p2mp_head_s2_ls.value_namespace = name_space;
        frr_p2mp_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-p2mp-head-s2-ls")
    {
        protected_p2mp_head_s2_ls = value;
        protected_p2mp_head_s2_ls.value_namespace = name_space;
        protected_p2mp_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-p2mp-head-s2-ls")
    {
        rerouted_p2mp_head_s2_ls = value;
        rerouted_p2mp_head_s2_ls.value_namespace = name_space;
        rerouted_p2mp_head_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-mid-point-s2-ls")
    {
        p2mp_mid_point_s2_ls = value;
        p2mp_mid_point_s2_ls.value_namespace = name_space;
        p2mp_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2mp-mid-point-s2-ls")
    {
        up_p2mp_mid_point_s2_ls = value;
        up_p2mp_mid_point_s2_ls.value_namespace = name_space;
        up_p2mp_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proceeding-p2mp-mid-point-s2-ls")
    {
        proceeding_p2mp_mid_point_s2_ls = value;
        proceeding_p2mp_mid_point_s2_ls.value_namespace = name_space;
        proceeding_p2mp_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-p2mp-mid-point-s2-ls")
    {
        frr_p2mp_mid_point_s2_ls = value;
        frr_p2mp_mid_point_s2_ls.value_namespace = name_space;
        frr_p2mp_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-p2mp-mid-point-s2-ls")
    {
        protected_p2mp_mid_point_s2_ls = value;
        protected_p2mp_mid_point_s2_ls.value_namespace = name_space;
        protected_p2mp_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouted-p2mp-mid-point-s2-ls")
    {
        rerouted_p2mp_mid_point_s2_ls = value;
        rerouted_p2mp_mid_point_s2_ls.value_namespace = name_space;
        rerouted_p2mp_mid_point_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-tail-s2-ls")
    {
        p2mp_tail_s2_ls = value;
        p2mp_tail_s2_ls.value_namespace = name_space;
        p2mp_tail_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-p2mp-tail-s2-ls")
    {
        up_p2mp_tail_s2_ls = value;
        up_p2mp_tail_s2_ls.value_namespace = name_space;
        up_p2mp_tail_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-tunnels")
    {
        bidir_head_tunnels = value;
        bidir_head_tunnels.value_namespace = name_space;
        bidir_head_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-tunnels-up")
    {
        bidir_head_tunnels_up = value;
        bidir_head_tunnels_up.value_namespace = name_space;
        bidir_head_tunnels_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-tunnels-associated")
    {
        bidir_head_tunnels_associated = value;
        bidir_head_tunnels_associated.value_namespace = name_space;
        bidir_head_tunnels_associated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-tunnels-corouted")
    {
        bidir_head_tunnels_corouted = value;
        bidir_head_tunnels_corouted.value_namespace = name_space;
        bidir_head_tunnels_corouted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-ls-ps-up")
    {
        bidir_head_ls_ps_up = value;
        bidir_head_ls_ps_up.value_namespace = name_space;
        bidir_head_ls_ps_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-ls-ps-proceeding")
    {
        bidir_head_ls_ps_proceeding = value;
        bidir_head_ls_ps_proceeding.value_namespace = name_space;
        bidir_head_ls_ps_proceeding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-ls-ps-associated")
    {
        bidir_head_ls_ps_associated = value;
        bidir_head_ls_ps_associated.value_namespace = name_space;
        bidir_head_ls_ps_associated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-head-ls-ps-standby")
    {
        bidir_head_ls_ps_standby = value;
        bidir_head_ls_ps_standby.value_namespace = name_space;
        bidir_head_ls_ps_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-mid-tunnels")
    {
        bidir_mid_tunnels = value;
        bidir_mid_tunnels.value_namespace = name_space;
        bidir_mid_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-mid-tunnels-up")
    {
        bidir_mid_tunnels_up = value;
        bidir_mid_tunnels_up.value_namespace = name_space;
        bidir_mid_tunnels_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-mid-ls-ps-proceeding")
    {
        bidir_mid_ls_ps_proceeding = value;
        bidir_mid_ls_ps_proceeding.value_namespace = name_space;
        bidir_mid_ls_ps_proceeding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-mid-ls-ps-associated")
    {
        bidir_mid_ls_ps_associated = value;
        bidir_mid_ls_ps_associated.value_namespace = name_space;
        bidir_mid_ls_ps_associated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-mid-ls-ps-standby")
    {
        bidir_mid_ls_ps_standby = value;
        bidir_mid_ls_ps_standby.value_namespace = name_space;
        bidir_mid_ls_ps_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-tail-ls-ps")
    {
        bidir_tail_ls_ps = value;
        bidir_tail_ls_ps.value_namespace = name_space;
        bidir_tail_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-tail-ls-ps-up")
    {
        bidir_tail_ls_ps_up = value;
        bidir_tail_ls_ps_up.value_namespace = name_space;
        bidir_tail_ls_ps_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-tail-ls-ps-proceeding")
    {
        bidir_tail_ls_ps_proceeding = value;
        bidir_tail_ls_ps_proceeding.value_namespace = name_space;
        bidir_tail_ls_ps_proceeding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-tail-ls-ps-associated")
    {
        bidir_tail_ls_ps_associated = value;
        bidir_tail_ls_ps_associated.value_namespace = name_space;
        bidir_tail_ls_ps_associated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-tail-ls-ps-standby")
    {
        bidir_tail_ls_ps_standby = value;
        bidir_tail_ls_ps_standby.value_namespace = name_space;
        bidir_tail_ls_ps_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir-tail-ls-ps-corouted")
    {
        bidir_tail_ls_ps_corouted = value;
        bidir_tail_ls_ps_corouted.value_namespace = name_space;
        bidir_tail_ls_ps_corouted.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcalc-tie-breaker-type")
    {
        pcalc_tie_breaker_type.yfilter = yfilter;
    }
    if(value_path == "pcalc-tiebreaker")
    {
        pcalc_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-qualifier")
    {
        tiebreaker_qualifier.yfilter = yfilter;
    }
    if(value_path == "te-process-status")
    {
        te_process_status.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-process-enabled")
    {
        is_rsvp_process_enabled.yfilter = yfilter;
    }
    if(value_path == "is-forwarding-enabled")
    {
        is_forwarding_enabled.yfilter = yfilter;
    }
    if(value_path == "activated-heads")
    {
        activated_heads.yfilter = yfilter;
    }
    if(value_path == "deactivated-heads")
    {
        deactivated_heads.yfilter = yfilter;
    }
    if(value_path == "recovered-heads")
    {
        recovered_heads.yfilter = yfilter;
    }
    if(value_path == "is-periodic-reoptimization-on")
    {
        is_periodic_reoptimization_on.yfilter = yfilter;
    }
    if(value_path == "reoptimization-period")
    {
        reoptimization_period.yfilter = yfilter;
    }
    if(value_path == "next-reoptimization-timer")
    {
        next_reoptimization_timer.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-tunnels")
    {
        auto_bandwidth_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collection-period")
    {
        auto_bandwidth_collection_period.yfilter = yfilter;
    }
    if(value_path == "is-promotion-on")
    {
        is_promotion_on.yfilter = yfilter;
    }
    if(value_path == "promotion-period")
    {
        promotion_period.yfilter = yfilter;
    }
    if(value_path == "next-promotion-timer")
    {
        next_promotion_timer.yfilter = yfilter;
    }
    if(value_path == "tunnel-check-period")
    {
        tunnel_check_period.yfilter = yfilter;
    }
    if(value_path == "next-check-time")
    {
        next_check_time.yfilter = yfilter;
    }
    if(value_path == "tunnel-verify-period")
    {
        tunnel_verify_period.yfilter = yfilter;
    }
    if(value_path == "next-verify-timer")
    {
        next_verify_timer.yfilter = yfilter;
    }
    if(value_path == "frr-head-tunnels")
    {
        frr_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "protected-head-tunnels")
    {
        protected_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "rerouted-head-tunnels")
    {
        rerouted_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-mid-point-tunnels")
    {
        frr_mid_point_tunnels.yfilter = yfilter;
    }
    if(value_path == "protected-mid-point-tunnels")
    {
        protected_mid_point_tunnels.yfilter = yfilter;
    }
    if(value_path == "rerouted-mid-point-tunnels")
    {
        rerouted_mid_point_tunnels.yfilter = yfilter;
    }
    if(value_path == "link-protected-tunnels")
    {
        link_protected_tunnels.yfilter = yfilter;
    }
    if(value_path == "node-protected-tunnels")
    {
        node_protected_tunnels.yfilter = yfilter;
    }
    if(value_path == "bw-protected-tunnels")
    {
        bw_protected_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-p2p-head-tunnels")
    {
        frr_p2p_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "protected-p2p-head-tunnels")
    {
        protected_p2p_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "rerouted-p2p-head-tunnels")
    {
        rerouted_p2p_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-p2p-mid-point-tunnels")
    {
        frr_p2p_mid_point_tunnels.yfilter = yfilter;
    }
    if(value_path == "protected-p2p-mid-point-tunnels")
    {
        protected_p2p_mid_point_tunnels.yfilter = yfilter;
    }
    if(value_path == "rerouted-p2p-mid-point-tunnels")
    {
        rerouted_p2p_mid_point_tunnels.yfilter = yfilter;
    }
    if(value_path == "link-protected-p2p-tunnels")
    {
        link_protected_p2p_tunnels.yfilter = yfilter;
    }
    if(value_path == "node-protected-p2p-tunnels")
    {
        node_protected_p2p_tunnels.yfilter = yfilter;
    }
    if(value_path == "bw-protected-p2p-tunnels")
    {
        bw_protected_p2p_tunnels.yfilter = yfilter;
    }
    if(value_path == "backup-tunnels")
    {
        backup_tunnels.yfilter = yfilter;
    }
    if(value_path == "backups-assigned")
    {
        backups_assigned.yfilter = yfilter;
    }
    if(value_path == "frr-protected-interfaces")
    {
        frr_protected_interfaces.yfilter = yfilter;
    }
    if(value_path == "rerouted-interfaces")
    {
        rerouted_interfaces.yfilter = yfilter;
    }
    if(value_path == "p2p-head-tunnels")
    {
        p2p_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-p2p-head-tunnels")
    {
        up_p2p_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "dynamic-up-p2p-head-tunnels")
    {
        dynamic_up_p2p_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-config-p2p-head-tunnels")
    {
        frr_config_p2p_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "p2p-head-destinations")
    {
        p2p_head_destinations.yfilter = yfilter;
    }
    if(value_path == "p2p-head-destinations-up")
    {
        p2p_head_destinations_up.yfilter = yfilter;
    }
    if(value_path == "bw-protected-p2p-s2-ls")
    {
        bw_protected_p2p_s2_ls.yfilter = yfilter;
    }
    if(value_path == "link-protected-p2p-s2-ls")
    {
        link_protected_p2p_s2_ls.yfilter = yfilter;
    }
    if(value_path == "up-p2p-head-s2-ls")
    {
        up_p2p_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "proceeding-p2p-head-s2-ls")
    {
        proceeding_p2p_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "recovering-p2p-head-s2-ls")
    {
        recovering_p2p_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-p2p-head-s2-ls")
    {
        frr_p2p_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "protected-p2p-head-s2-ls")
    {
        protected_p2p_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "rerouted-p2p-head-s2-ls")
    {
        rerouted_p2p_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "p2p-mid-point-s2-ls")
    {
        p2p_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "up-p2p-mid-point-s2-ls")
    {
        up_p2p_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "proceeding-p2p-mid-point-s2-ls")
    {
        proceeding_p2p_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-p2p-mid-point-s2-ls")
    {
        frr_p2p_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "protected-p2p-mid-point-s2-ls")
    {
        protected_p2p_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "rerouted-p2p-mid-point-s2-ls")
    {
        rerouted_p2p_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "p2p-tail-s2-ls")
    {
        p2p_tail_s2_ls.yfilter = yfilter;
    }
    if(value_path == "up-p2p-tail-s2-ls")
    {
        up_p2p_tail_s2_ls.yfilter = yfilter;
    }
    if(value_path == "p2p-tail-tunnels")
    {
        p2p_tail_tunnels.yfilter = yfilter;
    }
    if(value_path == "path-protect-configured-tunnels")
    {
        path_protect_configured_tunnels.yfilter = yfilter;
    }
    if(value_path == "path-protect-configured-tunnels-up")
    {
        path_protect_configured_tunnels_up.yfilter = yfilter;
    }
    if(value_path == "path-protect-configured-tunnels-standby-up")
    {
        path_protect_configured_tunnels_standby_up.yfilter = yfilter;
    }
    if(value_path == "link-diverse-paths")
    {
        link_diverse_paths.yfilter = yfilter;
    }
    if(value_path == "node-diverse-paths")
    {
        node_diverse_paths.yfilter = yfilter;
    }
    if(value_path == "link-and-node-diverse-paths")
    {
        link_and_node_diverse_paths.yfilter = yfilter;
    }
    if(value_path == "user-defined-paths")
    {
        user_defined_paths.yfilter = yfilter;
    }
    if(value_path == "p2mp-head-tunnels")
    {
        p2mp_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-p2mp-head-tunnels")
    {
        up_p2mp_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-config-p2mp-head-tunnels")
    {
        frr_config_p2mp_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "p2mp-head-destinations")
    {
        p2mp_head_destinations.yfilter = yfilter;
    }
    if(value_path == "up-p2mp-head-destinations")
    {
        up_p2mp_head_destinations.yfilter = yfilter;
    }
    if(value_path == "bw-protected-p2mp-s2-ls")
    {
        bw_protected_p2mp_s2_ls.yfilter = yfilter;
    }
    if(value_path == "link-protected-p2mp-s2-ls")
    {
        link_protected_p2mp_s2_ls.yfilter = yfilter;
    }
    if(value_path == "up-p2mp-head-s2-ls")
    {
        up_p2mp_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "proceeding-p2mp-head-s2-ls")
    {
        proceeding_p2mp_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-p2mp-head-s2-ls")
    {
        frr_p2mp_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "protected-p2mp-head-s2-ls")
    {
        protected_p2mp_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "rerouted-p2mp-head-s2-ls")
    {
        rerouted_p2mp_head_s2_ls.yfilter = yfilter;
    }
    if(value_path == "p2mp-mid-point-s2-ls")
    {
        p2mp_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "up-p2mp-mid-point-s2-ls")
    {
        up_p2mp_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "proceeding-p2mp-mid-point-s2-ls")
    {
        proceeding_p2mp_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-p2mp-mid-point-s2-ls")
    {
        frr_p2mp_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "protected-p2mp-mid-point-s2-ls")
    {
        protected_p2mp_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "rerouted-p2mp-mid-point-s2-ls")
    {
        rerouted_p2mp_mid_point_s2_ls.yfilter = yfilter;
    }
    if(value_path == "p2mp-tail-s2-ls")
    {
        p2mp_tail_s2_ls.yfilter = yfilter;
    }
    if(value_path == "up-p2mp-tail-s2-ls")
    {
        up_p2mp_tail_s2_ls.yfilter = yfilter;
    }
    if(value_path == "bidir-head-tunnels")
    {
        bidir_head_tunnels.yfilter = yfilter;
    }
    if(value_path == "bidir-head-tunnels-up")
    {
        bidir_head_tunnels_up.yfilter = yfilter;
    }
    if(value_path == "bidir-head-tunnels-associated")
    {
        bidir_head_tunnels_associated.yfilter = yfilter;
    }
    if(value_path == "bidir-head-tunnels-corouted")
    {
        bidir_head_tunnels_corouted.yfilter = yfilter;
    }
    if(value_path == "bidir-head-ls-ps-up")
    {
        bidir_head_ls_ps_up.yfilter = yfilter;
    }
    if(value_path == "bidir-head-ls-ps-proceeding")
    {
        bidir_head_ls_ps_proceeding.yfilter = yfilter;
    }
    if(value_path == "bidir-head-ls-ps-associated")
    {
        bidir_head_ls_ps_associated.yfilter = yfilter;
    }
    if(value_path == "bidir-head-ls-ps-standby")
    {
        bidir_head_ls_ps_standby.yfilter = yfilter;
    }
    if(value_path == "bidir-mid-tunnels")
    {
        bidir_mid_tunnels.yfilter = yfilter;
    }
    if(value_path == "bidir-mid-tunnels-up")
    {
        bidir_mid_tunnels_up.yfilter = yfilter;
    }
    if(value_path == "bidir-mid-ls-ps-proceeding")
    {
        bidir_mid_ls_ps_proceeding.yfilter = yfilter;
    }
    if(value_path == "bidir-mid-ls-ps-associated")
    {
        bidir_mid_ls_ps_associated.yfilter = yfilter;
    }
    if(value_path == "bidir-mid-ls-ps-standby")
    {
        bidir_mid_ls_ps_standby.yfilter = yfilter;
    }
    if(value_path == "bidir-tail-ls-ps")
    {
        bidir_tail_ls_ps.yfilter = yfilter;
    }
    if(value_path == "bidir-tail-ls-ps-up")
    {
        bidir_tail_ls_ps_up.yfilter = yfilter;
    }
    if(value_path == "bidir-tail-ls-ps-proceeding")
    {
        bidir_tail_ls_ps_proceeding.yfilter = yfilter;
    }
    if(value_path == "bidir-tail-ls-ps-associated")
    {
        bidir_tail_ls_ps_associated.yfilter = yfilter;
    }
    if(value_path == "bidir-tail-ls-ps-standby")
    {
        bidir_tail_ls_ps_standby.yfilter = yfilter;
    }
    if(value_path == "bidir-tail-ls-ps-corouted")
    {
        bidir_tail_ls_ps_corouted.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autobackup-summary" || name == "auto-mesh-summary" || name == "auto-mesh-one-hop-summary" || name == "gmpls-uni-summary" || name == "gmpls-nni-summary" || name == "current-tunnel-convergence-summary" || name == "last-tunnel-convergence-summary" || name == "auto-tun-server-summary" || name == "pcalc-tie-breaker-type" || name == "pcalc-tiebreaker" || name == "tiebreaker-qualifier" || name == "te-process-status" || name == "is-rsvp-process-enabled" || name == "is-forwarding-enabled" || name == "activated-heads" || name == "deactivated-heads" || name == "recovered-heads" || name == "is-periodic-reoptimization-on" || name == "reoptimization-period" || name == "next-reoptimization-timer" || name == "auto-bandwidth-tunnels" || name == "auto-bandwidth-collection-period" || name == "is-promotion-on" || name == "promotion-period" || name == "next-promotion-timer" || name == "tunnel-check-period" || name == "next-check-time" || name == "tunnel-verify-period" || name == "next-verify-timer" || name == "frr-head-tunnels" || name == "protected-head-tunnels" || name == "rerouted-head-tunnels" || name == "frr-mid-point-tunnels" || name == "protected-mid-point-tunnels" || name == "rerouted-mid-point-tunnels" || name == "link-protected-tunnels" || name == "node-protected-tunnels" || name == "bw-protected-tunnels" || name == "frr-p2p-head-tunnels" || name == "protected-p2p-head-tunnels" || name == "rerouted-p2p-head-tunnels" || name == "frr-p2p-mid-point-tunnels" || name == "protected-p2p-mid-point-tunnels" || name == "rerouted-p2p-mid-point-tunnels" || name == "link-protected-p2p-tunnels" || name == "node-protected-p2p-tunnels" || name == "bw-protected-p2p-tunnels" || name == "backup-tunnels" || name == "backups-assigned" || name == "frr-protected-interfaces" || name == "rerouted-interfaces" || name == "p2p-head-tunnels" || name == "up-p2p-head-tunnels" || name == "dynamic-up-p2p-head-tunnels" || name == "frr-config-p2p-head-tunnels" || name == "p2p-head-destinations" || name == "p2p-head-destinations-up" || name == "bw-protected-p2p-s2-ls" || name == "link-protected-p2p-s2-ls" || name == "up-p2p-head-s2-ls" || name == "proceeding-p2p-head-s2-ls" || name == "recovering-p2p-head-s2-ls" || name == "frr-p2p-head-s2-ls" || name == "protected-p2p-head-s2-ls" || name == "rerouted-p2p-head-s2-ls" || name == "p2p-mid-point-s2-ls" || name == "up-p2p-mid-point-s2-ls" || name == "proceeding-p2p-mid-point-s2-ls" || name == "frr-p2p-mid-point-s2-ls" || name == "protected-p2p-mid-point-s2-ls" || name == "rerouted-p2p-mid-point-s2-ls" || name == "p2p-tail-s2-ls" || name == "up-p2p-tail-s2-ls" || name == "p2p-tail-tunnels" || name == "path-protect-configured-tunnels" || name == "path-protect-configured-tunnels-up" || name == "path-protect-configured-tunnels-standby-up" || name == "link-diverse-paths" || name == "node-diverse-paths" || name == "link-and-node-diverse-paths" || name == "user-defined-paths" || name == "p2mp-head-tunnels" || name == "up-p2mp-head-tunnels" || name == "frr-config-p2mp-head-tunnels" || name == "p2mp-head-destinations" || name == "up-p2mp-head-destinations" || name == "bw-protected-p2mp-s2-ls" || name == "link-protected-p2mp-s2-ls" || name == "up-p2mp-head-s2-ls" || name == "proceeding-p2mp-head-s2-ls" || name == "frr-p2mp-head-s2-ls" || name == "protected-p2mp-head-s2-ls" || name == "rerouted-p2mp-head-s2-ls" || name == "p2mp-mid-point-s2-ls" || name == "up-p2mp-mid-point-s2-ls" || name == "proceeding-p2mp-mid-point-s2-ls" || name == "frr-p2mp-mid-point-s2-ls" || name == "protected-p2mp-mid-point-s2-ls" || name == "rerouted-p2mp-mid-point-s2-ls" || name == "p2mp-tail-s2-ls" || name == "up-p2mp-tail-s2-ls" || name == "bidir-head-tunnels" || name == "bidir-head-tunnels-up" || name == "bidir-head-tunnels-associated" || name == "bidir-head-tunnels-corouted" || name == "bidir-head-ls-ps-up" || name == "bidir-head-ls-ps-proceeding" || name == "bidir-head-ls-ps-associated" || name == "bidir-head-ls-ps-standby" || name == "bidir-mid-tunnels" || name == "bidir-mid-tunnels-up" || name == "bidir-mid-ls-ps-proceeding" || name == "bidir-mid-ls-ps-associated" || name == "bidir-mid-ls-ps-standby" || name == "bidir-tail-ls-ps" || name == "bidir-tail-ls-ps-up" || name == "bidir-tail-ls-ps-proceeding" || name == "bidir-tail-ls-ps-associated" || name == "bidir-tail-ls-ps-standby" || name == "bidir-tail-ls-ps-corouted")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutobackupSummary::AutobackupSummary()
    :
    autobackups{YType::uint32, "autobackups"},
    up_autobackups{YType::uint32, "up-autobackups"},
    down_autobackups{YType::uint32, "down-autobackups"},
    unused_autobackups{YType::uint32, "unused-autobackups"},
    next_hop_autobackups{YType::uint32, "next-hop-autobackups"},
    next_next_hop_autobackups{YType::uint32, "next-next-hop-autobackups"},
    srlg_strict_autobackups{YType::uint32, "srlg-strict-autobackups"},
    srlg_preferred_autobackups{YType::uint32, "srlg-preferred-autobackups"},
    srlg_weighted_autobackups{YType::uint32, "srlg-weighted-autobackups"},
    next_hop_autobackup_protected_ls_ps{YType::uint32, "next-hop-autobackup-protected-ls-ps"},
    next_next_hop_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-autobackup-protected-ls-ps"},
    next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-hop-srlg-autobackup-protected-ls-ps"},
    next_next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-srlg-autobackup-protected-ls-ps"},
    next_hop_autobackup_protected_s2l_families{YType::uint32, "next-hop-autobackup-protected-s2l-families"},
    next_next_hop_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-autobackup-protected-s2l-families"},
    next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-hop-srlg-autobackup-protected-s2l-families"},
    next_next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2l-families"},
    next_hop_autobackup_protected_s2_ls{YType::uint32, "next-hop-autobackup-protected-s2-ls"},
    next_next_hop_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-autobackup-protected-s2-ls"},
    next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-hop-srlg-autobackup-protected-s2-ls"},
    next_next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2-ls"}
{

    yang_name = "autobackup-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutobackupSummary::~AutobackupSummary()
{
}

bool MplsTe::Tunnels::Summary::AutobackupSummary::has_data() const
{
    if (is_presence_container) return true;
    return autobackups.is_set
	|| up_autobackups.is_set
	|| down_autobackups.is_set
	|| unused_autobackups.is_set
	|| next_hop_autobackups.is_set
	|| next_next_hop_autobackups.is_set
	|| srlg_strict_autobackups.is_set
	|| srlg_preferred_autobackups.is_set
	|| srlg_weighted_autobackups.is_set
	|| next_hop_autobackup_protected_ls_ps.is_set
	|| next_next_hop_autobackup_protected_ls_ps.is_set
	|| next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_hop_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackup_protected_s2l_families.is_set
	|| next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_hop_autobackup_protected_s2_ls.is_set
	|| next_next_hop_autobackup_protected_s2_ls.is_set
	|| next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_next_hop_srlg_autobackup_protected_s2_ls.is_set;
}

bool MplsTe::Tunnels::Summary::AutobackupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autobackups.yfilter)
	|| ydk::is_set(up_autobackups.yfilter)
	|| ydk::is_set(down_autobackups.yfilter)
	|| ydk::is_set(unused_autobackups.yfilter)
	|| ydk::is_set(next_hop_autobackups.yfilter)
	|| ydk::is_set(next_next_hop_autobackups.yfilter)
	|| ydk::is_set(srlg_strict_autobackups.yfilter)
	|| ydk::is_set(srlg_preferred_autobackups.yfilter)
	|| ydk::is_set(srlg_weighted_autobackups.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter);
}

std::string MplsTe::Tunnels::Summary::AutobackupSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutobackupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autobackup-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutobackupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autobackups.is_set || is_set(autobackups.yfilter)) leaf_name_data.push_back(autobackups.get_name_leafdata());
    if (up_autobackups.is_set || is_set(up_autobackups.yfilter)) leaf_name_data.push_back(up_autobackups.get_name_leafdata());
    if (down_autobackups.is_set || is_set(down_autobackups.yfilter)) leaf_name_data.push_back(down_autobackups.get_name_leafdata());
    if (unused_autobackups.is_set || is_set(unused_autobackups.yfilter)) leaf_name_data.push_back(unused_autobackups.get_name_leafdata());
    if (next_hop_autobackups.is_set || is_set(next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_hop_autobackups.get_name_leafdata());
    if (next_next_hop_autobackups.is_set || is_set(next_next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_next_hop_autobackups.get_name_leafdata());
    if (srlg_strict_autobackups.is_set || is_set(srlg_strict_autobackups.yfilter)) leaf_name_data.push_back(srlg_strict_autobackups.get_name_leafdata());
    if (srlg_preferred_autobackups.is_set || is_set(srlg_preferred_autobackups.yfilter)) leaf_name_data.push_back(srlg_preferred_autobackups.get_name_leafdata());
    if (srlg_weighted_autobackups.is_set || is_set(srlg_weighted_autobackups.yfilter)) leaf_name_data.push_back(srlg_weighted_autobackups.get_name_leafdata());
    if (next_hop_autobackup_protected_ls_ps.is_set || is_set(next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_autobackup_protected_s2l_families.is_set || is_set(next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_autobackup_protected_s2_ls.is_set || is_set(next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::AutobackupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::AutobackupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::Summary::AutobackupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autobackups")
    {
        autobackups = value;
        autobackups.value_namespace = name_space;
        autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups = value;
        up_autobackups.value_namespace = name_space;
        up_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups = value;
        down_autobackups.value_namespace = name_space;
        down_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups = value;
        unused_autobackups.value_namespace = name_space;
        unused_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups = value;
        next_hop_autobackups.value_namespace = name_space;
        next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups = value;
        next_next_hop_autobackups.value_namespace = name_space;
        next_next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups = value;
        srlg_strict_autobackups.value_namespace = name_space;
        srlg_strict_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups = value;
        srlg_preferred_autobackups.value_namespace = name_space;
        srlg_preferred_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups = value;
        srlg_weighted_autobackups.value_namespace = name_space;
        srlg_weighted_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps = value;
        next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps = value;
        next_next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps = value;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps = value;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families = value;
        next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families = value;
        next_next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families = value;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families = value;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls = value;
        next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls = value;
        next_next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls = value;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls = value;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutobackupSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autobackups")
    {
        autobackups.yfilter = yfilter;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups.yfilter = yfilter;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups.yfilter = yfilter;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutobackupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autobackups" || name == "up-autobackups" || name == "down-autobackups" || name == "unused-autobackups" || name == "next-hop-autobackups" || name == "next-next-hop-autobackups" || name == "srlg-strict-autobackups" || name == "srlg-preferred-autobackups" || name == "srlg-weighted-autobackups" || name == "next-hop-autobackup-protected-ls-ps" || name == "next-next-hop-autobackup-protected-ls-ps" || name == "next-hop-srlg-autobackup-protected-ls-ps" || name == "next-next-hop-srlg-autobackup-protected-ls-ps" || name == "next-hop-autobackup-protected-s2l-families" || name == "next-next-hop-autobackup-protected-s2l-families" || name == "next-hop-srlg-autobackup-protected-s2l-families" || name == "next-next-hop-srlg-autobackup-protected-s2l-families" || name == "next-hop-autobackup-protected-s2-ls" || name == "next-next-hop-autobackup-protected-s2-ls" || name == "next-hop-srlg-autobackup-protected-s2-ls" || name == "next-next-hop-srlg-autobackup-protected-s2-ls")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutoMeshSummary::AutoMeshSummary()
    :
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"}
{

    yang_name = "auto-mesh-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoMeshSummary::~AutoMeshSummary()
{
}

bool MplsTe::Tunnels::Summary::AutoMeshSummary::has_data() const
{
    if (is_presence_container) return true;
    return auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_destinations.is_set;
}

bool MplsTe::Tunnels::Summary::AutoMeshSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_groups.yfilter)
	|| ydk::is_set(auto_mesh_destinations.yfilter);
}

std::string MplsTe::Tunnels::Summary::AutoMeshSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoMeshSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoMeshSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.yfilter)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::AutoMeshSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::AutoMeshSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::Summary::AutoMeshSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
        down_auto_mesh_tunnels.value_namespace = name_space;
        down_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
        auto_mesh_groups.value_namespace = name_space;
        auto_mesh_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
        auto_mesh_destinations.value_namespace = name_space;
        auto_mesh_destinations.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutoMeshSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutoMeshSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-tunnels" || name == "up-auto-mesh-tunnels" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "auto-mesh-groups" || name == "auto-mesh-destinations")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::AutoMeshOneHopSummary()
    :
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"}
{

    yang_name = "auto-mesh-one-hop-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::~AutoMeshOneHopSummary()
{
}

bool MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::has_data() const
{
    if (is_presence_container) return true;
    return auto_mesh_one_hop_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_destinations.is_set;
}

bool MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_groups.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_destinations.yfilter);
}

std::string MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-one-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
        auto_mesh_one_hop_tunnels.value_namespace = name_space;
        auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
        up_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        up_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels = value;
        down_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        down_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
        auto_mesh_one_hop_groups.value_namespace = name_space;
        auto_mesh_one_hop_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
        auto_mesh_one_hop_destinations.value_namespace = name_space;
        auto_mesh_one_hop_destinations.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-one-hop-tunnels" || name == "up-auto-mesh-one-hop-tunnels" || name == "down-auto-mesh-one-hop-tunnels" || name == "frr-auto-mesh-tunnels" || name == "auto-mesh-one-hop-groups" || name == "auto-mesh-one-hop-destinations")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::GmplsUniSummary::GmplsUniSummary()
    :
    heads_up{YType::uint32, "heads-up"},
    heads_down{YType::uint32, "heads-down"},
    tails_up{YType::uint32, "tails-up"},
    tails_down{YType::uint32, "tails-down"}
{

    yang_name = "gmpls-uni-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::GmplsUniSummary::~GmplsUniSummary()
{
}

bool MplsTe::Tunnels::Summary::GmplsUniSummary::has_data() const
{
    if (is_presence_container) return true;
    return heads_up.is_set
	|| heads_down.is_set
	|| tails_up.is_set
	|| tails_down.is_set;
}

bool MplsTe::Tunnels::Summary::GmplsUniSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(heads_up.yfilter)
	|| ydk::is_set(heads_down.yfilter)
	|| ydk::is_set(tails_up.yfilter)
	|| ydk::is_set(tails_down.yfilter);
}

std::string MplsTe::Tunnels::Summary::GmplsUniSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::GmplsUniSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::GmplsUniSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heads_up.is_set || is_set(heads_up.yfilter)) leaf_name_data.push_back(heads_up.get_name_leafdata());
    if (heads_down.is_set || is_set(heads_down.yfilter)) leaf_name_data.push_back(heads_down.get_name_leafdata());
    if (tails_up.is_set || is_set(tails_up.yfilter)) leaf_name_data.push_back(tails_up.get_name_leafdata());
    if (tails_down.is_set || is_set(tails_down.yfilter)) leaf_name_data.push_back(tails_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::GmplsUniSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::GmplsUniSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::Summary::GmplsUniSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "heads-up")
    {
        heads_up = value;
        heads_up.value_namespace = name_space;
        heads_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heads-down")
    {
        heads_down = value;
        heads_down.value_namespace = name_space;
        heads_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-up")
    {
        tails_up = value;
        tails_up.value_namespace = name_space;
        tails_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-down")
    {
        tails_down = value;
        tails_down.value_namespace = name_space;
        tails_down.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::GmplsUniSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "heads-up")
    {
        heads_up.yfilter = yfilter;
    }
    if(value_path == "heads-down")
    {
        heads_down.yfilter = yfilter;
    }
    if(value_path == "tails-up")
    {
        tails_up.yfilter = yfilter;
    }
    if(value_path == "tails-down")
    {
        tails_down.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::GmplsUniSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "heads-up" || name == "heads-down" || name == "tails-up" || name == "tails-down")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::GmplsNniSummary::GmplsNniSummary()
    :
    heads_up{YType::uint32, "heads-up"},
    heads_down{YType::uint32, "heads-down"},
    mids_up{YType::uint32, "mids-up"},
    mids_down{YType::uint32, "mids-down"},
    tails_up{YType::uint32, "tails-up"},
    tails_down{YType::uint32, "tails-down"}
{

    yang_name = "gmpls-nni-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::GmplsNniSummary::~GmplsNniSummary()
{
}

bool MplsTe::Tunnels::Summary::GmplsNniSummary::has_data() const
{
    if (is_presence_container) return true;
    return heads_up.is_set
	|| heads_down.is_set
	|| mids_up.is_set
	|| mids_down.is_set
	|| tails_up.is_set
	|| tails_down.is_set;
}

bool MplsTe::Tunnels::Summary::GmplsNniSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(heads_up.yfilter)
	|| ydk::is_set(heads_down.yfilter)
	|| ydk::is_set(mids_up.yfilter)
	|| ydk::is_set(mids_down.yfilter)
	|| ydk::is_set(tails_up.yfilter)
	|| ydk::is_set(tails_down.yfilter);
}

std::string MplsTe::Tunnels::Summary::GmplsNniSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::GmplsNniSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-nni-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::GmplsNniSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heads_up.is_set || is_set(heads_up.yfilter)) leaf_name_data.push_back(heads_up.get_name_leafdata());
    if (heads_down.is_set || is_set(heads_down.yfilter)) leaf_name_data.push_back(heads_down.get_name_leafdata());
    if (mids_up.is_set || is_set(mids_up.yfilter)) leaf_name_data.push_back(mids_up.get_name_leafdata());
    if (mids_down.is_set || is_set(mids_down.yfilter)) leaf_name_data.push_back(mids_down.get_name_leafdata());
    if (tails_up.is_set || is_set(tails_up.yfilter)) leaf_name_data.push_back(tails_up.get_name_leafdata());
    if (tails_down.is_set || is_set(tails_down.yfilter)) leaf_name_data.push_back(tails_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::GmplsNniSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::GmplsNniSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::Summary::GmplsNniSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "heads-up")
    {
        heads_up = value;
        heads_up.value_namespace = name_space;
        heads_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heads-down")
    {
        heads_down = value;
        heads_down.value_namespace = name_space;
        heads_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mids-up")
    {
        mids_up = value;
        mids_up.value_namespace = name_space;
        mids_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mids-down")
    {
        mids_down = value;
        mids_down.value_namespace = name_space;
        mids_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-up")
    {
        tails_up = value;
        tails_up.value_namespace = name_space;
        tails_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-down")
    {
        tails_down = value;
        tails_down.value_namespace = name_space;
        tails_down.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::GmplsNniSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "heads-up")
    {
        heads_up.yfilter = yfilter;
    }
    if(value_path == "heads-down")
    {
        heads_down.yfilter = yfilter;
    }
    if(value_path == "mids-up")
    {
        mids_up.yfilter = yfilter;
    }
    if(value_path == "mids-down")
    {
        mids_down.yfilter = yfilter;
    }
    if(value_path == "tails-up")
    {
        tails_up.yfilter = yfilter;
    }
    if(value_path == "tails-down")
    {
        tails_down.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::GmplsNniSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "heads-up" || name == "heads-down" || name == "mids-up" || name == "mids-down" || name == "tails-up" || name == "tails-down")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::CurrentTunnelConvergenceSummary()
    :
    tunnel_frr_active_count{YType::uint32, "tunnel-frr-active-count"},
    tunnel_frr_total_count{YType::uint32, "tunnel-frr-total-count"},
    tunnel_converged_count{YType::uint32, "tunnel-converged-count"},
    tunnel_total_convergence_complete_time{YType::uint64, "tunnel-total-convergence-complete-time"}
        ,
    table_path_out(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut>())
    , table_resv_in(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn>())
    , table_label_rewrite(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite>())
    , table_pcalc(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc>())
    , table_tunnel_rewrite(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite>())
    , table_frr_trigger(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger>())
{
    table_path_out->parent = this;
    table_resv_in->parent = this;
    table_label_rewrite->parent = this;
    table_pcalc->parent = this;
    table_tunnel_rewrite->parent = this;
    table_frr_trigger->parent = this;

    yang_name = "current-tunnel-convergence-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::~CurrentTunnelConvergenceSummary()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_frr_active_count.is_set
	|| tunnel_frr_total_count.is_set
	|| tunnel_converged_count.is_set
	|| tunnel_total_convergence_complete_time.is_set
	|| (table_path_out !=  nullptr && table_path_out->has_data())
	|| (table_resv_in !=  nullptr && table_resv_in->has_data())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_data())
	|| (table_pcalc !=  nullptr && table_pcalc->has_data())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_data())
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_data());
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_frr_active_count.yfilter)
	|| ydk::is_set(tunnel_frr_total_count.yfilter)
	|| ydk::is_set(tunnel_converged_count.yfilter)
	|| ydk::is_set(tunnel_total_convergence_complete_time.yfilter)
	|| (table_path_out !=  nullptr && table_path_out->has_operation())
	|| (table_resv_in !=  nullptr && table_resv_in->has_operation())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_operation())
	|| (table_pcalc !=  nullptr && table_pcalc->has_operation())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_operation())
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_operation());
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-tunnel-convergence-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_frr_active_count.is_set || is_set(tunnel_frr_active_count.yfilter)) leaf_name_data.push_back(tunnel_frr_active_count.get_name_leafdata());
    if (tunnel_frr_total_count.is_set || is_set(tunnel_frr_total_count.yfilter)) leaf_name_data.push_back(tunnel_frr_total_count.get_name_leafdata());
    if (tunnel_converged_count.is_set || is_set(tunnel_converged_count.yfilter)) leaf_name_data.push_back(tunnel_converged_count.get_name_leafdata());
    if (tunnel_total_convergence_complete_time.is_set || is_set(tunnel_total_convergence_complete_time.yfilter)) leaf_name_data.push_back(tunnel_total_convergence_complete_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-path-out")
    {
        if(table_path_out == nullptr)
        {
            table_path_out = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut>();
        }
        return table_path_out;
    }

    if(child_yang_name == "table-resv-in")
    {
        if(table_resv_in == nullptr)
        {
            table_resv_in = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn>();
        }
        return table_resv_in;
    }

    if(child_yang_name == "table-label-rewrite")
    {
        if(table_label_rewrite == nullptr)
        {
            table_label_rewrite = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite>();
        }
        return table_label_rewrite;
    }

    if(child_yang_name == "table-pcalc")
    {
        if(table_pcalc == nullptr)
        {
            table_pcalc = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc>();
        }
        return table_pcalc;
    }

    if(child_yang_name == "table-tunnel-rewrite")
    {
        if(table_tunnel_rewrite == nullptr)
        {
            table_tunnel_rewrite = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite>();
        }
        return table_tunnel_rewrite;
    }

    if(child_yang_name == "table-frr-trigger")
    {
        if(table_frr_trigger == nullptr)
        {
            table_frr_trigger = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger>();
        }
        return table_frr_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(table_path_out != nullptr)
    {
        children["table-path-out"] = table_path_out;
    }

    if(table_resv_in != nullptr)
    {
        children["table-resv-in"] = table_resv_in;
    }

    if(table_label_rewrite != nullptr)
    {
        children["table-label-rewrite"] = table_label_rewrite;
    }

    if(table_pcalc != nullptr)
    {
        children["table-pcalc"] = table_pcalc;
    }

    if(table_tunnel_rewrite != nullptr)
    {
        children["table-tunnel-rewrite"] = table_tunnel_rewrite;
    }

    if(table_frr_trigger != nullptr)
    {
        children["table-frr-trigger"] = table_frr_trigger;
    }

    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-frr-active-count")
    {
        tunnel_frr_active_count = value;
        tunnel_frr_active_count.value_namespace = name_space;
        tunnel_frr_active_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-frr-total-count")
    {
        tunnel_frr_total_count = value;
        tunnel_frr_total_count.value_namespace = name_space;
        tunnel_frr_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count = value;
        tunnel_converged_count.value_namespace = name_space;
        tunnel_converged_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time = value;
        tunnel_total_convergence_complete_time.value_namespace = name_space;
        tunnel_total_convergence_complete_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-frr-active-count")
    {
        tunnel_frr_active_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-frr-total-count")
    {
        tunnel_frr_total_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-path-out" || name == "table-resv-in" || name == "table-label-rewrite" || name == "table-pcalc" || name == "table-tunnel-rewrite" || name == "table-frr-trigger" || name == "tunnel-frr-active-count" || name == "tunnel-frr-total-count" || name == "tunnel-converged-count" || name == "tunnel-total-convergence-complete-time")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::TablePathOut()
{

    yang_name = "table-path-out"; yang_parent_name = "current-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::~TablePathOut()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-path-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::TableResvIn()
{

    yang_name = "table-resv-in"; yang_parent_name = "current-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::~TableResvIn()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-resv-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

