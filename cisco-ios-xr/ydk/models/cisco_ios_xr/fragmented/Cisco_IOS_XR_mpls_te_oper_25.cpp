
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_25.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_26.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::SignallingCounters::TailsCounters::TailsCounter::TailsCounter()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "tails-counter"; yang_parent_name = "tails-counters";
}

MplsTe::SignallingCounters::TailsCounters::TailsCounter::~TailsCounter()
{
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::TailsCounters::TailsCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tails-counter" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::TailsCounters::TailsCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/tails-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::TailsCounters::TailsCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(std::move(c));
        children[segment_path] = s2l_statistic.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::TailsCounters::TailsCounter::get_children()
{
    for (auto const & c : s2l_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::TailsCounters::TailsCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "tails-counter";
}

MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "s2l-statistic"; yang_parent_name = "tails-counter";
}

MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signallings()
{
    yang_name = "signallings"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::Signallings::~Signallings()
{
}

bool MplsTe::SignallingCounters::Signallings::has_data() const
{
    for (std::size_t index=0; index<signalling.size(); index++)
    {
        if(signalling[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::Signallings::has_operation() const
{
    for (std::size_t index=0; index<signalling.size(); index++)
    {
        if(signalling[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SignallingCounters::Signallings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signallings";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "signalling")
    {
        for(auto const & c : signalling)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling>();
        c->parent = this;
        signalling.push_back(std::move(c));
        children[segment_path] = signalling.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::get_children()
{
    for (auto const & c : signalling)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SignallingCounters::Signallings::Signalling::Signalling()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    tunnel_id{YType::int32, "tunnel-id"}
    	,
    te_signalling_filter_data(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>())
{
    te_signalling_filter_data->parent = this;
    children["te-signalling-filter-data"] = te_signalling_filter_data;

    yang_name = "signalling"; yang_parent_name = "signallings";
}

MplsTe::SignallingCounters::Signallings::Signalling::~Signalling()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_data() const
{
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| tunnel_id.is_set
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_operation() const
{
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| is_set(tunnel_id.operation)
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling" <<"[ctype='" <<ctype <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[sub-group-id='" <<sub_group_id <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/signallings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-signalling-filter-data")
    {
        if(te_signalling_filter_data != nullptr)
        {
            children["te-signalling-filter-data"] = te_signalling_filter_data;
        }
        else
        {
            te_signalling_filter_data = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>();
            te_signalling_filter_data->parent = this;
            children["te-signalling-filter-data"] = te_signalling_filter_data;
        }
        return children.at("te-signalling-filter-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::get_children()
{
    if(children.find("te-signalling-filter-data") == children.end())
    {
        if(te_signalling_filter_data != nullptr)
        {
            children["te-signalling-filter-data"] = te_signalling_filter_data;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterData()
    :
    statistics_filter{YType::enumeration, "statistics-filter"}
    	,
    te_signalling_filter_lsp(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>())
	,te_signalling_filter_vif(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>())
{
    te_signalling_filter_lsp->parent = this;
    children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;

    te_signalling_filter_vif->parent = this;
    children["te-signalling-filter-vif"] = te_signalling_filter_vif;

    yang_name = "te-signalling-filter-data"; yang_parent_name = "signalling";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::~TeSignallingFilterData()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_data() const
{
    return statistics_filter.is_set
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_data())
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_operation() const
{
    return is_set(operation)
	|| is_set(statistics_filter.operation)
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_operation())
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-data";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeSignallingFilterData' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics_filter.is_set || is_set(statistics_filter.operation)) leaf_name_data.push_back(statistics_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-signalling-filter-lsp")
    {
        if(te_signalling_filter_lsp != nullptr)
        {
            children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
        }
        else
        {
            te_signalling_filter_lsp = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>();
            te_signalling_filter_lsp->parent = this;
            children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
        }
        return children.at("te-signalling-filter-lsp");
    }

    if(child_yang_name == "te-signalling-filter-vif")
    {
        if(te_signalling_filter_vif != nullptr)
        {
            children["te-signalling-filter-vif"] = te_signalling_filter_vif;
        }
        else
        {
            te_signalling_filter_vif = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>();
            te_signalling_filter_vif->parent = this;
            children["te-signalling-filter-vif"] = te_signalling_filter_vif;
        }
        return children.at("te-signalling-filter-vif");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_children()
{
    if(children.find("te-signalling-filter-lsp") == children.end())
    {
        if(te_signalling_filter_lsp != nullptr)
        {
            children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
        }
    }

    if(children.find("te-signalling-filter-vif") == children.end())
    {
        if(te_signalling_filter_vif != nullptr)
        {
            children["te-signalling-filter-vif"] = te_signalling_filter_vif;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::TeSignallingFilterVif()
    :
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "te-signalling-filter-vif"; yang_parent_name = "te-signalling-filter-data";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::~TeSignallingFilterVif()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-vif";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeSignallingFilterVif' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(std::move(c));
        children[segment_path] = destination_statistic.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_children()
{
    for (auto const & c : destination_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-vif";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "destination-statistic"; yang_parent_name = "te-signalling-filter-vif";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(std::move(c));
        children[segment_path] = s2l_statistic.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_children()
{
    for (auto const & c : s2l_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "destination-statistic";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::TeSignallingFilterLsp()
    :
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "te-signalling-filter-lsp"; yang_parent_name = "te-signalling-filter-data";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::~TeSignallingFilterLsp()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeSignallingFilterLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(std::move(c));
        children[segment_path] = s2l_statistic.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_children()
{
    for (auto const & c : s2l_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-lsp";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "s2l-statistic"; yang_parent_name = "te-signalling-filter-lsp";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::SignallingSummary::SignallingSummary()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "signalling-summary"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::SignallingSummary::~SignallingSummary()
{
}

bool MplsTe::SignallingCounters::SignallingSummary::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::SignallingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::SignallingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-summary";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::SignallingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::SignallingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::SignallingSummary::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::SignallingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::DiffServTeClasses::DiffServTeClasses()
{
    yang_name = "diff-serv-te-classes"; yang_parent_name = "mpls-te";
}

MplsTe::DiffServTeClasses::~DiffServTeClasses()
{
}

bool MplsTe::DiffServTeClasses::has_data() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::DiffServTeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::DiffServTeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-te-classes";

    return path_buffer.str();

}

EntityPath MplsTe::DiffServTeClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::DiffServTeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-class")
    {
        for(auto const & c : te_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::DiffServTeClasses::TeClass>();
        c->parent = this;
        te_class.push_back(std::move(c));
        children[segment_path] = te_class.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::DiffServTeClasses::get_children()
{
    for (auto const & c : te_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::DiffServTeClasses::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::DiffServTeClasses::TeClass::TeClass()
    :
    class_number{YType::uint8, "class-number"},
    class_status{YType::enumeration, "class-status"},
    class_type{YType::uint8, "class-type"},
    priority{YType::uint8, "priority"}
{
    yang_name = "te-class"; yang_parent_name = "diff-serv-te-classes";
}

MplsTe::DiffServTeClasses::TeClass::~TeClass()
{
}

bool MplsTe::DiffServTeClasses::TeClass::has_data() const
{
    return class_number.is_set
	|| class_status.is_set
	|| class_type.is_set
	|| priority.is_set;
}

bool MplsTe::DiffServTeClasses::TeClass::has_operation() const
{
    return is_set(operation)
	|| is_set(class_number.operation)
	|| is_set(class_status.operation)
	|| is_set(class_type.operation)
	|| is_set(priority.operation);
}

std::string MplsTe::DiffServTeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";

    return path_buffer.str();

}

EntityPath MplsTe::DiffServTeClasses::TeClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/diff-serv-te-classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.operation)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_status.is_set || is_set(class_status.operation)) leaf_name_data.push_back(class_status.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::DiffServTeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::DiffServTeClasses::TeClass::get_children()
{
    return children;
}

void MplsTe::DiffServTeClasses::TeClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-number")
    {
        class_number = value;
    }
    if(value_path == "class-status")
    {
        class_status = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

MplsTe::Issu::Issu()
    :
    detail(std::make_shared<MplsTe::Issu::Detail>())
	,status(std::make_shared<MplsTe::Issu::Status>())
{
    detail->parent = this;
    children["detail"] = detail;

    status->parent = this;
    children["status"] = status;

    yang_name = "issu"; yang_parent_name = "mpls-te";
}

MplsTe::Issu::~Issu()
{
}

bool MplsTe::Issu::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool MplsTe::Issu::has_operation() const
{
    return is_set(operation)
	|| (detail !=  nullptr && detail->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string MplsTe::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail;
        }
        else
        {
            detail = std::make_shared<MplsTe::Issu::Detail>();
            detail->parent = this;
            children["detail"] = detail;
        }
        return children.at("detail");
    }

    if(child_yang_name == "status")
    {
        if(status != nullptr)
        {
            children["status"] = status;
        }
        else
        {
            status = std::make_shared<MplsTe::Issu::Status>();
            status->parent = this;
            children["status"] = status;
        }
        return children.at("status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail;
        }
    }

    if(children.find("status") == children.end())
    {
        if(status != nullptr)
        {
            children["status"] = status;
        }
    }

    return children;
}

void MplsTe::Issu::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;
    children["sync-status-information"] = sync_status_information;

    yang_name = "status"; yang_parent_name = "issu";
}

MplsTe::Issu::Status::~Status()
{
}

bool MplsTe::Issu::Status::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Issu::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
        else
        {
            sync_status_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation>();
            sync_status_information->parent = this;
            children["sync-status-information"] = sync_status_information;
        }
        return children.at("sync-status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::get_children()
{
    if(children.find("sync-status-information") == children.end())
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
    }

    return children;
}

void MplsTe::Issu::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    children["master-sync-information"] = master_sync_information;

    slave_sync_information->parent = this;
    children["slave-sync-information"] = slave_sync_information;

    yang_name = "sync-status-information"; yang_parent_name = "status";
}

MplsTe::Issu::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_show_type.operation)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.operation)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
        else
        {
            master_sync_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation>();
            master_sync_information->parent = this;
            children["master-sync-information"] = master_sync_information;
        }
        return children.at("master-sync-information");
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
        else
        {
            slave_sync_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation>();
            slave_sync_information->parent = this;
            children["slave-sync-information"] = slave_sync_information;
        }
        return children.at("slave-sync-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::get_children()
{
    if(children.find("master-sync-information") == children.end())
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
    }

    if(children.find("slave-sync-information") == children.end())
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    return insync_sub_ls_ps.is_set
	|| insync_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(insync_sub_ls_ps.operation)
	|| is_set(insync_tunnels.operation)
	|| is_set(pending_sub_ls_ps.operation)
	|| is_set(pending_tunnels.operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.operation)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.operation)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.operation)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.operation)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    if(child_yang_name == "s2l-pending")
    {
        for(auto const & c : s2l_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(std::move(c));
        children[segment_path] = s2l_pending.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vif-pending")
    {
        for(auto const & c : vif_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(std::move(c));
        children[segment_path] = vif_pending.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    for (auto const & c : s2l_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vif_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "slave-sync-information";
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information";
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children()
{
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{
    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information";
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(s2l_role.operation)
	|| is_set(signaled_name.operation);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.operation)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children()
{
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "master-sync-information";
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::Issu::Detail::Detail()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;
    children["sync-status-information"] = sync_status_information;

    yang_name = "detail"; yang_parent_name = "issu";
}

MplsTe::Issu::Detail::~Detail()
{
}

bool MplsTe::Issu::Detail::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Issu::Detail::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Issu::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
        else
        {
            sync_status_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation>();
            sync_status_information->parent = this;
            children["sync-status-information"] = sync_status_information;
        }
        return children.at("sync-status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::get_children()
{
    if(children.find("sync-status-information") == children.end())
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
    }

    return children;
}

void MplsTe::Issu::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    children["master-sync-information"] = master_sync_information;

    slave_sync_information->parent = this;
    children["slave-sync-information"] = slave_sync_information;

    yang_name = "sync-status-information"; yang_parent_name = "detail";
}

MplsTe::Issu::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_show_type.operation)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.operation)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
        else
        {
            master_sync_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation>();
            master_sync_information->parent = this;
            children["master-sync-information"] = master_sync_information;
        }
        return children.at("master-sync-information");
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
        else
        {
            slave_sync_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>();
            slave_sync_information->parent = this;
            children["slave-sync-information"] = slave_sync_information;
        }
        return children.at("slave-sync-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::get_children()
{
    if(children.find("master-sync-information") == children.end())
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
    }

    if(children.find("slave-sync-information") == children.end())
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    return insync_sub_ls_ps.is_set
	|| insync_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(insync_sub_ls_ps.operation)
	|| is_set(insync_tunnels.operation)
	|| is_set(pending_sub_ls_ps.operation)
	|| is_set(pending_tunnels.operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.operation)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.operation)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.operation)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.operation)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    if(child_yang_name == "s2l-pending")
    {
        for(auto const & c : s2l_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(std::move(c));
        children[segment_path] = s2l_pending.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vif-pending")
    {
        for(auto const & c : vif_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(std::move(c));
        children[segment_path] = vif_pending.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    for (auto const & c : s2l_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vif_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "slave-sync-information";
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information";
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children()
{
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{
    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information";
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(s2l_role.operation)
	|| is_set(signaled_name.operation);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.operation)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children()
{
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "master-sync-information";
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTe::FastReroute::FastReroute()
    :
    backup_tunnels(std::make_shared<MplsTe::FastReroute::BackupTunnels>())
	,promotion(std::make_shared<MplsTe::FastReroute::Promotion>())
	,protected_interfaces(std::make_shared<MplsTe::FastReroute::ProtectedInterfaces>())
	,protections(std::make_shared<MplsTe::FastReroute::Protections>())
{
    backup_tunnels->parent = this;
    children["backup-tunnels"] = backup_tunnels;

    promotion->parent = this;
    children["promotion"] = promotion;

    protected_interfaces->parent = this;
    children["protected-interfaces"] = protected_interfaces;

    protections->parent = this;
    children["protections"] = protections;

    yang_name = "fast-reroute"; yang_parent_name = "mpls-te";
}

MplsTe::FastReroute::~FastReroute()
{
}

bool MplsTe::FastReroute::has_data() const
{
    return (backup_tunnels !=  nullptr && backup_tunnels->has_data())
	|| (promotion !=  nullptr && promotion->has_data())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_data())
	|| (protections !=  nullptr && protections->has_data());
}

bool MplsTe::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation())
	|| (promotion !=  nullptr && promotion->has_operation())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_operation())
	|| (protections !=  nullptr && protections->has_operation());
}

std::string MplsTe::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels != nullptr)
        {
            children["backup-tunnels"] = backup_tunnels;
        }
        else
        {
            backup_tunnels = std::make_shared<MplsTe::FastReroute::BackupTunnels>();
            backup_tunnels->parent = this;
            children["backup-tunnels"] = backup_tunnels;
        }
        return children.at("backup-tunnels");
    }

    if(child_yang_name == "promotion")
    {
        if(promotion != nullptr)
        {
            children["promotion"] = promotion;
        }
        else
        {
            promotion = std::make_shared<MplsTe::FastReroute::Promotion>();
            promotion->parent = this;
            children["promotion"] = promotion;
        }
        return children.at("promotion");
    }

    if(child_yang_name == "protected-interfaces")
    {
        if(protected_interfaces != nullptr)
        {
            children["protected-interfaces"] = protected_interfaces;
        }
        else
        {
            protected_interfaces = std::make_shared<MplsTe::FastReroute::ProtectedInterfaces>();
            protected_interfaces->parent = this;
            children["protected-interfaces"] = protected_interfaces;
        }
        return children.at("protected-interfaces");
    }

    if(child_yang_name == "protections")
    {
        if(protections != nullptr)
        {
            children["protections"] = protections;
        }
        else
        {
            protections = std::make_shared<MplsTe::FastReroute::Protections>();
            protections->parent = this;
            children["protections"] = protections;
        }
        return children.at("protections");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::get_children()
{
    if(children.find("backup-tunnels") == children.end())
    {
        if(backup_tunnels != nullptr)
        {
            children["backup-tunnels"] = backup_tunnels;
        }
    }

    if(children.find("promotion") == children.end())
    {
        if(promotion != nullptr)
        {
            children["promotion"] = promotion;
        }
    }

    if(children.find("protected-interfaces") == children.end())
    {
        if(protected_interfaces != nullptr)
        {
            children["protected-interfaces"] = protected_interfaces;
        }
    }

    if(children.find("protections") == children.end())
    {
        if(protections != nullptr)
        {
            children["protections"] = protections;
        }
    }

    return children;
}

void MplsTe::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::FastReroute::BackupTunnels::BackupTunnels()
{
    yang_name = "backup-tunnels"; yang_parent_name = "fast-reroute";
}

MplsTe::FastReroute::BackupTunnels::~BackupTunnels()
{
}

bool MplsTe::FastReroute::BackupTunnels::has_data() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FastReroute::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::FastReroute::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::BackupTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnel")
    {
        for(auto const & c : backup_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::FastReroute::BackupTunnels::BackupTunnel>();
        c->parent = this;
        backup_tunnel.push_back(std::move(c));
        children[segment_path] = backup_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::BackupTunnels::get_children()
{
    for (auto const & c : backup_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::FastReroute::BackupTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::FastReroute::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    interface_name{YType::str, "interface-name"},
    tunnel_name{YType::str, "tunnel-name"},
    backup_status{YType::enumeration, "backup-status"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    bandwidth{YType::uint32, "bandwidth"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    connection_status{YType::enumeration, "connection-status"},
    destination_address{YType::str, "destination-address"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"},
    general_status{YType::enumeration, "general-status"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    ls_ps{YType::uint32, "ls-ps"},
    output_interface_name{YType::str, "output-interface-name"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    s2_ls{YType::uint32, "s2-ls"},
    s2l_families{YType::uint32, "s2l-families"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    source_address{YType::str, "source-address"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"}
{
    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels";
}

MplsTe::FastReroute::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTe::FastReroute::BackupTunnels::BackupTunnel::has_data() const
{
    return interface_name.is_set
	|| tunnel_name.is_set
	|| backup_status.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| bandwidth.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth_pool_type.is_set
	|| connection_status.is_set
	|| destination_address.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set
	|| general_status.is_set
	|| has_attribute_set.is_set
	|| in_use_bandwidth.is_set
	|| is_attribute_set_in_db.is_set
	|| ls_ps.is_set
	|| output_interface_name.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| recreate_remaining_time.is_set
	|| recreate_timer_is_running.is_set
	|| s2_ls.is_set
	|| s2l_families.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| source_address.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_instance.is_set;
}

bool MplsTe::FastReroute::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(backup_status.operation)
	|| is_set(backup_tunnel_id.operation)
	|| is_set(backup_tunnel_name_xr.operation)
	|| is_set(backup_type.operation)
	|| is_set(backup_usage.operation)
	|| is_set(bandwidth.operation)
	|| is_set(bandwidth_limit_type.operation)
	|| is_set(bandwidth_pool_type.operation)
	|| is_set(connection_status.operation)
	|| is_set(destination_address.operation)
	|| is_set(frr_active_ls_ps.operation)
	|| is_set(frr_active_soft_preempted_ls_ps.operation)
	|| is_set(general_status.operation)
	|| is_set(has_attribute_set.operation)
	|| is_set(in_use_bandwidth.operation)
	|| is_set(is_attribute_set_in_db.operation)
	|| is_set(ls_ps.operation)
	|| is_set(output_interface_name.operation)
	|| is_set(prot_interface_autobackup_config.operation)
	|| is_set(prot_interface_srlg_config.operation)
	|| is_set(recreate_remaining_time.operation)
	|| is_set(recreate_timer_is_running.operation)
	|| is_set(s2_ls.operation)
	|| is_set(s2l_families.operation)
	|| is_set(soft_preempted_in_use_bandwidth.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_instance.operation);
}

std::string MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel" <<"[interface-name='" <<interface_name <<"']" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/backup-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.operation)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.operation)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.operation)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.operation)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.operation)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.operation)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.operation)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.operation)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.operation)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.operation)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.operation)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.operation)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.operation)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.operation)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.operation)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.operation)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.operation)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.operation)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.operation)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.operation)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.operation)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.operation)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.operation)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::BackupTunnels::BackupTunnel::get_children()
{
    return children;
}

void MplsTe::FastReroute::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
    }
    if(value_path == "general-status")
    {
        general_status = value;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
    }
}

MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterfaces()
{
    yang_name = "protected-interfaces"; yang_parent_name = "fast-reroute";
}

MplsTe::FastReroute::ProtectedInterfaces::~ProtectedInterfaces()
{
}

bool MplsTe::FastReroute::ProtectedInterfaces::has_data() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FastReroute::ProtectedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::FastReroute::ProtectedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interfaces";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::ProtectedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::ProtectedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(std::move(c));
        children[segment_path] = protected_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::ProtectedInterfaces::get_children()
{
    for (auto const & c : protected_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::FastReroute::ProtectedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::ProtectedInterface()
    :
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    interface_name{YType::str, "interface-name"},
    backup_status{YType::enumeration, "backup-status"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    bandwidth{YType::uint32, "bandwidth"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    connection_status{YType::enumeration, "connection-status"},
    destination_address{YType::str, "destination-address"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"},
    general_status{YType::enumeration, "general-status"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    ls_ps{YType::uint32, "ls-ps"},
    output_interface_name{YType::str, "output-interface-name"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    s2_ls{YType::uint32, "s2-ls"},
    s2l_families{YType::uint32, "s2l-families"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    source_address{YType::str, "source-address"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"}
{
    yang_name = "protected-interface"; yang_parent_name = "protected-interfaces";
}

MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::has_data() const
{
    return backup_tunnel_name.is_set
	|| interface_name.is_set
	|| backup_status.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| bandwidth.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth_pool_type.is_set
	|| connection_status.is_set
	|| destination_address.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set
	|| general_status.is_set
	|| has_attribute_set.is_set
	|| in_use_bandwidth.is_set
	|| is_attribute_set_in_db.is_set
	|| ls_ps.is_set
	|| output_interface_name.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| recreate_remaining_time.is_set
	|| recreate_timer_is_running.is_set
	|| s2_ls.is_set
	|| s2l_families.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| source_address.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_instance.is_set;
}

bool MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_tunnel_name.operation)
	|| is_set(interface_name.operation)
	|| is_set(backup_status.operation)
	|| is_set(backup_tunnel_id.operation)
	|| is_set(backup_tunnel_name_xr.operation)
	|| is_set(backup_type.operation)
	|| is_set(backup_usage.operation)
	|| is_set(bandwidth.operation)
	|| is_set(bandwidth_limit_type.operation)
	|| is_set(bandwidth_pool_type.operation)
	|| is_set(connection_status.operation)
	|| is_set(destination_address.operation)
	|| is_set(frr_active_ls_ps.operation)
	|| is_set(frr_active_soft_preempted_ls_ps.operation)
	|| is_set(general_status.operation)
	|| is_set(has_attribute_set.operation)
	|| is_set(in_use_bandwidth.operation)
	|| is_set(is_attribute_set_in_db.operation)
	|| is_set(ls_ps.operation)
	|| is_set(output_interface_name.operation)
	|| is_set(prot_interface_autobackup_config.operation)
	|| is_set(prot_interface_srlg_config.operation)
	|| is_set(recreate_remaining_time.operation)
	|| is_set(recreate_timer_is_running.operation)
	|| is_set(s2_ls.operation)
	|| is_set(s2l_families.operation)
	|| is_set(soft_preempted_in_use_bandwidth.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_instance.operation);
}

std::string MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface" <<"[backup-tunnel-name='" <<backup_tunnel_name <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/protected-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.operation)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.operation)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.operation)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.operation)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.operation)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.operation)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.operation)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.operation)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.operation)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.operation)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.operation)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.operation)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.operation)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.operation)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.operation)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.operation)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.operation)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.operation)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.operation)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.operation)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.operation)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.operation)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.operation)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.operation)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::get_children()
{
    return children;
}

void MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
    }
    if(value_path == "general-status")
    {
        general_status = value;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
    }
}

MplsTe::FastReroute::Protections::Protections()
{
    yang_name = "protections"; yang_parent_name = "fast-reroute";
}

MplsTe::FastReroute::Protections::~Protections()
{
}

bool MplsTe::FastReroute::Protections::has_data() const
{
    for (std::size_t index=0; index<protection.size(); index++)
    {
        if(protection[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FastReroute::Protections::has_operation() const
{
    for (std::size_t index=0; index<protection.size(); index++)
    {
        if(protection[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::FastReroute::Protections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protections";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::Protections::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::Protections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protection")
    {
        for(auto const & c : protection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::FastReroute::Protections::Protection>();
        c->parent = this;
        protection.push_back(std::move(c));
        children[segment_path] = protection.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::Protections::get_children()
{
    for (auto const & c : protection)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::FastReroute::Protections::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::FastReroute::Protections::Protection::Protection()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    session_type{YType::int32, "session-type"},
    source_address{YType::str, "source-address"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    tunnel_id{YType::int32, "tunnel-id"},
    admin_status{YType::enumeration, "admin-status"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    backup_next_hop_address{YType::str, "backup-next-hop-address"},
    backup_status{YType::enumeration, "backup-status"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    destination_address_xr{YType::str, "destination-address-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    frr_output_interface{YType::str, "frr-output-interface"},
    frr_output_label{YType::uint32, "frr-output-label"},
    frr_output_tunnel_interface{YType::str, "frr-output-tunnel-interface"},
    inbound_frr_state{YType::enumeration, "inbound-frr-state"},
    input_label{YType::uint32, "input-label"},
    is_frr_requested{YType::boolean, "is-frr-requested"},
    is_p2mp_tunnel{YType::boolean, "is-p2mp-tunnel"},
    is_signalled{YType::boolean, "is-signalled"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    next_hop_address{YType::str, "next-hop-address"},
    operation_status{YType::enumeration, "operation-status"},
    original_input_interface{YType::str, "original-input-interface"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    output_interface_lsp{YType::str, "output-interface-lsp"},
    output_label{YType::uint32, "output-label"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"},
    previous_hop_address{YType::str, "previous-hop-address"},
    role{YType::enumeration, "role"},
    sharing_type{YType::enumeration, "sharing-type"},
    source_address_xr{YType::str, "source-address-xr"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "protection"; yang_parent_name = "protections";
}

MplsTe::FastReroute::Protections::Protection::~Protection()
{
}

bool MplsTe::FastReroute::Protections::Protection::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| tunnel_id.is_set
	|| admin_status.is_set
	|| backup_bandwidth.is_set
	|| backup_next_hop_address.is_set
	|| backup_status.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth_pool_type.is_set
	|| destination_address_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| frr_output_interface.is_set
	|| frr_output_label.is_set
	|| frr_output_tunnel_interface.is_set
	|| inbound_frr_state.is_set
	|| input_label.is_set
	|| is_frr_requested.is_set
	|| is_p2mp_tunnel.is_set
	|| is_signalled.is_set
	|| lsp_bandwidth_type.is_set
	|| next_hop_address.is_set
	|| operation_status.is_set
	|| original_input_interface.is_set
	|| outbound_frr_state.is_set
	|| output_interface_lsp.is_set
	|| output_label.is_set
	|| p2mp_id_xr.is_set
	|| previous_hop_address.is_set
	|| role.is_set
	|| sharing_type.is_set
	|| source_address_xr.is_set
	|| sub_group_id_xr.is_set
	|| sub_group_original_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_instance.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::FastReroute::Protections::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(admin_status.operation)
	|| is_set(backup_bandwidth.operation)
	|| is_set(backup_next_hop_address.operation)
	|| is_set(backup_status.operation)
	|| is_set(bandwidth_limit_type.operation)
	|| is_set(bandwidth_pool_type.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(extended_tunnel_id_xr.operation)
	|| is_set(frr_output_interface.operation)
	|| is_set(frr_output_label.operation)
	|| is_set(frr_output_tunnel_interface.operation)
	|| is_set(inbound_frr_state.operation)
	|| is_set(input_label.operation)
	|| is_set(is_frr_requested.operation)
	|| is_set(is_p2mp_tunnel.operation)
	|| is_set(is_signalled.operation)
	|| is_set(lsp_bandwidth_type.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(operation_status.operation)
	|| is_set(original_input_interface.operation)
	|| is_set(outbound_frr_state.operation)
	|| is_set(output_interface_lsp.operation)
	|| is_set(output_label.operation)
	|| is_set(p2mp_id_xr.operation)
	|| is_set(previous_hop_address.operation)
	|| is_set(role.operation)
	|| is_set(sharing_type.operation)
	|| is_set(source_address_xr.operation)
	|| is_set(sub_group_id_xr.operation)
	|| is_set(sub_group_original_id.operation)
	|| is_set(tunnel_id_xr.operation)
	|| is_set(tunnel_instance.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTe::FastReroute::Protections::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[session-type='" <<session_type <<"']" <<"[source-address='" <<source_address <<"']" <<"[sub-group-id='" <<sub_group_id <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::Protections::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/protections/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.operation)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (backup_next_hop_address.is_set || is_set(backup_next_hop_address.operation)) leaf_name_data.push_back(backup_next_hop_address.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.operation)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.operation)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.operation)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.operation)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (frr_output_interface.is_set || is_set(frr_output_interface.operation)) leaf_name_data.push_back(frr_output_interface.get_name_leafdata());
    if (frr_output_label.is_set || is_set(frr_output_label.operation)) leaf_name_data.push_back(frr_output_label.get_name_leafdata());
    if (frr_output_tunnel_interface.is_set || is_set(frr_output_tunnel_interface.operation)) leaf_name_data.push_back(frr_output_tunnel_interface.get_name_leafdata());
    if (inbound_frr_state.is_set || is_set(inbound_frr_state.operation)) leaf_name_data.push_back(inbound_frr_state.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.operation)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_frr_requested.is_set || is_set(is_frr_requested.operation)) leaf_name_data.push_back(is_frr_requested.get_name_leafdata());
    if (is_p2mp_tunnel.is_set || is_set(is_p2mp_tunnel.operation)) leaf_name_data.push_back(is_p2mp_tunnel.get_name_leafdata());
    if (is_signalled.is_set || is_set(is_signalled.operation)) leaf_name_data.push_back(is_signalled.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.operation)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.operation)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.operation)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.operation)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (output_interface_lsp.is_set || is_set(output_interface_lsp.operation)) leaf_name_data.push_back(output_interface_lsp.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.operation)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.operation)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (sharing_type.is_set || is_set(sharing_type.operation)) leaf_name_data.push_back(sharing_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.operation)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.operation)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.operation)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::Protections::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::Protections::Protection::get_children()
{
    return children;
}

void MplsTe::FastReroute::Protections::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address = value;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface = value;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label = value;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface = value;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state = value;
    }
    if(value_path == "input-label")
    {
        input_label = value;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested = value;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel = value;
    }
    if(value_path == "is-signalled")
    {
        is_signalled = value;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "sharing-type")
    {
        sharing_type = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::FastReroute::Promotion::Promotion()
    :
    is_configured{YType::boolean, "is-configured"},
    promotion_period{YType::uint32, "promotion-period"},
    remaining_time{YType::uint32, "remaining-time"}
{
    yang_name = "promotion"; yang_parent_name = "fast-reroute";
}

MplsTe::FastReroute::Promotion::~Promotion()
{
}

bool MplsTe::FastReroute::Promotion::has_data() const
{
    return is_configured.is_set
	|| promotion_period.is_set
	|| remaining_time.is_set;
}

bool MplsTe::FastReroute::Promotion::has_operation() const
{
    return is_set(operation)
	|| is_set(is_configured.operation)
	|| is_set(promotion_period.operation)
	|| is_set(remaining_time.operation);
}

std::string MplsTe::FastReroute::Promotion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "promotion";

    return path_buffer.str();

}

EntityPath MplsTe::FastReroute::Promotion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (promotion_period.is_set || is_set(promotion_period.operation)) leaf_name_data.push_back(promotion_period.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.operation)) leaf_name_data.push_back(remaining_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FastReroute::Promotion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FastReroute::Promotion::get_children()
{
    return children;
}

void MplsTe::FastReroute::Promotion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "promotion-period")
    {
        promotion_period = value;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
    }
}

MplsTe::AttributeSets::AttributeSets()
{
    yang_name = "attribute-sets"; yang_parent_name = "mpls-te";
}

MplsTe::AttributeSets::~AttributeSets()
{
}

bool MplsTe::AttributeSets::has_data() const
{
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AttributeSets::has_operation() const
{
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AttributeSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-sets";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set")
    {
        for(auto const & c : attribute_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet>();
        c->parent = this;
        attribute_set.push_back(std::move(c));
        children[segment_path] = attribute_set.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::get_children()
{
    for (auto const & c : attribute_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AttributeSets::AttributeSet::AttributeSet()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    attribute_set_type{YType::enumeration, "attribute-set-type"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;
    children["attribute-set-union"] = attribute_set_union;

    yang_name = "attribute-set"; yang_parent_name = "attribute-sets";
}

MplsTe::AttributeSets::AttributeSet::~AttributeSet()
{
}

bool MplsTe::AttributeSets::AttributeSet::has_data() const
{
    return attribute_set_name.is_set
	|| attribute_set_type.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(attribute_set_type.operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_attribute_set_name_crc32.operation)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set" <<"[attribute-set-name='" <<attribute_set_name <<"']" <<"[attribute-set-type='" <<attribute_set_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/attribute-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (attribute_set_type.is_set || is_set(attribute_set_type.operation)) leaf_name_data.push_back(attribute_set_type.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.operation)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
        else
        {
            attribute_set_union = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion>();
            attribute_set_union->parent = this;
            children["attribute-set-union"] = attribute_set_union;
        }
        return children.at("attribute-set-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::get_children()
{
    if(children.find("attribute-set-union") == children.end())
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "attribute-set-type")
    {
        attribute_set_type = value;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;
    children["attribute-set-aps-pp"] = attribute_set_aps_pp;

    attribute_set_autobackup->parent = this;
    children["attribute-set-autobackup"] = attribute_set_autobackup;

    attribute_set_automesh->parent = this;
    children["attribute-set-automesh"] = attribute_set_automesh;

    attribute_set_p2mpte->parent = this;
    children["attribute-set-p2mpte"] = attribute_set_p2mpte;

    attribute_set_p2p_te->parent = this;
    children["attribute-set-p2p-te"] = attribute_set_p2p_te;

    attribute_set_path_option->parent = this;
    children["attribute-set-path-option"] = attribute_set_path_option;

    attribute_set_xro->parent = this;
    children["attribute-set-xro"] = attribute_set_xro;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_type.operation)
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetUnion' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.operation)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        else
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
            attribute_set_aps_pp->parent = this;
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        return children.at("attribute-set-aps-pp");
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        else
        {
            attribute_set_autobackup = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
            attribute_set_autobackup->parent = this;
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        return children.at("attribute-set-autobackup");
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        else
        {
            attribute_set_automesh = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
            attribute_set_automesh->parent = this;
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        return children.at("attribute-set-automesh");
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        else
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
            attribute_set_p2mpte->parent = this;
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        return children.at("attribute-set-p2mpte");
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        else
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
            attribute_set_p2p_te->parent = this;
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        return children.at("attribute-set-p2p-te");
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        else
        {
            attribute_set_path_option = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
            attribute_set_path_option->parent = this;
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        return children.at("attribute-set-path-option");
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
        else
        {
            attribute_set_xro = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>();
            attribute_set_xro->parent = this;
            children["attribute-set-xro"] = attribute_set_xro;
        }
        return children.at("attribute-set-xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::get_children()
{
    if(children.find("attribute-set-aps-pp") == children.end())
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
    }

    if(children.find("attribute-set-autobackup") == children.end())
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
    }

    if(children.find("attribute-set-automesh") == children.end())
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
    }

    if(children.find("attribute-set-p2mpte") == children.end())
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
    }

    if(children.find("attribute-set-p2p-te") == children.end())
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
    }

    if(children.find("attribute-set-path-option") == children.end())
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
    }

    if(children.find("attribute-set-xro") == children.end())
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    exclude_list_name{YType::str, "exclude-list-name"},
    generation{YType::uint32, "generation"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    bfd_reverse_path->parent = this;
    children["bfd-reverse-path"] = bfd_reverse_path;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_type.is_set
	|| configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| exclude_list_name.is_set
	|| generation.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(cost_limit.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(exclude_list_name.operation)
	|| is_set(generation.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_bfd_reverse_pat_configured.operation)
	|| is_set(is_cost_limit_configured.operation)
	|| is_set(is_exclude_list_name_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetPathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.operation)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.operation)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.operation)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.operation)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        else
        {
            bfd_reverse_path = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
            bfd_reverse_path->parent = this;
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        return children.at("bfd-reverse-path");
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(std::move(c));
        children[segment_path] = version_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("bfd-reverse-path") == children.end())
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
    }

    for (auto const & c : version_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_type.operation)
	|| is_set(generation.operation)
	|| is_set(is_default.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.operation)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    signalled_name->parent = this;
    children["signalled-name"] = signalled_name;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| is_signalled_name_configured.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(is_signalled_name_configured.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutobackup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.operation)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(std::move(c));
        children[segment_path] = protected_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
        else
        {
            signalled_name = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
            signalled_name->parent = this;
            children["signalled-name"] = signalled_name;
        }
        return children.at("signalled-name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    for (auto const & c : protected_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("signalled-name") == children.end())
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(is_mp_addresses.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledName' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.operation)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.operation)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.operation)) leaf_name_data.push_back(source_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
    }
    if(value_path == "source-type")
    {
        source_type = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_interface.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterface' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.operation)) leaf_name_data.push_back(protected_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    bandwidth{YType::uint32, "bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    forward_class{YType::uint32, "forward-class"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    load_share{YType::uint32, "load-share"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| bandwidth.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| forward_class.is_set
	|| frr_bandwidth_protection.is_set
	|| frr_node_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_interface_bw_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| load_share.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| soft_preemption_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(auto_bandwidth_collect.operation)
	|| is_set(auto_route_announce.operation)
	|| is_set(bandwidth.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(forward_class.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(frr_node_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_interface_bw_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(load_share.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preemption_configured.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutomesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.operation)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.operation)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.operation)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.operation)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.operation)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());

    auto mesh_group_id_name_datas = mesh_group_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mesh_group_id_name_datas.begin(), mesh_group_id_name_datas.end());
    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.append(value);
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;
    children["xro"] = xro;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro")
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
        else
        {
            xro = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
            xro->parent = this;
            children["xro"] = xro;
        }
        return children.at("xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children()
{
    if(children.find("xro") == children.end())
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.operation)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;
    children["fec"] = fec;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.operation)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.operation)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.operation)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.operation)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_priority_configured.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2Mpte' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;
    children["revert-schedule"] = revert_schedule;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_off_time.operation)
	|| is_set(path_prot_profile_type.operation)
	|| is_set(protection_mode.operation)
	|| is_set(protection_type.operation)
	|| is_set(restoration_style.operation)
	|| is_set(snc_mode.operation)
	|| is_set(tcm_id.operation)
	|| is_set(wait_to_restore_time.operation)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetApsPp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.operation)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.operation)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.operation)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.operation)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.operation)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.operation)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.operation)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
        else
        {
            revert_schedule = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
            revert_schedule->parent = this;
            children["revert-schedule"] = revert_schedule;
        }
        return children.at("revert-schedule");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children()
{
    if(children.find("revert-schedule") == children.end())
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.operation)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.operation)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.operation)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.operation)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    prepend_list->parent = this;
    children["prepend-list"] = prepend_list;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_affinity_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_select_configured.is_set
	|| is_path_selection_metric_configured.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| is_prepend_list_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| path_selection_segment_routing_margin.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_path_select_configured.operation)
	|| is_set(is_path_selection_metric_configured.operation)
	|| is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_relative.operation)
	|| is_set(is_path_selection_segment_routing_segment_limit_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(is_prepend_list_configured.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(path_selection_invalidation_action.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(path_selection_segment_routing_adjacency_protection.operation)
	|| is_set(path_selection_segment_routing_margin.operation)
	|| is_set(path_selection_segment_routing_segment_limit.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2PTe' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.operation)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.operation)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.operation)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.operation)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.operation)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.operation)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.operation)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
        else
        {
            prepend_list = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
            prepend_list->parent = this;
            children["prepend-list"] = prepend_list;
        }
        return children.at("prepend-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("prepend-list") == children.end())
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependList' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(std::move(c));
        children[segment_path] = prepend_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children()
{
    for (auto const & c : prepend_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(next_label.operation)
	|| is_set(type.operation);
}

std::string MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

EntityPath MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.operation)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children()
{
    return children;
}

void MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "next-label")
    {
        next_label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::IgpAreaBriefs::IgpAreaBriefs()
{
    yang_name = "igp-area-briefs"; yang_parent_name = "mpls-te";
}

MplsTe::IgpAreaBriefs::~IgpAreaBriefs()
{
}

bool MplsTe::IgpAreaBriefs::has_data() const
{
    for (std::size_t index=0; index<igp_area_brief.size(); index++)
    {
        if(igp_area_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::IgpAreaBriefs::has_operation() const
{
    for (std::size_t index=0; index<igp_area_brief.size(); index++)
    {
        if(igp_area_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::IgpAreaBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-briefs";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreaBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-area-brief")
    {
        for(auto const & c : igp_area_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief>();
        c->parent = this;
        igp_area_brief.push_back(std::move(c));
        children[segment_path] = igp_area_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreaBriefs::get_children()
{
    for (auto const & c : igp_area_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::IgpAreaBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::IgpAreaBrief()
    :
    process_tag{YType::str, "process-tag"},
    protocol{YType::enumeration, "protocol"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    igp_system_id{YType::str, "igp-system-id"},
    igp_type{YType::enumeration, "igp-type"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    instance_name{YType::str, "instance-name"},
    is_connection_up{YType::boolean, "is-connection-up"},
    secondary_router_id{YType::str, "secondary-router-id"}
{
    yang_name = "igp-area-brief"; yang_parent_name = "igp-area-briefs";
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::~IgpAreaBrief()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return process_tag.is_set
	|| protocol.is_set
	|| configured_te_router_id.is_set
	|| connection_down_count.is_set
	|| connection_up_count.is_set
	|| global_router_id.is_set
	|| globall_router_id_optical.is_set
	|| igp_system_id.is_set
	|| igp_type.is_set
	|| in_use_te_router_id.is_set
	|| instance_name.is_set
	|| is_connection_up.is_set;
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_router_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(process_tag.operation)
	|| is_set(protocol.operation)
	|| is_set(configured_te_router_id.operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(global_router_id.operation)
	|| is_set(globall_router_id_optical.operation)
	|| is_set(igp_system_id.operation)
	|| is_set(igp_type.operation)
	|| is_set(in_use_te_router_id.operation)
	|| is_set(instance_name.operation)
	|| is_set(is_connection_up.operation)
	|| is_set(secondary_router_id.operation);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-brief" <<"[process-tag='" <<process_tag <<"']" <<"[protocol='" <<protocol <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreaBriefs::IgpAreaBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/igp-area-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_tag.is_set || is_set(process_tag.operation)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.operation)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.operation)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.operation)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.operation)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.operation)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.operation)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());

    auto secondary_router_id_name_datas = secondary_router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_router_id_name_datas.begin(), secondary_router_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area>();
        c->parent = this;
        area.push_back(std::move(c));
        children[segment_path] = area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreaBriefs::IgpAreaBrief::get_children()
{
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-tag")
    {
        process_tag = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
    }
    if(value_path == "secondary-router-id")
    {
        secondary_router_id.append(value);
    }
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::Area()
    :
    area_format{YType::enumeration, "area-format"},
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    is_config_ready{YType::boolean, "is-config-ready"}
    	,
    active_data(std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>())
{
    active_data->parent = this;
    children["active-data"] = active_data;

    yang_name = "area"; yang_parent_name = "igp-area-brief";
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::~Area()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_data() const
{
    return area_format.is_set
	|| area_index.is_set
	|| area_number.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_index.operation)
	|| is_set(area_number.operation)
	|| is_set(is_config_ready.operation)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_index.is_set || is_set(area_index.operation)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.operation)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.operation)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-data")
    {
        if(active_data != nullptr)
        {
            children["active-data"] = active_data;
        }
        else
        {
            active_data = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>();
            active_data->parent = this;
            children["active-data"] = active_data;
        }
        return children.at("active-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_children()
{
    if(children.find("active-data") == children.end())
    {
        if(active_data != nullptr)
        {
            children["active-data"] = active_data;
        }
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-index")
    {
        area_index = value;
    }
    if(value_path == "area-number")
    {
        area_number = value;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
    }
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::ActiveData()
    :
    interfaces_count{YType::uint32, "interfaces-count"},
    link_idt_received{YType::boolean, "link-idt-received"},
    p2mp_destination_count{YType::uint32, "p2mp-destination-count"},
    p2p_autoroute_announced_count{YType::uint32, "p2p-autoroute-announced-count"},
    p2p_forwarding_adjacency_count{YType::uint32, "p2p-forwarding-adjacency-count"},
    p2p_heads_count{YType::uint32, "p2p-heads-count"},
    sr_strict{YType::boolean, "sr-strict"},
    topology_idt_received{YType::boolean, "topology-idt-received"},
    tunnel_loose_hops{YType::uint32, "tunnel-loose-hops"}
    	,
    area_statistics(std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;
    children["area-statistics"] = area_statistics;

    yang_name = "active-data"; yang_parent_name = "area";
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::~ActiveData()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_data() const
{
    return interfaces_count.is_set
	|| link_idt_received.is_set
	|| p2mp_destination_count.is_set
	|| p2p_autoroute_announced_count.is_set
	|| p2p_forwarding_adjacency_count.is_set
	|| p2p_heads_count.is_set
	|| sr_strict.is_set
	|| topology_idt_received.is_set
	|| tunnel_loose_hops.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data());
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_operation() const
{
    return is_set(operation)
	|| is_set(interfaces_count.operation)
	|| is_set(link_idt_received.operation)
	|| is_set(p2mp_destination_count.operation)
	|| is_set(p2p_autoroute_announced_count.operation)
	|| is_set(p2p_forwarding_adjacency_count.operation)
	|| is_set(p2p_heads_count.operation)
	|| is_set(sr_strict.operation)
	|| is_set(topology_idt_received.operation)
	|| is_set(tunnel_loose_hops.operation)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveData' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.operation)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.operation)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.operation)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.operation)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.operation)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.operation)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.operation)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.operation)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.operation)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
        else
        {
            area_statistics = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>();
            area_statistics->parent = this;
            children["area-statistics"] = area_statistics;
        }
        return children.at("area-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_children()
{
    if(children.find("area-statistics") == children.end())
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
    }
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::AreaStatistics()
    :
    area_adjacency_announce_messages{YType::uint32, "area-adjacency-announce-messages"},
    area_adjacency_request_messages{YType::uint32, "area-adjacency-request-messages"},
    area_flood_messages{YType::uint32, "area-flood-messages"},
    area_lsa_announce_messages{YType::uint32, "area-lsa-announce-messages"},
    area_lsa_delete_messages{YType::uint32, "area-lsa-delete-messages"},
    area_lsa_fragment_announce_messages{YType::uint32, "area-lsa-fragment-announce-messages"},
    area_lsa_fragment_delete_messages{YType::uint32, "area-lsa-fragment-delete-messages"},
    area_tunnel_announce_messages{YType::uint32, "area-tunnel-announce-messages"}
{
    yang_name = "area-statistics"; yang_parent_name = "active-data";
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_data() const
{
    return area_adjacency_announce_messages.is_set
	|| area_adjacency_request_messages.is_set
	|| area_flood_messages.is_set
	|| area_lsa_announce_messages.is_set
	|| area_lsa_delete_messages.is_set
	|| area_lsa_fragment_announce_messages.is_set
	|| area_lsa_fragment_delete_messages.is_set
	|| area_tunnel_announce_messages.is_set;
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(area_adjacency_announce_messages.operation)
	|| is_set(area_adjacency_request_messages.operation)
	|| is_set(area_flood_messages.operation)
	|| is_set(area_lsa_announce_messages.operation)
	|| is_set(area_lsa_delete_messages.operation)
	|| is_set(area_lsa_fragment_announce_messages.operation)
	|| is_set(area_lsa_fragment_delete_messages.operation)
	|| is_set(area_tunnel_announce_messages.operation);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.operation)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.operation)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.operation)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.operation)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.operation)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.operation)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.operation)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.operation)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_children()
{
    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
    }
}

MplsTe::Tunnels::Tunnels()
    :
    summary(std::make_shared<MplsTe::Tunnels::Summary>())
	,tunnel_auto_bandwidths(std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths>())
	,tunnel_flex_lsps(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps>())
	,tunnel_path_protections(std::make_shared<MplsTe::Tunnels::TunnelPathProtections>())
{
    summary->parent = this;
    children["summary"] = summary;

    tunnel_auto_bandwidths->parent = this;
    children["tunnel-auto-bandwidths"] = tunnel_auto_bandwidths;

    tunnel_flex_lsps->parent = this;
    children["tunnel-flex-lsps"] = tunnel_flex_lsps;

    tunnel_path_protections->parent = this;
    children["tunnel-path-protections"] = tunnel_path_protections;

    yang_name = "tunnels"; yang_parent_name = "mpls-te";
}

MplsTe::Tunnels::~Tunnels()
{
}

bool MplsTe::Tunnels::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (tunnel_auto_bandwidths !=  nullptr && tunnel_auto_bandwidths->has_data())
	|| (tunnel_flex_lsps !=  nullptr && tunnel_flex_lsps->has_data())
	|| (tunnel_path_protections !=  nullptr && tunnel_path_protections->has_data());
}

bool MplsTe::Tunnels::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation())
	|| (tunnel_auto_bandwidths !=  nullptr && tunnel_auto_bandwidths->has_operation())
	|| (tunnel_flex_lsps !=  nullptr && tunnel_flex_lsps->has_operation())
	|| (tunnel_path_protections !=  nullptr && tunnel_path_protections->has_operation());
}

std::string MplsTe::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTe::Tunnels::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "tunnel-auto-bandwidths")
    {
        if(tunnel_auto_bandwidths != nullptr)
        {
            children["tunnel-auto-bandwidths"] = tunnel_auto_bandwidths;
        }
        else
        {
            tunnel_auto_bandwidths = std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths>();
            tunnel_auto_bandwidths->parent = this;
            children["tunnel-auto-bandwidths"] = tunnel_auto_bandwidths;
        }
        return children.at("tunnel-auto-bandwidths");
    }

    if(child_yang_name == "tunnel-flex-lsps")
    {
        if(tunnel_flex_lsps != nullptr)
        {
            children["tunnel-flex-lsps"] = tunnel_flex_lsps;
        }
        else
        {
            tunnel_flex_lsps = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps>();
            tunnel_flex_lsps->parent = this;
            children["tunnel-flex-lsps"] = tunnel_flex_lsps;
        }
        return children.at("tunnel-flex-lsps");
    }

    if(child_yang_name == "tunnel-path-protections")
    {
        if(tunnel_path_protections != nullptr)
        {
            children["tunnel-path-protections"] = tunnel_path_protections;
        }
        else
        {
            tunnel_path_protections = std::make_shared<MplsTe::Tunnels::TunnelPathProtections>();
            tunnel_path_protections->parent = this;
            children["tunnel-path-protections"] = tunnel_path_protections;
        }
        return children.at("tunnel-path-protections");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("tunnel-auto-bandwidths") == children.end())
    {
        if(tunnel_auto_bandwidths != nullptr)
        {
            children["tunnel-auto-bandwidths"] = tunnel_auto_bandwidths;
        }
    }

    if(children.find("tunnel-flex-lsps") == children.end())
    {
        if(tunnel_flex_lsps != nullptr)
        {
            children["tunnel-flex-lsps"] = tunnel_flex_lsps;
        }
    }

    if(children.find("tunnel-path-protections") == children.end())
    {
        if(tunnel_path_protections != nullptr)
        {
            children["tunnel-path-protections"] = tunnel_path_protections;
        }
    }

    return children;
}

void MplsTe::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsps()
{
    yang_name = "tunnel-flex-lsps"; yang_parent_name = "tunnels";
}

MplsTe::Tunnels::TunnelFlexLsps::~TunnelFlexLsps()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::has_data() const
{
    for (std::size_t index=0; index<tunnel_flex_lsp.size(); index++)
    {
        if(tunnel_flex_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Tunnels::TunnelFlexLsps::has_operation() const
{
    for (std::size_t index=0; index<tunnel_flex_lsp.size(); index++)
    {
        if(tunnel_flex_lsp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-flex-lsps";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-flex-lsp")
    {
        for(auto const & c : tunnel_flex_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp>();
        c->parent = this;
        tunnel_flex_lsp.push_back(std::move(c));
        children[segment_path] = tunnel_flex_lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::get_children()
{
    for (auto const & c : tunnel_flex_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::TunnelFlexLsp()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    source_address{YType::str, "source-address"},
    tun_id{YType::uint16, "tun-id"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    protect_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>())
	,working_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>())
{
    protect_lsp->parent = this;
    children["protect-lsp"] = protect_lsp;

    working_lsp->parent = this;
    children["working-lsp"] = working_lsp;

    yang_name = "tunnel-flex-lsp"; yang_parent_name = "tunnel-flex-lsps";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::~TunnelFlexLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_data() const
{
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| is_tunnel_up.is_set
	|| source_address.is_set
	|| tun_id.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(is_tunnel_up.operation)
	|| is_set(source_address.operation)
	|| is_set(tun_id.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_name.operation)
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-flex-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.operation)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tun_id.is_set || is_set(tun_id.operation)) leaf_name_data.push_back(tun_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
        else
        {
            protect_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>();
            protect_lsp->parent = this;
            children["protect-lsp"] = protect_lsp;
        }
        return children.at("protect-lsp");
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
        else
        {
            working_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>();
            working_lsp->parent = this;
            children["working-lsp"] = working_lsp;
        }
        return children.at("working-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_children()
{
    if(children.find("protect-lsp") == children.end())
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
    }

    if(children.find("working-lsp") == children.end())
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tun-id")
    {
        tun_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::WorkingLsp()
    :
    is_operational{YType::boolean, "is-operational"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"}
    	,
    association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>())
	,flex_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>())
	,protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection>())
	,reverse_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp>())
{
    association->parent = this;
    children["association"] = association;

    flex_info->parent = this;
    children["flex-info"] = flex_info;

    protection->parent = this;
    children["protection"] = protection;

    reverse_lsp->parent = this;
    children["reverse-lsp"] = reverse_lsp;

    yang_name = "working-lsp"; yang_parent_name = "tunnel-flex-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::~WorkingLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_data() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return is_operational.is_set
	|| lsp_local_label.is_set
	|| lsp_mode.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| (association !=  nullptr && association->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_operational.operation)
	|| is_set(lsp_local_label.operation)
	|| is_set(lsp_mode.operation)
	|| is_set(lsp_output_interface.operation)
	|| is_set(lsp_output_label.operation)
	|| is_set(lsp_state.operation)
	|| is_set(lsp_uptime.operation)
	|| is_set(path_protection_lsp_id.operation)
	|| (association !=  nullptr && association->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_operational.is_set || is_set(is_operational.operation)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.operation)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.operation)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.operation)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.operation)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.operation)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association")
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
        else
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>();
            association->parent = this;
            children["association"] = association;
        }
        return children.at("association");
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
        else
        {
            flex_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>();
            flex_info->parent = this;
            children["flex-info"] = flex_info;
        }
        return children.at("flex-info");
    }

    if(child_yang_name == "lsp-hop")
    {
        for(auto const & c : lsp_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop>();
        c->parent = this;
        lsp_hop.push_back(std::move(c));
        children[segment_path] = lsp_hop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
        else
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection>();
            protection->parent = this;
            children["protection"] = protection;
        }
        return children.at("protection");
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
        else
        {
            reverse_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp>();
            reverse_lsp->parent = this;
            children["reverse-lsp"] = reverse_lsp;
        }
        return children.at("reverse-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_children()
{
    if(children.find("association") == children.end())
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
    }

    if(children.find("flex-info") == children.end())
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
    }

    for (auto const & c : lsp_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
    }

    if(children.find("reverse-lsp") == children.end())
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-operational")
    {
        is_operational = value;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface = value;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime = value;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexInfo()
    :
    bfd_created{YType::boolean, "bfd-created"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_up{YType::boolean, "bfd-up"},
    entry_exists{YType::boolean, "entry-exists"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_time{YType::uint32, "fault-time"},
    in_label{YType::uint32, "in-label"},
    oam_created{YType::boolean, "oam-created"}
    	,
    flex_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;
    children["flex-fec"] = flex_fec;

    yang_name = "flex-info"; yang_parent_name = "working-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::~FlexInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_data() const
{
    return bfd_created.is_set
	|| bfd_egress_label.is_set
	|| bfd_int_label.is_set
	|| bfd_next_hop.is_set
	|| bfd_out_ifh.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_up.is_set
	|| entry_exists.is_set
	|| fault_ais.is_set
	|| fault_ldi.is_set
	|| fault_ldi_lockout.is_set
	|| fault_lkr.is_set
	|| fault_time.is_set
	|| in_label.is_set
	|| oam_created.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_created.operation)
	|| is_set(bfd_egress_label.operation)
	|| is_set(bfd_int_label.operation)
	|| is_set(bfd_next_hop.operation)
	|| is_set(bfd_out_ifh.operation)
	|| is_set(bfd_tun_ifh.operation)
	|| is_set(bfd_up.operation)
	|| is_set(entry_exists.operation)
	|| is_set(fault_ais.operation)
	|| is_set(fault_ldi.operation)
	|| is_set(fault_ldi_lockout.operation)
	|| is_set(fault_lkr.operation)
	|| is_set(fault_time.operation)
	|| is_set(in_label.operation)
	|| is_set(oam_created.operation)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_created.is_set || is_set(bfd_created.operation)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.operation)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.operation)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.operation)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.operation)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.operation)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.operation)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (entry_exists.is_set || is_set(entry_exists.operation)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.operation)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.operation)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.operation)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.operation)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.operation)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.operation)) leaf_name_data.push_back(oam_created.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-fec")
    {
        if(flex_fec != nullptr)
        {
            children["flex-fec"] = flex_fec;
        }
        else
        {
            flex_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec>();
            flex_fec->parent = this;
            children["flex-fec"] = flex_fec;
        }
        return children.at("flex-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_children()
{
    if(children.find("flex-fec") == children.end())
    {
        if(flex_fec != nullptr)
        {
            children["flex-fec"] = flex_fec;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-created")
    {
        bfd_created = value;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
    }
    if(value_path == "entry-exists")
    {
        entry_exists = value;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "flex-fec"; yang_parent_name = "flex-info";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/flex-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_extended_id{YType::uint32, "s2l-extended-id"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{
    yang_name = "association"; yang_parent_name = "working-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_data() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_operation() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(s2l_association_id.operation)
	|| is_set(s2l_association_source.operation)
	|| is_set(s2l_association_tie_role.operation)
	|| is_set(s2l_association_type.operation)
	|| is_set(s2l_extended_id.operation)
	|| is_set(s2l_global_source.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.operation)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.operation)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.operation)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.operation)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.operation)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    auto s2l_extended_id_name_datas = s2l_extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), s2l_extended_id_name_datas.begin(), s2l_extended_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
    }
    if(value_path == "s2l-extended-id")
    {
        s2l_extended_id.append(value);
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{
    yang_name = "protection"; yang_parent_name = "working-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(ded1_plus1.operation)
	|| is_set(ded1_to1.operation)
	|| is_set(enhanced.operation)
	|| is_set(extra_traffic.operation)
	|| is_set(link_unprotected.operation)
	|| is_set(lsp_unprotected.operation)
	|| is_set(one_plus_one_bi.operation)
	|| is_set(one_plus_one_uni.operation)
	|| is_set(one_to_n_protection_et.operation)
	|| is_set(rerouting.operation)
	|| is_set(rerouting_no_et.operation)
	|| is_set(s2l_notification.operation)
	|| is_set(s2l_operational.operation)
	|| is_set(s2l_protecting.operation)
	|| is_set(s2l_secondary.operation)
	|| is_set(shared.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.operation)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.operation)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.operation)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.operation)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.operation)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.operation)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.operation)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.operation)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.operation)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.operation)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.operation)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.operation)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.operation)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.operation)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.operation)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.operation)) leaf_name_data.push_back(shared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
    }
    if(value_path == "shared")
    {
        shared = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLsp()
    :
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"}
    	,
    association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association>())
	,protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec>())
{
    association->parent = this;
    children["association"] = association;

    protection->parent = this;
    children["protection"] = protection;

    reverse_lsp_fec->parent = this;
    children["reverse-lsp-fec"] = reverse_lsp_fec;

    yang_name = "reverse-lsp"; yang_parent_name = "working-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::~ReverseLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_data() const
{
    return reverse_lsp_connected.is_set
	|| reverse_lsp_present.is_set
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(reverse_lsp_connected.operation)
	|| is_set(reverse_lsp_present.operation)
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.operation)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.operation)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association")
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
        else
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association>();
            association->parent = this;
            children["association"] = association;
        }
        return children.at("association");
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
        else
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection>();
            protection->parent = this;
            children["protection"] = protection;
        }
        return children.at("protection");
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        else
        {
            reverse_lsp_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec>();
            reverse_lsp_fec->parent = this;
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        return children.at("reverse-lsp-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_children()
{
    if(children.find("association") == children.end())
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
    }

    if(children.find("reverse-lsp-fec") == children.end())
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::ReverseLspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "reverse-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/reverse-lsp-fec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_extended_id{YType::uint32, "s2l-extended-id"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{
    yang_name = "association"; yang_parent_name = "reverse-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_data() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_operation() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(s2l_association_id.operation)
	|| is_set(s2l_association_source.operation)
	|| is_set(s2l_association_tie_role.operation)
	|| is_set(s2l_association_type.operation)
	|| is_set(s2l_extended_id.operation)
	|| is_set(s2l_global_source.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.operation)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.operation)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.operation)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.operation)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.operation)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    auto s2l_extended_id_name_datas = s2l_extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), s2l_extended_id_name_datas.begin(), s2l_extended_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
    }
    if(value_path == "s2l-extended-id")
    {
        s2l_extended_id.append(value);
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{
    yang_name = "protection"; yang_parent_name = "reverse-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(ded1_plus1.operation)
	|| is_set(ded1_to1.operation)
	|| is_set(enhanced.operation)
	|| is_set(extra_traffic.operation)
	|| is_set(link_unprotected.operation)
	|| is_set(lsp_unprotected.operation)
	|| is_set(one_plus_one_bi.operation)
	|| is_set(one_plus_one_uni.operation)
	|| is_set(one_to_n_protection_et.operation)
	|| is_set(rerouting.operation)
	|| is_set(rerouting_no_et.operation)
	|| is_set(s2l_notification.operation)
	|| is_set(s2l_operational.operation)
	|| is_set(s2l_protecting.operation)
	|| is_set(s2l_secondary.operation)
	|| is_set(shared.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.operation)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.operation)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.operation)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.operation)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.operation)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.operation)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.operation)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.operation)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.operation)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.operation)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.operation)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.operation)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.operation)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.operation)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.operation)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.operation)) leaf_name_data.push_back(shared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
    }
    if(value_path == "shared")
    {
        shared = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    children["ipv4ero-sub-object"] = ipv4ero_sub_object;

    unnumbered_ero_sub_object->parent = this;
    children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;

    yang_name = "lsp-hop"; yang_parent_name = "working-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::~LspHop()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.operation)) leaf_name_data.push_back(ero_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        else
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject>();
            ipv4ero_sub_object->parent = this;
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        return children.at("ipv4ero-sub-object");
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        else
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject>();
            unnumbered_ero_sub_object->parent = this;
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        return children.at("unnumbered-ero-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_children()
{
    if(children.find("ipv4ero-sub-object") == children.end())
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
    }

    if(children.find("unnumbered-ero-sub-object") == children.end())
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/lsp-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.operation)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/lsp-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.operation)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.operation)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ProtectLsp()
    :
    is_operational{YType::boolean, "is-operational"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"}
    	,
    association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association>())
	,flex_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo>())
	,protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection>())
	,reverse_lsp(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp>())
{
    association->parent = this;
    children["association"] = association;

    flex_info->parent = this;
    children["flex-info"] = flex_info;

    protection->parent = this;
    children["protection"] = protection;

    reverse_lsp->parent = this;
    children["reverse-lsp"] = reverse_lsp;

    yang_name = "protect-lsp"; yang_parent_name = "tunnel-flex-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::~ProtectLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_data() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return is_operational.is_set
	|| lsp_local_label.is_set
	|| lsp_mode.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| (association !=  nullptr && association->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_operational.operation)
	|| is_set(lsp_local_label.operation)
	|| is_set(lsp_mode.operation)
	|| is_set(lsp_output_interface.operation)
	|| is_set(lsp_output_label.operation)
	|| is_set(lsp_state.operation)
	|| is_set(lsp_uptime.operation)
	|| is_set(path_protection_lsp_id.operation)
	|| (association !=  nullptr && association->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_operational.is_set || is_set(is_operational.operation)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.operation)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.operation)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.operation)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.operation)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.operation)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association")
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
        else
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association>();
            association->parent = this;
            children["association"] = association;
        }
        return children.at("association");
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
        else
        {
            flex_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo>();
            flex_info->parent = this;
            children["flex-info"] = flex_info;
        }
        return children.at("flex-info");
    }

    if(child_yang_name == "lsp-hop")
    {
        for(auto const & c : lsp_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop>();
        c->parent = this;
        lsp_hop.push_back(std::move(c));
        children[segment_path] = lsp_hop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
        else
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection>();
            protection->parent = this;
            children["protection"] = protection;
        }
        return children.at("protection");
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
        else
        {
            reverse_lsp = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp>();
            reverse_lsp->parent = this;
            children["reverse-lsp"] = reverse_lsp;
        }
        return children.at("reverse-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_children()
{
    if(children.find("association") == children.end())
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
    }

    if(children.find("flex-info") == children.end())
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
    }

    for (auto const & c : lsp_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
    }

    if(children.find("reverse-lsp") == children.end())
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-operational")
    {
        is_operational = value;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface = value;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime = value;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexInfo()
    :
    bfd_created{YType::boolean, "bfd-created"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_up{YType::boolean, "bfd-up"},
    entry_exists{YType::boolean, "entry-exists"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_time{YType::uint32, "fault-time"},
    in_label{YType::uint32, "in-label"},
    oam_created{YType::boolean, "oam-created"}
    	,
    flex_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;
    children["flex-fec"] = flex_fec;

    yang_name = "flex-info"; yang_parent_name = "protect-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::~FlexInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_data() const
{
    return bfd_created.is_set
	|| bfd_egress_label.is_set
	|| bfd_int_label.is_set
	|| bfd_next_hop.is_set
	|| bfd_out_ifh.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_up.is_set
	|| entry_exists.is_set
	|| fault_ais.is_set
	|| fault_ldi.is_set
	|| fault_ldi_lockout.is_set
	|| fault_lkr.is_set
	|| fault_time.is_set
	|| in_label.is_set
	|| oam_created.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_created.operation)
	|| is_set(bfd_egress_label.operation)
	|| is_set(bfd_int_label.operation)
	|| is_set(bfd_next_hop.operation)
	|| is_set(bfd_out_ifh.operation)
	|| is_set(bfd_tun_ifh.operation)
	|| is_set(bfd_up.operation)
	|| is_set(entry_exists.operation)
	|| is_set(fault_ais.operation)
	|| is_set(fault_ldi.operation)
	|| is_set(fault_ldi_lockout.operation)
	|| is_set(fault_lkr.operation)
	|| is_set(fault_time.operation)
	|| is_set(in_label.operation)
	|| is_set(oam_created.operation)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_created.is_set || is_set(bfd_created.operation)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.operation)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.operation)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.operation)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.operation)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.operation)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.operation)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (entry_exists.is_set || is_set(entry_exists.operation)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.operation)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.operation)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.operation)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.operation)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.operation)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.operation)) leaf_name_data.push_back(oam_created.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-fec")
    {
        if(flex_fec != nullptr)
        {
            children["flex-fec"] = flex_fec;
        }
        else
        {
            flex_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec>();
            flex_fec->parent = this;
            children["flex-fec"] = flex_fec;
        }
        return children.at("flex-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_children()
{
    if(children.find("flex-fec") == children.end())
    {
        if(flex_fec != nullptr)
        {
            children["flex-fec"] = flex_fec;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-created")
    {
        bfd_created = value;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
    }
    if(value_path == "entry-exists")
    {
        entry_exists = value;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "flex-fec"; yang_parent_name = "flex-info";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/flex-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_extended_id{YType::uint32, "s2l-extended-id"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{
    yang_name = "association"; yang_parent_name = "protect-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_data() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_operation() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(s2l_association_id.operation)
	|| is_set(s2l_association_source.operation)
	|| is_set(s2l_association_tie_role.operation)
	|| is_set(s2l_association_type.operation)
	|| is_set(s2l_extended_id.operation)
	|| is_set(s2l_global_source.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.operation)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.operation)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.operation)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.operation)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.operation)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    auto s2l_extended_id_name_datas = s2l_extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), s2l_extended_id_name_datas.begin(), s2l_extended_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
    }
    if(value_path == "s2l-extended-id")
    {
        s2l_extended_id.append(value);
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{
    yang_name = "protection"; yang_parent_name = "protect-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(ded1_plus1.operation)
	|| is_set(ded1_to1.operation)
	|| is_set(enhanced.operation)
	|| is_set(extra_traffic.operation)
	|| is_set(link_unprotected.operation)
	|| is_set(lsp_unprotected.operation)
	|| is_set(one_plus_one_bi.operation)
	|| is_set(one_plus_one_uni.operation)
	|| is_set(one_to_n_protection_et.operation)
	|| is_set(rerouting.operation)
	|| is_set(rerouting_no_et.operation)
	|| is_set(s2l_notification.operation)
	|| is_set(s2l_operational.operation)
	|| is_set(s2l_protecting.operation)
	|| is_set(s2l_secondary.operation)
	|| is_set(shared.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.operation)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.operation)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.operation)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.operation)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.operation)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.operation)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.operation)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.operation)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.operation)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.operation)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.operation)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.operation)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.operation)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.operation)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.operation)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.operation)) leaf_name_data.push_back(shared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
    }
    if(value_path == "shared")
    {
        shared = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLsp()
    :
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"}
    	,
    association(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association>())
	,protection(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec>())
{
    association->parent = this;
    children["association"] = association;

    protection->parent = this;
    children["protection"] = protection;

    reverse_lsp_fec->parent = this;
    children["reverse-lsp-fec"] = reverse_lsp_fec;

    yang_name = "reverse-lsp"; yang_parent_name = "protect-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::~ReverseLsp()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_data() const
{
    return reverse_lsp_connected.is_set
	|| reverse_lsp_present.is_set
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(reverse_lsp_connected.operation)
	|| is_set(reverse_lsp_present.operation)
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.operation)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.operation)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association")
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
        else
        {
            association = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association>();
            association->parent = this;
            children["association"] = association;
        }
        return children.at("association");
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
        else
        {
            protection = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection>();
            protection->parent = this;
            children["protection"] = protection;
        }
        return children.at("protection");
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        else
        {
            reverse_lsp_fec = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec>();
            reverse_lsp_fec->parent = this;
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        return children.at("reverse-lsp-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_children()
{
    if(children.find("association") == children.end())
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
    }

    if(children.find("reverse-lsp-fec") == children.end())
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::ReverseLspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "reverse-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/reverse-lsp-fec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_extended_id{YType::uint32, "s2l-extended-id"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{
    yang_name = "association"; yang_parent_name = "reverse-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::~Association()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_data() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_operation() const
{
    for (auto const & leaf : s2l_extended_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(s2l_association_id.operation)
	|| is_set(s2l_association_source.operation)
	|| is_set(s2l_association_tie_role.operation)
	|| is_set(s2l_association_type.operation)
	|| is_set(s2l_extended_id.operation)
	|| is_set(s2l_global_source.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.operation)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.operation)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.operation)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.operation)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.operation)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    auto s2l_extended_id_name_datas = s2l_extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), s2l_extended_id_name_datas.begin(), s2l_extended_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
    }
    if(value_path == "s2l-extended-id")
    {
        s2l_extended_id.append(value);
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{
    yang_name = "protection"; yang_parent_name = "reverse-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::~Protection()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(ded1_plus1.operation)
	|| is_set(ded1_to1.operation)
	|| is_set(enhanced.operation)
	|| is_set(extra_traffic.operation)
	|| is_set(link_unprotected.operation)
	|| is_set(lsp_unprotected.operation)
	|| is_set(one_plus_one_bi.operation)
	|| is_set(one_plus_one_uni.operation)
	|| is_set(one_to_n_protection_et.operation)
	|| is_set(rerouting.operation)
	|| is_set(rerouting_no_et.operation)
	|| is_set(s2l_notification.operation)
	|| is_set(s2l_operational.operation)
	|| is_set(s2l_protecting.operation)
	|| is_set(s2l_secondary.operation)
	|| is_set(shared.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.operation)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.operation)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.operation)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.operation)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.operation)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.operation)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.operation)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.operation)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.operation)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.operation)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.operation)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.operation)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.operation)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.operation)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.operation)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.operation)) leaf_name_data.push_back(shared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
    }
    if(value_path == "shared")
    {
        shared = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    children["ipv4ero-sub-object"] = ipv4ero_sub_object;

    unnumbered_ero_sub_object->parent = this;
    children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;

    yang_name = "lsp-hop"; yang_parent_name = "protect-lsp";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::~LspHop()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.operation)) leaf_name_data.push_back(ero_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        else
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject>();
            ipv4ero_sub_object->parent = this;
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        return children.at("ipv4ero-sub-object");
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        else
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject>();
            unnumbered_ero_sub_object->parent = this;
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        return children.at("unnumbered-ero-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_children()
{
    if(children.find("ipv4ero-sub-object") == children.end())
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
    }

    if(children.find("unnumbered-ero-sub-object") == children.end())
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/lsp-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.operation)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop";
}

MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/lsp-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.operation)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.operation)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidths()
{
    yang_name = "tunnel-auto-bandwidths"; yang_parent_name = "tunnels";
}

MplsTe::Tunnels::TunnelAutoBandwidths::~TunnelAutoBandwidths()
{
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::has_data() const
{
    for (std::size_t index=0; index<tunnel_auto_bandwidth.size(); index++)
    {
        if(tunnel_auto_bandwidth[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::has_operation() const
{
    for (std::size_t index=0; index<tunnel_auto_bandwidth.size(); index++)
    {
        if(tunnel_auto_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-auto-bandwidths";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelAutoBandwidths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelAutoBandwidths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-auto-bandwidth")
    {
        for(auto const & c : tunnel_auto_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth>();
        c->parent = this;
        tunnel_auto_bandwidth.push_back(std::move(c));
        children[segment_path] = tunnel_auto_bandwidth.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelAutoBandwidths::get_children()
{
    for (auto const & c : tunnel_auto_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelAutoBandwidths::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::TunnelAutoBandwidth()
    :
    tunnel_name{YType::str, "tunnel-name"},
    bandwidth_applications{YType::uint32, "bandwidth-applications"},
    highest_bandwidth{YType::uint32, "highest-bandwidth"},
    last_bandwidth_applied{YType::uint32, "last-bandwidth-applied"},
    last_sample_bandwidth{YType::uint32, "last-sample-bandwidth"},
    samples_collected{YType::uint32, "samples-collected"},
    signaled_name{YType::str, "signaled-name"},
    signalled_bandwidth{YType::uint32, "signalled-bandwidth"},
    time_left_application{YType::uint32, "time-left-application"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"},
    tunnel_requested_bandwidth{YType::uint32, "tunnel-requested-bandwidth"}
    	,
    auto_bandwidth_status(std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus>())
{
    auto_bandwidth_status->parent = this;
    children["auto-bandwidth-status"] = auto_bandwidth_status;

    yang_name = "tunnel-auto-bandwidth"; yang_parent_name = "tunnel-auto-bandwidths";
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::~TunnelAutoBandwidth()
{
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_data() const
{
    return tunnel_name.is_set
	|| bandwidth_applications.is_set
	|| highest_bandwidth.is_set
	|| last_bandwidth_applied.is_set
	|| last_sample_bandwidth.is_set
	|| samples_collected.is_set
	|| signaled_name.is_set
	|| signalled_bandwidth.is_set
	|| time_left_application.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_name_xr.is_set
	|| tunnel_requested_bandwidth.is_set
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_data());
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(bandwidth_applications.operation)
	|| is_set(highest_bandwidth.operation)
	|| is_set(last_bandwidth_applied.operation)
	|| is_set(last_sample_bandwidth.operation)
	|| is_set(samples_collected.operation)
	|| is_set(signaled_name.operation)
	|| is_set(signalled_bandwidth.operation)
	|| is_set(time_left_application.operation)
	|| is_set(tunnel_lsp_id.operation)
	|| is_set(tunnel_name_xr.operation)
	|| is_set(tunnel_requested_bandwidth.operation)
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_operation());
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-auto-bandwidth" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-auto-bandwidths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (bandwidth_applications.is_set || is_set(bandwidth_applications.operation)) leaf_name_data.push_back(bandwidth_applications.get_name_leafdata());
    if (highest_bandwidth.is_set || is_set(highest_bandwidth.operation)) leaf_name_data.push_back(highest_bandwidth.get_name_leafdata());
    if (last_bandwidth_applied.is_set || is_set(last_bandwidth_applied.operation)) leaf_name_data.push_back(last_bandwidth_applied.get_name_leafdata());
    if (last_sample_bandwidth.is_set || is_set(last_sample_bandwidth.operation)) leaf_name_data.push_back(last_sample_bandwidth.get_name_leafdata());
    if (samples_collected.is_set || is_set(samples_collected.operation)) leaf_name_data.push_back(samples_collected.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (signalled_bandwidth.is_set || is_set(signalled_bandwidth.operation)) leaf_name_data.push_back(signalled_bandwidth.get_name_leafdata());
    if (time_left_application.is_set || is_set(time_left_application.operation)) leaf_name_data.push_back(time_left_application.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.operation)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.operation)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());
    if (tunnel_requested_bandwidth.is_set || is_set(tunnel_requested_bandwidth.operation)) leaf_name_data.push_back(tunnel_requested_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-bandwidth-status")
    {
        if(auto_bandwidth_status != nullptr)
        {
            children["auto-bandwidth-status"] = auto_bandwidth_status;
        }
        else
        {
            auto_bandwidth_status = std::make_shared<MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus>();
            auto_bandwidth_status->parent = this;
            children["auto-bandwidth-status"] = auto_bandwidth_status;
        }
        return children.at("auto-bandwidth-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_children()
{
    if(children.find("auto-bandwidth-status") == children.end())
    {
        if(auto_bandwidth_status != nullptr)
        {
            children["auto-bandwidth-status"] = auto_bandwidth_status;
        }
    }

    return children;
}

void MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications = value;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth = value;
    }
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied = value;
    }
    if(value_path == "last-sample-bandwidth")
    {
        last_sample_bandwidth = value;
    }
    if(value_path == "samples-collected")
    {
        samples_collected = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
    if(value_path == "signalled-bandwidth")
    {
        signalled_bandwidth = value;
    }
    if(value_path == "time-left-application")
    {
        time_left_application = value;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
    }
    if(value_path == "tunnel-requested-bandwidth")
    {
        tunnel_requested_bandwidth = value;
    }
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::AutoBandwidthStatus()
    :
    is_auto_bandwidth_enabled{YType::boolean, "is-auto-bandwidth-enabled"},
    reactivation_time{YType::uint32, "reactivation-time"}
{
    yang_name = "auto-bandwidth-status"; yang_parent_name = "tunnel-auto-bandwidth";
}

MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::~AutoBandwidthStatus()
{
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_data() const
{
    return is_auto_bandwidth_enabled.is_set
	|| reactivation_time.is_set;
}

bool MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(is_auto_bandwidth_enabled.operation)
	|| is_set(reactivation_time.operation);
}

std::string MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-status";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBandwidthStatus' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_enabled.is_set || is_set(is_auto_bandwidth_enabled.operation)) leaf_name_data.push_back(is_auto_bandwidth_enabled.get_name_leafdata());
    if (reactivation_time.is_set || is_set(reactivation_time.operation)) leaf_name_data.push_back(reactivation_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_children()
{
    return children;
}

void MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled = value;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time = value;
    }
}

MplsTe::Tunnels::Summary::Summary()
    :
    activated_heads{YType::uint32, "activated-heads"},
    auto_bandwidth_collection_period{YType::uint32, "auto-bandwidth-collection-period"},
    auto_bandwidth_tunnels{YType::uint32, "auto-bandwidth-tunnels"},
    backup_tunnels{YType::uint32, "backup-tunnels"},
    backups_assigned{YType::uint32, "backups-assigned"},
    bidir_head_ls_ps_associated{YType::uint32, "bidir-head-ls-ps-associated"},
    bidir_head_ls_ps_proceeding{YType::uint32, "bidir-head-ls-ps-proceeding"},
    bidir_head_ls_ps_standby{YType::uint32, "bidir-head-ls-ps-standby"},
    bidir_head_ls_ps_up{YType::uint32, "bidir-head-ls-ps-up"},
    bidir_head_tunnels{YType::uint32, "bidir-head-tunnels"},
    bidir_head_tunnels_associated{YType::uint32, "bidir-head-tunnels-associated"},
    bidir_head_tunnels_corouted{YType::uint32, "bidir-head-tunnels-corouted"},
    bidir_head_tunnels_up{YType::uint32, "bidir-head-tunnels-up"},
    bidir_mid_ls_ps_associated{YType::uint32, "bidir-mid-ls-ps-associated"},
    bidir_mid_ls_ps_proceeding{YType::uint32, "bidir-mid-ls-ps-proceeding"},
    bidir_mid_ls_ps_standby{YType::uint32, "bidir-mid-ls-ps-standby"},
    bidir_mid_tunnels{YType::uint32, "bidir-mid-tunnels"},
    bidir_mid_tunnels_up{YType::uint32, "bidir-mid-tunnels-up"},
    bidir_tail_ls_ps{YType::uint32, "bidir-tail-ls-ps"},
    bidir_tail_ls_ps_associated{YType::uint32, "bidir-tail-ls-ps-associated"},
    bidir_tail_ls_ps_corouted{YType::uint32, "bidir-tail-ls-ps-corouted"},
    bidir_tail_ls_ps_proceeding{YType::uint32, "bidir-tail-ls-ps-proceeding"},
    bidir_tail_ls_ps_standby{YType::uint32, "bidir-tail-ls-ps-standby"},
    bidir_tail_ls_ps_up{YType::uint32, "bidir-tail-ls-ps-up"},
    bw_protected_p2mp_s2_ls{YType::uint32, "bw-protected-p2mp-s2-ls"},
    bw_protected_p2p_s2_ls{YType::uint32, "bw-protected-p2p-s2-ls"},
    bw_protected_p2p_tunnels{YType::uint32, "bw-protected-p2p-tunnels"},
    bw_protected_tunnels{YType::uint32, "bw-protected-tunnels"},
    deactivated_heads{YType::uint32, "deactivated-heads"},
    dynamic_up_p2p_head_tunnels{YType::uint32, "dynamic-up-p2p-head-tunnels"},
    frr_config_p2mp_head_tunnels{YType::uint32, "frr-config-p2mp-head-tunnels"},
    frr_config_p2p_head_tunnels{YType::uint32, "frr-config-p2p-head-tunnels"},
    frr_head_tunnels{YType::uint32, "frr-head-tunnels"},
    frr_mid_point_tunnels{YType::uint32, "frr-mid-point-tunnels"},
    frr_p2mp_head_s2_ls{YType::uint32, "frr-p2mp-head-s2-ls"},
    frr_p2mp_mid_point_s2_ls{YType::uint32, "frr-p2mp-mid-point-s2-ls"},
    frr_p2p_head_s2_ls{YType::uint32, "frr-p2p-head-s2-ls"},
    frr_p2p_head_tunnels{YType::uint32, "frr-p2p-head-tunnels"},
    frr_p2p_mid_point_s2_ls{YType::uint32, "frr-p2p-mid-point-s2-ls"},
    frr_p2p_mid_point_tunnels{YType::uint32, "frr-p2p-mid-point-tunnels"},
    frr_protected_interfaces{YType::uint32, "frr-protected-interfaces"},
    is_forwarding_enabled{YType::boolean, "is-forwarding-enabled"},
    is_periodic_reoptimization_on{YType::boolean, "is-periodic-reoptimization-on"},
    is_promotion_on{YType::boolean, "is-promotion-on"},
    is_rsvp_process_enabled{YType::boolean, "is-rsvp-process-enabled"},
    link_and_node_diverse_paths{YType::uint16, "link-and-node-diverse-paths"},
    link_diverse_paths{YType::uint16, "link-diverse-paths"},
    link_protected_p2mp_s2_ls{YType::uint32, "link-protected-p2mp-s2-ls"},
    link_protected_p2p_s2_ls{YType::uint32, "link-protected-p2p-s2-ls"},
    link_protected_p2p_tunnels{YType::uint32, "link-protected-p2p-tunnels"},
    link_protected_tunnels{YType::uint32, "link-protected-tunnels"},
    next_check_time{YType::uint32, "next-check-time"},
    next_promotion_timer{YType::uint32, "next-promotion-timer"},
    next_reoptimization_timer{YType::uint32, "next-reoptimization-timer"},
    next_verify_timer{YType::uint32, "next-verify-timer"},
    node_diverse_paths{YType::uint16, "node-diverse-paths"},
    node_protected_p2p_tunnels{YType::uint32, "node-protected-p2p-tunnels"},
    node_protected_tunnels{YType::uint32, "node-protected-tunnels"},
    p2mp_head_destinations{YType::uint32, "p2mp-head-destinations"},
    p2mp_head_tunnels{YType::uint32, "p2mp-head-tunnels"},
    p2mp_mid_point_s2_ls{YType::uint32, "p2mp-mid-point-s2-ls"},
    p2mp_tail_s2_ls{YType::uint32, "p2mp-tail-s2-ls"},
    p2p_head_destinations{YType::uint32, "p2p-head-destinations"},
    p2p_head_destinations_up{YType::uint32, "p2p-head-destinations-up"},
    p2p_head_tunnels{YType::uint32, "p2p-head-tunnels"},
    p2p_mid_point_s2_ls{YType::uint32, "p2p-mid-point-s2-ls"},
    p2p_tail_s2_ls{YType::uint32, "p2p-tail-s2-ls"},
    p2p_tail_tunnels{YType::uint32, "p2p-tail-tunnels"},
    path_protect_configured_tunnels{YType::uint16, "path-protect-configured-tunnels"},
    path_protect_configured_tunnels_standby_up{YType::uint16, "path-protect-configured-tunnels-standby-up"},
    path_protect_configured_tunnels_up{YType::uint16, "path-protect-configured-tunnels-up"},
    pcalc_tie_breaker_type{YType::enumeration, "pcalc-tie-breaker-type"},
    pcalc_tiebreaker{YType::uint32, "pcalc-tiebreaker"},
    proceeding_p2mp_head_s2_ls{YType::uint32, "proceeding-p2mp-head-s2-ls"},
    proceeding_p2mp_mid_point_s2_ls{YType::uint32, "proceeding-p2mp-mid-point-s2-ls"},
    proceeding_p2p_head_s2_ls{YType::uint32, "proceeding-p2p-head-s2-ls"},
    proceeding_p2p_mid_point_s2_ls{YType::uint32, "proceeding-p2p-mid-point-s2-ls"},
    promotion_period{YType::uint32, "promotion-period"},
    protected_head_tunnels{YType::uint32, "protected-head-tunnels"},
    protected_mid_point_tunnels{YType::uint32, "protected-mid-point-tunnels"},
    protected_p2mp_head_s2_ls{YType::uint32, "protected-p2mp-head-s2-ls"},
    protected_p2mp_mid_point_s2_ls{YType::uint32, "protected-p2mp-mid-point-s2-ls"},
    protected_p2p_head_s2_ls{YType::uint32, "protected-p2p-head-s2-ls"},
    protected_p2p_head_tunnels{YType::uint32, "protected-p2p-head-tunnels"},
    protected_p2p_mid_point_s2_ls{YType::uint32, "protected-p2p-mid-point-s2-ls"},
    protected_p2p_mid_point_tunnels{YType::uint32, "protected-p2p-mid-point-tunnels"},
    recovered_heads{YType::uint32, "recovered-heads"},
    recovering_p2p_head_s2_ls{YType::uint32, "recovering-p2p-head-s2-ls"},
    reoptimization_period{YType::uint32, "reoptimization-period"},
    rerouted_head_tunnels{YType::uint32, "rerouted-head-tunnels"},
    rerouted_interfaces{YType::uint32, "rerouted-interfaces"},
    rerouted_mid_point_tunnels{YType::uint32, "rerouted-mid-point-tunnels"},
    rerouted_p2mp_head_s2_ls{YType::uint32, "rerouted-p2mp-head-s2-ls"},
    rerouted_p2mp_mid_point_s2_ls{YType::uint32, "rerouted-p2mp-mid-point-s2-ls"},
    rerouted_p2p_head_s2_ls{YType::uint32, "rerouted-p2p-head-s2-ls"},
    rerouted_p2p_head_tunnels{YType::uint32, "rerouted-p2p-head-tunnels"},
    rerouted_p2p_mid_point_s2_ls{YType::uint32, "rerouted-p2p-mid-point-s2-ls"},
    rerouted_p2p_mid_point_tunnels{YType::uint32, "rerouted-p2p-mid-point-tunnels"},
    te_process_status{YType::enumeration, "te-process-status"},
    tiebreaker_qualifier{YType::enumeration, "tiebreaker-qualifier"},
    tunnel_check_period{YType::uint32, "tunnel-check-period"},
    tunnel_verify_period{YType::uint32, "tunnel-verify-period"},
    up_p2mp_head_destinations{YType::uint32, "up-p2mp-head-destinations"},
    up_p2mp_head_s2_ls{YType::uint32, "up-p2mp-head-s2-ls"},
    up_p2mp_head_tunnels{YType::uint32, "up-p2mp-head-tunnels"},
    up_p2mp_mid_point_s2_ls{YType::uint32, "up-p2mp-mid-point-s2-ls"},
    up_p2mp_tail_s2_ls{YType::uint32, "up-p2mp-tail-s2-ls"},
    up_p2p_head_s2_ls{YType::uint32, "up-p2p-head-s2-ls"},
    up_p2p_head_tunnels{YType::uint32, "up-p2p-head-tunnels"},
    up_p2p_mid_point_s2_ls{YType::uint32, "up-p2p-mid-point-s2-ls"},
    up_p2p_tail_s2_ls{YType::uint32, "up-p2p-tail-s2-ls"},
    user_defined_paths{YType::uint16, "user-defined-paths"}
    	,
    auto_mesh_one_hop_summary(std::make_shared<MplsTe::Tunnels::Summary::AutoMeshOneHopSummary>())
	,auto_mesh_summary(std::make_shared<MplsTe::Tunnels::Summary::AutoMeshSummary>())
	,auto_tun_server_summary(std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary>())
	,autobackup_summary(std::make_shared<MplsTe::Tunnels::Summary::AutobackupSummary>())
	,current_tunnel_convergence_summary(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary>())
	,gmpls_nni_summary(std::make_shared<MplsTe::Tunnels::Summary::GmplsNniSummary>())
	,gmpls_uni_summary(std::make_shared<MplsTe::Tunnels::Summary::GmplsUniSummary>())
	,last_tunnel_convergence_summary(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary>())
{
    auto_mesh_one_hop_summary->parent = this;
    children["auto-mesh-one-hop-summary"] = auto_mesh_one_hop_summary;

    auto_mesh_summary->parent = this;
    children["auto-mesh-summary"] = auto_mesh_summary;

    auto_tun_server_summary->parent = this;
    children["auto-tun-server-summary"] = auto_tun_server_summary;

    autobackup_summary->parent = this;
    children["autobackup-summary"] = autobackup_summary;

    current_tunnel_convergence_summary->parent = this;
    children["current-tunnel-convergence-summary"] = current_tunnel_convergence_summary;

    gmpls_nni_summary->parent = this;
    children["gmpls-nni-summary"] = gmpls_nni_summary;

    gmpls_uni_summary->parent = this;
    children["gmpls-uni-summary"] = gmpls_uni_summary;

    last_tunnel_convergence_summary->parent = this;
    children["last-tunnel-convergence-summary"] = last_tunnel_convergence_summary;

    yang_name = "summary"; yang_parent_name = "tunnels";
}

MplsTe::Tunnels::Summary::~Summary()
{
}

bool MplsTe::Tunnels::Summary::has_data() const
{
    return activated_heads.is_set
	|| auto_bandwidth_collection_period.is_set
	|| auto_bandwidth_tunnels.is_set
	|| backup_tunnels.is_set
	|| backups_assigned.is_set
	|| bidir_head_ls_ps_associated.is_set
	|| bidir_head_ls_ps_proceeding.is_set
	|| bidir_head_ls_ps_standby.is_set
	|| bidir_head_ls_ps_up.is_set
	|| bidir_head_tunnels.is_set
	|| bidir_head_tunnels_associated.is_set
	|| bidir_head_tunnels_corouted.is_set
	|| bidir_head_tunnels_up.is_set
	|| bidir_mid_ls_ps_associated.is_set
	|| bidir_mid_ls_ps_proceeding.is_set
	|| bidir_mid_ls_ps_standby.is_set
	|| bidir_mid_tunnels.is_set
	|| bidir_mid_tunnels_up.is_set
	|| bidir_tail_ls_ps.is_set
	|| bidir_tail_ls_ps_associated.is_set
	|| bidir_tail_ls_ps_corouted.is_set
	|| bidir_tail_ls_ps_proceeding.is_set
	|| bidir_tail_ls_ps_standby.is_set
	|| bidir_tail_ls_ps_up.is_set
	|| bw_protected_p2mp_s2_ls.is_set
	|| bw_protected_p2p_s2_ls.is_set
	|| bw_protected_p2p_tunnels.is_set
	|| bw_protected_tunnels.is_set
	|| deactivated_heads.is_set
	|| dynamic_up_p2p_head_tunnels.is_set
	|| frr_config_p2mp_head_tunnels.is_set
	|| frr_config_p2p_head_tunnels.is_set
	|| frr_head_tunnels.is_set
	|| frr_mid_point_tunnels.is_set
	|| frr_p2mp_head_s2_ls.is_set
	|| frr_p2mp_mid_point_s2_ls.is_set
	|| frr_p2p_head_s2_ls.is_set
	|| frr_p2p_head_tunnels.is_set
	|| frr_p2p_mid_point_s2_ls.is_set
	|| frr_p2p_mid_point_tunnels.is_set
	|| frr_protected_interfaces.is_set
	|| is_forwarding_enabled.is_set
	|| is_periodic_reoptimization_on.is_set
	|| is_promotion_on.is_set
	|| is_rsvp_process_enabled.is_set
	|| link_and_node_diverse_paths.is_set
	|| link_diverse_paths.is_set
	|| link_protected_p2mp_s2_ls.is_set
	|| link_protected_p2p_s2_ls.is_set
	|| link_protected_p2p_tunnels.is_set
	|| link_protected_tunnels.is_set
	|| next_check_time.is_set
	|| next_promotion_timer.is_set
	|| next_reoptimization_timer.is_set
	|| next_verify_timer.is_set
	|| node_diverse_paths.is_set
	|| node_protected_p2p_tunnels.is_set
	|| node_protected_tunnels.is_set
	|| p2mp_head_destinations.is_set
	|| p2mp_head_tunnels.is_set
	|| p2mp_mid_point_s2_ls.is_set
	|| p2mp_tail_s2_ls.is_set
	|| p2p_head_destinations.is_set
	|| p2p_head_destinations_up.is_set
	|| p2p_head_tunnels.is_set
	|| p2p_mid_point_s2_ls.is_set
	|| p2p_tail_s2_ls.is_set
	|| p2p_tail_tunnels.is_set
	|| path_protect_configured_tunnels.is_set
	|| path_protect_configured_tunnels_standby_up.is_set
	|| path_protect_configured_tunnels_up.is_set
	|| pcalc_tie_breaker_type.is_set
	|| pcalc_tiebreaker.is_set
	|| proceeding_p2mp_head_s2_ls.is_set
	|| proceeding_p2mp_mid_point_s2_ls.is_set
	|| proceeding_p2p_head_s2_ls.is_set
	|| proceeding_p2p_mid_point_s2_ls.is_set
	|| promotion_period.is_set
	|| protected_head_tunnels.is_set
	|| protected_mid_point_tunnels.is_set
	|| protected_p2mp_head_s2_ls.is_set
	|| protected_p2mp_mid_point_s2_ls.is_set
	|| protected_p2p_head_s2_ls.is_set
	|| protected_p2p_head_tunnels.is_set
	|| protected_p2p_mid_point_s2_ls.is_set
	|| protected_p2p_mid_point_tunnels.is_set
	|| recovered_heads.is_set
	|| recovering_p2p_head_s2_ls.is_set
	|| reoptimization_period.is_set
	|| rerouted_head_tunnels.is_set
	|| rerouted_interfaces.is_set
	|| rerouted_mid_point_tunnels.is_set
	|| rerouted_p2mp_head_s2_ls.is_set
	|| rerouted_p2mp_mid_point_s2_ls.is_set
	|| rerouted_p2p_head_s2_ls.is_set
	|| rerouted_p2p_head_tunnels.is_set
	|| rerouted_p2p_mid_point_s2_ls.is_set
	|| rerouted_p2p_mid_point_tunnels.is_set
	|| te_process_status.is_set
	|| tiebreaker_qualifier.is_set
	|| tunnel_check_period.is_set
	|| tunnel_verify_period.is_set
	|| up_p2mp_head_destinations.is_set
	|| up_p2mp_head_s2_ls.is_set
	|| up_p2mp_head_tunnels.is_set
	|| up_p2mp_mid_point_s2_ls.is_set
	|| up_p2mp_tail_s2_ls.is_set
	|| up_p2p_head_s2_ls.is_set
	|| up_p2p_head_tunnels.is_set
	|| up_p2p_mid_point_s2_ls.is_set
	|| up_p2p_tail_s2_ls.is_set
	|| user_defined_paths.is_set
	|| (auto_mesh_one_hop_summary !=  nullptr && auto_mesh_one_hop_summary->has_data())
	|| (auto_mesh_summary !=  nullptr && auto_mesh_summary->has_data())
	|| (auto_tun_server_summary !=  nullptr && auto_tun_server_summary->has_data())
	|| (autobackup_summary !=  nullptr && autobackup_summary->has_data())
	|| (current_tunnel_convergence_summary !=  nullptr && current_tunnel_convergence_summary->has_data())
	|| (gmpls_nni_summary !=  nullptr && gmpls_nni_summary->has_data())
	|| (gmpls_uni_summary !=  nullptr && gmpls_uni_summary->has_data())
	|| (last_tunnel_convergence_summary !=  nullptr && last_tunnel_convergence_summary->has_data());
}

bool MplsTe::Tunnels::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_heads.operation)
	|| is_set(auto_bandwidth_collection_period.operation)
	|| is_set(auto_bandwidth_tunnels.operation)
	|| is_set(backup_tunnels.operation)
	|| is_set(backups_assigned.operation)
	|| is_set(bidir_head_ls_ps_associated.operation)
	|| is_set(bidir_head_ls_ps_proceeding.operation)
	|| is_set(bidir_head_ls_ps_standby.operation)
	|| is_set(bidir_head_ls_ps_up.operation)
	|| is_set(bidir_head_tunnels.operation)
	|| is_set(bidir_head_tunnels_associated.operation)
	|| is_set(bidir_head_tunnels_corouted.operation)
	|| is_set(bidir_head_tunnels_up.operation)
	|| is_set(bidir_mid_ls_ps_associated.operation)
	|| is_set(bidir_mid_ls_ps_proceeding.operation)
	|| is_set(bidir_mid_ls_ps_standby.operation)
	|| is_set(bidir_mid_tunnels.operation)
	|| is_set(bidir_mid_tunnels_up.operation)
	|| is_set(bidir_tail_ls_ps.operation)
	|| is_set(bidir_tail_ls_ps_associated.operation)
	|| is_set(bidir_tail_ls_ps_corouted.operation)
	|| is_set(bidir_tail_ls_ps_proceeding.operation)
	|| is_set(bidir_tail_ls_ps_standby.operation)
	|| is_set(bidir_tail_ls_ps_up.operation)
	|| is_set(bw_protected_p2mp_s2_ls.operation)
	|| is_set(bw_protected_p2p_s2_ls.operation)
	|| is_set(bw_protected_p2p_tunnels.operation)
	|| is_set(bw_protected_tunnels.operation)
	|| is_set(deactivated_heads.operation)
	|| is_set(dynamic_up_p2p_head_tunnels.operation)
	|| is_set(frr_config_p2mp_head_tunnels.operation)
	|| is_set(frr_config_p2p_head_tunnels.operation)
	|| is_set(frr_head_tunnels.operation)
	|| is_set(frr_mid_point_tunnels.operation)
	|| is_set(frr_p2mp_head_s2_ls.operation)
	|| is_set(frr_p2mp_mid_point_s2_ls.operation)
	|| is_set(frr_p2p_head_s2_ls.operation)
	|| is_set(frr_p2p_head_tunnels.operation)
	|| is_set(frr_p2p_mid_point_s2_ls.operation)
	|| is_set(frr_p2p_mid_point_tunnels.operation)
	|| is_set(frr_protected_interfaces.operation)
	|| is_set(is_forwarding_enabled.operation)
	|| is_set(is_periodic_reoptimization_on.operation)
	|| is_set(is_promotion_on.operation)
	|| is_set(is_rsvp_process_enabled.operation)
	|| is_set(link_and_node_diverse_paths.operation)
	|| is_set(link_diverse_paths.operation)
	|| is_set(link_protected_p2mp_s2_ls.operation)
	|| is_set(link_protected_p2p_s2_ls.operation)
	|| is_set(link_protected_p2p_tunnels.operation)
	|| is_set(link_protected_tunnels.operation)
	|| is_set(next_check_time.operation)
	|| is_set(next_promotion_timer.operation)
	|| is_set(next_reoptimization_timer.operation)
	|| is_set(next_verify_timer.operation)
	|| is_set(node_diverse_paths.operation)
	|| is_set(node_protected_p2p_tunnels.operation)
	|| is_set(node_protected_tunnels.operation)
	|| is_set(p2mp_head_destinations.operation)
	|| is_set(p2mp_head_tunnels.operation)
	|| is_set(p2mp_mid_point_s2_ls.operation)
	|| is_set(p2mp_tail_s2_ls.operation)
	|| is_set(p2p_head_destinations.operation)
	|| is_set(p2p_head_destinations_up.operation)
	|| is_set(p2p_head_tunnels.operation)
	|| is_set(p2p_mid_point_s2_ls.operation)
	|| is_set(p2p_tail_s2_ls.operation)
	|| is_set(p2p_tail_tunnels.operation)
	|| is_set(path_protect_configured_tunnels.operation)
	|| is_set(path_protect_configured_tunnels_standby_up.operation)
	|| is_set(path_protect_configured_tunnels_up.operation)
	|| is_set(pcalc_tie_breaker_type.operation)
	|| is_set(pcalc_tiebreaker.operation)
	|| is_set(proceeding_p2mp_head_s2_ls.operation)
	|| is_set(proceeding_p2mp_mid_point_s2_ls.operation)
	|| is_set(proceeding_p2p_head_s2_ls.operation)
	|| is_set(proceeding_p2p_mid_point_s2_ls.operation)
	|| is_set(promotion_period.operation)
	|| is_set(protected_head_tunnels.operation)
	|| is_set(protected_mid_point_tunnels.operation)
	|| is_set(protected_p2mp_head_s2_ls.operation)
	|| is_set(protected_p2mp_mid_point_s2_ls.operation)
	|| is_set(protected_p2p_head_s2_ls.operation)
	|| is_set(protected_p2p_head_tunnels.operation)
	|| is_set(protected_p2p_mid_point_s2_ls.operation)
	|| is_set(protected_p2p_mid_point_tunnels.operation)
	|| is_set(recovered_heads.operation)
	|| is_set(recovering_p2p_head_s2_ls.operation)
	|| is_set(reoptimization_period.operation)
	|| is_set(rerouted_head_tunnels.operation)
	|| is_set(rerouted_interfaces.operation)
	|| is_set(rerouted_mid_point_tunnels.operation)
	|| is_set(rerouted_p2mp_head_s2_ls.operation)
	|| is_set(rerouted_p2mp_mid_point_s2_ls.operation)
	|| is_set(rerouted_p2p_head_s2_ls.operation)
	|| is_set(rerouted_p2p_head_tunnels.operation)
	|| is_set(rerouted_p2p_mid_point_s2_ls.operation)
	|| is_set(rerouted_p2p_mid_point_tunnels.operation)
	|| is_set(te_process_status.operation)
	|| is_set(tiebreaker_qualifier.operation)
	|| is_set(tunnel_check_period.operation)
	|| is_set(tunnel_verify_period.operation)
	|| is_set(up_p2mp_head_destinations.operation)
	|| is_set(up_p2mp_head_s2_ls.operation)
	|| is_set(up_p2mp_head_tunnels.operation)
	|| is_set(up_p2mp_mid_point_s2_ls.operation)
	|| is_set(up_p2mp_tail_s2_ls.operation)
	|| is_set(up_p2p_head_s2_ls.operation)
	|| is_set(up_p2p_head_tunnels.operation)
	|| is_set(up_p2p_mid_point_s2_ls.operation)
	|| is_set(up_p2p_tail_s2_ls.operation)
	|| is_set(user_defined_paths.operation)
	|| (auto_mesh_one_hop_summary !=  nullptr && auto_mesh_one_hop_summary->has_operation())
	|| (auto_mesh_summary !=  nullptr && auto_mesh_summary->has_operation())
	|| (auto_tun_server_summary !=  nullptr && auto_tun_server_summary->has_operation())
	|| (autobackup_summary !=  nullptr && autobackup_summary->has_operation())
	|| (current_tunnel_convergence_summary !=  nullptr && current_tunnel_convergence_summary->has_operation())
	|| (gmpls_nni_summary !=  nullptr && gmpls_nni_summary->has_operation())
	|| (gmpls_uni_summary !=  nullptr && gmpls_uni_summary->has_operation())
	|| (last_tunnel_convergence_summary !=  nullptr && last_tunnel_convergence_summary->has_operation());
}

std::string MplsTe::Tunnels::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_heads.is_set || is_set(activated_heads.operation)) leaf_name_data.push_back(activated_heads.get_name_leafdata());
    if (auto_bandwidth_collection_period.is_set || is_set(auto_bandwidth_collection_period.operation)) leaf_name_data.push_back(auto_bandwidth_collection_period.get_name_leafdata());
    if (auto_bandwidth_tunnels.is_set || is_set(auto_bandwidth_tunnels.operation)) leaf_name_data.push_back(auto_bandwidth_tunnels.get_name_leafdata());
    if (backup_tunnels.is_set || is_set(backup_tunnels.operation)) leaf_name_data.push_back(backup_tunnels.get_name_leafdata());
    if (backups_assigned.is_set || is_set(backups_assigned.operation)) leaf_name_data.push_back(backups_assigned.get_name_leafdata());
    if (bidir_head_ls_ps_associated.is_set || is_set(bidir_head_ls_ps_associated.operation)) leaf_name_data.push_back(bidir_head_ls_ps_associated.get_name_leafdata());
    if (bidir_head_ls_ps_proceeding.is_set || is_set(bidir_head_ls_ps_proceeding.operation)) leaf_name_data.push_back(bidir_head_ls_ps_proceeding.get_name_leafdata());
    if (bidir_head_ls_ps_standby.is_set || is_set(bidir_head_ls_ps_standby.operation)) leaf_name_data.push_back(bidir_head_ls_ps_standby.get_name_leafdata());
    if (bidir_head_ls_ps_up.is_set || is_set(bidir_head_ls_ps_up.operation)) leaf_name_data.push_back(bidir_head_ls_ps_up.get_name_leafdata());
    if (bidir_head_tunnels.is_set || is_set(bidir_head_tunnels.operation)) leaf_name_data.push_back(bidir_head_tunnels.get_name_leafdata());
    if (bidir_head_tunnels_associated.is_set || is_set(bidir_head_tunnels_associated.operation)) leaf_name_data.push_back(bidir_head_tunnels_associated.get_name_leafdata());
    if (bidir_head_tunnels_corouted.is_set || is_set(bidir_head_tunnels_corouted.operation)) leaf_name_data.push_back(bidir_head_tunnels_corouted.get_name_leafdata());
    if (bidir_head_tunnels_up.is_set || is_set(bidir_head_tunnels_up.operation)) leaf_name_data.push_back(bidir_head_tunnels_up.get_name_leafdata());
    if (bidir_mid_ls_ps_associated.is_set || is_set(bidir_mid_ls_ps_associated.operation)) leaf_name_data.push_back(bidir_mid_ls_ps_associated.get_name_leafdata());
    if (bidir_mid_ls_ps_proceeding.is_set || is_set(bidir_mid_ls_ps_proceeding.operation)) leaf_name_data.push_back(bidir_mid_ls_ps_proceeding.get_name_leafdata());
    if (bidir_mid_ls_ps_standby.is_set || is_set(bidir_mid_ls_ps_standby.operation)) leaf_name_data.push_back(bidir_mid_ls_ps_standby.get_name_leafdata());
    if (bidir_mid_tunnels.is_set || is_set(bidir_mid_tunnels.operation)) leaf_name_data.push_back(bidir_mid_tunnels.get_name_leafdata());
    if (bidir_mid_tunnels_up.is_set || is_set(bidir_mid_tunnels_up.operation)) leaf_name_data.push_back(bidir_mid_tunnels_up.get_name_leafdata());
    if (bidir_tail_ls_ps.is_set || is_set(bidir_tail_ls_ps.operation)) leaf_name_data.push_back(bidir_tail_ls_ps.get_name_leafdata());
    if (bidir_tail_ls_ps_associated.is_set || is_set(bidir_tail_ls_ps_associated.operation)) leaf_name_data.push_back(bidir_tail_ls_ps_associated.get_name_leafdata());
    if (bidir_tail_ls_ps_corouted.is_set || is_set(bidir_tail_ls_ps_corouted.operation)) leaf_name_data.push_back(bidir_tail_ls_ps_corouted.get_name_leafdata());
    if (bidir_tail_ls_ps_proceeding.is_set || is_set(bidir_tail_ls_ps_proceeding.operation)) leaf_name_data.push_back(bidir_tail_ls_ps_proceeding.get_name_leafdata());
    if (bidir_tail_ls_ps_standby.is_set || is_set(bidir_tail_ls_ps_standby.operation)) leaf_name_data.push_back(bidir_tail_ls_ps_standby.get_name_leafdata());
    if (bidir_tail_ls_ps_up.is_set || is_set(bidir_tail_ls_ps_up.operation)) leaf_name_data.push_back(bidir_tail_ls_ps_up.get_name_leafdata());
    if (bw_protected_p2mp_s2_ls.is_set || is_set(bw_protected_p2mp_s2_ls.operation)) leaf_name_data.push_back(bw_protected_p2mp_s2_ls.get_name_leafdata());
    if (bw_protected_p2p_s2_ls.is_set || is_set(bw_protected_p2p_s2_ls.operation)) leaf_name_data.push_back(bw_protected_p2p_s2_ls.get_name_leafdata());
    if (bw_protected_p2p_tunnels.is_set || is_set(bw_protected_p2p_tunnels.operation)) leaf_name_data.push_back(bw_protected_p2p_tunnels.get_name_leafdata());
    if (bw_protected_tunnels.is_set || is_set(bw_protected_tunnels.operation)) leaf_name_data.push_back(bw_protected_tunnels.get_name_leafdata());
    if (deactivated_heads.is_set || is_set(deactivated_heads.operation)) leaf_name_data.push_back(deactivated_heads.get_name_leafdata());
    if (dynamic_up_p2p_head_tunnels.is_set || is_set(dynamic_up_p2p_head_tunnels.operation)) leaf_name_data.push_back(dynamic_up_p2p_head_tunnels.get_name_leafdata());
    if (frr_config_p2mp_head_tunnels.is_set || is_set(frr_config_p2mp_head_tunnels.operation)) leaf_name_data.push_back(frr_config_p2mp_head_tunnels.get_name_leafdata());
    if (frr_config_p2p_head_tunnels.is_set || is_set(frr_config_p2p_head_tunnels.operation)) leaf_name_data.push_back(frr_config_p2p_head_tunnels.get_name_leafdata());
    if (frr_head_tunnels.is_set || is_set(frr_head_tunnels.operation)) leaf_name_data.push_back(frr_head_tunnels.get_name_leafdata());
    if (frr_mid_point_tunnels.is_set || is_set(frr_mid_point_tunnels.operation)) leaf_name_data.push_back(frr_mid_point_tunnels.get_name_leafdata());
    if (frr_p2mp_head_s2_ls.is_set || is_set(frr_p2mp_head_s2_ls.operation)) leaf_name_data.push_back(frr_p2mp_head_s2_ls.get_name_leafdata());
    if (frr_p2mp_mid_point_s2_ls.is_set || is_set(frr_p2mp_mid_point_s2_ls.operation)) leaf_name_data.push_back(frr_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (frr_p2p_head_s2_ls.is_set || is_set(frr_p2p_head_s2_ls.operation)) leaf_name_data.push_back(frr_p2p_head_s2_ls.get_name_leafdata());
    if (frr_p2p_head_tunnels.is_set || is_set(frr_p2p_head_tunnels.operation)) leaf_name_data.push_back(frr_p2p_head_tunnels.get_name_leafdata());
    if (frr_p2p_mid_point_s2_ls.is_set || is_set(frr_p2p_mid_point_s2_ls.operation)) leaf_name_data.push_back(frr_p2p_mid_point_s2_ls.get_name_leafdata());
    if (frr_p2p_mid_point_tunnels.is_set || is_set(frr_p2p_mid_point_tunnels.operation)) leaf_name_data.push_back(frr_p2p_mid_point_tunnels.get_name_leafdata());
    if (frr_protected_interfaces.is_set || is_set(frr_protected_interfaces.operation)) leaf_name_data.push_back(frr_protected_interfaces.get_name_leafdata());
    if (is_forwarding_enabled.is_set || is_set(is_forwarding_enabled.operation)) leaf_name_data.push_back(is_forwarding_enabled.get_name_leafdata());
    if (is_periodic_reoptimization_on.is_set || is_set(is_periodic_reoptimization_on.operation)) leaf_name_data.push_back(is_periodic_reoptimization_on.get_name_leafdata());
    if (is_promotion_on.is_set || is_set(is_promotion_on.operation)) leaf_name_data.push_back(is_promotion_on.get_name_leafdata());
    if (is_rsvp_process_enabled.is_set || is_set(is_rsvp_process_enabled.operation)) leaf_name_data.push_back(is_rsvp_process_enabled.get_name_leafdata());
    if (link_and_node_diverse_paths.is_set || is_set(link_and_node_diverse_paths.operation)) leaf_name_data.push_back(link_and_node_diverse_paths.get_name_leafdata());
    if (link_diverse_paths.is_set || is_set(link_diverse_paths.operation)) leaf_name_data.push_back(link_diverse_paths.get_name_leafdata());
    if (link_protected_p2mp_s2_ls.is_set || is_set(link_protected_p2mp_s2_ls.operation)) leaf_name_data.push_back(link_protected_p2mp_s2_ls.get_name_leafdata());
    if (link_protected_p2p_s2_ls.is_set || is_set(link_protected_p2p_s2_ls.operation)) leaf_name_data.push_back(link_protected_p2p_s2_ls.get_name_leafdata());
    if (link_protected_p2p_tunnels.is_set || is_set(link_protected_p2p_tunnels.operation)) leaf_name_data.push_back(link_protected_p2p_tunnels.get_name_leafdata());
    if (link_protected_tunnels.is_set || is_set(link_protected_tunnels.operation)) leaf_name_data.push_back(link_protected_tunnels.get_name_leafdata());
    if (next_check_time.is_set || is_set(next_check_time.operation)) leaf_name_data.push_back(next_check_time.get_name_leafdata());
    if (next_promotion_timer.is_set || is_set(next_promotion_timer.operation)) leaf_name_data.push_back(next_promotion_timer.get_name_leafdata());
    if (next_reoptimization_timer.is_set || is_set(next_reoptimization_timer.operation)) leaf_name_data.push_back(next_reoptimization_timer.get_name_leafdata());
    if (next_verify_timer.is_set || is_set(next_verify_timer.operation)) leaf_name_data.push_back(next_verify_timer.get_name_leafdata());
    if (node_diverse_paths.is_set || is_set(node_diverse_paths.operation)) leaf_name_data.push_back(node_diverse_paths.get_name_leafdata());
    if (node_protected_p2p_tunnels.is_set || is_set(node_protected_p2p_tunnels.operation)) leaf_name_data.push_back(node_protected_p2p_tunnels.get_name_leafdata());
    if (node_protected_tunnels.is_set || is_set(node_protected_tunnels.operation)) leaf_name_data.push_back(node_protected_tunnels.get_name_leafdata());
    if (p2mp_head_destinations.is_set || is_set(p2mp_head_destinations.operation)) leaf_name_data.push_back(p2mp_head_destinations.get_name_leafdata());
    if (p2mp_head_tunnels.is_set || is_set(p2mp_head_tunnels.operation)) leaf_name_data.push_back(p2mp_head_tunnels.get_name_leafdata());
    if (p2mp_mid_point_s2_ls.is_set || is_set(p2mp_mid_point_s2_ls.operation)) leaf_name_data.push_back(p2mp_mid_point_s2_ls.get_name_leafdata());
    if (p2mp_tail_s2_ls.is_set || is_set(p2mp_tail_s2_ls.operation)) leaf_name_data.push_back(p2mp_tail_s2_ls.get_name_leafdata());
    if (p2p_head_destinations.is_set || is_set(p2p_head_destinations.operation)) leaf_name_data.push_back(p2p_head_destinations.get_name_leafdata());
    if (p2p_head_destinations_up.is_set || is_set(p2p_head_destinations_up.operation)) leaf_name_data.push_back(p2p_head_destinations_up.get_name_leafdata());
    if (p2p_head_tunnels.is_set || is_set(p2p_head_tunnels.operation)) leaf_name_data.push_back(p2p_head_tunnels.get_name_leafdata());
    if (p2p_mid_point_s2_ls.is_set || is_set(p2p_mid_point_s2_ls.operation)) leaf_name_data.push_back(p2p_mid_point_s2_ls.get_name_leafdata());
    if (p2p_tail_s2_ls.is_set || is_set(p2p_tail_s2_ls.operation)) leaf_name_data.push_back(p2p_tail_s2_ls.get_name_leafdata());
    if (p2p_tail_tunnels.is_set || is_set(p2p_tail_tunnels.operation)) leaf_name_data.push_back(p2p_tail_tunnels.get_name_leafdata());
    if (path_protect_configured_tunnels.is_set || is_set(path_protect_configured_tunnels.operation)) leaf_name_data.push_back(path_protect_configured_tunnels.get_name_leafdata());
    if (path_protect_configured_tunnels_standby_up.is_set || is_set(path_protect_configured_tunnels_standby_up.operation)) leaf_name_data.push_back(path_protect_configured_tunnels_standby_up.get_name_leafdata());
    if (path_protect_configured_tunnels_up.is_set || is_set(path_protect_configured_tunnels_up.operation)) leaf_name_data.push_back(path_protect_configured_tunnels_up.get_name_leafdata());
    if (pcalc_tie_breaker_type.is_set || is_set(pcalc_tie_breaker_type.operation)) leaf_name_data.push_back(pcalc_tie_breaker_type.get_name_leafdata());
    if (pcalc_tiebreaker.is_set || is_set(pcalc_tiebreaker.operation)) leaf_name_data.push_back(pcalc_tiebreaker.get_name_leafdata());
    if (proceeding_p2mp_head_s2_ls.is_set || is_set(proceeding_p2mp_head_s2_ls.operation)) leaf_name_data.push_back(proceeding_p2mp_head_s2_ls.get_name_leafdata());
    if (proceeding_p2mp_mid_point_s2_ls.is_set || is_set(proceeding_p2mp_mid_point_s2_ls.operation)) leaf_name_data.push_back(proceeding_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (proceeding_p2p_head_s2_ls.is_set || is_set(proceeding_p2p_head_s2_ls.operation)) leaf_name_data.push_back(proceeding_p2p_head_s2_ls.get_name_leafdata());
    if (proceeding_p2p_mid_point_s2_ls.is_set || is_set(proceeding_p2p_mid_point_s2_ls.operation)) leaf_name_data.push_back(proceeding_p2p_mid_point_s2_ls.get_name_leafdata());
    if (promotion_period.is_set || is_set(promotion_period.operation)) leaf_name_data.push_back(promotion_period.get_name_leafdata());
    if (protected_head_tunnels.is_set || is_set(protected_head_tunnels.operation)) leaf_name_data.push_back(protected_head_tunnels.get_name_leafdata());
    if (protected_mid_point_tunnels.is_set || is_set(protected_mid_point_tunnels.operation)) leaf_name_data.push_back(protected_mid_point_tunnels.get_name_leafdata());
    if (protected_p2mp_head_s2_ls.is_set || is_set(protected_p2mp_head_s2_ls.operation)) leaf_name_data.push_back(protected_p2mp_head_s2_ls.get_name_leafdata());
    if (protected_p2mp_mid_point_s2_ls.is_set || is_set(protected_p2mp_mid_point_s2_ls.operation)) leaf_name_data.push_back(protected_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (protected_p2p_head_s2_ls.is_set || is_set(protected_p2p_head_s2_ls.operation)) leaf_name_data.push_back(protected_p2p_head_s2_ls.get_name_leafdata());
    if (protected_p2p_head_tunnels.is_set || is_set(protected_p2p_head_tunnels.operation)) leaf_name_data.push_back(protected_p2p_head_tunnels.get_name_leafdata());
    if (protected_p2p_mid_point_s2_ls.is_set || is_set(protected_p2p_mid_point_s2_ls.operation)) leaf_name_data.push_back(protected_p2p_mid_point_s2_ls.get_name_leafdata());
    if (protected_p2p_mid_point_tunnels.is_set || is_set(protected_p2p_mid_point_tunnels.operation)) leaf_name_data.push_back(protected_p2p_mid_point_tunnels.get_name_leafdata());
    if (recovered_heads.is_set || is_set(recovered_heads.operation)) leaf_name_data.push_back(recovered_heads.get_name_leafdata());
    if (recovering_p2p_head_s2_ls.is_set || is_set(recovering_p2p_head_s2_ls.operation)) leaf_name_data.push_back(recovering_p2p_head_s2_ls.get_name_leafdata());
    if (reoptimization_period.is_set || is_set(reoptimization_period.operation)) leaf_name_data.push_back(reoptimization_period.get_name_leafdata());
    if (rerouted_head_tunnels.is_set || is_set(rerouted_head_tunnels.operation)) leaf_name_data.push_back(rerouted_head_tunnels.get_name_leafdata());
    if (rerouted_interfaces.is_set || is_set(rerouted_interfaces.operation)) leaf_name_data.push_back(rerouted_interfaces.get_name_leafdata());
    if (rerouted_mid_point_tunnels.is_set || is_set(rerouted_mid_point_tunnels.operation)) leaf_name_data.push_back(rerouted_mid_point_tunnels.get_name_leafdata());
    if (rerouted_p2mp_head_s2_ls.is_set || is_set(rerouted_p2mp_head_s2_ls.operation)) leaf_name_data.push_back(rerouted_p2mp_head_s2_ls.get_name_leafdata());
    if (rerouted_p2mp_mid_point_s2_ls.is_set || is_set(rerouted_p2mp_mid_point_s2_ls.operation)) leaf_name_data.push_back(rerouted_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (rerouted_p2p_head_s2_ls.is_set || is_set(rerouted_p2p_head_s2_ls.operation)) leaf_name_data.push_back(rerouted_p2p_head_s2_ls.get_name_leafdata());
    if (rerouted_p2p_head_tunnels.is_set || is_set(rerouted_p2p_head_tunnels.operation)) leaf_name_data.push_back(rerouted_p2p_head_tunnels.get_name_leafdata());
    if (rerouted_p2p_mid_point_s2_ls.is_set || is_set(rerouted_p2p_mid_point_s2_ls.operation)) leaf_name_data.push_back(rerouted_p2p_mid_point_s2_ls.get_name_leafdata());
    if (rerouted_p2p_mid_point_tunnels.is_set || is_set(rerouted_p2p_mid_point_tunnels.operation)) leaf_name_data.push_back(rerouted_p2p_mid_point_tunnels.get_name_leafdata());
    if (te_process_status.is_set || is_set(te_process_status.operation)) leaf_name_data.push_back(te_process_status.get_name_leafdata());
    if (tiebreaker_qualifier.is_set || is_set(tiebreaker_qualifier.operation)) leaf_name_data.push_back(tiebreaker_qualifier.get_name_leafdata());
    if (tunnel_check_period.is_set || is_set(tunnel_check_period.operation)) leaf_name_data.push_back(tunnel_check_period.get_name_leafdata());
    if (tunnel_verify_period.is_set || is_set(tunnel_verify_period.operation)) leaf_name_data.push_back(tunnel_verify_period.get_name_leafdata());
    if (up_p2mp_head_destinations.is_set || is_set(up_p2mp_head_destinations.operation)) leaf_name_data.push_back(up_p2mp_head_destinations.get_name_leafdata());
    if (up_p2mp_head_s2_ls.is_set || is_set(up_p2mp_head_s2_ls.operation)) leaf_name_data.push_back(up_p2mp_head_s2_ls.get_name_leafdata());
    if (up_p2mp_head_tunnels.is_set || is_set(up_p2mp_head_tunnels.operation)) leaf_name_data.push_back(up_p2mp_head_tunnels.get_name_leafdata());
    if (up_p2mp_mid_point_s2_ls.is_set || is_set(up_p2mp_mid_point_s2_ls.operation)) leaf_name_data.push_back(up_p2mp_mid_point_s2_ls.get_name_leafdata());
    if (up_p2mp_tail_s2_ls.is_set || is_set(up_p2mp_tail_s2_ls.operation)) leaf_name_data.push_back(up_p2mp_tail_s2_ls.get_name_leafdata());
    if (up_p2p_head_s2_ls.is_set || is_set(up_p2p_head_s2_ls.operation)) leaf_name_data.push_back(up_p2p_head_s2_ls.get_name_leafdata());
    if (up_p2p_head_tunnels.is_set || is_set(up_p2p_head_tunnels.operation)) leaf_name_data.push_back(up_p2p_head_tunnels.get_name_leafdata());
    if (up_p2p_mid_point_s2_ls.is_set || is_set(up_p2p_mid_point_s2_ls.operation)) leaf_name_data.push_back(up_p2p_mid_point_s2_ls.get_name_leafdata());
    if (up_p2p_tail_s2_ls.is_set || is_set(up_p2p_tail_s2_ls.operation)) leaf_name_data.push_back(up_p2p_tail_s2_ls.get_name_leafdata());
    if (user_defined_paths.is_set || is_set(user_defined_paths.operation)) leaf_name_data.push_back(user_defined_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-mesh-one-hop-summary")
    {
        if(auto_mesh_one_hop_summary != nullptr)
        {
            children["auto-mesh-one-hop-summary"] = auto_mesh_one_hop_summary;
        }
        else
        {
            auto_mesh_one_hop_summary = std::make_shared<MplsTe::Tunnels::Summary::AutoMeshOneHopSummary>();
            auto_mesh_one_hop_summary->parent = this;
            children["auto-mesh-one-hop-summary"] = auto_mesh_one_hop_summary;
        }
        return children.at("auto-mesh-one-hop-summary");
    }

    if(child_yang_name == "auto-mesh-summary")
    {
        if(auto_mesh_summary != nullptr)
        {
            children["auto-mesh-summary"] = auto_mesh_summary;
        }
        else
        {
            auto_mesh_summary = std::make_shared<MplsTe::Tunnels::Summary::AutoMeshSummary>();
            auto_mesh_summary->parent = this;
            children["auto-mesh-summary"] = auto_mesh_summary;
        }
        return children.at("auto-mesh-summary");
    }

    if(child_yang_name == "auto-tun-server-summary")
    {
        if(auto_tun_server_summary != nullptr)
        {
            children["auto-tun-server-summary"] = auto_tun_server_summary;
        }
        else
        {
            auto_tun_server_summary = std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary>();
            auto_tun_server_summary->parent = this;
            children["auto-tun-server-summary"] = auto_tun_server_summary;
        }
        return children.at("auto-tun-server-summary");
    }

    if(child_yang_name == "autobackup-summary")
    {
        if(autobackup_summary != nullptr)
        {
            children["autobackup-summary"] = autobackup_summary;
        }
        else
        {
            autobackup_summary = std::make_shared<MplsTe::Tunnels::Summary::AutobackupSummary>();
            autobackup_summary->parent = this;
            children["autobackup-summary"] = autobackup_summary;
        }
        return children.at("autobackup-summary");
    }

    if(child_yang_name == "current-tunnel-convergence-summary")
    {
        if(current_tunnel_convergence_summary != nullptr)
        {
            children["current-tunnel-convergence-summary"] = current_tunnel_convergence_summary;
        }
        else
        {
            current_tunnel_convergence_summary = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary>();
            current_tunnel_convergence_summary->parent = this;
            children["current-tunnel-convergence-summary"] = current_tunnel_convergence_summary;
        }
        return children.at("current-tunnel-convergence-summary");
    }

    if(child_yang_name == "gmpls-nni-summary")
    {
        if(gmpls_nni_summary != nullptr)
        {
            children["gmpls-nni-summary"] = gmpls_nni_summary;
        }
        else
        {
            gmpls_nni_summary = std::make_shared<MplsTe::Tunnels::Summary::GmplsNniSummary>();
            gmpls_nni_summary->parent = this;
            children["gmpls-nni-summary"] = gmpls_nni_summary;
        }
        return children.at("gmpls-nni-summary");
    }

    if(child_yang_name == "gmpls-uni-summary")
    {
        if(gmpls_uni_summary != nullptr)
        {
            children["gmpls-uni-summary"] = gmpls_uni_summary;
        }
        else
        {
            gmpls_uni_summary = std::make_shared<MplsTe::Tunnels::Summary::GmplsUniSummary>();
            gmpls_uni_summary->parent = this;
            children["gmpls-uni-summary"] = gmpls_uni_summary;
        }
        return children.at("gmpls-uni-summary");
    }

    if(child_yang_name == "last-tunnel-convergence-summary")
    {
        if(last_tunnel_convergence_summary != nullptr)
        {
            children["last-tunnel-convergence-summary"] = last_tunnel_convergence_summary;
        }
        else
        {
            last_tunnel_convergence_summary = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary>();
            last_tunnel_convergence_summary->parent = this;
            children["last-tunnel-convergence-summary"] = last_tunnel_convergence_summary;
        }
        return children.at("last-tunnel-convergence-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::get_children()
{
    if(children.find("auto-mesh-one-hop-summary") == children.end())
    {
        if(auto_mesh_one_hop_summary != nullptr)
        {
            children["auto-mesh-one-hop-summary"] = auto_mesh_one_hop_summary;
        }
    }

    if(children.find("auto-mesh-summary") == children.end())
    {
        if(auto_mesh_summary != nullptr)
        {
            children["auto-mesh-summary"] = auto_mesh_summary;
        }
    }

    if(children.find("auto-tun-server-summary") == children.end())
    {
        if(auto_tun_server_summary != nullptr)
        {
            children["auto-tun-server-summary"] = auto_tun_server_summary;
        }
    }

    if(children.find("autobackup-summary") == children.end())
    {
        if(autobackup_summary != nullptr)
        {
            children["autobackup-summary"] = autobackup_summary;
        }
    }

    if(children.find("current-tunnel-convergence-summary") == children.end())
    {
        if(current_tunnel_convergence_summary != nullptr)
        {
            children["current-tunnel-convergence-summary"] = current_tunnel_convergence_summary;
        }
    }

    if(children.find("gmpls-nni-summary") == children.end())
    {
        if(gmpls_nni_summary != nullptr)
        {
            children["gmpls-nni-summary"] = gmpls_nni_summary;
        }
    }

    if(children.find("gmpls-uni-summary") == children.end())
    {
        if(gmpls_uni_summary != nullptr)
        {
            children["gmpls-uni-summary"] = gmpls_uni_summary;
        }
    }

    if(children.find("last-tunnel-convergence-summary") == children.end())
    {
        if(last_tunnel_convergence_summary != nullptr)
        {
            children["last-tunnel-convergence-summary"] = last_tunnel_convergence_summary;
        }
    }

    return children;
}

void MplsTe::Tunnels::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-heads")
    {
        activated_heads = value;
    }
    if(value_path == "auto-bandwidth-collection-period")
    {
        auto_bandwidth_collection_period = value;
    }
    if(value_path == "auto-bandwidth-tunnels")
    {
        auto_bandwidth_tunnels = value;
    }
    if(value_path == "backup-tunnels")
    {
        backup_tunnels = value;
    }
    if(value_path == "backups-assigned")
    {
        backups_assigned = value;
    }
    if(value_path == "bidir-head-ls-ps-associated")
    {
        bidir_head_ls_ps_associated = value;
    }
    if(value_path == "bidir-head-ls-ps-proceeding")
    {
        bidir_head_ls_ps_proceeding = value;
    }
    if(value_path == "bidir-head-ls-ps-standby")
    {
        bidir_head_ls_ps_standby = value;
    }
    if(value_path == "bidir-head-ls-ps-up")
    {
        bidir_head_ls_ps_up = value;
    }
    if(value_path == "bidir-head-tunnels")
    {
        bidir_head_tunnels = value;
    }
    if(value_path == "bidir-head-tunnels-associated")
    {
        bidir_head_tunnels_associated = value;
    }
    if(value_path == "bidir-head-tunnels-corouted")
    {
        bidir_head_tunnels_corouted = value;
    }
    if(value_path == "bidir-head-tunnels-up")
    {
        bidir_head_tunnels_up = value;
    }
    if(value_path == "bidir-mid-ls-ps-associated")
    {
        bidir_mid_ls_ps_associated = value;
    }
    if(value_path == "bidir-mid-ls-ps-proceeding")
    {
        bidir_mid_ls_ps_proceeding = value;
    }
    if(value_path == "bidir-mid-ls-ps-standby")
    {
        bidir_mid_ls_ps_standby = value;
    }
    if(value_path == "bidir-mid-tunnels")
    {
        bidir_mid_tunnels = value;
    }
    if(value_path == "bidir-mid-tunnels-up")
    {
        bidir_mid_tunnels_up = value;
    }
    if(value_path == "bidir-tail-ls-ps")
    {
        bidir_tail_ls_ps = value;
    }
    if(value_path == "bidir-tail-ls-ps-associated")
    {
        bidir_tail_ls_ps_associated = value;
    }
    if(value_path == "bidir-tail-ls-ps-corouted")
    {
        bidir_tail_ls_ps_corouted = value;
    }
    if(value_path == "bidir-tail-ls-ps-proceeding")
    {
        bidir_tail_ls_ps_proceeding = value;
    }
    if(value_path == "bidir-tail-ls-ps-standby")
    {
        bidir_tail_ls_ps_standby = value;
    }
    if(value_path == "bidir-tail-ls-ps-up")
    {
        bidir_tail_ls_ps_up = value;
    }
    if(value_path == "bw-protected-p2mp-s2-ls")
    {
        bw_protected_p2mp_s2_ls = value;
    }
    if(value_path == "bw-protected-p2p-s2-ls")
    {
        bw_protected_p2p_s2_ls = value;
    }
    if(value_path == "bw-protected-p2p-tunnels")
    {
        bw_protected_p2p_tunnels = value;
    }
    if(value_path == "bw-protected-tunnels")
    {
        bw_protected_tunnels = value;
    }
    if(value_path == "deactivated-heads")
    {
        deactivated_heads = value;
    }
    if(value_path == "dynamic-up-p2p-head-tunnels")
    {
        dynamic_up_p2p_head_tunnels = value;
    }
    if(value_path == "frr-config-p2mp-head-tunnels")
    {
        frr_config_p2mp_head_tunnels = value;
    }
    if(value_path == "frr-config-p2p-head-tunnels")
    {
        frr_config_p2p_head_tunnels = value;
    }
    if(value_path == "frr-head-tunnels")
    {
        frr_head_tunnels = value;
    }
    if(value_path == "frr-mid-point-tunnels")
    {
        frr_mid_point_tunnels = value;
    }
    if(value_path == "frr-p2mp-head-s2-ls")
    {
        frr_p2mp_head_s2_ls = value;
    }
    if(value_path == "frr-p2mp-mid-point-s2-ls")
    {
        frr_p2mp_mid_point_s2_ls = value;
    }
    if(value_path == "frr-p2p-head-s2-ls")
    {
        frr_p2p_head_s2_ls = value;
    }
    if(value_path == "frr-p2p-head-tunnels")
    {
        frr_p2p_head_tunnels = value;
    }
    if(value_path == "frr-p2p-mid-point-s2-ls")
    {
        frr_p2p_mid_point_s2_ls = value;
    }
    if(value_path == "frr-p2p-mid-point-tunnels")
    {
        frr_p2p_mid_point_tunnels = value;
    }
    if(value_path == "frr-protected-interfaces")
    {
        frr_protected_interfaces = value;
    }
    if(value_path == "is-forwarding-enabled")
    {
        is_forwarding_enabled = value;
    }
    if(value_path == "is-periodic-reoptimization-on")
    {
        is_periodic_reoptimization_on = value;
    }
    if(value_path == "is-promotion-on")
    {
        is_promotion_on = value;
    }
    if(value_path == "is-rsvp-process-enabled")
    {
        is_rsvp_process_enabled = value;
    }
    if(value_path == "link-and-node-diverse-paths")
    {
        link_and_node_diverse_paths = value;
    }
    if(value_path == "link-diverse-paths")
    {
        link_diverse_paths = value;
    }
    if(value_path == "link-protected-p2mp-s2-ls")
    {
        link_protected_p2mp_s2_ls = value;
    }
    if(value_path == "link-protected-p2p-s2-ls")
    {
        link_protected_p2p_s2_ls = value;
    }
    if(value_path == "link-protected-p2p-tunnels")
    {
        link_protected_p2p_tunnels = value;
    }
    if(value_path == "link-protected-tunnels")
    {
        link_protected_tunnels = value;
    }
    if(value_path == "next-check-time")
    {
        next_check_time = value;
    }
    if(value_path == "next-promotion-timer")
    {
        next_promotion_timer = value;
    }
    if(value_path == "next-reoptimization-timer")
    {
        next_reoptimization_timer = value;
    }
    if(value_path == "next-verify-timer")
    {
        next_verify_timer = value;
    }
    if(value_path == "node-diverse-paths")
    {
        node_diverse_paths = value;
    }
    if(value_path == "node-protected-p2p-tunnels")
    {
        node_protected_p2p_tunnels = value;
    }
    if(value_path == "node-protected-tunnels")
    {
        node_protected_tunnels = value;
    }
    if(value_path == "p2mp-head-destinations")
    {
        p2mp_head_destinations = value;
    }
    if(value_path == "p2mp-head-tunnels")
    {
        p2mp_head_tunnels = value;
    }
    if(value_path == "p2mp-mid-point-s2-ls")
    {
        p2mp_mid_point_s2_ls = value;
    }
    if(value_path == "p2mp-tail-s2-ls")
    {
        p2mp_tail_s2_ls = value;
    }
    if(value_path == "p2p-head-destinations")
    {
        p2p_head_destinations = value;
    }
    if(value_path == "p2p-head-destinations-up")
    {
        p2p_head_destinations_up = value;
    }
    if(value_path == "p2p-head-tunnels")
    {
        p2p_head_tunnels = value;
    }
    if(value_path == "p2p-mid-point-s2-ls")
    {
        p2p_mid_point_s2_ls = value;
    }
    if(value_path == "p2p-tail-s2-ls")
    {
        p2p_tail_s2_ls = value;
    }
    if(value_path == "p2p-tail-tunnels")
    {
        p2p_tail_tunnels = value;
    }
    if(value_path == "path-protect-configured-tunnels")
    {
        path_protect_configured_tunnels = value;
    }
    if(value_path == "path-protect-configured-tunnels-standby-up")
    {
        path_protect_configured_tunnels_standby_up = value;
    }
    if(value_path == "path-protect-configured-tunnels-up")
    {
        path_protect_configured_tunnels_up = value;
    }
    if(value_path == "pcalc-tie-breaker-type")
    {
        pcalc_tie_breaker_type = value;
    }
    if(value_path == "pcalc-tiebreaker")
    {
        pcalc_tiebreaker = value;
    }
    if(value_path == "proceeding-p2mp-head-s2-ls")
    {
        proceeding_p2mp_head_s2_ls = value;
    }
    if(value_path == "proceeding-p2mp-mid-point-s2-ls")
    {
        proceeding_p2mp_mid_point_s2_ls = value;
    }
    if(value_path == "proceeding-p2p-head-s2-ls")
    {
        proceeding_p2p_head_s2_ls = value;
    }
    if(value_path == "proceeding-p2p-mid-point-s2-ls")
    {
        proceeding_p2p_mid_point_s2_ls = value;
    }
    if(value_path == "promotion-period")
    {
        promotion_period = value;
    }
    if(value_path == "protected-head-tunnels")
    {
        protected_head_tunnels = value;
    }
    if(value_path == "protected-mid-point-tunnels")
    {
        protected_mid_point_tunnels = value;
    }
    if(value_path == "protected-p2mp-head-s2-ls")
    {
        protected_p2mp_head_s2_ls = value;
    }
    if(value_path == "protected-p2mp-mid-point-s2-ls")
    {
        protected_p2mp_mid_point_s2_ls = value;
    }
    if(value_path == "protected-p2p-head-s2-ls")
    {
        protected_p2p_head_s2_ls = value;
    }
    if(value_path == "protected-p2p-head-tunnels")
    {
        protected_p2p_head_tunnels = value;
    }
    if(value_path == "protected-p2p-mid-point-s2-ls")
    {
        protected_p2p_mid_point_s2_ls = value;
    }
    if(value_path == "protected-p2p-mid-point-tunnels")
    {
        protected_p2p_mid_point_tunnels = value;
    }
    if(value_path == "recovered-heads")
    {
        recovered_heads = value;
    }
    if(value_path == "recovering-p2p-head-s2-ls")
    {
        recovering_p2p_head_s2_ls = value;
    }
    if(value_path == "reoptimization-period")
    {
        reoptimization_period = value;
    }
    if(value_path == "rerouted-head-tunnels")
    {
        rerouted_head_tunnels = value;
    }
    if(value_path == "rerouted-interfaces")
    {
        rerouted_interfaces = value;
    }
    if(value_path == "rerouted-mid-point-tunnels")
    {
        rerouted_mid_point_tunnels = value;
    }
    if(value_path == "rerouted-p2mp-head-s2-ls")
    {
        rerouted_p2mp_head_s2_ls = value;
    }
    if(value_path == "rerouted-p2mp-mid-point-s2-ls")
    {
        rerouted_p2mp_mid_point_s2_ls = value;
    }
    if(value_path == "rerouted-p2p-head-s2-ls")
    {
        rerouted_p2p_head_s2_ls = value;
    }
    if(value_path == "rerouted-p2p-head-tunnels")
    {
        rerouted_p2p_head_tunnels = value;
    }
    if(value_path == "rerouted-p2p-mid-point-s2-ls")
    {
        rerouted_p2p_mid_point_s2_ls = value;
    }
    if(value_path == "rerouted-p2p-mid-point-tunnels")
    {
        rerouted_p2p_mid_point_tunnels = value;
    }
    if(value_path == "te-process-status")
    {
        te_process_status = value;
    }
    if(value_path == "tiebreaker-qualifier")
    {
        tiebreaker_qualifier = value;
    }
    if(value_path == "tunnel-check-period")
    {
        tunnel_check_period = value;
    }
    if(value_path == "tunnel-verify-period")
    {
        tunnel_verify_period = value;
    }
    if(value_path == "up-p2mp-head-destinations")
    {
        up_p2mp_head_destinations = value;
    }
    if(value_path == "up-p2mp-head-s2-ls")
    {
        up_p2mp_head_s2_ls = value;
    }
    if(value_path == "up-p2mp-head-tunnels")
    {
        up_p2mp_head_tunnels = value;
    }
    if(value_path == "up-p2mp-mid-point-s2-ls")
    {
        up_p2mp_mid_point_s2_ls = value;
    }
    if(value_path == "up-p2mp-tail-s2-ls")
    {
        up_p2mp_tail_s2_ls = value;
    }
    if(value_path == "up-p2p-head-s2-ls")
    {
        up_p2p_head_s2_ls = value;
    }
    if(value_path == "up-p2p-head-tunnels")
    {
        up_p2p_head_tunnels = value;
    }
    if(value_path == "up-p2p-mid-point-s2-ls")
    {
        up_p2p_mid_point_s2_ls = value;
    }
    if(value_path == "up-p2p-tail-s2-ls")
    {
        up_p2p_tail_s2_ls = value;
    }
    if(value_path == "user-defined-paths")
    {
        user_defined_paths = value;
    }
}

MplsTe::Tunnels::Summary::AutobackupSummary::AutobackupSummary()
    :
    autobackups{YType::uint32, "autobackups"},
    down_autobackups{YType::uint32, "down-autobackups"},
    next_hop_autobackup_protected_ls_ps{YType::uint32, "next-hop-autobackup-protected-ls-ps"},
    next_hop_autobackup_protected_s2_ls{YType::uint32, "next-hop-autobackup-protected-s2-ls"},
    next_hop_autobackup_protected_s2l_families{YType::uint32, "next-hop-autobackup-protected-s2l-families"},
    next_hop_autobackups{YType::uint32, "next-hop-autobackups"},
    next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-hop-srlg-autobackup-protected-ls-ps"},
    next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-hop-srlg-autobackup-protected-s2-ls"},
    next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-hop-srlg-autobackup-protected-s2l-families"},
    next_next_hop_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-autobackup-protected-ls-ps"},
    next_next_hop_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-autobackup-protected-s2-ls"},
    next_next_hop_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-autobackup-protected-s2l-families"},
    next_next_hop_autobackups{YType::uint32, "next-next-hop-autobackups"},
    next_next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-srlg-autobackup-protected-ls-ps"},
    next_next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2-ls"},
    next_next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2l-families"},
    srlg_preferred_autobackups{YType::uint32, "srlg-preferred-autobackups"},
    srlg_strict_autobackups{YType::uint32, "srlg-strict-autobackups"},
    srlg_weighted_autobackups{YType::uint32, "srlg-weighted-autobackups"},
    unused_autobackups{YType::uint32, "unused-autobackups"},
    up_autobackups{YType::uint32, "up-autobackups"}
{
    yang_name = "autobackup-summary"; yang_parent_name = "summary";
}

MplsTe::Tunnels::Summary::AutobackupSummary::~AutobackupSummary()
{
}

bool MplsTe::Tunnels::Summary::AutobackupSummary::has_data() const
{
    return autobackups.is_set
	|| down_autobackups.is_set
	|| next_hop_autobackup_protected_ls_ps.is_set
	|| next_hop_autobackup_protected_s2_ls.is_set
	|| next_hop_autobackup_protected_s2l_families.is_set
	|| next_hop_autobackups.is_set
	|| next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackup_protected_ls_ps.is_set
	|| next_next_hop_autobackup_protected_s2_ls.is_set
	|| next_next_hop_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackups.is_set
	|| next_next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| srlg_preferred_autobackups.is_set
	|| srlg_strict_autobackups.is_set
	|| srlg_weighted_autobackups.is_set
	|| unused_autobackups.is_set
	|| up_autobackups.is_set;
}

bool MplsTe::Tunnels::Summary::AutobackupSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(autobackups.operation)
	|| is_set(down_autobackups.operation)
	|| is_set(next_hop_autobackup_protected_ls_ps.operation)
	|| is_set(next_hop_autobackup_protected_s2_ls.operation)
	|| is_set(next_hop_autobackup_protected_s2l_families.operation)
	|| is_set(next_hop_autobackups.operation)
	|| is_set(next_hop_srlg_autobackup_protected_ls_ps.operation)
	|| is_set(next_hop_srlg_autobackup_protected_s2_ls.operation)
	|| is_set(next_hop_srlg_autobackup_protected_s2l_families.operation)
	|| is_set(next_next_hop_autobackup_protected_ls_ps.operation)
	|| is_set(next_next_hop_autobackup_protected_s2_ls.operation)
	|| is_set(next_next_hop_autobackup_protected_s2l_families.operation)
	|| is_set(next_next_hop_autobackups.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_ls_ps.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_s2_ls.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_s2l_families.operation)
	|| is_set(srlg_preferred_autobackups.operation)
	|| is_set(srlg_strict_autobackups.operation)
	|| is_set(srlg_weighted_autobackups.operation)
	|| is_set(unused_autobackups.operation)
	|| is_set(up_autobackups.operation);
}

std::string MplsTe::Tunnels::Summary::AutobackupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autobackup-summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::AutobackupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autobackups.is_set || is_set(autobackups.operation)) leaf_name_data.push_back(autobackups.get_name_leafdata());
    if (down_autobackups.is_set || is_set(down_autobackups.operation)) leaf_name_data.push_back(down_autobackups.get_name_leafdata());
    if (next_hop_autobackup_protected_ls_ps.is_set || is_set(next_hop_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_autobackup_protected_s2_ls.is_set || is_set(next_hop_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_autobackup_protected_s2l_families.is_set || is_set(next_hop_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_autobackups.is_set || is_set(next_hop_autobackups.operation)) leaf_name_data.push_back(next_hop_autobackups.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_hop_srlg_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_hop_srlg_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_hop_srlg_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackups.is_set || is_set(next_next_hop_autobackups.operation)) leaf_name_data.push_back(next_next_hop_autobackups.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_srlg_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (srlg_preferred_autobackups.is_set || is_set(srlg_preferred_autobackups.operation)) leaf_name_data.push_back(srlg_preferred_autobackups.get_name_leafdata());
    if (srlg_strict_autobackups.is_set || is_set(srlg_strict_autobackups.operation)) leaf_name_data.push_back(srlg_strict_autobackups.get_name_leafdata());
    if (srlg_weighted_autobackups.is_set || is_set(srlg_weighted_autobackups.operation)) leaf_name_data.push_back(srlg_weighted_autobackups.get_name_leafdata());
    if (unused_autobackups.is_set || is_set(unused_autobackups.operation)) leaf_name_data.push_back(unused_autobackups.get_name_leafdata());
    if (up_autobackups.is_set || is_set(up_autobackups.operation)) leaf_name_data.push_back(up_autobackups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::AutobackupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::AutobackupSummary::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::AutobackupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autobackups")
    {
        autobackups = value;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups = value;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families = value;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups = value;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups = value;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups = value;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups = value;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups = value;
    }
}

MplsTe::Tunnels::Summary::AutoMeshSummary::AutoMeshSummary()
    :
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{
    yang_name = "auto-mesh-summary"; yang_parent_name = "summary";
}

MplsTe::Tunnels::Summary::AutoMeshSummary::~AutoMeshSummary()
{
}

bool MplsTe::Tunnels::Summary::AutoMeshSummary::has_data() const
{
    return auto_mesh_destinations.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTe::Tunnels::Summary::AutoMeshSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_mesh_destinations.operation)
	|| is_set(auto_mesh_groups.operation)
	|| is_set(auto_mesh_tunnels.operation)
	|| is_set(down_auto_mesh_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(up_auto_mesh_tunnels.operation);
}

std::string MplsTe::Tunnels::Summary::AutoMeshSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::AutoMeshSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.operation)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.operation)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.operation)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::AutoMeshSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::AutoMeshSummary::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::AutoMeshSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
    }
}

MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::AutoMeshOneHopSummary()
    :
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"}
{
    yang_name = "auto-mesh-one-hop-summary"; yang_parent_name = "summary";
}

MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::~AutoMeshOneHopSummary()
{
}

bool MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::has_data() const
{
    return auto_mesh_one_hop_destinations.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set;
}

bool MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_mesh_one_hop_destinations.operation)
	|| is_set(auto_mesh_one_hop_groups.operation)
	|| is_set(auto_mesh_one_hop_tunnels.operation)
	|| is_set(down_auto_mesh_one_hop_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(up_auto_mesh_one_hop_tunnels.operation);
}

std::string MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-one-hop-summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.operation)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.operation)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::AutoMeshOneHopSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
    }
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
    }
}

MplsTe::Tunnels::Summary::GmplsUniSummary::GmplsUniSummary()
    :
    heads_down{YType::uint32, "heads-down"},
    heads_up{YType::uint32, "heads-up"},
    tails_down{YType::uint32, "tails-down"},
    tails_up{YType::uint32, "tails-up"}
{
    yang_name = "gmpls-uni-summary"; yang_parent_name = "summary";
}

MplsTe::Tunnels::Summary::GmplsUniSummary::~GmplsUniSummary()
{
}

bool MplsTe::Tunnels::Summary::GmplsUniSummary::has_data() const
{
    return heads_down.is_set
	|| heads_up.is_set
	|| tails_down.is_set
	|| tails_up.is_set;
}

bool MplsTe::Tunnels::Summary::GmplsUniSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(heads_down.operation)
	|| is_set(heads_up.operation)
	|| is_set(tails_down.operation)
	|| is_set(tails_up.operation);
}

std::string MplsTe::Tunnels::Summary::GmplsUniSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni-summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::GmplsUniSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heads_down.is_set || is_set(heads_down.operation)) leaf_name_data.push_back(heads_down.get_name_leafdata());
    if (heads_up.is_set || is_set(heads_up.operation)) leaf_name_data.push_back(heads_up.get_name_leafdata());
    if (tails_down.is_set || is_set(tails_down.operation)) leaf_name_data.push_back(tails_down.get_name_leafdata());
    if (tails_up.is_set || is_set(tails_up.operation)) leaf_name_data.push_back(tails_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::GmplsUniSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::GmplsUniSummary::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::GmplsUniSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "heads-down")
    {
        heads_down = value;
    }
    if(value_path == "heads-up")
    {
        heads_up = value;
    }
    if(value_path == "tails-down")
    {
        tails_down = value;
    }
    if(value_path == "tails-up")
    {
        tails_up = value;
    }
}

MplsTe::Tunnels::Summary::GmplsNniSummary::GmplsNniSummary()
    :
    heads_down{YType::uint32, "heads-down"},
    heads_up{YType::uint32, "heads-up"},
    mids_down{YType::uint32, "mids-down"},
    mids_up{YType::uint32, "mids-up"},
    tails_down{YType::uint32, "tails-down"},
    tails_up{YType::uint32, "tails-up"}
{
    yang_name = "gmpls-nni-summary"; yang_parent_name = "summary";
}

MplsTe::Tunnels::Summary::GmplsNniSummary::~GmplsNniSummary()
{
}

bool MplsTe::Tunnels::Summary::GmplsNniSummary::has_data() const
{
    return heads_down.is_set
	|| heads_up.is_set
	|| mids_down.is_set
	|| mids_up.is_set
	|| tails_down.is_set
	|| tails_up.is_set;
}

bool MplsTe::Tunnels::Summary::GmplsNniSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(heads_down.operation)
	|| is_set(heads_up.operation)
	|| is_set(mids_down.operation)
	|| is_set(mids_up.operation)
	|| is_set(tails_down.operation)
	|| is_set(tails_up.operation);
}

std::string MplsTe::Tunnels::Summary::GmplsNniSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-nni-summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::GmplsNniSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heads_down.is_set || is_set(heads_down.operation)) leaf_name_data.push_back(heads_down.get_name_leafdata());
    if (heads_up.is_set || is_set(heads_up.operation)) leaf_name_data.push_back(heads_up.get_name_leafdata());
    if (mids_down.is_set || is_set(mids_down.operation)) leaf_name_data.push_back(mids_down.get_name_leafdata());
    if (mids_up.is_set || is_set(mids_up.operation)) leaf_name_data.push_back(mids_up.get_name_leafdata());
    if (tails_down.is_set || is_set(tails_down.operation)) leaf_name_data.push_back(tails_down.get_name_leafdata());
    if (tails_up.is_set || is_set(tails_up.operation)) leaf_name_data.push_back(tails_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::GmplsNniSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::GmplsNniSummary::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::GmplsNniSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "heads-down")
    {
        heads_down = value;
    }
    if(value_path == "heads-up")
    {
        heads_up = value;
    }
    if(value_path == "mids-down")
    {
        mids_down = value;
    }
    if(value_path == "mids-up")
    {
        mids_up = value;
    }
    if(value_path == "tails-down")
    {
        tails_down = value;
    }
    if(value_path == "tails-up")
    {
        tails_up = value;
    }
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::CurrentTunnelConvergenceSummary()
    :
    tunnel_converged_count{YType::uint32, "tunnel-converged-count"},
    tunnel_frr_active_count{YType::uint32, "tunnel-frr-active-count"},
    tunnel_frr_total_count{YType::uint32, "tunnel-frr-total-count"},
    tunnel_total_convergence_complete_time{YType::uint64, "tunnel-total-convergence-complete-time"}
    	,
    table_frr_trigger(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger>())
	,table_label_rewrite(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite>())
	,table_path_out(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut>())
	,table_pcalc(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc>())
	,table_resv_in(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn>())
	,table_tunnel_rewrite(std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite>())
{
    table_frr_trigger->parent = this;
    children["table-frr-trigger"] = table_frr_trigger;

    table_label_rewrite->parent = this;
    children["table-label-rewrite"] = table_label_rewrite;

    table_path_out->parent = this;
    children["table-path-out"] = table_path_out;

    table_pcalc->parent = this;
    children["table-pcalc"] = table_pcalc;

    table_resv_in->parent = this;
    children["table-resv-in"] = table_resv_in;

    table_tunnel_rewrite->parent = this;
    children["table-tunnel-rewrite"] = table_tunnel_rewrite;

    yang_name = "current-tunnel-convergence-summary"; yang_parent_name = "summary";
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::~CurrentTunnelConvergenceSummary()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::has_data() const
{
    return tunnel_converged_count.is_set
	|| tunnel_frr_active_count.is_set
	|| tunnel_frr_total_count.is_set
	|| tunnel_total_convergence_complete_time.is_set
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_data())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_data())
	|| (table_path_out !=  nullptr && table_path_out->has_data())
	|| (table_pcalc !=  nullptr && table_pcalc->has_data())
	|| (table_resv_in !=  nullptr && table_resv_in->has_data())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_data());
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_converged_count.operation)
	|| is_set(tunnel_frr_active_count.operation)
	|| is_set(tunnel_frr_total_count.operation)
	|| is_set(tunnel_total_convergence_complete_time.operation)
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_operation())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_operation())
	|| (table_path_out !=  nullptr && table_path_out->has_operation())
	|| (table_pcalc !=  nullptr && table_pcalc->has_operation())
	|| (table_resv_in !=  nullptr && table_resv_in->has_operation())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_operation());
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-tunnel-convergence-summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_converged_count.is_set || is_set(tunnel_converged_count.operation)) leaf_name_data.push_back(tunnel_converged_count.get_name_leafdata());
    if (tunnel_frr_active_count.is_set || is_set(tunnel_frr_active_count.operation)) leaf_name_data.push_back(tunnel_frr_active_count.get_name_leafdata());
    if (tunnel_frr_total_count.is_set || is_set(tunnel_frr_total_count.operation)) leaf_name_data.push_back(tunnel_frr_total_count.get_name_leafdata());
    if (tunnel_total_convergence_complete_time.is_set || is_set(tunnel_total_convergence_complete_time.operation)) leaf_name_data.push_back(tunnel_total_convergence_complete_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "table-frr-trigger")
    {
        if(table_frr_trigger != nullptr)
        {
            children["table-frr-trigger"] = table_frr_trigger;
        }
        else
        {
            table_frr_trigger = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger>();
            table_frr_trigger->parent = this;
            children["table-frr-trigger"] = table_frr_trigger;
        }
        return children.at("table-frr-trigger");
    }

    if(child_yang_name == "table-label-rewrite")
    {
        if(table_label_rewrite != nullptr)
        {
            children["table-label-rewrite"] = table_label_rewrite;
        }
        else
        {
            table_label_rewrite = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite>();
            table_label_rewrite->parent = this;
            children["table-label-rewrite"] = table_label_rewrite;
        }
        return children.at("table-label-rewrite");
    }

    if(child_yang_name == "table-path-out")
    {
        if(table_path_out != nullptr)
        {
            children["table-path-out"] = table_path_out;
        }
        else
        {
            table_path_out = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut>();
            table_path_out->parent = this;
            children["table-path-out"] = table_path_out;
        }
        return children.at("table-path-out");
    }

    if(child_yang_name == "table-pcalc")
    {
        if(table_pcalc != nullptr)
        {
            children["table-pcalc"] = table_pcalc;
        }
        else
        {
            table_pcalc = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc>();
            table_pcalc->parent = this;
            children["table-pcalc"] = table_pcalc;
        }
        return children.at("table-pcalc");
    }

    if(child_yang_name == "table-resv-in")
    {
        if(table_resv_in != nullptr)
        {
            children["table-resv-in"] = table_resv_in;
        }
        else
        {
            table_resv_in = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn>();
            table_resv_in->parent = this;
            children["table-resv-in"] = table_resv_in;
        }
        return children.at("table-resv-in");
    }

    if(child_yang_name == "table-tunnel-rewrite")
    {
        if(table_tunnel_rewrite != nullptr)
        {
            children["table-tunnel-rewrite"] = table_tunnel_rewrite;
        }
        else
        {
            table_tunnel_rewrite = std::make_shared<MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite>();
            table_tunnel_rewrite->parent = this;
            children["table-tunnel-rewrite"] = table_tunnel_rewrite;
        }
        return children.at("table-tunnel-rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::get_children()
{
    if(children.find("table-frr-trigger") == children.end())
    {
        if(table_frr_trigger != nullptr)
        {
            children["table-frr-trigger"] = table_frr_trigger;
        }
    }

    if(children.find("table-label-rewrite") == children.end())
    {
        if(table_label_rewrite != nullptr)
        {
            children["table-label-rewrite"] = table_label_rewrite;
        }
    }

    if(children.find("table-path-out") == children.end())
    {
        if(table_path_out != nullptr)
        {
            children["table-path-out"] = table_path_out;
        }
    }

    if(children.find("table-pcalc") == children.end())
    {
        if(table_pcalc != nullptr)
        {
            children["table-pcalc"] = table_pcalc;
        }
    }

    if(children.find("table-resv-in") == children.end())
    {
        if(table_resv_in != nullptr)
        {
            children["table-resv-in"] = table_resv_in;
        }
    }

    if(children.find("table-tunnel-rewrite") == children.end())
    {
        if(table_tunnel_rewrite != nullptr)
        {
            children["table-tunnel-rewrite"] = table_tunnel_rewrite;
        }
    }

    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count = value;
    }
    if(value_path == "tunnel-frr-active-count")
    {
        tunnel_frr_active_count = value;
    }
    if(value_path == "tunnel-frr-total-count")
    {
        tunnel_frr_total_count = value;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time = value;
    }
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::TablePathOut()
{
    yang_name = "table-path-out"; yang_parent_name = "current-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::~TablePathOut()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-path-out";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::TableResvIn()
{
    yang_name = "table-resv-in"; yang_parent_name = "current-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::~TableResvIn()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-resv-in";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::TableLabelRewrite()
{
    yang_name = "table-label-rewrite"; yang_parent_name = "current-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::~TableLabelRewrite()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-label-rewrite";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::TablePcalc()
{
    yang_name = "table-pcalc"; yang_parent_name = "current-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::~TablePcalc()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-pcalc";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::TableTunnelRewrite()
{
    yang_name = "table-tunnel-rewrite"; yang_parent_name = "current-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::~TableTunnelRewrite()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::TableFrrTrigger()
{
    yang_name = "table-frr-trigger"; yang_parent_name = "current-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::~TableFrrTrigger()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-frr-trigger";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::LastTunnelConvergenceSummary()
    :
    tunnel_converged_count{YType::uint32, "tunnel-converged-count"},
    tunnel_frr_active_count{YType::uint32, "tunnel-frr-active-count"},
    tunnel_frr_total_count{YType::uint32, "tunnel-frr-total-count"},
    tunnel_total_convergence_complete_time{YType::uint64, "tunnel-total-convergence-complete-time"}
    	,
    table_frr_trigger(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger>())
	,table_label_rewrite(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite>())
	,table_path_out(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut>())
	,table_pcalc(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc>())
	,table_resv_in(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn>())
	,table_tunnel_rewrite(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite>())
{
    table_frr_trigger->parent = this;
    children["table-frr-trigger"] = table_frr_trigger;

    table_label_rewrite->parent = this;
    children["table-label-rewrite"] = table_label_rewrite;

    table_path_out->parent = this;
    children["table-path-out"] = table_path_out;

    table_pcalc->parent = this;
    children["table-pcalc"] = table_pcalc;

    table_resv_in->parent = this;
    children["table-resv-in"] = table_resv_in;

    table_tunnel_rewrite->parent = this;
    children["table-tunnel-rewrite"] = table_tunnel_rewrite;

    yang_name = "last-tunnel-convergence-summary"; yang_parent_name = "summary";
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::~LastTunnelConvergenceSummary()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::has_data() const
{
    return tunnel_converged_count.is_set
	|| tunnel_frr_active_count.is_set
	|| tunnel_frr_total_count.is_set
	|| tunnel_total_convergence_complete_time.is_set
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_data())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_data())
	|| (table_path_out !=  nullptr && table_path_out->has_data())
	|| (table_pcalc !=  nullptr && table_pcalc->has_data())
	|| (table_resv_in !=  nullptr && table_resv_in->has_data())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_data());
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_converged_count.operation)
	|| is_set(tunnel_frr_active_count.operation)
	|| is_set(tunnel_frr_total_count.operation)
	|| is_set(tunnel_total_convergence_complete_time.operation)
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_operation())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_operation())
	|| (table_path_out !=  nullptr && table_path_out->has_operation())
	|| (table_pcalc !=  nullptr && table_pcalc->has_operation())
	|| (table_resv_in !=  nullptr && table_resv_in->has_operation())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_operation());
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tunnel-convergence-summary";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_converged_count.is_set || is_set(tunnel_converged_count.operation)) leaf_name_data.push_back(tunnel_converged_count.get_name_leafdata());
    if (tunnel_frr_active_count.is_set || is_set(tunnel_frr_active_count.operation)) leaf_name_data.push_back(tunnel_frr_active_count.get_name_leafdata());
    if (tunnel_frr_total_count.is_set || is_set(tunnel_frr_total_count.operation)) leaf_name_data.push_back(tunnel_frr_total_count.get_name_leafdata());
    if (tunnel_total_convergence_complete_time.is_set || is_set(tunnel_total_convergence_complete_time.operation)) leaf_name_data.push_back(tunnel_total_convergence_complete_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "table-frr-trigger")
    {
        if(table_frr_trigger != nullptr)
        {
            children["table-frr-trigger"] = table_frr_trigger;
        }
        else
        {
            table_frr_trigger = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger>();
            table_frr_trigger->parent = this;
            children["table-frr-trigger"] = table_frr_trigger;
        }
        return children.at("table-frr-trigger");
    }

    if(child_yang_name == "table-label-rewrite")
    {
        if(table_label_rewrite != nullptr)
        {
            children["table-label-rewrite"] = table_label_rewrite;
        }
        else
        {
            table_label_rewrite = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite>();
            table_label_rewrite->parent = this;
            children["table-label-rewrite"] = table_label_rewrite;
        }
        return children.at("table-label-rewrite");
    }

    if(child_yang_name == "table-path-out")
    {
        if(table_path_out != nullptr)
        {
            children["table-path-out"] = table_path_out;
        }
        else
        {
            table_path_out = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut>();
            table_path_out->parent = this;
            children["table-path-out"] = table_path_out;
        }
        return children.at("table-path-out");
    }

    if(child_yang_name == "table-pcalc")
    {
        if(table_pcalc != nullptr)
        {
            children["table-pcalc"] = table_pcalc;
        }
        else
        {
            table_pcalc = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc>();
            table_pcalc->parent = this;
            children["table-pcalc"] = table_pcalc;
        }
        return children.at("table-pcalc");
    }

    if(child_yang_name == "table-resv-in")
    {
        if(table_resv_in != nullptr)
        {
            children["table-resv-in"] = table_resv_in;
        }
        else
        {
            table_resv_in = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn>();
            table_resv_in->parent = this;
            children["table-resv-in"] = table_resv_in;
        }
        return children.at("table-resv-in");
    }

    if(child_yang_name == "table-tunnel-rewrite")
    {
        if(table_tunnel_rewrite != nullptr)
        {
            children["table-tunnel-rewrite"] = table_tunnel_rewrite;
        }
        else
        {
            table_tunnel_rewrite = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite>();
            table_tunnel_rewrite->parent = this;
            children["table-tunnel-rewrite"] = table_tunnel_rewrite;
        }
        return children.at("table-tunnel-rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_children()
{
    if(children.find("table-frr-trigger") == children.end())
    {
        if(table_frr_trigger != nullptr)
        {
            children["table-frr-trigger"] = table_frr_trigger;
        }
    }

    if(children.find("table-label-rewrite") == children.end())
    {
        if(table_label_rewrite != nullptr)
        {
            children["table-label-rewrite"] = table_label_rewrite;
        }
    }

    if(children.find("table-path-out") == children.end())
    {
        if(table_path_out != nullptr)
        {
            children["table-path-out"] = table_path_out;
        }
    }

    if(children.find("table-pcalc") == children.end())
    {
        if(table_pcalc != nullptr)
        {
            children["table-pcalc"] = table_pcalc;
        }
    }

    if(children.find("table-resv-in") == children.end())
    {
        if(table_resv_in != nullptr)
        {
            children["table-resv-in"] = table_resv_in;
        }
    }

    if(children.find("table-tunnel-rewrite") == children.end())
    {
        if(table_tunnel_rewrite != nullptr)
        {
            children["table-tunnel-rewrite"] = table_tunnel_rewrite;
        }
    }

    return children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count = value;
    }
    if(value_path == "tunnel-frr-active-count")
    {
        tunnel_frr_active_count = value;
    }
    if(value_path == "tunnel-frr-total-count")
    {
        tunnel_frr_total_count = value;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time = value;
    }
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::TablePathOut()
{
    yang_name = "table-path-out"; yang_parent_name = "last-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::~TablePathOut()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-path-out";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::TableResvIn()
{
    yang_name = "table-resv-in"; yang_parent_name = "last-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::~TableResvIn()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-resv-in";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::TableLabelRewrite()
{
    yang_name = "table-label-rewrite"; yang_parent_name = "last-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::~TableLabelRewrite()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-label-rewrite";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::TablePcalc()
{
    yang_name = "table-pcalc"; yang_parent_name = "last-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::~TablePcalc()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-pcalc";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::TableTunnelRewrite()
{
    yang_name = "table-tunnel-rewrite"; yang_parent_name = "last-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::~TableTunnelRewrite()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::TableFrrTrigger()
{
    yang_name = "table-frr-trigger"; yang_parent_name = "last-tunnel-convergence-summary";
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::~TableFrrTrigger()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_data() const
{
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-frr-trigger";

    return path_buffer.str();

}

EntityPath MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_children()
{
    return children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::set_value(const std::string & value_path, std::string value)
{
}


}
}

